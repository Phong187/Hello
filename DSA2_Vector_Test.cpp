#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    
    int n; cin >> n;
    while(n>0){
        int Action; cin >> Action;
        if(Action == 1){
            int temp; cin >> temp;
            a.push_back(temp);
        }
        else if(Action == 2){
            if(a.empty() == false)
                a.pop_back();
        }
        else
            cout <<"ERROR" <<endl;
        n--;
    }
    if(a.empty())
        cout << "EMPTY" <<endl;
    else{
        for(int i=0; i<a.size();i++)
            cout << a[i] << ' ';
        }
}
