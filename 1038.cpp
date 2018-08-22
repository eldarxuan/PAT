#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    int a[1000];
    memset(a,0,sizeof(a));
    int N,g;
    scanf("%d",&N);
    for(int i =0; i < N; i++){
        scanf("%d", &g);
        a[g]++;
    }
    int n,c;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &c);
        if(i)cout << " ";
        cout << a[c];
    }
    return 0;
}