#include<cstdio>
using namespace std;

int main(){
	int awal, akhir;
	scanf("%d %d", &awal, &akhir);
	
	int jumlah = 0;
	int i = awal;
	while(i <= akhir){
		jumlah += 1;
		i++;
	} 
	printf("jumlah bilangan bulat di antara %d dan %d(inklusif) adalah %d\n"
	, awal, akhir, jumlah);
	return 0;
}
