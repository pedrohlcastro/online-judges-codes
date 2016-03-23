#include <bits/stdc++.h>

using namespace std;
int do_contas(char *v,int j){
  int i,soma=0;
  for(i=0;i<strlen(v);i++){
    soma+=(v[i]-65)+j+i;

  }
  //printf("%d\n",soma );
  return soma;
}
void clear_v(char *v){
  int i;
  for(i=0;i<55;i++)
    v[i]=0;
}
int main(){
  int n,i;
  int l,j;
  int soma=0;
  char input[55];
  cin>>n;
  //cout << n << endl;
  //getchar();
  for(i=0;i<n;i++){
    cin>>l;
    getchar();
    //cout << l << endl;
    for(j=0;j<l;j++){
      clear_v(input);
      gets(input);
      //puts(input);
      soma+=do_contas(input,j);
    }

    printf("%d\n",soma );
    soma=0;
  }
  return 0;
}

