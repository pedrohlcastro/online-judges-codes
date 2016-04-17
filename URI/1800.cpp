#include <bits/stdc++.h>

using namespace std;

int v[1050];
void clear_v(int *v){
	for(int i=0;i<1050;i++)
		v[i]=0;
}
int main(){
	int q,e,k;
	cin>>q>>e;
	while(e--){
		cin>>k;
		v[k]=1;
	}
	while(q--){
		cin>>k;
		if(v[k]){
			cout<<0<<endl;
		}
		else{
			v[k]=1;
			cout<<1<<endl;
		}
	}
return 0;
}
