#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	int n;
	string k;
	unsigned long long int res=1;
	cin>>t;
	while(t--){
		cin>>n;
		k.clear();    
		cin>>k;
		res=1;
		int tam=k.size();
		int i=0;
		while(n-(tam*i)>=1){
			//cout<<n-(k.size()*i)<<endl;
			res*=(n-(tam*i));
			i++;
		}
		cout<<res<<endl;
	}

	return 0;
}
