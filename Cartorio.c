#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�es

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("###Cart�rio da EBAC###\n\n");
	printf("Escolha a op��o desejada do menu:\n\n");
	printf("\t1 - Registrar abas\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	printf("Esse Software � de livre uso dos alunos\n");
}
