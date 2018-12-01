#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<cctype>
using namespace std;
struct student{
    string num;
    int grade;
    string school;
};
struct danwei{
    string name;
    int grade_s;
    int sum;
};
int cmp (danwei a, danwei b){
    if (a.grade_s != b.grade_s){
        return a.grade_s > b.grade_s;
    }
    else if (a.sum != b.sum){
        return a.sum < b.sum;
    }
    else{
        return a.name < b.name;
    }
}
int main()
{
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    int N;
    cin >> N;
    int x;
    map<string, int>gi;
    map<string, int>si;
    student temp;
    vector<danwei> a;
    for(int i = 0; i < N; i++){
        cin >> temp.num >> temp.grade >> temp.school;
        //si[temp.school]++;
        for(int j = 0; j < temp.school.size(); j++){
            temp.school[j] = tolower(temp.school[j]);
        }
        si[temp.school]++;
        if (temp.num[0] == 'B'){
            gi[temp.school] += temp.grade / 1.5;
        }
        else if (temp.num[0] == 'A'){
            gi[temp.school] += temp.grade;
        }
        else{
            gi[temp.school] += temp.grade * 1.5;
        }
    }
    si[temp.school]++;
    for(auto it = gi.begin(); it != gi.end(); it++){
        a.push_back(danwei{it->first, gi[it->first], si[it->first]});
    }
    sort(a.begin(), a.end(), cmp);
    cout << a.size() << endl;
    int haoma;
    for(int i = 0; i < a.size(); i++){
        cout << i+1 << " " << a[i].name << " " << a[i].grade_s << " " << a[i].sum << endl;
    }
    return 0;
}