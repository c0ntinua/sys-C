int main() {
    srand(time(NULL));
    key K;int depth = 5;
    cut_key(K);
    int p[text_length] = {0};
    int c[text_length] = {0};
    int d[text_length] = {0};
    randomize_text(p);
    print_text(p);
    //print_text(plain);
    //print_text(plain);
    //try(plain);
    encrypt(p, c, K, depth);
    print_text(c);
    decrypt(c, d, K, depth);
    print_text(d);
    //decode(c, d, K);
    //print_text(d);
    //print_text(cipher);
    //decode(cipher,decoded, K);
    //print_text(decoded);
    //print_rect(S[1]);
    
}