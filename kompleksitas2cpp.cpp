#include <iostream>
#include <cmath>
using namespace std;

int main(){
	//inisialisasi
	int n, r, c;	
	cin >> n;
	r = 1;
	c = n;
	
	int i=1;
	while(i*i <= n){
		if(n % i == 0){
			int j = n/i;
			if(abs(r-c) > abs (i-j)){
				r = i;
				c = j;
			}
		}
		i++;
	}
	cout << r <<" "<< c << endl;
	return 0;
}
