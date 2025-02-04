#include <bits/stdc++.h>
using namespace std;

class SinhVien{
	private:	
		string id, ten, ns;
		double gpa;
	public: 	
        friend istream& operator >> (istream &in, SinhVien& a);
        friend ostream& operator << (ostream &out, SinhVien a);
        // bool operator < (SinhVien a);
        friend bool operator < (SinhVien a, SinhVien b);
};

// bool SinhVien:: operator < (SinhVien a){
//     return this->gpa < a.gpa;
// }

bool operator < (SinhVien a, SinhVien b){
    return a.gpa < b.gpa;
}

istream& operator >> (istream &in, SinhVien& a){
    cout << "Nhap id : ";
    cin >> a.id;
    cout << "Nhap ten :";
    cin.ignore();
    getline(in, a.ten);
    cout << "Nhap ngay sinh : ";
    cin >> a.ns;
    cout << "Nhap diem so : ";
    cin>>a.gpa;
    return in;
}

ostream& operator << (ostream &out, SinhVien a){
    cout << a.id << " " << a.ten << " " << a.ns << " " << fixed << setprecision(2) << a.gpa <<endl;
    return out;
}
int main(){
    // SinhVien x, y;
    // cin >> x >> y;
    // //cout << x;
    // if(x<(y))
    //     cout << "YES";
    // else   
    //     cout << "NO";
    // return 0;
    int n;
    cin >> n;
    SinhVien a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a, a+n);
    for(SinhVien x: a){
        cout << x;
    }
}
