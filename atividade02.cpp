// Questão 2 - Paciente saudável
#include<stdio.h>
#include<stdlib.h>

int main ()
{
 	char resp;
 	int temperatura;

printf("Autor: Haislan Henrique da Silva .\n");
printf ("O paciente se sente bem?\n");
scanf (" %c%*[^\n]", &resp);

if(resp == 's') {

	printf ("O paciente esta saudavel!!");
} else if (resp == 'n') { 
	printf ("O paciente esta com dor?");
	scanf (" %c%*[^\n]", &resp);

if(resp == 's') {

	printf ("doente!!");
} else if (resp == 'n') { 
	printf ("qual e a sua temperatura corporal?");
scanf (" %c%*[^\n]",&temperatura);

if(temperatura >=37) {

	printf ("O paciente esta saudavel!!");
	
} else if (temperatura <37) {
	printf ("Doente!!");

		
	}
}



}
return 0;
}

