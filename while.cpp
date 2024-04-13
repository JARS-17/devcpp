#include <cstdio>
using namespace std;

int main(){
	int N;
	scanf("%d", &N);
	
	int i = 0;
	while(i < N){
		printf("tulisan ini dicetak saat i = %d\n", i);
		i++;
	} printf("akhir dari program\n");
	
	/*bentuk for
	for(<kondisi awal>; <kondisi_ulang>; <perubahan>){
	    <perintah 1>;
		<perintah 2>;
		<perubahan>;    
    } 
	 bentuk while
	 <kondisi awal>
	 while(<kondisi_ulang>){
	   <perintah 1>;
	   <perintah 2>;
	   <perubahan>;
    }
	*/
    
	
	return 0;
}
