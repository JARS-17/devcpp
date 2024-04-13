#include<cstdio>
using namespace std;

int main(){
	int N;
	scanf("%d", &N);
	
	int i = 1;
	do{
		printf("tulisan ini dicetak saat i = %d\n", i);
		i++;
	} while(i < N);
	printf("akhir dari program");
	return 0;
}

/*bentuk do while
do{
<perintah 1>;
<perintah 2>;
} while(<kondisi>);*/
