#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    vector<vector<string> >str;
    // vector<string> line_vec;
    string line_s;
    int d1 = 0;
    int t1, t2,a;
    for(int i = 0; i < 3; i++){
        getline(cin,line_s);
        vector<string> line_vec;
        for(int i = 0; i < line_s.length(); i++){
            a = line_s[i];
            if(a == '['){
                d1++;
                t1 = i;
            }else if(a == ']'){
                t2 = i;
                string tmp = line_s.substr(t1+1, t2-t1-1);
                line_vec.push_back(tmp);
                // line_vec[d1-1] = line_s.substr(t1+1, t2-t1-1);
                //cout << line_vec[d1-1];
            }
        }
        //cout << endl;
        str.push_back(line_vec);
    }
    /*
    cout << "-----" <<  endl;
    for (int i = 0; i < str.size(); i++) {
        for (int j = 0; j < str[i].size(); j++) {
            cout << str[i][j] << " ";
        }
        cout << endl;
    }
    cout << "-----" << endl;
    */
/*
-----
╮ ╭ o ~\ /~ < > 
╮ ╭ o ~\ /~ < > ╯ ╰ ^ - = > < @ ⊙ 
╮ ╭ o ~\ /~ < > ╯ ╰ ^ - = > < @ ⊙ Д ▽ _ ε ^ 
-----
*/
    int N;
    cin >> N;
    //cout << N;
    int x;
    int y;
    //vector<int>list;
    for(int i = 0; i < N; i++){
        int a,b,c,d,e;
        cin  >> a >> b >> c >> d >> e;
        if(i/* != 0*/){cout << endl;}
        if(a >= str[0].size() || b >= str[1].size() 
            || c >= str[2].size() 
            || d >= str[1].size() || e >= str[0].size()){
                cout << "Are you kidding me? @\\/@";
            }else{
                cout << str[0][a-1] << "(" << str[1][b-1] << str[2][c-1] << str[1][d-1] << ")" << str[0][e-1];
            }
        /*for(int j = 0; j < 5; j++){
            cin >> y;
            //int x;
            //cout << y;
            if(j == 0){
                x = 0;
            }else if(j == 1){
                x = 1;
                cout << "(";
            }else if(j == 2){
                x = 2;
            }else if(j == 3){
                x = 1;
            }else if(j == 4){
                x = 0;  
                cout << ")";
            }
            
            if(y >= 1 && y <= str[x].size()){
                // list.push_back(y);
                // cout << str[x][list.end()-1];
                // cout << "x = " << x << endl;
                cout << str[x][y-1];
            }else{
                cout << "Are you kidding me? @\\/@";
                break;
            }
            //cout << str[x][list[list.size()-1]];// << str[1][list[1]] << str[2][list[2]] << str[3][list[3]] << str[3][list[4]] << endl;
        }
        cout << endl;*/
        //cout << str[0][list[0]] << str[1][list[1]] << str[2][list[2]] << str[3][list[3]] << str[3][list[4]] << endl;
    }
    /*for(int i =0; i < line_vec.size(); i++){
        cout << line_vec[i];
    } //*/
    return 0;
}