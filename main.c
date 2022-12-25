int main() {
    srand(time(NULL));
    key K;int depth = 10;
    cut_key(K);
    print_key(K);
    int p[text_length] = {0};
    int c[text_length] = {0};
    int d[text_length] = {0};
    randomize_text(p);
    print_text(p);
    encrypted_from_plain(c, p, K, depth);
    print_text(c);
    plain_from_encrypted(d, c, K, depth);
    //print_text(d); 
    if (text_eq(p,d)) printf("SUCCESSFUL DECRYPTION (DEPTH = %i) \n",depth);
    else printf("DECRYPTION FAILED (DEPTH = %i) \n",depth);
}