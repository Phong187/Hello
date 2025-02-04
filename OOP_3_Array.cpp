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
        double getGpa();
        string getId();
        string getName();
        string getns();
        void setGpa(double);
        ~SinhVien();	// Ham huy
};

// Implementation
SinhVien::SinhVien(){			// Khong co gia tri tra ve
	//cout <<"Ham khoi tao duoc goi !\n";		// Luon duoc goi ra khi khai bao 1 bien kieu SinhVien
	id = ten = ns = "";
	gpa = 0;
}

SinhVien::SinhVien(string id, string ten, string ns, double gpa){
	//cout <<"Ham khoi tao co tham so duoc goi !\n";
	this->id = id;      // Con tro this
	this->ten = ten;
	this->ns = ns;
	this->gpa = gpa;
}

SinhVien::~SinhVien(){
	//cout <<"Doi tuong duoc huy tai day !\n";
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

double SinhVien::getGpa(){
    return this->gpa;
}

void SinhVien::setGpa(double gpa){
    this->gpa = gpa;
}

bool cmp(SinhVien a, SinhVien b){
    return a.getGpa() > b.getGpa();
}

int main(){
	// int n; cin >> n;
    // SinhVien a[100];
    // for(int i=0; i<n; i++){
    //     a[i].Nhap();
    // }
    // sort(a, a+n, cmp);          // Ham sap xep co san
    // for(int i = 0; i<n; i++){
    //     a[i].In();
    // }

    // // Thay doi thuoc tinh
    // SinhVien x;
    // x.setGpa(2.8);

    // gan 2 SinhVien voi nhau
    SinhVien x;
    x.Nhap();

    SinhVien y=x;
    y.In();
    return 0;
}
