#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(7);
    vector<int>:: iterator it = v.begin();
    for(it = v.begin(); it != v.end(); it++)
        cout << *it<< ' ';
     return 0;
}
