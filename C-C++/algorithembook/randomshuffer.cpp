#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    cout << "before shuffle:\t";
    for (int n : v) { cout << n << "   "; }
    cout << endl;
    random_device rd;
    mt19937 rng(rd());
    shuffle(v.begin(), v.end(), rng);
    cout << "after shuffle: \t";
    for (int n : v) {cout << n << "   ";}
    cout << endl;
    return 0;
}
