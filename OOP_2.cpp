#include <bits/stdc++.h>
using namespace std;

class SinhVien{

	private:	// ko chi dinh access moduifer thi mac dinh la private
		string id, ten, ns;
		double gpa;
	public: 	// Thuong chi khai bao, viet ham xay dung ben ngoai
		SinhVien();
        SinhVien(string, string, string, double);	// Cung la constructor
		void Nhap();
        void In();
        ~SinhVien();	// Ham huy
};

// Implementation
SinhVien::SinhVien(){			// Khong co gia tri tra ve
	cout <<"Ham khoi tao duoc goi !\n";		// Luon duoc goi ra khi khai bao 1 bien kieu SinhVien
	id = ten = ns = "";
	gpa = 0;
}

SinhVien::SinhVien(string id, string ten, string ns, double gpa){
	cout <<"Ham khoi tao co tham so duoc goi !\n";
	this->id = id;      // Con tro this
	this->ten = ten;
	this->ns = ns;
	this->gpa = gpa;
}

SinhVien::~SinhVien(){
	cout <<"Doi tuong duoc huy tai day !\n";
}

void SinhVien::Nhap(){
    cout <<"Nhap ID :"; cin >> this->id;
    cin.ignore();       // De bo qua Enter khi nhap
    cout << "Nhap ten :"; getline(cin, this->ten);    // De bo qua dau cach
    cout << "Nhap ns :"; cin >> this->ns;
    cout << "Nhap diem :"; cin >> this->gpa;
}

void SinhVien::In(){
    cout << this->id <<" " << this->ten <<" "<< this->ns <<" " <<fixed <<setprecision(2) << this->gpa <<endl;   // 2 chu so sau dau phay
}
int main(){
	SinhVien x;
    x.Nhap();
    x.In();
	return 1;
}
