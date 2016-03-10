#include <bits/stdc++.h>

using namespace std;

int josep(int n, int k){
	if(n==1){
		return 1;
	}
	else{
		return (((josep(n-1, k) + k-1) % n)+ 1);  
	}
}
int main(){
	int n,i,m,k;
	cin>>m;
	for(i=0;i<m;i++){
		cin>>n>>k;
		printf("Case %d: %d\n",i+1,josep(n,k));
	}
return 0;
}