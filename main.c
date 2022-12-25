int main() {
    srand(time(NULL));
    sys S;perm f; perm g; perm h; list L;
    init_sys(S);
    print_state(S);
    perms_from_rect(f,g ,S[1]);
    print_perm(f);
    print_perm(g);
    rotate_rows_with_perms(S,f,g);
    print_state(S);
    rotate_cols_with_perms(S,f,g);
    print_state(S);
    // list_from_rows(L, S[0]);
    // print_list(L);
    // reverse_list(L);
    // print_list(L);
    // perms_from_rect(f,g ,S[1]);
    print_perm(f);
    print_perm(g);
    composition(f,g,h);
    print_perm(h);
    
    //perm_from_list(f,L,false);
    //print_perm(f);
    //shift_row(S, 15, 1);
    // shift_col(S, 15, 1);
    // print_state(S);
    // print_flat(S[0], false);

}