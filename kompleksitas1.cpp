//#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a, b, c;
	cin >> a;
	b = 1;
	c = a;
	for(int i=1; i<=a; i++){
		for(int j=1; j<=a; j++){
			if(i*j == a){
				if(abs(b-c) > abs(i-j)){
					b = i;
					c = j;
				}
			}
		}
	}
	cout << c <<" "<< b << endl;
	
	
	return 0;
}
