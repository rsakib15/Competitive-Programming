#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
int main(){
    char arr[1000];
    int T,q=0,series;
    scanf("%d",&T);
    getchar();
    while(T--){
        q++;
        scanf("%d",&series);
        getchar();
        for(int i=0;i<series;i++){
            scanf("%c",&arr[i]);
        }
        int win=0,ban=0,tie=0,aban=0;
        for(int i=0;i<series;i++){
            if(arr[i]=='W')
                win++;
            else if(arr[i]=='B')
                ban++;
            else if(arr[i]=='T')
                tie++;
            else if(arr[i]=='A')
                aban++;
        }

            int s=series-aban;
            if(aban==series)
                printf("Case %d: ABANDONED\n",q);
            else if(win==s)
                printf("Case %d: WHITEWASH\n",q);
            else if(ban==s)
                printf("Case %d: BANGLAWASH\n",q);
            else if(win==ban)
                printf("Case %d: DRAW %d %d\n",q,ban,tie);
            else if(win>ban)
                printf("Case %d: WWW %d - %d\n",q,win,ban);
            else if(ban>win)
                printf("Case %d: BANGLADESH %d - %d\n",q,ban,win);

    }
}



