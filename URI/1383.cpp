#include <bits/stdc++.h>

using namespace std;
void clear_all(int sud[9][9]){
	int i,j;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			sud[i][j]=0;
		}
	}
}
void start_numbers(int *numbers){
	int i;
	for(i=0;i<10;i++){
		numbers[i]=0;
		
	}
}

int check_line(int sud[9][9],int j,int *numbers){
	int i;
	start_numbers(numbers);

	for(i=0;i<9;i++){
		numbers[sud[j][i]]++;
		
	}
	
	for(i=1;i<10;i++){

		if(numbers[i]!=1)
			return 0;
	}
	return 1;
}

int check_column(int sud[9][9],int j,int *numbers){
	int i;
	start_numbers(numbers);

	for(i=0;i<9;i++){
		numbers[sud[i][j]]++;
	}
	for(i=1;i<10;i++){

		if(numbers[i]!=1)
			return 0;
	}
	return 1;
}
int check_block(int sud[9][9],int x,int y, int aux_x, int aux_y, int *numbers){
	int i,j;
	start_numbers(numbers);
	for(i=x;i<aux_x;i++){
		for(j=y;j<aux_y;j++){
			numbers[sud[i][j]]++;
		}
	}
	for(i=1;i<10;i++){
		if(numbers[i]!=1)
			return 0;
	}
	return 1;
}

int check_game(int sud[9][9],int i,int n){
	int won=1,j,k;
	int numbers[10];
	int x=0,y=0,aux_x=3,aux_y=3;
	for(j=0;j<9;j++){
		for(k=0;k<9;k++){
			if(sud[j][k]>9 || sud[j][k]<1){
				printf("Instancia %d\nNAO\n\n",i+1);
				return 0;
			}
		}
	}
	//lines
	for(j=0;j<9;j++)
		won=check_line(sud,j,numbers);
	if(won==0){
		printf("Instancia %d\nNAO\n\n",i+1);
		return 0;
	}
	//columns
	for(j=0;j<9;j++)
		won=check_column(sud,j,numbers);
	if(won==0){
		printf("Instancia %d\nNAO\n\n",i+1);
		return 0;
	}
	//blocks 3x3
	for(j=0;j<3;j++){
		for(k=0;k<3;k++){
			won=check_block(sud,x,y,aux_x,aux_y,numbers);
			if(won==0){
				printf("Instancia %d\nNAO\n\n",i+1);
				return 0;
			}
			y+=3;aux_y+=3;
		}
		y=0;aux_y=3;
		x+=3;aux_x+=3;
	}
	printf("Instancia %d\nSIM\n\n",i+1);
	return 1;
}

int main(){
	int n,i,j,k,sud[9][9],amen;

	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j=0;j<9;j++){
			for(k=0;k<9;k++){
				scanf("%d",&sud[j][k]);
			}
		}
		amen=check_game(sud,i,n);
	}
	return 0;
}

