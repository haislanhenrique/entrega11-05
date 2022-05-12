//atividade 4 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int
main ()
{
int num1, num2,resto1,resto2;
printf("altor:Haislan Henrique da Silva:\n");
    printf("digite o primeiro numero positivo: ");
    scanf("%i",&num1);
        printf("digite o segundo numero positivo: ");
    scanf("%i",&num2);
    
    
        if(num1||num2 ==0) 
    printf("divisao por 0 nao permitido");

   resto1=num1 % num2;
   resto2= num2 % num1;
    int resposta;
       num1 > num2 ? printf("o resto e: %i", resto1):printf("o resto e: %i", resto2);
   return 0;
   	}

