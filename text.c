void randomize_text(int* t) {
    for (int i = 0; i < text_length; i++) t[i] = rand()%B;
}
void copy_text(int* s, int* d) {
    for (int i = 0; i < text_length; i++) d[i] = s[i];
}