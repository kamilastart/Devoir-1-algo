#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];

    printf("Entrez la premiere chaine de caracteres : ");
    scanf("%s", s1);
    printf("Entrez la deuxieme chaine de caracteres : ");
    scanf("%s", s2);

    printf("\nChaines dans l'ordre alphabetique :\n");

    
    if (strcmp(s1, s2) <= 0) {
        printf("%s\n%s\n", s1, s2);
    } else {
        printf("%s\n%s\n", s2, s1);
    }

    return 0;
}
