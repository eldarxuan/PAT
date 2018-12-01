#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    int c; 
    int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0;
    c = getchar();
    //printf("%c\n", c);
    while( (c = getchar()) != EOF){
        // c = getchar();
        if(c == '0')c0++;
        else if(c == '1')c1++;
        else if(c == '2')c2++;
        else if(c == '3')c3++;
        else if(c == '4')c4++;
        else if(c == '5')c5++;
        else if(c == '6')c6++;
        else if(c == '7')c7++;
        else if(c == '8')c8++;
        else if(c == '9')c9++;
        //printf("%c",c);
        //cout << "c = " << c  <<endl;
    }
    
    //cout << c0;
    if(c0 != 0)cout << 0 << ":" << c0 << endl;
    if(c1 != 0)cout << 1 << ":" << c1 << endl;
    if(c2 != 0)cout << 2 << ":" << c2 << endl;
    if(c3 != 0)cout << 3 << ":" << c3 << endl;
    if(c4 != 0)cout << 4 << ":" << c4 << endl;
    if(c5 != 0)cout << 5 << ":" << c5 << endl;
    if(c6 != 0)cout << 6 << ":" << c6 << endl;
    if(c7 != 0)cout << 7 << ":" << c7 << endl;
    if(c8 != 0)cout << 8 << ":" << c8 << endl;
    if(c9 != 0)cout << 9 << ":" << c9 << endl;
    return 0;
}