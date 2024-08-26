// cypher_key.h
#ifndef CYPHER_KEY_H
#define CYPHER_KEY_H

// Plaintext alphabet to ciphertext alphabet:
const char cypher_key_encrypt[26] = {
    'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
    'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W'
};

// Ciphertext alphabet to plaintext alphabet:
const char cypher_key_decrypt[26] = {
    'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
    'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C'
};

#endif // CYPHER_KEY_H