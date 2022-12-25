void encrypt(int* x, int* y, const key K, int depth) {
    int z[2][text_length] ={0};
    copy_text(x,z[0]);
    for (int i = 0; i < depth; i++) {
        encode(z[i%2],z[(i+1)%2],K);
        print_text(z[(i+1)%2]);
    }
    copy_text(z[depth%2],y);
}
void decrypt(int* x, int* y, const key K, int depth) {
    int z[2][text_length] ={0};
    copy_text(x,z[0]);
    for (int i = 0; i < depth; i++) {
        decode(z[i%2],z[(i+1)%2],K);
        print_text(z[(i+1)%2]);
    }
    copy_text(z[depth%2],y);
}