//Să se scrie un subprogram pentru crearea unui fișier text care să conțină elemente reale (în fișier sunt memorate elementele unui vector – un element pe fiecare linie). Se va oferi și un exemplu de utilizare.

#include <stdio.h>
void create_file(char name[]){
    FILE * output;
    output = fopen(name, "w");
    if (!output) printf("Error");
    else
    {
        float r;
        printf("Introduceti un numar real ");
        scanf("%f", &r);
        while (!feof(stdin)){
            fprintf(output, "%.2f\n", r);
            printf("Introduceti un numar real ");
            scanf("%f", &r);
        }
        fclose(output);
    }
}
int main() {
    char name[20];
    printf("Introduceti nr fisierului de la tastatura ");
    scanf("%s", name);
    create_file(name);
    return 0;
}
