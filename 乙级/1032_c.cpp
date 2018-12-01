#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main()
{
	int N,a,b;
	cin >> N;
	//printf("%d",N);
	vector<int>sum;
	vector<int>va;
	map<int, int>mp;
	for(int i = 0; i < N; i++) {
		cin >> a >> b;
		//cout  <<  a << " " << b << endl;
	    //vector<int>sum;
		mp[0a] = b;
		cout << "mp[a] = " << mp[a] << endl;
		sum[a] = sum[a] + mp[a];
		cout << "sum[a] = " << sum[a] << endl;
		va[a] = a;
		cout << "va[a] = " << va[a] << endl;
		cout << sum[a];
	}
	/*for(int j = 0; j < sum.size(); j++){
		cout << sum[j];
	}*/	
	vector<int>New;
	sort(sum.begin(), sum.end());
	int max;
	max = sum[sum.size()-1];
	int A;
	for(int i = 0; i < New.size(); i++){
		if(New[i] == max){
			A = i;
			break;
		}
	}

	printf("%d %d",A,max);
	return 0;
}