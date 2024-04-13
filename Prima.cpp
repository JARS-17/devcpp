#include <bits/stdc++.h>
using namespace std;

//inisialisasi
int N;


int main(){
	//Masukan 
	cout << "Program Bilangan Prima \n";
	cout << "Masukkan Angka : ";
	cin >> N;
	
	//fungsi
	for(int i=1; i<=N; i++){
		if(i % 2 == 0){
			cout << "2 " ;
		}
		
		if(i % 3 == 0){
			cout << "3 " ;
		}
		
		if(i % 5 == 0){
			cout << "5 " ;
		}
		
		if(i % 7 == 0){
			cout << "7 " ;
		}
		
	} 
	cout << "Akhir dari program" << endl;
	
	return 0;
}
