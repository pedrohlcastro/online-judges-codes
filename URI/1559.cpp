#include <bits/stdc++.h>
using namespace std;

int main(){
	int i,j,k,n,game[4][4];
	int left,down,up,right;
	cin>>n;
	for(i=0;i<n;i++){
		left=0; down=0; up=0; right=0;
		for(j=0;j<4;j++){
			for(k=0;k<4;k++){
				cin>>game[j][k];
			}
		}
		for(j=0;j<4;j++){
			for(k=0;k<4;k++){
				if(game[j][k]==2048){
					left=0; down=0; up=0; right=0;
					goto SAIDAS;
				}
				if(game[j][k]!=0){
					if((k-1)>-1 && (game[j][k]==game[j][k-1] || game[j][k-1]==0))
						left=1;
					if((game[j][k]==game[j+1][k] || game[j+1][k]==0) && (j+1)<4)
						down=1;
					if((game[j][k]==game[j-1][k] || game[j-1][k]==0) && (j-1)>-1)
						up=1;
					if((k+1)<4 && (game[j][k]==game[j][k+1] || game[j][k+1]==0) )
						right=1;
				}
			}
		}
		SAIDAS:
		if(down==1)
			printf("DOWN");
		if(left==1){
			if(down==1)
				printf(" LEFT");
			else
				printf("LEFT");
		}
		if(right==1){
			if(down==1 || left==1)
				printf(" RIGHT");
			else
				printf("RIGHT");
		}
		if(up==1){
			if(down==1 || left==1 || right==1)
				printf(" UP");
			else
				printf("UP");
		}
		if(left==0 && down==0 && up==0 && right==0)
			printf("NONE");
		printf("\n");
	}
	return 0;
}

