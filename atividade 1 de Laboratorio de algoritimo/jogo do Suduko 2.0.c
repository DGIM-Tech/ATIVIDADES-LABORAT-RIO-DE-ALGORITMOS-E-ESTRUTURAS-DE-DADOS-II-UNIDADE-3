#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 9
int sudoku[9][9];
int tabuleiro[9][9];
int m1[9][9]=
{
{4, 0, 0, 8, 0, 0, 0, 0, 1},
{0, 2, 3, 0, 5, 6, 4, 0, 0},
{1, 8, 0, 0, 0, 7, 0, 2, 3},
{2, 9, 0, 0, 4, 8, 0, 6, 0},
{0, 0, 4, 0, 0, 1, 9, 0, 0},
{0, 7, 0, 0, 0, 2, 0, 8, 4},
{6, 3, 0, 2, 0, 0, 0, 1, 5},
{0, 0, 2, 7, 3, 0, 0, 4, 0},
{7, 0, 0, 0, 0, 5, 0, 0, 9}

};




void inicializarsudoku(){

    srand(time(0));

    int s = rand()%1;

    switch (s) {

			int i,j;
        case 0:
            for( i=0;i<9;i++){

                for( j=0;j<9;j++){

                    sudoku[i][j]= m1[i][j];

                }

            }

            break;
	}

int i,j;
    for( i=0;i<9;i++){

        for( j=0;j<9;j++){

            tabuleiro[i][j]= sudoku[i][j];

        }

    }
}
// faz a checagem pra ver se foi tudo prenchido
int checarJogo (){

    int cont=0, i, j;

    for(i=0;i<9;i++){

        for(j=0;j<9;j++){

            if (tabuleiro[i][j]!=0){

                cont++;

            }

        }

    }

    if(cont==81){

        return 1;

    }

    else

        return 0;

}

int checagemFinal () {

    int contLinha=0, contColunas=0 , contQ1=0, contQ2=0, contQ3=0, contQ4=0, contQ5=0, contQ6=0, contQ7=0, contQ8=0, contQ9=0;
	int i,j,k;
    for(i=0; i<9; i++){

        for( k=0; k<8; k++){

            for( j=k; j<8; j++){

                 //contando os elemento das linhas!

                if (tabuleiro[i][k]!=tabuleiro[i][j+1]){

                    contLinha++;

                }

                //...contando os elementos das colunas

                if (tabuleiro[k][i]!=tabuleiro[j+1][i]){

                    contColunas++;

                }

            }

        }
    }

    //...contando primeira grid 1 ou primeiro quadrante...

    for( i=0; i<3; i++){

        for( k=0; k<2; k++){

            for( j=k; j<2; j++){

                if (tabuleiro[i][k]!=tabuleiro[i][j+1]){

                    contQ1++;

                }
                
                if (tabuleiro[k][i]!=tabuleiro[j+1][i]){

                    contQ1++;

                }

            }

        }

    }

    //contando grid 2 !!!...

    for( i=0; i<3; i++){

        for( k=3; k<5; k++){

            for( j=k; j<5; j++){

                if (tabuleiro[i][k]!=tabuleiro[i][j+1]){

                    contQ2++;

                }

            }

        }

    }

    for( j=3; j<6; j++){

        for( k=0; k<2; k++){

            for( i=k; i<2; i++){

                if (tabuleiro[k][j]!=tabuleiro[i+1][j]){

                    contQ2++;

                }

            }

        }

    }

    //...contando grid 3 !!!...

    for( i=0; i<3; i++){

        for( k=6; k<8; k++){

            for( j=k; j<8; j++){

                if (tabuleiro[i][k]!=tabuleiro[i][j+1]){

                    contQ3++;

                }

            }

        }

    }

    for( j=6; j<9; j++){

        for( k=0; k<2; k++){

           for(i=k; i<2; i++){

                if (tabuleiro[k][j]!=tabuleiro[i+1][j]){

                    contQ3++;

                }

            }

        }

    }

    //...contando grid 4 !!!...

    for( i=3; i<6; i++){

        for( k=0; k<2; k++){

           for( j=k; j<2; j++){

                if (tabuleiro[i][k]!=tabuleiro[i][j+1]){

                    contQ4++;

                }

            }

        }

    }

    for( j=0; j<3; j++){

        for( k=3; k<5; k++){

            for( i=k; i<5; i++){

                if (tabuleiro[k][j]!=tabuleiro[i+1][j]){

                    contQ4++;

                }

            }

        }

    }

    //contando grid 5 

    for( i=3; i<6; i++){

        for( k=3; k<5; k++){

            for( j=k; j<5; j++){

                if (tabuleiro[i][k]!=tabuleiro[i][j+1]){

                    contQ5++;

                }

                if (tabuleiro[k][i]!=tabuleiro[j+1][i]){

                    contQ5++;

                }

            }

        }

    }

    //contando grid 6 

    for( i=3; i<6; i++){

        for( k=6; k<8; k++){

            for( j=k; j<8; j++){

                if (tabuleiro[i][k]!=tabuleiro[i][j+1]){

                    contQ6++;

                }

            }

        }

    }

    for(j=6; j<9; j++){

        for( k=3; k<5; k++){

            for( i=k; i<5; i++){

               if (tabuleiro[k][j]!=tabuleiro[i+1][j]){

                    contQ6++;

                }

            }

        }

    }

    //contando grid 7 

    for( i=6; i<9; i++){

        for( k=0; k<2; k++){

            for( j=k; j<2; j++){

                if (tabuleiro[i][k]!=tabuleiro[i][j+1]){

                    contQ7++;

                }

            }

        }

    }

    for(j=0; j<3; j++){

        for(k=6; k<8; k++){

            for( i=k; i<8; i++){

                if (tabuleiro[k][j]!=tabuleiro[i+1][j]){

                    contQ7++;

                }

            }

        }

    }

    //contando grid 8

    for(i=6; i<9; i++){

        for( k=3; k<5; k++){

            for( j=k; j<5; j++){

                if (tabuleiro[i][k]!=tabuleiro[i][j+1]){

                    contQ8++;

                }

            }

        }

    }

    for(j=3; j<6; j++){

        for( k=6; k<8; k++){

            for( i=k; i<8; i++){

                if (tabuleiro[k][j]!=tabuleiro[i+1][j]){

                    contQ8++;

                }

            }

        }

    }

    //contando grid 9 

    for( i=6; i<9; i++){

        for(k=6; k<8; k++){

            for( j=k; j<8; j++){

                if (tabuleiro[i][k]!=tabuleiro[i][j+1]){

                    contQ9++;

                }

                if (tabuleiro[k][i]!=tabuleiro[j+1][i]){

                    contQ9++;

                }

            }

        }

    }

    if(contLinha==324 && contColunas==324 && contQ1==18 && contQ2==18 && contQ3==18 && contQ4==18 && contQ5==18 && contQ6==18 && contQ7==18 && contQ8==18 && contQ9==18){

        return 1;

    }

    else

        return 0;

}

