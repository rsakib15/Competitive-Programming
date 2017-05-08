#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int> > V;
int main(){
    int T,q=0;
    scanf("%d",&T);
    while(T--){
        q++;
        int n,a,b;
        scanf("%d",&n);

        for(int i=0;i<n;i++){
            scanf("%d %d",&a,&b);
            V.push_back(make_pair(b,a));
        }


        sort(V.begin(),V.end());

        long long total = 0,sum = 0;

        for (int i = n-1; i >= 0; i--) {
            sum += V[i].second;
            total = max(total, sum * V[i].first);
        }

        printf("Case %d: %lld\n",q,total);
        V.clear();
    }
}
