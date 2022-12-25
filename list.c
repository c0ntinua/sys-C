void list_from_rect(list L, rect M, bool rows) {
    for (int r = 0; r < R ; r++) for (int c =0 ; c < C; c++) rows ? (L[r*C + c] = M[r][c] ): (L[c*R + r] = M[r][c]);
}
void list_from_rows(list L, rect M) { list_from_rect(L,M,true);}
void list_from_cols(list L, rect M) { list_from_rect(L,M,false);}

void reverse_list(list L) {
    list temp = {0};
    for (int i = 0; i < R*C; i++) temp[i] = L[R*C - i - 1 ];
    for (int i = 0; i < R*C; i++) L[i] = temp[i];
}