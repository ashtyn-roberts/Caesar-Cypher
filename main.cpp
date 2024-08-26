#include <iostream>
#include <string>
#include "cypher_key.h"

std::string encrypt(const std::string& plaintext) {
    std::string ciphertext = "";
    for (char c : plaintext) {
        if (c >= 'a' && c <= 'z') {
            ciphertext += cypher_key_encrypt[c - 'a'];
        } else if (c >= 'A' && c <= 'Z') {
            ciphertext += cypher_key_encrypt[c - 'A'];
        } else {
            ciphertext += c; // Non-alphabetic characters are unchanged
        }
    }
    return ciphertext;
}

std::string decrypt(const std::string& ciphertext) {
    std::string plaintext = "";
    for (char c : ciphertext) {
        if (c >= 'A' && c <= 'Z') {
            plaintext += cypher_key_decrypt[c - 'A'];
        } else if (c >= 'a' && c <= 'z') {
            plaintext += cypher_key_decrypt[c - 'a'];
        } else {
            plaintext += c; // Non-alphabetic characters are unchanged
        }
    }
    return plaintext;
}

int main() {
    int choice;
    std::string input;
    
    std::cout << "Choose an option:\n";
    std::cout << "1. Encrypt\n";
    std::cout << "2. Decrypt\n";
    std::cout << "3. Quit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    std::cin.ignore(); // Ignore the newline character left in the buffer

    if (choice == 1) {
        std::cout << "Enter plaintext: ";
        std::getline(std::cin, input);
        std::string ciphertext = encrypt(input);
        std::cout << "Ciphertext: " << ciphertext << std::endl;
    } else if (choice == 2) {
        std::cout << "Enter ciphertext: ";
        std::getline(std::cin, input);
        std::string plaintext = decrypt(input);
        std::cout << "Plaintext: " << plaintext << std::endl;
    } else if (choice == 3) {
        std::cout << "Quitting..." << std::endl;
    } else {
        std::cout << "Invalid choice." << std::endl;
    }

    return 0;
}