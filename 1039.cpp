#include<iostream>
#include<string>
#include<cstring>
#include<map>
#include<cstdio>
using namespace std;
int main()
{
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    map<char, int>mp;
    int cnt = 0;
    string line1, line2;
    string B = "Yes";
    cin >> line1 >> line2;
    //scanf("%s%s", &line1, &line2);
    //cout << line1 << endl;
    //cout << line2 << endl;
    for(int i = 0; i < line1.length(); i++){
        mp[line1[i]] = 0;
    }
    for(int i = 0; i < line1.length(); i++){
        //mp[line1[i]] = 0;
        mp[line1[i]]++;
    }
    for(int i = 0; i < line2.length(); i++){
        if(mp[line2[i]] > 0){mp[line2[i]]--;}
        else{B = "No"; cnt++;/*cout << "is" << " " << line2[i] << endl;*/}
    }
    if(B == "Yes")cnt = line1.length() - line2.length();
    cout << B << " " << cnt;
    return 0;
}