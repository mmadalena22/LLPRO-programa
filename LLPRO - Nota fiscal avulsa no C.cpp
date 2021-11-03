#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char p1[18], p2[18], p3[18], p4[18], p5[18], p6[18], p7[18], p8[18];
	float cod1, cod2, cod3, cod4, cod5, cod6, cod7, cod8;
	int qtd1, qtd2, qtd3, qtd4, qtd5, qtd6, qtd7, qtd8;
	float pr1, pr2, pr3, pr4, pr5, pr6, pr7, pr8;
	float prtotal1, prtotal2, prtotal3, prtotal4, prtotal5, prtotal6, prtotal7, prtotal8;
	
	float total;
	
	printf("Criador de nota fiscal\n\n");
	printf("Digite o número do código: ");
	scanf("%f", &cod1);
	printf("Nome do produto: ");
	gets(p1);
	printf("A quantidade do produto: ");
	scanf("%d", &qtd1);
	printf("Digite o preço do produto: ");
	scanf("%f", &pr1);
	fflush(stdin)
	
	printf("\nDigite o número do código: ");
	scanf("%f", &cod2);
	printf("Nome do produto: ");
	gets(p2);
	printf("A quantidade do produto: ");
	scanf("%d", &qtd2);
	printf("Digite o preço do produto: ");
	scanf("%f", &pr2);
	fflush(stdin)
	
	printf("\nDigite o número do código: ");
	scanf("%f", &cod3);
	printf("Nome do produto: ");
	gets(p3);
	printf("A quantidade do produto: ");
	scanf("%d", &qtd3);
	printf("Digite o preço do produto: ");
	scanf("%f", &pr3);
	fflush(stdin)
	
	printf("\nDigite o número do código: ");
	scanf("%f", &cod4);
	printf("Nome do produto: ");
	gets(p4);
	printf("A quantidade do produto: ");
	scanf("%d", &qtd4);
	printf("Digite o preço do produto: ");
	scanf("%f", &pr4);
	fflush(stdin)
	
	printf("\nDigite o número do código: ");
	scanf("%f", &cod5);
	printf("Nome do produto: ");
	gets(p5);
	printf("A quantidade do produto: ");
	scanf("%d", &qtd5);
	printf("Digite o preço do produto: ");
	scanf("%f", &pr5);
	fflush(stdin)
	
	printf("\nDigite o número do código: ");
	scanf("%f", &cod6);
	printf("Nome do produto: ");
	gets(p6);
	printf("A quantidade do produto: ");
	scanf("%d", &qtd6);
	printf("Digite o preço do produto: ");
	scanf("%f", &pr6);
	fflush(stdin)
	
	printf("\nDigite o número do código: ");
	scanf("%f", &cod7);
	printf("Nome do produto: ");
	gets(p7);
	printf("A quantidade do produto: ");
	scanf("%d", &qtd7);
	printf("Digite o preço do produto: ");
	scanf("%f", &pr7);
	fflush(stdin)
	
	printf("\nDigite o número do código: ");
	scanf("%f", &cod8);
	printf("Nome do produto: ");
	gets(p8);
	printf("A quantidade do produto: ");
	scanf("%d", &qtd8);
	printf("Digite o preço do produto: ");
	scanf("%f", &pr8);
	fflush(stdin)
	
	prtotal1 = pr1 * qtd1;
	prtotal2 = pr2 * qtd2;
	prtotal3 = pr3 * qtd3;
	prtotal4 = pr4 * qtd4;
	prtotal5 = pr5 * qtd5;
	prtotal6 = pr6 * qtd6;
	prtotal7 = pr7 * qtd7;
	prtotal8 = pr8 * qtd8;
	
	total = prtotal1 + prtotal2 + prtotal3 + prtotal4 + prtotal5 + prtotal6 + prtotal7 + prtotal8;
	
	printf("%-12s %-12s %-15s %-15s %-15s\n,"Código", "Quant.", "Discriminação" "P.Unitário" "Preço Total");
	printf("%-12f %-12d %-15s R$ %-12.2f R$ %12.2f\n", cod1, qtd1, p1, pr1, prtotal1);
	printf("%-12f %-12d %-15s R$ %-12.2f R$ %12.2f\n", cod2, qtd2, p2, pr2, prtotal2);
	printf("%-12f %-12d %-15s R$ %-12.2f R$ %12.2f\n", cod3, qtd3, p3, pr3, prtotal3);
	printf("%-12f %-12d %-15s R$ %-12.2f R$ %12.2f\n", cod4, qtd4, p4, pr4, prtotal4);
	printf("%-12f %-12d %-15s R$ %-12.2f R$ %12.2f\n", cod5, qtd5, p5, pr5, prtotal5);
	printf("%-12f %-12d %-15s R$ %-12.2f R$ %12.2f\n", cod6, qtd6, p6, pr6, prtotal6);
	printf("%-12f %-12d %-15s R$ %-12.2f R$ %12.2f\n", cod7, qtd7, p7, pr7, prtotal7);
	printf("%-12f %-12d %-15s R$ %-12.2f R$ %12.2f\n", cod8, qtd8, p8, pr8, prtotal8);
	printf("%-15f", "Total R$", "%-12f" , total);
	
	
	return 0;
	
	
	
	
}
