#include <stdio.h>
#include <string.h>

unsigned int binary_to_uint(const char *b) {
    int len = strlen(b);
    unsigned int result = 0;

    for (int i = 0; i < len; i++) {
        if (b[i] == '1') {
            result |= 1 << (len - i - 1);
        }
    }

    return result;
}

int main() {
    printf("Hello world\n\n");

    char *bi = "1011011";
    unsigned int x = binary_to_uint(bi);
    printf("%i", x);

    return 0;
}
