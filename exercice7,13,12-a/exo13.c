#include <stdio.h>
#include <math.h> // Pour sqrt et pow

// Definition de la structure point
typedef struct {
    float x;
    float y;
} Point;

int main() {
    Point p1, p2;
    float distance;

    // Lecture du premier point
    printf("Entrez les coordonnees du Point 1 (x y) : ");
    scanf("%f %f", &p1.x, &p1.y);

    // Lecture du second point
    printf("Entrez les coordonnees du Point 2 (x y) : ");
    scanf("%f %f", &p2.x, &p2.y);

    // Calcul de la distance euclidienne
    distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    printf("\nLa distance entre les deux points est : %.2f\n", distance);

    return 0;
}
