#include <bits/stdc++.h>
using namespace std;

class SinhVien{

	private:	// ko chi dinh access moduifer thi mac dinh la private
		string id, ten, ns;
		double gpa;
	public: 	// Thuong chi khai bao, viet ham xay dung ben ngoai
		SinhVien();				// Constructor
		SinhVien(string, string, string, double);	// Cung la constructor
		void xinchao();
		void dihoc();
		~SinhVien();	// Ham huy
};

// Implementation
SinhVien::SinhVien(){			// Khong co gia tri tra ve
	cout <<"Ham khoi tao duoc goi !\n";		// Luon duoc goi ra khi khai bao 1 bien kieu SinhVien
	id = ten = ns = "";
	gpa = 0;
}

SinhVien::SinhVien(string ma, string name, string birth, double diem){
	cout <<"Ham khoi tao co tham so duoc goi !\n";
	id = ma;
	ten = name;
	ns = birth;
	gpa = diem;
}

SinhVien::~SinhVien(){
	cout <<"Doi tuong duoc huy tai day !\n";
}
// void SinhVien::xinchao(){
// 	cout<<"Hello !\n";
// }

// void SinhVien::dihoc(){
// 	cout <<"Di hoc !\n";
// }
void abc(){
	SinhVien y;
}
int main(){
	// //SinhVien x;		// Goi constructor ko co gia tri truyen vao
	// SinhVien x("0278","Phong", "2002", 23);
	// //x.dihoc();
	// //x.xinchao();
	// //cout << x.id <<endl;		// Bao loi khi de private
	// return 0;

	cout << "Xin chao !\n";
	SinhVien x;
	cout <<"Bye !\n";
	return 1;
}
