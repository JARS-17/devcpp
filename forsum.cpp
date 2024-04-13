#include<cstdio>
using namespace std;

int main(){
	int awal, akhir;
	scanf("%d %d", &awal, &akhir);
	
	int jumlah = 0;
	for(int i = awal; i <= akhir; i++){
		jumlah += 1;
	}
	printf("jumlah bilangan bulat antara %d dan %d(inklusif) adalah %d\n"
	, awal, akhir, jumlah);
	
	return 0;
}
