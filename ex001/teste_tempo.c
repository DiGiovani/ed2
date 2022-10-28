#include <time.h>
     
void algorithm(int n) {
    // Faça algo com n aqui!
}

int main() {
    clock_t start, end;
    double cpu_time_used;
     
    start = clock();

    algorithm(10); // Digita aqui o seu n

    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Duração do algoritmo: %lfs\n", cpu_time_used);
}