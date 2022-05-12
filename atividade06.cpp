//atividade 6
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
	
	int main()
	{
	{
   int i,j,spc,rows,k;
  char ch;
	 printf("altor:Haislan Henrique da Silva:\n");
	 
printf("Informe um numero positivo:(indicado menor que 40 para melhor visualizacao.) ");
 scanf("%d",&rows);
spc=rows+4-1;

 for(i=1;i<=rows;i++)
  {
for(k=spc;k>=1;k--)  
 {
 printf(" ");  //aqui pode ser regulado o espaçamento estre os numeros/colunas  
   }
                     
for(j=1;j<=i;j++)
printf("%d ",i);
printf("\n");    //aqui pode ser regulado o espaçamento estre linhas 
 spc--;  	    
}
}
return 0;
}	
			   
	
