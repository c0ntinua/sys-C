const int R = 16;
const int C = 16;
const int B = 8; //or 2**3 == 2**S
const int S = 3; //symbols consumed or lg(B)
const int search_max = 512;


int rows = 10;
int cols = 10;
int n = 10;
typedef char list[R*C];
typedef char rect[R][C];
typedef char set[R*C];
typedef rect sys[2];
typedef char perm[B];