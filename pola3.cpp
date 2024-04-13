#include <bits/stdc++.h>
using namespace std;

int main(){
	//inisialisasi
	int N;
	cout << "Program segitiga \n";
	cout << "Pola ke-n : ";
	cin >> N;
	
	//fungsi
	for(int i=1; i<=N; i++){
		for(int j=N; j>=i; j--){
			cout << "*";
		}
		cout << endl;
	}
	
	
	return 0;
}
