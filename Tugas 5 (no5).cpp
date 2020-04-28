//5. Buat program sederhana untuk membaca file ekstensi (*.txt) yang telah tersimpan dan berisi "saya membuka file"

#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream belajar;
	belajar.open("Kelincipercobaan2.txt",ios::app);
	belajar<<"Saya belajar membuat file"<<endl;
	
	if(!belajar.fail()){
		belajar<<"Saya membuka file"<<endl;//akan dituliskan ke dalam file .txt nantinya
		belajar.close();
		cout<<"Text telah ditulis ke dalam File(.txt)"<<endl; //jika output if yang muncul maka file behasil dibuat kedalam .txt
	}else{
		cout<<"File tidak ditemukan"<<endl;//jika output else yang muncul maka file tdk ditemukan dan file .txt gagal dibuat
	}
	return 0;
}
