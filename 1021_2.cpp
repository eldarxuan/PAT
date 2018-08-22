#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    string s;
    int a[10];
    cin >> s;
    memset(a,0,sizeof(a));
    for(int i =0; i < s.length(); i++){
        a[(s[i] - '0')]++;
        //printf("a%d = %d\n",(s[i] - '0'),a[(s[i] - '0')]);
        //cout << "a" << s[i] << " = " << a[s[i]] << endl;
    }
    int flag = 0;
    for(int i = 0; i < 10; i++){
        //cout << a[i] << endl;
        if(a[i] != 0){
            if(flag)cout << '\n';
            flag++;
            cout << i << ":" << a[i];
        }
    }
    return 0;
}