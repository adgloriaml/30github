void behind(int *ptr, int size) {
    int i, max;
    max = ptr[0];
    for (i=0; i<size; i++) {
        if (ptr[i]>max) {
            max = ptr[i];
        }
    }
    for (i=0; i<size; i++) {
        ptr[i] = max-ptr[i];
    }
}
