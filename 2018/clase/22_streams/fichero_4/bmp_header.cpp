#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>

typedef struct {
  char signature[2];
  int size;
  char reserved1[2];
  char reserved2[2];
  int data_offset;
} BMPHeader;

void show(BMPHeader header) {

  printf("Signature:       %c%c\n", header.signature[0], header.signature[1]);
  printf("Tamaño:          %i\n", header.size);
  printf("Datos de imagen: %i (%Xh)\n", header.data_offset, header.data_offset);
}


int main() {

  const char *filename = "ejemplo.bmp";

  BMPHeader header;

  FILE *pbmp = NULL;
  if(!(pbmp = fopen(filename, "r"))){
      fprintf( stderr, "No se ha encontrado el fichero");
      return EXIT_FAILURE;
    }

  fread(&header, sizeof(BMPHeader), 1, pbmp);

  fclose(pbmp);

  show(header);

  return EXIT_SUCCESS;

}
