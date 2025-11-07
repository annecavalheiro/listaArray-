#include <stdio.h>
#include <stdlib.h>

#define Altura 5e
#define Largura 5

void seleciona_element(int[][Largura],int;
void pontos (int [][Largura],int);
void imprime_matriz(int[][Largura],int);
void marca_triang(int[][Largura],int);
void flip(int[][Largura],int);
void espera_entrada(void);


void pontos(int_matriz[][Largura],int nLin){
	int x,y;
	
	for(x=0;x<nLin;x+=1)
	matriz [x][y]='_';
	
}

void seleciona_ele(int matriz[][Largura],int nLin){
	int x,y;
	
	pirntf("\n Entra com as coordenadas na forma x,y (2,4).\n");
	printf("\n Use numeros negativos para terminar.\n");
	
	while(1){
		printf("Coordenadas:");
		scanf("%d, %d",&x,&y);
		if(y>=0 && x>=0){
			matriz[x][y]='xb1';
			imprime_matriz(matriz,nLin);
		}
		else
		    break;
		    
	}
}

void marca_triang(int matriz[][Largura],int nLin){
	int x,y;
	
	printf("Triangulo\n");
	pontos(matriz,nLin);
	for(x=0,x,nLin;x+=1){
		for
	}
}
int maind(){



	
}