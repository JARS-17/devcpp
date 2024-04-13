#include <bits/stdc++.h>
using namespace std;

int main(){
	//inisialisasi
	int n;
	cout << "Program segitiga \n";
	cout << "Pola ke-n : ";
	cin >> n;
	
	//fungsi
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout << " ";
		}
		for(int k=n; k>=(2*i-n); k--){
			cout << "*";
		}
		cout << endl;
	}
	
	
	return 0;
}
