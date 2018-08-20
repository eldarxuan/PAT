#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int gp, gs, gk, ap, as, ak, ncp, nca, nc, a;
    char c;
    cin >> gp >> c >> gs >> c >> gk;
    cin >> ap >> c >> as >> c >> ak;
    ncp = ((gp * 17 + gs) * 29) + gk;
    nca = ((ap * 17 + as) * 29) + ak;
    nc = nca - ncp;
    if(nc >=0){
        a = 1;
    }else{
        a = -1;
    }
    nc = fabs(nc);
    int k, s, p;
    k = nc % 29;
    s = (nc / 29) % 17;
    p = nc / (29*17);
    cout << a*p << c << s << c << k;
    return 0;
}