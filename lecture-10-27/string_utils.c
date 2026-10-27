#include <stdio.h>

int str_length(char str[]) {
    int i= 0;
    while(str[i] != 0) {
        ++i;
    }
    return i;
}

void str_copy(char dest[], char src[]) {
    int i= 0;
    
    while(src[i] != 0) {
        dest[i] = src[i];
        ++i;
    }
    dest[i] = 0;
}




int main() {
    char linha[] = "bom dia";

    int sz = str_length(linha);
    printf("tamanho da string %s é: %d\n", linha, sz);

    char result[100] = "111111111111111111111111111111111111";
    str_copy(result, linha);

    printf("conteúdo de result é: '%s'\n", result);
 
    return 0;
}
