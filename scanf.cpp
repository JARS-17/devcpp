#include <cstdio>
using namespace std;

int main(){
	//inisialisasi
	int a, b, c, x, hasil;
	
	//beri nilai
	a = 1;
	b = 3;
	c = -2;
	
	//Input x
	scanf("%d", &x);
	//scanf("%d %d %d %d", &a, &b, &c, &d);
	hasil = a*x*x + b*x + c;
	printf("ax^2 + bx + c = %d\n", hasil);	
	return 0;
}
