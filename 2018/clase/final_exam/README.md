# EXAMEN PROGRAMACIÓN
### Estructuras
 1. Se define una estructura en la cuál tengamos los datos del alumno (nombre, apellidos, etc)
 
``` 

#define N 0x100

struct Alumno {
  char nombre[N];
  char apellidos[N];	
};

 ```

De este modo definimos los datos dentro de una estructura, como lo que pedimos son nombres y apellidos el valor que deberemos declarar será un  **"char"** y el valor de **"N"** lo definimos añadiendo **#define**

##

 2. Después queremos añadir las asignaturas para poder guardar las notas de algunas de ellas
 
```  

typedef struct {
   double matematicas;
   double lengua;
   double historia;
} Nota;

struct Alumno {
   char nombre[N];
   char apellidos[N];
   Nota asignaturas;
};

```  
En la primera de las estructuras usamos **typedef** para poderle poner un sinónimo y ahorrarnos la declaración de toda la estructura como tal más adelante y solo poner **Nota** (en este caso).

En la segunda estructura, la misma que en el ejercicio anterior, le añadimos otro campo el cuál será **"asignaturas"**, que estará asociada con la estructura de **"Nota"**, en donde guardará las notas de cada una de las asignaturas.

##


 3. A continuación queremos pedirle al usuario que introduzca todos estos datos para que se guarden en las variables que hemos ido creando en cada una de nuestras estructuras

```  

struct Alumno rellenar() {
  struct Alumno nuevo;
   printf("Introduce el nombre del alumno: ");
   scanf(" %s", nuevo.nombre);
   printf("Introduce el apellido del alumno: ");
   scanf(" %s", nuevo.apellidos);

   printf("Introduce la nota de matemáticas: ");
   scanf(" %s", &nuevo.asignaturas.matematicas);
   printf("Introduce la nota de lengua: ");
   scanf(" %s", &nuevo.asignaturas.lengua);
   printf("Introduce la nota de historia: ");
   scanf(" %s", &nuevo.asignaturas.historia);

   return nuevo;
};

``` 
Para solucionarlo creamos una función en la estructura **Alumno** y declaramos **"struct Alumno nuevo"** para que de ese modo podamos crear nuevos alumnos con datos totalmente diferentes.

Después de eso pedimos los datos necesarios al usuario (nombre, apellidos, notas, etc) y las guardamos en su respectivas variables, que en este caso sería para los datos de la estructura alumno: **"nuevo.nombre"** y para los datos de la estructura Nota: **"&nuevo.asignaturas.matematicas"**

##

 4. Ahora queremos que el alumno pueda elegir entre dos opciones de test conociendo que hay dos tipos de funciones

```  

struct Alumno {
  char nombre[N];
  char apellidos[N];
  Nota asignaturas;
  void (*test)();
};

``` 
Para realizar esta opción nos dirigimos a la estructura alumno que ya hemos realizado previamente, y le declaramos una función tipo **"void"** en la cuál tenemos **"test"**, donde almacenaremos cual de las dos funciones va a lanzar el usuario.

##

 5.  Si queremos modificar los datos de un alumno una vez introducidos los nuevos datos por el usuario, deberemos realizar otra función que los modifique
 ```  

void modificar(struct Alumno *alumno) {
   *alumno = rellenar();
};

``` 
Creamos una función llamada **"modificar"** en la que tenemos un puntero llamado **alumno** que apuntará a otra función en la cuál pedirá de nuevo los datos del alumno (se dirige a la función que hemos realizado en el punto 3)

##

 6.  Creamos una función en la que volquemos el contenido del array en un fichero binario
 
  ```  

void dump(struct Alumno lista[N]) {
    FILE * fichero = fopen("backup.txt", "wb");
    fwrite(lista, sizeof(struct Alumno), N,fichero);
    fclose(fichero);
};

``` 
Abrimos el fichero, le damos un nombre, una extensión y seguidamente le damos los permisos que va a tener este documento. Recordemos que los permisos existentes que conocemos son:
| Tipo | Descripción |
|--|--|
| **r** | Sólo lectura y además el fichero debe existir |
| **w** | Sólo escritura, se crea un fichero o se sobreescribe si ya existe |
| **a** | Añade, se abre para la escritura, y el cursor se situa al final del fichero. Si el fichero no existe, se crea |
| **r+** | Lectura y escritura. El fichero debe existir |
| **w+** | Lectura y escritura. se crea un fichero o se sobreescribe si ya existe |
| **a+** | Añadir, lee y escribe. El cursor se situa al final del fichero, si el fichero no existe, se crea |
| **t** | Tipo texto. Si no se especifica "t" ni "b", se asume por defecto que es "t" |
| **b** | Tipo binario |

Y como no, hay que recordar que después de haber realizado las acciones que quisieramos en nuestro fichero debemos poner **"fclose(fichero)"** para que no entre nada más.

##

 7.  Queremos que una estructura junto a un función, nos devuelva el par de la nora mínima de matemáticas junto al índice del usuario que la ostenta.
 
   ```  

struc Par {
     double nota;
     int id;
};

struct Par minimo_mates(struc Alumno lista[N]){
     struct Par minimo = {1000. , -1};
     for (int i = 0; i < N; i++) {
       if (minimo.nota > lista[i].asignaturas.matematicas) {
           minimo.nota = lista[i].asignaturas.matematicas;
           minimo.id = i;
      }
      return minimo;
    }
};

``` 
Realizamos una estructura **"Par"** que contenga el id del alumno y la nota de la asignatura, y después creamos una función dentro de la estructura de Par llamada **"minimo_mates"**, en donde incluimos una condición en la que si **minimo.nota** es mayor que **lista[i].asignaturas.matematicas** igualamos ciertas variables. y después devolvemos minimo.

##

 8. Y por último, realizamos una función recursiva la cuál calcule el termino enésimo de la función de fibonacci

  ```  

in fibonacci(int n) {
    if(n == 0 || n == 1)
	  return 1;
	return fibonacci(n-1) + fibonacci(n-2);
};

``` 

La sucesión de Fibonacci es una **sucesión infinita de números** en los que cada uno de ellos es el resultado de la suma de sus dos inmediatamente anteriores. 

La sucesión comienza tal que así:

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987...
