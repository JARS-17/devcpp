#include <bits/stdc++.h>
using namespace std;

//inisialisasi
int N;
int high[600000];

int M;
int high2[600000];

int main(){
	//baca masukan sampai EOF
	int h;
	while(cin>>h){
		if(N>0 && h == high[N-1]){
			continue;
		}
		high[N++] = h;
	}
	
	//fungsi
	for(int i=0; i<N; i++){
		bool x = false;
		
		//ujung
		if(i == 0 || i == N-1){
			x = true;
		}
		
		//bukit
		if(high[i-1] < high[i] && high[i] > high[i+1]){
			x = true;
		}
		
		//lembah
		if(high[i-1] > high[i] && high[i] < high[i+1]){
			x = true;
		}
		
		if(x){
			high2[M++] = high[i];
		}
	}
	 
	//output
	int out;
	for(int i=1; i<M; i++){
		int outs = abs(high2[i] - high2[i-1]);
		out = max(out, outs);
	} 
	cout << out << endl;
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
