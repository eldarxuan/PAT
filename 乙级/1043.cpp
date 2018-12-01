#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    string str;
    cin >> str;
    string test = "PATest";
    map<char,int>mp;
    for(int i = 0; i < str.length(); i++){
        for(int j = 0; j < 6; j ++){
            if(str[i] == test[i]){
                mp[str[i]]++;
            }
        }
    }
    int a = mp[str[0]];
    for(int j = 0; j < 6; j++){
        if(mp[test[j]] > a){
            a = mp[test[j]];
        }
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < 6; j++){
            if(mp[test[j]] != 0){
                cout << test[j];
            }
        }
    }
    return 0;
}