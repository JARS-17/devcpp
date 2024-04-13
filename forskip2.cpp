#include<cstdio>
using namespace std;

int main(){
	int N;
	scanf("%d", &N);
	
	for(int i = 1; i < N; i *= 2){
		printf("tulisan ini dicetak saat i = %d\n", i);
	}   printf("akhir dari program");
	return 0;
}
