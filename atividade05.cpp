// Questão 5 

#include<time.h>
#include<stdio.h>
#include<stdlib.h>
 


int main ()
{
int magico, num1;

printf("autor:Haislan Henrique da Silva:\n");

srand (time(NULL));

magico = rand () % 10;

while (num1 != magico) {
	printf ("Digite um numero, entre 0 e 10:\n");
scanf ("%i", &num1);

 if (magico > num1) {
	printf("Errado, muito baixo, tente novamente: \n");
} else if (magico < num1) {
	printf ("Errado, muito alto. tente novamete:\n");
}

}
 if (magico = num1) {
	printf ("O numero esta correto.\n");
}



return 0;
}

	
	





