#include <stdio.h>

int main() {
#ifdef __STDC_VERSION__
    printf("C standard version: %ld\n", __STDC_VERSION__);
#else
    printf("C89/90 (pre-C99)\n");
#endif
    return 0;
}