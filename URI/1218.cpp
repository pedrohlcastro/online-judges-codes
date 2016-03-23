#include <bits/stdc++.h>
#define TAM 100000
using namespace std;

int main(){
  int n,i,m,f,base=10,numero=0,j=0,tam;
  char s[TAM];
  while(scanf("%d ",&n)!=EOF){
  scanf("\n%[^\n]", s);
    base=10;
    m=0; f=0; j++;
    for(i=0;i<strlen(s);i++){
      if(s[i]==' '){
          base=10;
      }
      else{
        if(s[i]=='F' || s[i]=='M'){
          if(s[i]=='F' && numero==n){
            f++;
          }
          if(s[i]=='M' && numero==n){
            m++;
          }
          numero=0;
        }
        else{
          numero+=(s[i]-48)*base;
          base=base/10;
        }
      }
    }
    if(j==1)
      printf("Caso %d:\nPares Iguais: %d\nF: %d\nM: %d\n",j,m+f,f,m );
    else
      printf("\nCaso %d:\nPares Iguais: %d\nF: %d\nM: %d\n",j,m+f,f,m );
  }
    return 0;

}
