#include<cstring>
#include<string>
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int N=0;
    string str;
    getline(cin,str);
    for(int i =0; i < str.length(); i ++){
        if (isalpha(str[i])) {
            N += tolower(str[i]) - 'a' + 1;
        }
    }
    int one = 0, zero = 0;
    int a;
    while(N !=0 ){
        a = N % 2;
        N = N / 2;
        if(a == 1){
            one++;
        }else{
            zero++;
        }
    }
    cout << zero << " " << one;
    return 0;
}