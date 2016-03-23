#include <bits/stdc++.h>
using namespace std;
map<string,string> teste;
int diferenca(string v,string s){
	int i=0,soma=0;
	for(i=0;i<v.length();i++){
		if(v[i]!=s[i]){
			soma++;
		}
	}
	if(soma>1)
		return 1;
	return 0;
}
int main(){
	int n,m,res,k;
	string nome;
	string assinatura;
	cin>>n;
	while(n!=0){
		res=0;
		k=n;
		while(k--){
			cin>>nome>>assinatura;
			teste[nome]=assinatura;
		}
		cin>>m;
		while(m--){
			cin>>nome>>assinatura;
			if(diferenca(teste[nome],assinatura)){
				res++;
			}
		}
		printf("%d\n",res );
		cin>>n;
	}

	return 0;
}
