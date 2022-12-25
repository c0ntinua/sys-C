const int R = 16;
const int C = 16;
const int B = 8; //or 2**3 == 2**S
const int S = 3; //symbols consumed or lg(B)
const int text_length = 51; //length of plaintext/ciphertext
const int search_max = 512;


int rows = 10;
int cols = 10;
int n = 10;
//typedef int text[text_length];
typedef int list[R*C];
typedef int rect[R][C];
typedef int key[R][C];
typedef int set[R*C];
typedef rect sys[2];
typedef int perm[B];
typedef int fn[B];