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
    // while(src[i] != 0) {
    //     dest[i] = src[i];
    //     ++i;
    // }
    // do {
    //     dest[i] = src[i]; 
    //     ++i;
    // }
    // while (src[i-1] != 0);

    while ((dest[i] = src[i]) != 0) {
        ++i;
    }
   
}


int str_count_words(char str[]) {
     char prev = ' ';
     int i=0;
     int count = 0;
     
     while(str[i] != 0) {
		 if (prev == ' ' && str[i] != ' ') {
			 count++;
		 }
		 prev = str[i];
		 i++;
	 }
	 return count;
}

int main() {
    char linha[] = "bom dia";

    int sz = str_length(linha);
    printf("tamanho da string %s é: %d\n", linha, sz);

    char result[100] = "111111111111111111111111111111111111";
    str_copy(result, linha);

    printf("conteúdo de result é: '%s'\n", result);
      
    char msg[] = "ola, bom    dia   ";
    
    printf("A string %s contem %d palavras\n", msg, str_count_words(msg));
    return 0;
}
