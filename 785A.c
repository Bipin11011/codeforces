#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar(); 

    int faces = 0;
    for (int i = 0; i < n; i++) {
        char polyhedron[20];
        fgets(polyhedron, sizeof(polyhedron), stdin);
        polyhedron[strcspn(polyhedron, "\n")] = 0;

        if (strcmp(polyhedron, "Tetrahedron") == 0) {
            faces += 4;
        } else if (strcmp(polyhedron, "Cube") == 0) {
            faces += 6;
        } else if (strcmp(polyhedron, "Octahedron") == 0) {
            faces += 8;
        } else if (strcmp(polyhedron, "Dodecahedron") == 0) {
            faces += 12;
        } else if (strcmp(polyhedron, "Icosahedron") == 0) {
            faces += 20;
        }
    }

    printf("%d\n", faces);

    return 0;
}