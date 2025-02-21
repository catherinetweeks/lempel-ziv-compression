#include <stdio.h>

void lzdecode1(char* dictionary, char* data, int dataLength) {
    for (int i = 0; i < dataLength; i++) {
        printf("%c", dictionary[data[i]]);
    }
}
