#include <bits/stdc++.h>
using namespace std;

int main(){
	
	bool ketemu,nolsemua;
    int matrix[10][10];
    int i,j,jumlah_simpul,jumlah_sisi,asal,tujuan;
    cout<<"jumlah simpul:";
    cin>>jumlah_simpul;
    cout<<"jumlah_sisi:";
    cin>>jumlah_sisi;
    for (i=1;i<=jumlah_simpul;i++){
        for (j=1;j<=jumlah_simpul;j++){
            matrix[i][j]=0;
        }
    }

    for (i=1;i<=jumlah_sisi;i++){
        cout<<"simpul asal:";
        cin>>asal; // 1
        cout<<"simpul tujuan:";
        cin>>tujuan;
            matrix[asal][tujuan]=1;
            matrix[tujuan][asal]=1;
    }


    i=1;
    nolsemua=false;
    while (i<=jumlah_simpul && nolsemua == false){
        j=1;
        ketemu=false;
        while (j<=jumlah_simpul && ketemu == false){
            if (matrix[i][j]==1){
                ketemu=true;
            }else{
                j++; //4
            }
        }

        if(ketemu == false){
            nolsemua=true;
        }else{
            i++; // 3
        }
    }

     if(nolsemua == true){
        cout<<"graf tidak terhubung";
     }else{
        cout<<"graf terhubung";
     }

	
	return 0;
}
