#include <stdio.h>

main()
{
int i;

/*En el array sys_errlist hay una descripcion corta 
asociada a acada numero de error, sys_nerr es el total
 de elementos del array sys_errlist*/

for(i=0; i < sys_nerr; i++){
	printf("%d: %s \n", i, sys_errlist[i]);
}

printf("%d", i);
}
