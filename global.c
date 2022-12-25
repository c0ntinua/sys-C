const int R = 64;
const int C = 64;
const int B = 16; //or 2**3 == 2**S
const int S = 4; //symbols consumed or lg(B)
const int text_length = 51; //length of plaintext/ciphertext
const int search_max = 512;
const bool demo = false;

typedef int list[R*C];
typedef int key[R][C];
typedef int set[R*C];
typedef int fn[B];