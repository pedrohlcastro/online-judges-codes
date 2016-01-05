#include <bits/stdc++.h>
using namespace std;
void espaco(char saida[],char ch){
	int i,tam1,tam2,j=0;
	tam1=strlen(saida);
	saida[tam1]=ch;
}
void concatenar(char saida[],char entrada[]){
	int i,tam1,tam2,j=0;
	tam1=strlen(saida);
	tam2=strlen(entrada);
	for(i=tam1; i<(tam1+tam2) && j<tam2;i++){
		saida[i]=entrada[j];
		j++;
	}
}
void zera(char saida[]){
	int i;
	for(i=0;i<82;i++){
		saida[i]=0;
	}
}
void hr(){
	int i;
	for(i=0;i<80;i++){
		printf("-");
	}
	printf("\n");
}
int main(){
	char string[82];
	char saida[82];
	char esp[1];
	int line=0,aux;
	esp[0]=32;
	INICIO:
	while(scanf("%s",string)!=EOF){
		if(strcmp("<br>",string)==0){
			printf("%s\n",saida);
			zera(saida);
			line=0;
			goto INICIO;
		}
		if(strcmp("<hr>",string)==0){
			if(line==0){
				hr();
				goto INICIO;
			}
			else{
				printf("%s\n",saida );
				zera(saida);
				hr();
				line=0;
				goto INICIO;
			}			
		}
		NEWLINE:
		if(line==0){
			zera(saida);
			strcpy(saida,string);
			line=strlen(saida);
			goto INICIO;
		}
		while(line<81){
			aux=strlen(string)+1;
			if((line+aux)>80){
				printf("%s\n",saida);
				line=0;
				goto NEWLINE;
			}
			else{
				espaco(saida,32);
				concatenar(saida,string);
				//puts(saida);
			}
			line+=aux;
			goto INICIO;
		}

	}
	printf("%s\n",saida );
	return 0;
}