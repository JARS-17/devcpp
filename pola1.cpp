#include <bits/stdc++.h>
using namespace std;

int main(){
	//inisialisasi
	int N, M;
	cout << "banyak baris : ";
	cin>>N;
	cout << "banyak kolom : ";
	cin>>M;

	//fungsi
	for(int i=0; i<N; i++){
		for (int j=0; j<M; j++){
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}
