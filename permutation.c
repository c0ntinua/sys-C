
void shift_perm(perm f, int c) {
    perm t ={0};
    for (int i = 0; i < B; i++) t[i] = f[(i+c)%B];
    for (int i = 0; i < B; i++) f[i] = t[i];
}
void composition(perm h, const perm f, const perm g) {
    for (int i = 0; i < B; i++) h[i] = f[g[i]];
}

char octal_from_list(const list L, int p) {
    return 4*L[(3*p)%(R*C)] + 2*L[(3*p+1)%(R*C)] + L[(3*p+2)%(R*C)];
}

char value_from_list(const list L, int p) {
    char sum = 0; int scale = 1;
    for (int s = 0; s < S; s++) {
        sum += scale * L[(S * p + S - s - 1)%(R*C)];
        scale *= 2;
    }
    return sum;
}

void perm_from_list(perm f, const list L) {
    int p = 0;char x = 0;set have = {};
    for (int arg = 0 ; arg < B ; arg++) {
        x = value_from_list(L,p++);
        for (;have[x] && p < search_max;) x = value_from_list(L,p++);
        have[x] = true;f[arg] = x;
    }
}

void perms_from_rect(perm f, perm g, rect M) {
    list L = {0};
    list_from_rows(L,M);
    perm_from_list(f,L);
    reverse_list(L);
    perm_from_list(g,L);
}
void load_f_and_g_from_S(perm f, perm g, sys S) {
    perms_from_rect(f,g,S[1]);
}
void load_h_from_f_and_g(perm h, const perm f, const perm g) {
    composition(h,f,g);
}
void inverse(perm f_inv, perm f) {
    for (int i = 0 ; i <  B; i++) f_inv[f[i]] = i;
}


    
    
