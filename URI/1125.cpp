#include <bits/stdc++.h>
using namespace std;

void clear_points(int *v){
	int i;
	for(i=0;i<105;i++){
		v[i]=0;
	}
}
int bigger_v(int *v, int p){
	int i,j,bigger;
	bigger=v[0];
	for(i=1;i<p;i++){
		if(v[i]>bigger){
			bigger=v[i];		
		}
	}
	//printf("FUNCAO BIGGER %d\n",bigger);
	return bigger;
}
void output_champ(int *v,int n,int p){
	int i,frist=1;
	for(i=0;i<p;i++){
		if(v[i]==n && frist==1){
			printf("%d",i+1);
			frist=0;		
		}
		else{
			if(v[i]==n){
				printf(" %d",i+1);
			}		
		}
	}
	printf("\n");
}
void clear_system(int system[10][105]){
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<105;j++){
			system[i][j]=0;		
		}
	}
}
int main(){
	int g,p,i,j,s,stop,i1,aux,bigger,bigger_p;
	int points[105], races[105][105], system[10][105];
	int k,j1;
	cin>>g>>p;
	while(g!=0 && p!=0){
		//piloto 0 chegou em 3º...
		//printf("%d\n",g);
		for(i=0;i<g;i++){
			for(j=0;j<p;j++){
				cin>>races[i][j];
				races[i][j]--;
			}
		}
		clear_points(points);
		cin>>s;
		for(i=0;i<s;i++){
			cin>>k;
			for(j1=0;j1<k;j1++){
				cin>>system[i][j1];
				//printf("%d\n",system[i][j1]);			
			}
			//stop=parseInt(si,system,i);
			for(i1=0;i1<g;i1++){
				for(j=0;j<p || j<k;j++){
					aux=races[i1][j];
					points[j]+=system[i][aux];
					//printf("%d--",aux);
					//cout<<points[aux]<<endl;
				}
			}
			bigger=bigger_v(points,105);
			output_champ(points,bigger,105);
			clear_points(points);
		}
		clear_system(system);
		cin>>g>>p;
	}
	return 0;
}
