#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{

int (*fptr)(int, int);

if (argc != 4)
{
printf("Error\n");
return (98);
}

if (argv[2][1] != 0)
{	
printf("Error\n");
return (98);
}

fptr = get_op_func(argv[2]);

printf("%d\n", (*fptr)(atoi(argv[1]), atoi(argv[3])));

return (0);
}
