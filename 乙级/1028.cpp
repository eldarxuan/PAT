#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
#ifdef LOCAL
    freopen("a.in", "r", stdin);
    freopen("b.out", "w", stdout);
#endif
    int N;
    cin >> N;
    vector<string>names;
    vector<int>y;
    vector<int>m;
    vector<int>d;
    string name;
    char xie1, xie2;
    int yyyy, mm, dd , dy;
    for(int i = 0; i < N; i++){
        cin >> name >> yyyy >> xie1 >> mm >> xie2 >> dd;
        dy = 2014 - yyyy;
        if(dy < 0){   // 今天之后出生
            continue;
        if(dy > 200){
            continue;
        }

        if(dy == 200){    // 在200年前的今天出生
            if(mm < 9){
                continue;
            }else if(mm == 9 && dd < 6){
                continue;
            }
            names.push_back(name);
            y.push_back(yyyy);
            m.push_back(mm);
            d.push_back(dd);
        }
        if(dy < 200){      // 正常if
            names.push_back(name);
            y.push_back(yyyy);
            m.push_back(mm);
            d.push_back(dd);
        }else if(dy == 0){
            if(mm > 9){
                continue;
            }else if(mm == 9 && dd < 6){
                continue;
            }
            names.push_back(name);
            y.push_back(yyyy);
            m.push_back(mm);
            d.push_back(dd);
        }
    }
    int length = names.size();
    for(int j = 0; j < length; j++){
        if(y[0] < y[j]){
            names[0] = names[j];
            y[0] = y[j];
            m[0] = m[j];
            d[0] = d[j];
        }else if(m[0] == m[j] && d[0] < d[j]){
            names[0] = names[j];
            y[0] = y[j];
            m[0] = m[j];
            d[0] = d[j];
        }
    }
    for(int j = 0; j < length; j++){
        if(y[length - 1] > y[j]){
            names[length - 1] = names[j];
            y[length - 1] = y[j];
            m[length - 1] = m[j];
            d[length - 1] = d[j];
        }else if(m[length - 1] == m[j] && d[length - 1] > d[j]){
            names[length - 1] = names[j];
            y[length - 1] = y[j];
            m[length - 1] = m[j];
            d[length - 1] = d[j];
        }
    }
    if(length == 0) {
        cout << length << endl;
    } else {
        cout << length << " " << names[length - 1] << " " << names[0] << endl;
    }
    //cout << length << " " << names[length - 1] << " " << names[0];
    return 0;
    }
}