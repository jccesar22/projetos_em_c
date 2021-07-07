#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tamanho 5
///estrutura da fila 
struct fila_estrutura{
	int cadastro[tamanho];
	int ini;
 	int fim;
 	char arquivo[10];
 	char extencao[10];
	};
	// Variavel uso global
struct fila_estrutura fila;
int op;
	
  void menu_mostrar();	
	void adicionar_elemento();
// Corpo principal do sistema
int main()
{
    ///	setlocale(LC_ALL, "Portuguese");
    op = 1;
    fila.ini = 0;
    fila.fim = 0;
        while (op != 0)
        {
          	system("cls");
            menu_mostrar();
            printf("opção");
            scanf("%d", &op);
            switch (op)
            {
            case 1:
                adicionar_elemento();
                break;
            case 2:
               retirar_fila();
                break;
            }
        }
}
	//adiciona um elemento a fila
	void adicionar_elemento(){
            if (fila.fim == tamanho)
            {
                printf("\nA fila está cheia, espere esvasiar rsrsr!\n\n");
                system("pause");
            }
            else
            {
                printf("\nDigite o Ra do aluno: ");
                scanf("%d", &fila.cadastro[fila.fim]);
                printf("\nDigite  Nome do arquivo: ");
                scanf("%s", fila.arquivo[fila.fim]);
                printf("\nDigite a Extensão do arquivo: ");
                scanf("%s", fila.extencao[fila.fim]);
                fila.fim++;
            }
        }
	// mostra o menu de escolha
     void menu_mostrar()
            {
                printf("\nOpção de menu\n\n");
                printf("1- Inserir um elemento na fila\n");
                printf("2- Remover um elemento da fila\n");
                printf("3- Esvaziar a fila\n");
              	printf("0- Encerrar o programa\n");
            }