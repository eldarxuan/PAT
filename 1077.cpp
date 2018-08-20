#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;


int main()
{
#ifdef LOCAL
    freopen("a.in", "r", stdin);
	freopen("b.out", "w", stdout);
#endif

	int N,M;
	scanf("%d%d", &N, &M);
	
//printf("N=%d M=%d\n",N,M);

	for (int i = 0;i < N; i++) {
		int G2;
		scanf("%d", &G2);
		vector<int> G;
		//每行后几个循环
		for (int a = 0; a < N-1; a++) {
			int g;
			scanf("%d", &g);   // do not forget it..
			if(g >=0 && g <= M){
				G.push_back(g);
			}
			else continue;
//printf("G=%d\n", G);
		}
		//排序
		sort(G.begin(),G.end());
		//删除头尾
		G.erase(G.begin());
		G.pop_back();
		//求剩余总值
		double sum = 0;
		int n = G.size();
//printf("n=%d\n",n);
		for(int j = 0; j < n; j++){
			sum = sum + G[j];
		}
		//求平均值
		double G1;
		G1 = sum/n;
		int p;
		p = floor((G1 + G2)/2 + 0.5);
		printf("%d\n", p);
	}
	// */
	return 0;
}