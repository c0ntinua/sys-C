int main() {
    srand(time(NULL));
    key K;
    cut_key(K);
    int p[text_length];
    int c[text_length];
    int d[text_length];
    randomize_text(p);
    print_text(p);
    //print_text(plain);
    //print_text(plain);
    //try(plain);
    encode(p, c, K);
    print_text(c);
    decode(c, d, K);
    print_text(d);
    //print_text(cipher);
    //decode(cipher,decoded, K);
    //print_text(decoded);
    //print_rect(S[1]);
    
}