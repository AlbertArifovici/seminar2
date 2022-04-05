//Să se scrie programul care memorează într-un fişier text date despre studenţii unei facultăţi. Pe fiecare linie se memorează: numărul matricol, numele, prenumele, anul, grupa, cele 10 note obţinute la examene. Datele sunt separate prin câte un spaţiu.

#include <stdio.h>

int main() {
    int nr, an, gr, note[10], i;
    char name[20], nume[50];
    FILE *f;

    printf("Introduceti nr fisierului de la tastatura ");
    scanf("%s", name);
    f = fopen(name, "w");
    if (!f)
        printf("Error");
    else {
        printf("nr=");
        scanf("%i", &nr);
        while (!feof(stdin)) {
            printf("nume=");
            getchar();
            gets(nume);
            printf("an=");
            scanf("%i", &an);
            printf("gr=");
            scanf("%i", &gr);
            for (i = 0; i < 10; i++) {
                printf("note[%i]=", i);
                scanf("%i", &note[i]);

            }
            fprintf(f, "%4i %-30s %i %4i ", nr, nume, an, gr);
            for (i = 0; i < 10; i++) {
                fprintf(f, "%2i ", note[i]);

            }
            fprintf(f, "\n");
            printf("nr=");
            scanf("%i", &nr);
        }
        fclose(f);

    }
    return 0;
}

