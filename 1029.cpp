#include<iostream>
#include<string>
#include<cctype>
#include<map>
using namespace std;
int main()
{
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    string s1,s2;
    int N,n;
    cin >> s1 >> s2;
    N = s1.length();
    n = s2.length();
    map<char, int>mp;
    map<char,char>pt;
    for(int i = 0; i < N; i++){
        s1[i] = toupper(s1[i]);
        mp[s1[i]] = 0;
    }
    for(int i = 0; i < n; i++){
        s2[i] = toupper(s2[i]);
        mp[s2[i]]++;
    }
    for(int i = 0; i < N; i++){
        if(mp[s1[i]] == 0){
            pt[s1[i]] = s1[i];
        }
    }
    for(auto it = pt.begin(); it!= pt.end(); it++)
        cout << it -> first;
    return 0;
}