#include <bits/stdc++.h>
using namespace std;

int main(){
	//inisialisasi 
	int x, y ,z;
	//inputan
	cout << "Masukkan angka : ";
	cin>>x;
	cout << "Masukkan angka : ";
	cin>>y;
	
	cout << "Operasi\n";
	cout << "[1] Penjumlahan\n";
	cout << "[2] Pengurangan\n";
	cout << "[3] Perkalian\n";
	cout << "[4] Pembagian\n";
	cout << "silahkan masukan nomor : ";
	cin >> z;
	
		
	
	
	switch(x && y){
		case 1:
		z = x + y;
		cout << z << endl;
		break;
		
		case 2:
		z = x - y;
		cout << z << endl;
		break;
		
		case 3:
		z = x * y;
		cout << z << endl;
		break;
		
		case 4:
		z = x / y;
		cout << z << endl;
		break;
	}
	cout << "Akhir dari program ini" << endl;

	
	return 0;
}

