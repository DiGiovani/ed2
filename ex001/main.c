#include <stdio.h>
#include <time.h>

int algorithm(int n) {
    int i=0, j=0, sum=0;

    for (int i=0; i<n;i++) {
        for (j=0; j<n; j++) {
            sum++;
        }
    }

    return sum;
}

int main () {
    clock_t start, end;
    double cpu_time_used;
    int result;

    start = clock();
    result = algorithm(10);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("-------------------Resultados-------------------\n");
    printf("Soma -> %d\n", result);
    printf("Duração do algoritmo: %lfs\n", cpu_time_used);

    return 0;
}