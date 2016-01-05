#include <bits/stdc++.h>
using namespace std;

int put_in_v(int v[505][505],int m,int n,int l,int a){
	int i=0,j;
	for(j=a;j<=n;j++){
		i++;
	}
	return i;
}
int main(){
	int m,n,p,i,j,leds,sequence,l,col,aux;
	int light[505][505];
	cin>>m>>n>>p;
	while(m!=0 && n!=0 && p!=0){
		leds=0;
		l=0;
		for(i=1;i<=p;i++){
			cin>>sequence;
			if(sequence>n){
				aux=sequence/n;
				l+=aux;
				col=(sequence%n);
			}
			else{
				l++;
				col=sequence;
			}
			if(col==0){
				leds++;
			}
			else{
				leds+=put_in_v(light,m,n,l,col);
			}
		}
		printf("Lights: %d\n", leds);
		cin>>m>>n>>p;
	}
	return 0;
}
