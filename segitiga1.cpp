#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout << "program segitiga sama sisi" << endl;
	cout << "Pola ke-n : ";
	cin >> n;
	
	for(int i=1; i<=n; i++){
		for(int j=n; j>=i; j--){
			cout << " ";
		}
		for(int k=1; k<= (2*i-1); k++){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
