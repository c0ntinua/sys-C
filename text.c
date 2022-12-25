void randomize_text(int* t) {
    for (int i = 0; i < text_length; i++) t[i] = rand()%B;
}