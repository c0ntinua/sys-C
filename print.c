void print_symbol(char s) {s == 0 ? printf("O ") : printf("| ");}
void print_row(const char r[C]) {for (int c =0 ; c < C; c++) print_symbol(r[c]); printf("\n");}
void print_rect(rect M) {for (int r = 0; r <  R ; r++) print_row(M[r]); printf("\n");}
void print_state(sys S) { print_rect(S[1]); }
void print_key(sys S) { print_rect(S[0]); }
void print_list(char L[R*C]) {for (int i = 0 ; i < R*C; i++) print_symbol(L[i]); printf("\n");}

void print_perm(perm f) {for (int i = 0 ; i < B; i++) printf("%d ",f[i]); printf("\n");}

void print_flat(char M[R][C], bool rows) {
    char flat[R*C] = {0};
    for (int r = 0; r < R ; r++) for (int c =0 ; c < C; c++) rows ? (flat[r*C + c] = M[r][c] ): (flat[c*R + r] = M[r][c]);
    print_list(flat);
}
void print_flat_state(sys S, bool row) { print_flat(S[1], row);}
void print_flat_key(sys S, bool row) { print_flat(S[1], row);}
void print_list_stacked(list L) {
    int stacks = (R*C)/3;
    for (int s = 0; s < stacks; s++) {
        for (int i = 0; i < 3; i++) {
            print_symbol(L[3*s+i]);
        }
        printf("\n");
    }
}
void print_list_octals(const list L) {
    for (int i = 0 ; i < search_max; i++) printf("%d ",octal_from_list(L,i));printf("\n");
}