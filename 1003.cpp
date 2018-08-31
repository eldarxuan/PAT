#include<iostream>
#include<string>
using namespace std;
int main()
{
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    int N;
    cin >> N;
    string str;
    for(int j = 0; j < N; j++){
        cin >> str;
        int a = 0;
        int count1 = 0;
        int count2 = 0;
        int count3 = 0;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] != 'P' && str[i] != 'A' && str[i] != 'T'){
                a = 4;
                break;
            }
            if(str[i] == 'A' && a == 0){
                count1 ++;
                continue;
            }
            if(str[i] == 'P'){
                a = 1;
                continue;
            }
            if(str[i] == 'A' && a == 1){
                count2 ++;
                continue;
            }
            if(str[i] == 'T'){
                a = 2;
                continue;
            }
            if(str[i] == 'A' && a == 2){
                count3 ++;
                continue;
            }
        }
        if(a == 4){
            cout << "NO" << endl;
        }else if(count2 == 0){
            cout << "NO" << endl;
        }else if(count3 / count2 == count1){
            //cout << "YES" << ' ' << count1 << ' ' << count2 << ' ' <<count3 << endl;
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
            //cout << "NO" << ' ' << count1 << ' ' << count2 << ' ' <<count3 << endl;
        }
    }
    return 0;
}