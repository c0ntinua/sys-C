// void init_sys(sys S) {
//     for (int r = 0; r < R ; r++) for (int c =0 ; c < C; c++) 
//         S[1][r][c] = S[0][r][c] = rand()%2;
// }
// void shift_row(sys S, int row, int shift) {
//     assert(row < R);int temp[C] = {0};
//     for (int c = 0; c < C; c++) temp[c] = S[1][row][(c + shift)%C];
//     for (int c = 0; c < C; c++) S[1][row][c] = temp[c]; 
// }
// void shift_col(sys S, int col, int shift) {
//     assert(col < C);int temp[R] = {0};
//     for (int r = 0; r < R; r++) temp[r] = S[1][(r + shift)%R][col];
//     for (int r = 0; r < R; r++) S[1][r][col] = temp[r]; 
// }
// void rotate_rows_with_perms(sys S, const perm f, const perm g) {
//     for (int r = 0; r < R ; r++) shift_row(S, r, r%2 == 0 ? f[(r/2)%B] : g[(r/2)%B] );
// }
// void rotate_cols_with_perms(sys S, const perm f, const perm g) {
//     for (int c = 0; c < C ; c++) shift_col(S, c, c%2 == 0 ? f[(c/2)%B] : g[(c/2)%B] );
// }

// void rotate_S_with_f_and_g(sys S, const perm f, const perm g) {
//     rotate_rows_with_perms(S, f, g);
//     rotate_cols_with_perms(S, g, f);
// }
// void reset_state(sys S) {
//      for (int r = 0; r < R ; r++) for (int c =0 ; c < C; c++) S[1][r][c] = S[0][r][c];
// }
