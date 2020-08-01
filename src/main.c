#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int bin2dec(long long number) {
    int decimal = 0, remainder, i = 0;
    while(number != 0) {
        remainder = number % 10;
        number /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }
    return decimal;
}

long long dec2bin(int number) {
    long long binary = 0;
    int remainder, i = 1, step = 1;
    while(number != 0) {
        remainder = number % 2;
        number /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}

int main(int argc, char *argv[]) {
    int ret;

    if(argc < 3 || argc > 3) {
        printf("usage: %s [dec|bin] number\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if((strcoll(argv[1], "dec")) == 0) {
        int number = atoi(argv[2]);
        printf("%d -> %lld\n", number, dec2bin(number));
    } else if((strcoll(argv[1], "bin")) == 0) {
        long long number = strtol(argv[2], NULL, 10);
        printf("%lld -> %d\n", number, bin2dec(number));
    } else {
        printf("usage: %s [dec|bin]\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    
    return 0;
}
