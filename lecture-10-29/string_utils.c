#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

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


int str_count_words(const char str[]) {
     char prev = ' ';
     int i=0;
     int count = 0;
     
     while(str[i] != 0) {
		 if (prev == ' ' && str[i] != ' ') {
			 ++count;
		 }
		 prev = str[i];
		 ++i;
	 }
	 return count;
}



int str_count_words2(char str[]) {
    int i = 0;
    int count = 0;
    
	while (str[i] == ' ') {
		++i;
	}
	while(str[i] != 0) {
		while(str[i] != ' ' && str[i] != 0) {
			++i;
		}
		count++;
		while (str[i] == ' ') {
			++i;
		} 
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
    
 
    printf("A string %s contem %d palavras\n", msg, str_count_words2(msg));
    
  
    return 0;
}
