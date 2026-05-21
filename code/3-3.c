#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_str(const void *a, const void *b) {
    const char *s1 = *(const char * const *)a;
    const char *s2 = *(const char * const *)b;

    return strcmp(s1, s2);
}

int main(void) {
    const char *words[] = {"banana", "apple", "ant", "orange"};
    int size = 4;

    qsort(words, size, sizeof(const char *), cmp_str);

    for (int i = 0; i < size; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
