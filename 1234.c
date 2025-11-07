#include <stdio.h>
#include <stdlib.h>

#define LIN 5
#define COL 5
//protoclo de função 


void inicializa_arr(int arr[][COL],int);
void imprime_arr(int arr[][COL],int);

int main(){
	
	int tabela[LIN][COL];
	
	inicializa_arr(tabela,LIN);
	
	
	printf("\n \t \t Tabela de multiplicação \n");
	
	imprime_arr(tabela,LIN);
	
	return 0;
	
}

void incialza_arr(int arr [][COL],int nLIN){
	int x,y;
	
	for(x=0;y<COL;x+=1)
	   for (y=0;y<COL;y+=1)
	       arr[x][y]=x*y;
	
	
}

void imprime_arr(int arr[][COL],int nLIN){
	int x;
	
	
	printf("%6d",0);
	for(y=1;y<COL;y+=1)
	    printf("%3d",y);
	printf("\n");
	
	printf(" ");
	for(y =0;y<3*COL;x+=1)
       printf("_");
	printf("\n");
	
	for (x=0;x<nLin;x+=1){
		printf("%2d|",x);
		for(y=0;y<COL;y+=1)
		   printf("%3d",arr[x[y]]);
        printf("\n");		   
   }	   
}