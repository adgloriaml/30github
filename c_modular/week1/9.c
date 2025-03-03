#include <stdio.h>

unsigned int simple_hash(const char *str) {
    unsigned int hash = 0;
    while (*str) {
        hash += *str;  
        str++;  
    }

    return hash % 1000;
}

int main() {
    const char *str = "hello";
    
    unsigned int hash = simple_hash(str);
    printf("Hash string \"%s\" = %u\n", str, hash);

    return 0;
}
