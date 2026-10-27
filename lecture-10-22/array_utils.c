#include <stdio.h>

/**
 * procura um determinado valor no arrays recebido por parâmetro
 * Caso op valor seja encontrado, retorna a posiçã on ele está
 * Caso contrário, retorna -1
 * 
 * Parâmetros:
 * 	"values" : array a pesquisar
 *  "to_find": valor a pesquisar no array
 *  "size": total de elementos do array
 */
int array_find(int values[], int to_find, int size) {
    int i = 0;
    while (i < size && values[i] != to_find) {
        ++i;
    }
    if (i == size) {
        return -1;
    }
    return i;

}

int main() {
    int values[] = { 1, 3, 5, 7, 9, 11 };
    int index = array_find(values, 7, 6);
    printf("posição de 7 em values é: %d\n", index);

    index = array_find(values, 4, 6);
    printf("posição de 4 em values é: %d\n", index);

    return 0;
}
