#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string a[10]= {"fajar", "ginda"};
	string b[10]= {"Mtk", "Biologi", "Kimia", "Fisika"};
	
	cout << "isi himpunan A = {";
	for (int i=0; i<2; i++){
		cout << a[i] << ",";
	}
	cout << "}" << endl;
	
	cout << "isi himpunan B  = {";
	for(int j=0; j<4; j++){
		cout << b[j] << ",";
	}
	cout << "}" << endl;
	
	cout << "Gabungan  himpunan A dan B = {";
	for(int i=0; i<2; i++){
		for(int j=0; j<4; j++){
			cout << "(" << a[i] << "," << b[j] << ")";
		}
	}
	cout << "}" << endl;
	  
	return 0; 
}
