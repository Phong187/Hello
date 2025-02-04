#include <bits/stdc++.h>
using namespace std;

class SoPhuc{
    private:
        int thuc, ao;
    public:
        friend istream& operator >> (istream& in, SoPhuc& a);
        friend ostream& operator << (ostream& out, SoPhuc a);
        // SoPhuc operator+ (SoPhuc another);
        // SoPhuc operator- (SoPhuc another);
        friend SoPhuc operator + (SoPhuc a, SoPhuc b);
        friend SoPhuc operator - (SoPhuc a, SoPhuc b);
        bool operator == (SoPhuc another);
};

bool SoPhuc:: operator== (SoPhuc another){
    // if(this->thuc == another.thuc && this->ao == another.ao)
    //     return true;
    // else
    //     return false;
    return this->thuc == another.thuc && this->ao == another.ao;
}

istream& operator >> (istream& in, SoPhuc& a){
    cout << "Nhap vao so phuc: ";
    cin >> a.thuc >> a.ao;
    return in;
}

ostream& operator << (ostream& out, SoPhuc a){
    cout  << a.thuc <<" + "<<a.ao <<"i\n";
    return out;
}

// SoPhuc SoPhuc:: operator+ (SoPhuc another){
//     SoPhuc result;
//     result.thuc = this->thuc + another.thuc;
//     result.ao = this->ao + another.ao;
//     return result;
// }

// SoPhuc SoPhuc :: operator- (SoPhuc another){
//     SoPhuc result;
//     result.thuc = this->thuc - another.thuc;
//     result.ao = this->ao - another.ao;
//     return result;
// }

SoPhuc operator+ (SoPhuc a, SoPhuc b){
    SoPhuc result;
    result.thuc = a.thuc + b.thuc;
    result.ao = a.ao + b.ao;
    return result;
}

SoPhuc operator- (SoPhuc a, SoPhuc b){
    SoPhuc result;
    result.thuc = a.thuc - b.thuc;
    result.ao = a.ao - b.ao;
    return result;
}
int main(){
    SoPhuc a, b;
    cin >> a >> b;
    // cout << a + b;
    // cout << a - b;
    if(a==b)
        cout << "YES";
    else  
        cout << "NO";
     return 0;

}
