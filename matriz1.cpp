#include <stdio.h>
#define MAX 10

void leitura(int p[MAX][MAX], int lin, int col){
	int i,j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			
			printf("predio %d - %d: ", i+1, j+1);
			scanf("%d", &p[i][j]);
		}
	}
	
}

float media(int p[MAX][MAX], int lin, int col){
	int i,j;
	int total=0;
	float media;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			total= total+ p[i][j];
			
		}
	}
	media= float(total) / (lin*col);
	return media;
	
}

int conta_vazio (int p[MAX][MAX], int lin, int col) {
	int i,j;
	int conta=0;
	float media;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			if(p[i][j]==0){
				conta++;
			}
			
		}
	}
	
	return conta;
}

int main (){
	int predio[MAX][MAX], andares, ap, t;
	float m;
	printf("quantidade de andares: ");
	scanf("%d", &andares);
	printf("quantidade de apartamentos: ");
	scanf("%d", &ap);
	leitura(predio, andares, ap);
	m=media(predio, andares, ap);
	printf("media de moradores: %.2f\n", m);
	t=conta_vazio(predio, andares, ap);
	printf("Apartamentos vazios: %d\n", t);
	
	
	return 0;
}
