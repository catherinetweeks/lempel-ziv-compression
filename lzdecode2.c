#include <stdio.h>
#include <stdlib.h>

int main() {
// setting dictionary size that holds number of characters
// N is number of letters
    int N;
    scanf("%d", &N);
    
// fill dictionary with values
    char* dictionary = malloc(N * sizeof(char));
    for (int i = 0; i < N; i++) {
        int ascii_code;
        scanf("%d", &ascii_code);
        dictionary[i] = (char)ascii_code;
    }
    
// length of word
    int M;
    scanf("%d", &M);
    
// read and print
    for (int i = 0; i < M; i++) {
        int index;
        scanf("%d", &index);
        printf("%c", dictionary[index]);
    }
    
    free(dictionary);
    return 0;
}