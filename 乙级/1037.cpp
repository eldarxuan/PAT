#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int Pg, Ps, Pk, Ag, As, Ak, g, s, k;
    char c;
    cin >> Pg >> c >> Ps >> c >> Pk;
    cin >> Ag >> c >> As >> c >> Ak;
    k = Ak - Pk;
    if(k < 0){
        s = As - Ps - 1;
        k = 29 + k;
    }else{
        s = As - Ps;
    }
    if(s < 0){
        g = Ag - Pg -1;
        s = 17 + s;
    }else{
        g = Ag - Pg;
    }
    if(g < 0){
        g = g + 1;
    }
    cout << g << c << s  << c << k;
    return 0;
}