

void encode(int* x, int* y, const key K) {
    key S;perm f,g,h,q;
    copy_key(K,S);
    for (int i = 0; i < text_length; i++) {
        perms_from_rect(f,g,S);
        composition(h,f,g);
       // print_perm(f);
       // print_perm(g);
       // print_perm(h);
        //inverse(q, h);
        //print_perm(h);
        //print_perm(q);
        y[i] = h[x[i]];
        //printf("symbol %d : found %d mapped to %d \n", i, x[i], y[i]);
        shift_perm(f,x[i]);
        shift_perm(g,x[i]);
        rotate_rows(S,f,g);
        rotate_cols(S,g,f); 
    }
    print_rect(S);
}
void decode(int* x, int* y, const key K) {
    key S;perm f,g,h,q;
    copy_key(K,S);
    for (int i = 0; i < text_length; i++) {
        perms_from_rect(f,g,S);
        composition(h,f,g);
        //print_perm(h);
        inverse(q, h);
        //print_perm(q);
        //print_perm(h_inv);
        y[i] = q[x[i]];
        //printf("symbol %d : found %d mapped to %d\n",i, x[i],y[i]);
        shift_perm(f,y[i]);
        shift_perm(g,y[i]);
        rotate_rows(S,f,g);
        rotate_cols(S,g,f);
    }
    print_rect(S);
}