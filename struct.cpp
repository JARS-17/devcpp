#include <cstdio>
using namespace std;	

int main() {
	//inisialisasi
	struct titik {
		int x, y;
	};
	titik a, b;
	//fungsi
	a.x = 5;
	a.x = 3;
	
	b.x = 1;
	b.y = 2;
	
	//cetak
	printf("titik-1(%d, %d)\n", a.x, a.x);
	printf("titik-2(%d, %d)\n", b.x, b.y);
	return 0;
}
