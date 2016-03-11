#include <bits/stdc++.h>

using namespace std;

////////////////////////////////
// **** ALGORITMO DE KADANE ****
////////////////////////////////

//algoritmo capaz de determinar maior soma possivel dentro de
//um vetor
int kadane_algo(int *v,int k){
	int i;
	int ganhei_ate_aki=0; // nao começei entao nao ganhei nada
	int se_termina_aki=0; // nao começei entao nao sei se termina
	for(i=0;i<k;i++){

		//vale a pena continuar ou recomeçar?
		ganhei_ate_aki = max(ganhei_ate_aki+v[i],v[i]);


		//vale a pena parar agora?
		se_termina_aki = max(se_termina_aki,ganhei_ate_aki);
	}
	return se_termina_aki;
}

int main(){
	int i,k,days[1005],n,oi,c;
	while(scanf("%d",&k) != EOF){
		cin>>c;
		for(i=0;i<k;i++){
			cin>>n;
			days[i]=n-c;
		}

		oi=kadane_algo(days,k);
		cout<<oi<<endl;
		
	}
	return 0;
}