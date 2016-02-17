#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,i,k;
	int student[55];
	cin>>n;
	while(n!=0){
		//start_student(student);
		for(i=1;i<=n;i++){
			cin>>student[i];
		}
		cin>>k;
		while(student[k]!=k){
			k=student[k];
		}
		printf("%d\n",k );
		cin>>n;
	}
	return 0;
}