#include <bits/stdc++.h>
using namespace std;

// forward declaration
class SinhVien;
class GiaoVien;



class SinhVien{
    friend class GiaoVien;  // Lop giao vien co the truy cap vao private cua slass SinhVien
	private:	// ko chi dinh access moduifer thi mac dinh la private
		string id, ten, ns;
		double gpa;
        static int dem;     // ko the khoi tao
	public: 	// Thuong chi khai bao, viet ham xay dung ben ngoai
		SinhVien();
        SinhVien(string, string, string, double);	// Cung la constructor
		void Nhap();
        void In();
        void TangDem();
        int getDem();
        friend void inthongtin(SinhVien);
        friend void chuanhoa(SinhVien&);

};

class GiaoVien{
    private:
        string khoa;
    public:
        void update(SinhVien&);
};

void GiaoVien::update(SinhVien& x){
    x.gpa = 3.20;
}

int SinhVien::dem = 0;

// Implementation
void chuanhoa(SinhVien &a){
    string res=" ";         // Luu ten sau chuan hoa
    stringstream ss(a.ten); // Chia chuoi thanh cac tu 
    string token;
    while(ss >> token){     // Luu vao token
        res += toupper(token[0]);
        for(int i=1; i<token.length(); i++){
            res += tolower(token[i]);
        }
        res += " ";
    }
    res.erase(res.length()-1);
    a.ten = res;
}
void inthongtin(SinhVien a){
    cout << a.id << " " << a.ten <<endl;
}
void SinhVien::TangDem(){
    ++dem;
}

int SinhVien::getDem(){
    return this->dem;
}

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

void SinhVien::Nhap(){
    ++dem;  
    this->id = "SV" + string(3-to_string(dem).length(), '0') + to_string(dem);
    // id co 3 chu so, neu thieu thi dien them 0
    cout << "Nhap ten :"; getline(cin, this->ten);    // De bo qua dau cach
    cout << "Nhap ns :"; cin >> this->ns;
    cout << "Nhap diem :"; cin >> this->gpa;
    cin.ignore();

}

void SinhVien::In(){
    cout << this->id <<" " << this->ten <<" "<< this->ns <<" " <<fixed <<setprecision(2) << this->gpa <<endl;   // 2 chu so sau dau phay
}


int main(){
    SinhVien x;
    x.Nhap();
    GiaoVien y;
    y.update(x);
    x.In();
    return 0;
}
