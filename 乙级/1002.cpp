#include<iostream>
//#include<map>
#include<string>
#include<vector>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    #ifdef LOCAL
        freopen("a.in", "r", stdin);
        freopen("b.out", "w", stdout);
    #endif
    string str;
    cin >> str;
    //cout << str[1];
    /*for(int i = 0; i < str.length(); i++){
        cout << "str[" << i << "]" << " = " << str[i] << endl;
    }*/
    string a[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    /*a[0] = "ling";
    a[1] = "yi";
    a[2] = "er";
    a[3] = "san";
    a[4] = "si";
    a[5] = "wu";
    a[6] = "liu";
    a[7] = "qi";
    a[8] = "ba";
    a[9] = "jiu";*/
    int sum = 0;
    for(int i = 0; i < str.length(); i++){
        //int A = str[i] - '0';
        sum += (str[i] - '0');
    }
    //cout << "sum = " << sum << endl;
    string B = to_string(sum);
    for(int i = 0; i < B.length(); i++){
        if(i){
            cout << " ";
        }
        cout << a[B[i] - '0'];
    }
        return 0;
}