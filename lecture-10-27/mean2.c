#include <stdio.h>

#define NUMS_SIZE 100

int main() {
    int nums[NUMS_SIZE] = {0};
    int nvalues = 0;
    int curr = 1; // ultimo valor lido
    int sum = 0;

    printf("Sequência de valores: ");
    while(nvalues < NUMS_SIZE && curr != 0) {
        scanf("%d", &curr);
        if ( curr != 0) {
            nums[nvalues] = curr;
            nvalues++;
            sum += curr;
        }
    }
    double mean = (double) sum / nvalues;
    printf("média = %lf\n", mean);

    for(int i = 0; i < nvalues; ++i) {
        if (nums[i] >= mean) {
            printf("%d\n", nums[i]);
        }
    }
    return 0;
}