#include<stdio.h>
int main()
{
	char a,o,b,A,C;
	int N,n;
	scanf("%d",&N);
	while(N--){
		n = 4;
		while(n--){
			getchar();
			scanf("%c%c%c",&a,&o,&b);
// printf("a=%c\n",a);
			if(b == 'T'){
				A = a;
			}
// printf("A%c\n",A);
		}
		if(A == 'A'){C = '1';}
		else if(A == 'B'){C = '2';}
		else if(A == 'C'){C = '3';}
		else if(A == 'D'){C = '4';}
		printf("%c",C);
	}
	return 0;
}