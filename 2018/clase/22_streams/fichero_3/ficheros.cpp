#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LARGO_PALABRA 50

int main(int argc, char **argv) {
    int n;
    char **palabras;
    int *cuenta_palabras;
    FILE *f;
    char palabra_actual[MAX_LARGO_PALABRA];
    int i;

    if (argc < 3) {
        fprintf(stderr, "Modo de uso de %s: Archivo Palabra1 Palabra2, etc\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    n = argc - 2;
    palabras = argv + 2;

    cuenta_palabras = (int*)malloc(argc * sizeof(int));
    if (cuenta_palabras == NULL) {
        fprintf(stderr, "Se necesita más memoria para ejecutar el programa\n");
        exit(EXIT_FAILURE);
    }

    f = fopen(argv[1], "r");
    if (f == NULL) {
        fprintf(stderr, "No se pudo abrir el archivo %s. Intentalo de nuevo\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < n; ++i) {
        cuenta_palabras[i] = 0;
    }

    while (!feof(f)) {
        fscanf(f, "%s", palabra_actual);
        for (i = 0; i < n; ++i) {
            if (strcmp(palabra_actual, palabras[i]) == 0) {
                cuenta_palabras[i]++;
            }
        }
    }

    for (i = 0; i < n; ++i) {
        printf("%6d\t %s\n", cuenta_palabras[i], palabras[i]);
    }

    fclose(f);
    free(cuenta_palabras);
    exit(EXIT_SUCCESS);
}
