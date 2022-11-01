// ordenado de mayor a menor en longitudes de direccion de memoria

// stack
//int main(int argc, char** argv) {
//	int var = 5; // local
//	 printf("var adress\t%10p\n", &var);
//}

// heap
//int* array = (int*)calloc(n, sizeof(int));
//printf("array adress\t%10p\n", &array);

// unitialized data (bss)
//int gbl;
//printf("array adress\t%10p\n", &array);

// initialized data 
//int gbl = 4;
//printf("array adress\t%10p\n", &array);

// text
//int main(int argc, char** argv) {
//	int (*ptr) (int, char**);
//	ptr = &main;
//	printf("main adress \t%10p\n", &ptr);
//}

// 1. b.
// Si puedo. Por ejemplo, si incializo o no una variable podria modificar el segmento de memoria donde la misma se encuentra.
