#include <stdio.h>


long fatorial(int n) {
	long f = 1;
	for (int i = 2; i <= n; ++i) {
		f *= i;
	}
	return f;
}


long fatorial_rec(int n) {
    if (n == 0) return 1;
    return n* fatorial_rec(n-1);
}


int main() {
    int val;

    printf("val? ");
    scanf("%d", &val);
 
    printf("%d! (iterativo) = %ld\n", val, fatorial(val));
    printf("%d! (recursivo) = %ld\n", val, fatorial_rec(val));
    return 0;
}
