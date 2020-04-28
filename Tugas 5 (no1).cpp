//1. Buat program sederhana untuk membuka file ekstensi (*.txt) yang berisi "Saya belajar membuat file"

#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream belajar;
	belajar.open("Kelincipercobaan.txt",ios::app);
	belajar<<"Saya belajar membuat file"<<endl;
	
	if(!belajar.fail()){
		cout<<"Text telah ditulis ke dalam File(.txt)"<<endl; //jika output if yang muncul maka file behasil dibuat kedalam .txt
	}else{
		cout<<"File tidak ditemukan"<<endl;//jika output else yang muncul maka file tdk ditemukan dan file .txt gagal dibuat
	}
	return 0;
}
