#include <bits/stdc++.h>

using namespace std;


////////////////////////////////////
//**LCS-Longest Common Substring**//
////////////////////////////////////


int lcs(char *w1,char *w2,char v[55][55]){
	int i,j,tam1,tam2,maior=0;
	tam1=strlen(w1);
	tam2=strlen(w2);

	//zera primeira coluna
	for(i=1;i<=tam1;i++){
		v[i][0]=0;
	}

	//zera primeira linha
	for(i=0;i<=tam2;i++){
		v[0][i]=0;
	}

	//compração começando do 1,1
	//pois 1ªlinha e  1ª coluna ja foram preenchidas
	for(i=1;i<=tam1;i++){
		for(j=1;j<=tam2;j++){
			//como esta na posição 1,1 deve tirar um na
			//compração das strings
			if(w1[i-1]==w2[j-1]){
				//caso iguais, pega diagonal anterior e soma 1
				v[i][j]= v[i-1][j-1]+1;
			}
			else{
				//caso diferente posição recebe 0
				v[i][j]=0;
			}
			if (v[i][j]>maior){
				//maior numero da matriz é a resposta
				maior=v[i][j];
			}
		}
	}
	return maior;
}

int main(){
	char w1[55],w2[55],r[55][55];
	int out;
	while(gets(w1) && gets(w2)){;
		out=lcs(w1,w2,r);
		cout<<out<<endl;
	}
	return 0;
}