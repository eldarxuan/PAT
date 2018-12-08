#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()  
{
    int a, b, c;
    cin >> a >> b;
    c = a + b;
    string s = to_string(c);
    int N;
    N = s.length();
    int begin = 0;
    if(c < 0){
        begin = 1;
        cout << s[0];}
    int r;
    r = N % 3;
    int d;
    for(int i = begin; i < N; i++){
        cout << s[i];
        d = N-i-1;
        if(i < N-1 && d % 3 == 0){
            cout << ",";
        }
    }
    return 0;
}