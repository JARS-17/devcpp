#include <iostream>
using namespace std;

int main(){
	int a[10] = {2,3,4};
	int b[10] = {2,4,6,8};
	
	cout << "isi himpunan A = {";
	for(int i=0; i<3; i++){
		cout << a[i] << ",";
	}
	cout << "}" << endl;
	
	cout << "isi himpunan B = {";
	for(int j=0; j<4; j++){
		cout << b[j] << ",";
	}
	cout << "}" << endl;
	
	cout << "Gabungan himpunan A habis dibagi B {";
	for(int i=0; i<3; i++){
		for(int j=0;j<4; j++){
			if(b[j] % a[i] == 0 ){
				cout << "(" << a[i] << "," << b[j] << ")";
			}
		}
	}
	cout << "}" << endl;
	return 0;
}
