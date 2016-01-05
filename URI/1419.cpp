#include <bits/stdc++.h>
using namespace std;

int search_triple(int *m, int r){
	int i;
	for(i=0;i<r;i++){
		if(m[i]==m[i+1] && m[i]==m[i+2] && (i+1)<r && (i+2)<r){
			return i;
		}
	}
	return 15;
}
int main(){
	int r,i;
	int m[11];
	int l[11];
	int points_m,points_l;
	int triple_round_m,triple_round_l;
	cin>>r;
	while(r!=0){
		points_m=0; points_l=0;
		for(i=0;i<r;i++){
			cin>>m[i];
			points_m+=m[i];
		}
		for(i=0;i<r;i++){
			cin>>l[i];
			points_l+=l[i];
		}
		triple_round_m=search_triple(m,r);
		triple_round_l=search_triple(l,r);
		//printf("M=%d e L=%d\n",triple_round_m,triple_round_l );
		if(triple_round_l!=15 && triple_round_l<triple_round_m){
			points_l+=30;
		}
		else{
			if(triple_round_m!=15 && triple_round_m<triple_round_l){
				points_m+=30;
			}
		}
		if(points_m>points_l){
			printf("M\n");
		}
		else{
			if(points_l>points_m){
				printf("L\n");
			}
			else{
				printf("T\n");
			}
		}
		cin>>r;
	}
	return 0;
}