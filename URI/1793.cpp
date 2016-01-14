#include <bits/stdc++.h>
using namespace std;
void allzero(int v[]){
    int i;
    for(i=0;i<1111;i++)
        v[i]=0;
}
void timeOn(int v[],int menor){
    int i=0,time=0;
    for(i=menor;i<1111;i++){
        //cout<<v[i]<<endl;
        time+=v[i];
    }
    printf("%d\n",time);
}
int main(){
    int n,t,temp,i,menor,j;
    int time[1111];
    cin>>n;
    while(n !=0){
        allzero(time);
        for(i=0;i<n;i++){
            cin>>temp;
            if(i==0)
                menor=temp;
            else{
                if(temp<menor){
                    menor=temp;
                }
            }
            for(j=temp;j<temp+10;j++){
                time[j]=1;
            }

        }
        timeOn(time,menor);
        cin>>n;
    }
return 0;
}
