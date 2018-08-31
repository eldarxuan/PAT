#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    int n;
    scanf("%d",&n);
    struct student{
        string name[1000];
        string number[1000];
        int grade[1000];
    };
    student students;
    string NAME, NUMBER;
    int GRADE;
    for(int i = 0; i < n; i++){
        //cout << "begin";
        //scanf("%s%s%d", students.name[i], students.number[i], &students.grade[i]);
        cin >> NAME >> NUMBER >> GRADE;//scanf 无法直接读入到字符串，只能读入到字符数组
        students.name[i] = NAME;
        students.number[i] = NUMBER;
        students.grade[i] = GRADE;
        //cout << NAME << endl;
    }
    /*student students = {
        for(int i = 0; i < n; i++){
            scanf("%s%s%d", &name[i], &number[i], &grade[i]);
        }
    }*/
    int cmax, cmin, gmax = 0, gmin = 100;
    for(int i = 0; i < n; i++){
        if(students.grade[i] > gmax){
            gmax = students.grade[i];
            cmax = i;
        }
        if(students.grade[i] < gmin){
            gmin = students.grade[i];
            cmin = i;
        }
    }
    cout << students.name[cmax] << ' ' << students.number[cmax] << endl;
    cout << students.name[cmin] << ' ' << students.number[cmin];
    return 0;
}