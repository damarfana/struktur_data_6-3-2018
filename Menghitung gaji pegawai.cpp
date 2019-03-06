#include<iostream>
using namespace std;
struct krw{
    float gajit=0;
    int jam=0;
    string nama;
};
krw krywn[100];

int main(){
	int gaji =500,jml;

    cout<<"masukan jumlah karyawan : ";
    cin>>jml;

	for(int i=0;i<jml;i++){

        cout<<"karyawan "<<i+1<<endl;
        cout<<"jam kerja:";
        cin>>krywn[i].jam;

        if(krywn[i].jam<=7){
            krywn[i].gajit=krywn[i].jam*gaji;
        }else{
            krywn[i].gajit += 7*gaji;
            krywn[i].gajit +=(krywn[i].jam-7)*(gaji*15);
        }
        cout<<"Jumlah gaji: "<<krywn[i].gajit<<endl;
	}

}
