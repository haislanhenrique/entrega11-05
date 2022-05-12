//atividade 1 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char categoria;
float med, quant, soma, total;

int main(void) {
printf("altor:Haislan Henrique da Silva:\n");
  do{
    printf("informe a categoria:");
    setbuf(stdin,NULL);          //garante a execuçao sucetiva do progama e da seus parametros. letra b
    scanf("%c", &categoria);
    do{
    	
    printf("informe a quantidade:");
    scanf("%f", &quant);
    
      }while (quant <= 0);                     //garante que a quantidade é maior que zero, pois se for 0 teria como conseguencia o erro na media. letra c 
if (categoria == 'A' ||  categoria == 'B' || categoria == 'C' || quant != 0)      //garante a leitura valida por meio de comparaçoes pre estabelecidas .  letra d 
{
  
    soma = soma + quant;
    total++;
    med = soma / total;
  }
  }

while (categoria == 'A' || categoria == 'B' || categoria == 'C');                //o controle sobre a validade da categoria é feita apartir dos == em seguencia. letra a 
  printf ("A media dos produtos: %.2f", med);          // a funcao float limita o numero de casas decimais no caso desse ploblema 2 mais pode ser editado conforme demanda%.2f. letra e 
   return 0;
}
