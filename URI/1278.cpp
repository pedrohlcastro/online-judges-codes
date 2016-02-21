#include <bits/stdc++.h>

using namespace std;

void organize_v(char *v, int start,int size){
	for(start;start<size;start++){
		v[start]=v[start+1];
	}
}

int remove_spaces(char *v){
	int i,size,space;
	size=strlen(v);
	for(i=0;i<=size;i++){
		while(v[i]==32 && v[i+1]==32){
			space=i;
			organize_v(v,i,size);
			size--;
		}
	}
	size=strlen(v);
	//printf("size %d\n",size );
	if(v[0]==32){
		organize_v(v,0,size);
		size--;
	}
	if(v[size-1]==32){
		organize_v(v,size-1,size);
		size--;
	}
	return size;
}

int find_bigger(int *v, int n){
	int i,bigger;
	bigger=v[0];
	for(i=0;i<n;i++){
		if(v[i]>bigger)
			bigger=v[i];
	}
	return bigger;
}
void print_space(int j){
	int i;
	for(i=0;i<j;i++)
		printf(" ");
}
int main(){
	char input_text[105][10000];
	int i,n,size[105],bigger_text,blank_spaces;
	cin>>n;
	getchar();
	while(n!=0){
		for(i=0;i<n;i++){
			gets(input_text[i]);
			fflush(stdin);
			size[i]=remove_spaces(input_text[i]);
			//puts(input_text[i]);
		}
		bigger_text=find_bigger(size,n);
		for(i=0;i<n;i++){
			blank_spaces=bigger_text-size[i];
			print_space(blank_spaces);
			puts(input_text[i]);
		}

		cin>>n;
	//test
		if(n!=0){
			printf("\n");
		}
		getchar();
	}
	return 0;
}
