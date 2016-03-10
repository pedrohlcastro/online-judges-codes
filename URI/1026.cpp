#include <bits/stdc++.h>

using namespace std;
void startzero(long long int *v){
  int i;
  for(i=0;i<32;i++){
    v[i]=0;
  }
}
void decBin(long long int a,long long int *v){
  int i=0,j,aux,k;
  long long int r[32],n,q;
  n=a;
  //printf("%lld\n",a);
  startzero(r);
  while(n>0){
    q=n/2;
    r[i]=n%2;
    n=n/2;
    i++;
  }
  //printf("q-%lld\n",q );
  //for(k=0;k<32;k++)
    //printf("%lld ",r[k] );
  aux=i;
  for(j=31-(i+1);j<32 && aux>=0;j++){
    if(j==32-(i+1)){
      v[j]=q;
    }
    else{
      v[j]=r[aux];
      aux--;
    }
  }
  //printf("FUNC\n");
  //for(i=0;i<32;i++){
    //printf("%d ",v[i] );
  //}
  //printf("\n" );
}
void saidaDec(long long int *v){
  int i,eleva=31;
  long long int soma=0;
  for(i=0;i<32;i++){
    soma+=v[i]*pow(2,eleva);
    eleva--;
    //printf("%d\n",soma );
  }
  printf("%lld\n",soma );
}
void sumAB(long long int *a,long long int *b){
  int i,aux;
  long long int c[32];
  startzero(c);
  for(i=0;i<32;i++){
    aux=a[i]+b[i];
    if(aux==2)
      aux=0;
    c[i]=aux;
  }
  //for(i=0;i<32;i++){
    //printf("%d ",c[i] );
  //}
  saidaDec(c);
}
int main(){
  long long int a,b,i;
  long long int ba[32],bb[32],aux;

  while(scanf("%lld %lld",&a,&b)!=EOF){

    startzero(ba);
    startzero(bb);
    decBin(b,bb);
    decBin(a,ba);


    sumAB(ba,bb);
  }
return 0;
}

