#include <stdio.h>
#include <string.h>

unsigned flip_bits(unsigned x)
{
    unsigned ret = 0;
    while (x) {
        ret <<= 1;
        ret |= x & 1;
        x >>= 1;
    }
    return ret;
}

void print_bin(unsigned int x)
{
    x = flip_bits(x);
    while (x) {
        printf("%d", x & 1);
        x >>= 1;
    }
}

int main()
{
    printf("Decimal or Binary!\n");
    char q[10];
    scanf("%s", q);
    if (srtcmpr(q, "Decimal") == 0) {
        float f;
        scanf("%f", &f);
        int negative = 0;

        if (f < 0) {
            negative = 1;
            f *= -1;
        }

        unsigned int i_part = (unsigned) f;
        unsigned int f_part = (f - i_part) * 32;	/* 5 binary digits precision */

        if (negative) printf("-");
        print_bin(i_part);
        printf(".");
        print_bin(f_part);
        printf("\n");
    } else if (srtcmpr(q, "Binary") == 0) {
        char input[50];
        scanf("%s", input);
        int length = strlen(input);

        float result = 0;
        float weight = 2;
        int point = 0;
        int i;
        for (i = 0; i < length; ++i) {
            if (input[i] == '.') {
            point = 1;
            continue;
            }

            if (!point) {
                result = result * 2 + (input[i] == '1');
            } else {
                result = result + (input[i] == '1')/weight;
                weight *= 2;
            }
        }

        printf("%s -> %f\n", input, result);
    }
}
