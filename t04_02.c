// 12S24022 - Ingrate Joy Sihombing
// 12S24014 - Arion Dippos Pandapotan Manurung

#include <stdio.h>
#include <string.h>

int main() {
    char str[21];
    scanf("%20[^\n]", str); 

    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        printf("%03d", str[i]);  // Cetak nilai ASCII dalam format tiga digit
    }
    printf("\n");

    return 0;
}