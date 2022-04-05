//Să se scrie un subprogram pentru preluarea vectorului în memorie. Se va scrie și programul apelator.

#include <stdio.h>

void preluare(char name[], float v[], int *n) {
    FILE *f;
    f = fopen(name, "r");
    if (!f) printf("Error");
    else {
        *n = 0;
        float r;
        fscanf(f, "%f", &r);
        while (!feof(f)) {
            v[*n] = r;
            (*n)++;
            fscanf(f, "%f", &r);

        }
        fclose(f);
    }

}

void create_file(char name[]) {
    FILE *output;
    output = fopen(name, "w");
    if (!output) printf("Error");
    else {
        float r;
        printf("Introduceti un numar real ");
        scanf("%f", &r);
        while (!feof(stdin)) {
            fprintf(output, "%.2f\n", r);
            printf("Introduceti un numar real ");
            scanf("%f", &r);
        }
        fclose(output);
    }
}

int main() {
    char name[20];
    float v[200];
    int n, i;
    printf("Introduceti nr fisierului de la tastatura ");
    scanf("%s", name);
    //create_file(name);
    preluare(name, v, &n);
    for (i = 0; i < n; i++) {

        printf("%5.2f ", v[i]);
    }
    return 0;
}

