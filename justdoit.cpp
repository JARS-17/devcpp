#include <iostream>
#include <cmath>
using namespace std;

// inisialisasi 
int x, y, z;

int main(){
	//ini adalah program operasi matematika
	cin >> x;
	y = x;
	z = y + x;
	x = x * y + z;
	y = x * y + z;
	z = x * y + z;
	if(y * x == 15 ){
		x = y;
		y = x;
		cout << "nilai x = " << x << " dan y = " << y << "\n";
	} else{
	cout << x << " "<< y << " " << z << endl;}
	return 0;
}
