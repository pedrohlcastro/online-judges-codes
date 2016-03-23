#include <bits/stdc++.h>

using namespace std;
map<int,int> song;
map<int,int> playlist;
int todas(int m){
    int i,soma=0;
    for(i=1;i<=m;i++){
        if(playlist[i]){
            soma++;
        }
    }
    if(soma==m){
        return 1;
    }
    return 0;
}
int main(){
    int m,k,i,aux,soma=0,end=0;
    while(scanf("%d%d",&m,&k)!=EOF){
        song.clear();
        playlist.clear();
        end=0; soma=0;
        for(i=1;i<=m;i++){
            cin>>aux;
            song[i]=aux;
            //cout<<song[i]<<endl;
        }
        while(k--){
            cin>>aux;
            playlist[aux]=1;
            //cout<<playlist[aux]<<endl;

            //printf("END=%d\n",end );
            if(end==0)
                soma+=song[aux];
            end=todas(m);
        }
        if(end==0)
            soma=-1;
        printf("%d\n",soma );
    }
return 0;
}
