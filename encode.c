

void encode(int* x, int* y, const key K) {
    key S;fn f,g,h;
    copy_key(K,S);
    for (int i = 0; i < text_length; i++) {
        fns_from_key(f,g,S);
        composition(h,f,g);
        y[i] = h[x[i]];
        shift_fn(f,x[i]);
        shift_fn(g,x[i]);
        rotate_rows(S,f,g);
        rotate_cols(S,g,f); 
    }
}
void decode(int* x, int* y, const key K) {
    key S;fn f,g,h,q;
    copy_key(K,S);
    for (int i = 0; i < text_length; i++) {
        fns_from_key(f, g, S);
        composition(h, f, g);
        inverse(q, h);
        y[i] = q[x[i]];
        shift_fn(f,y[i]);
        shift_fn(g,y[i]);
        rotate_rows(S,f,g);
        rotate_cols(S,g,f);
    }
}