void imprimiTabuleiro(){
    printf("|=================================|\n| - | 1  2  3 | 4  5  6 | 7  8  9 |\n|=================================|\n");
		int i,j;
    for( i = 0; i< 9; i++) {
        if(i == 3 || i == 6) { 
            printf("|   |---------+---------+---------|\n");
        }

        for(j = 0; j < 9; j++) {
            if(j == 0) {
                printf("| %d |", i + 1);
            }

            if(tabuleiro[i][j] == 0) {
                printf("   ");
            } else {
                printf(" %d ", tabuleiro[i][j]);
            }

            if(j == 2 || j == 5) {
                printf("|");
            }

            if(j == 8)  {
                printf("|\n");
            }
        }

        if(i == 8) {
            printf("|=================================|\n"); 
        }
    }
}
	
void menu1(){

    printf("##########JOGO DO SUDOKU 2.0##########\n");

  printf("1 - inicia o jogo\n");
  printf("2 - Sair\n");
  

}


int main(int argc, char** argv)
{
  int op,linha,coluna,valor;

    menu1();
	scanf("%d", &op);
  
//limpa a tela
    system("cls");

    while(op!=1&&op!=2){

        menu1();
	scanf("%d", &op);
       

        system("cls");

    }

    printf("\n");

    while (op!=2){

        inicializarsudoku();

        system("cls");

        while (checarJogo()==0){

            imprimiTabuleiro();

            printf("\n");

            printf("Informe a linha: ");
            scanf("%d", &linha);
            printf("Informe a coluna: ");
			scanf("%d", &coluna);
			printf("Informe o valor: ");
			scanf("%d", &valor);

            while (valor < 0 || valor >9){

                scanf("%d", &valor);

            }

            if (tabuleiro[linha-1][coluna-1]==0 || sudoku[linha-1][coluna-1]!=tabuleiro[linha-1][coluna-1]){

                tabuleiro[linha-1][coluna-1] = valor;

            } else
			{
			
			}

            system("cls");

            checagemFinal ();

        }

        imprimiTabuleiro();

		printf("\n");

        if (checagemFinal()==1)
		{
			
	
            printf("Parabens, esta certo!\n");
        printf("voce ganhou!\n");
		}
        else
		
			
		
            printf("Jogo incorreto!... Tente novamente!\n");

        printf("\n");

        printf("Deseja jogar novamente?\n");

        printf("\n");

        menu1();

        scanf("%d", &op);

        system("cls");

        while(op!=1&&op!=2){

            menu1();

           scanf("%d", &op);

            system("cls");

        }

        system("cls");

    }

    printf("Jogo finalizado!\n");
    

	return 0;
}