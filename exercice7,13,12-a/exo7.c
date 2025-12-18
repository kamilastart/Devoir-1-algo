#include <stdio.h>

int main() {
    int nombreMagique = 42; // Le nombre à deviner
    int essai;

    printf("=== Bienvenue au jeu du Nombre Magique ===\n");

    do {
        printf("Entrez votre proposition : ");
        scanf("%d", &essai);

        if (essai < nombreMagique) {
            printf("Le nombre magique est plus grand (en dessus).\n");
        } else if (essai > nombreMagique) {
            printf("Le nombre magique est plus petit (en dessous).\n");
        } else {
            printf("Bravo ! Vous avez trouve le nombre magique !\n");
        }
    } while (essai != nombreMagique);

    return 0;
}
