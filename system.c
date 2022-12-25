void init_sys(sys S) {
    for (int r = 0; r < R ; r++) for (int c =0 ; c < C; c++) 
        S[1][r][c] = S[0][r][c] = rand()%2;
}
void shift_row(sys S, char row, char shift) {
    assert(row < R);
    char temp[C] = {0};
    for (int c = 0; c < C; c++) temp[c] = S[1][row][(c + shift)%C];
    for (int c = 0; c < C; c++) S[1][row][c] = temp[c]; 
}
void shift_col(sys S, char col, char shift) {
    assert(col < C);
    char temp[R] = {0};
    for (int r = 0; r < R; r++) temp[r] = S[1][(r + shift)%R][col];
    for (int r = 0; r < R; r++) S[1][r][col] = temp[r]; 
}
void rotate_rows_with_perms(sys S, const perm f, const perm g) {
    for (int r = 0; r < R ; r ++) {
        if (r < R/2) shift_row(S, r, f[r]);
        else shift_row(S, r, g[r%8]);
    }
}
void rotate_cols_with_perms(sys S, const perm f, const perm g) {
    for (int c = 0; c < C ; c ++) {
        if (c < C/2) shift_col(S, c, f[c]);
        else shift_col(S, c, g[c%8]);
    }
}


