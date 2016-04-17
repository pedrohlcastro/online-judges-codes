#include <bits/stdc++.h>

using namespace std;

int main(){
	string idi,copy,saida;
	int n,k,f,fa;
	cin>>n;
	while(n--){
		f=0;
		fa=0;
		cin>>k;
		while(k--){
			cin>>idi;
			if(idi.compare(copy)!=0 && f!=0 && fa!=-1){
				saida.assign("ingles");
				fa=-1;
			}
			copy.assign(idi);
			f=1;		
		}
		if(fa==-1)
			cout<<saida<<endl;
		else
			cout<<idi<<endl;
		idi.clear();
		copy.clear();
		saida.clear();
		f=0;
		fa=0;
	}


return 0;
}
