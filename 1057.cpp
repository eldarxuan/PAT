#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    vector<int> c;
    for(int i = 0; i < a.length(); i++){
        if(a[i] >= 65 && a[i] <= 90){
            c.push_back(a[i] - 'A' + 1);
        }else if(a[i] >= 97 && a[i] <= 122){    // a[i] <= 120
            c.push_back(a[i] -'a' + 1);
        }
    }
    //out << c.size() << endl;
    int N = 0;
    for(int i = 0; i < c.size(); i++){
        N = N + c[i];
        //cout << c[i] << ' ';//*/
    }
    //cout << N << endl;
    int x;
    int cnt0 = 0, cnt1 = 0;
    if(N > 0){
        while(N >= 2){
            x = N % 2;
            N = N / 2;
            if(x == 0){
                cnt0 ++;
            }else{
                cnt1 ++;
            }
        }
        if (N == 1){
            cnt1++;
        }
       // }
    }
    /*
    while (N != 0) {
        x = N % 2;
        N /= 2;
        (x) ? cnt1++ : cnt0++;
    }
    *
    cout << cnt0 << " " << cnt1;
    return 0;
}