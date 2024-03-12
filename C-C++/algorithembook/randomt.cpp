#include<bits/stdc++.h>
using namespace std;

int main(){
  std::random_device rd;
  std::mt19937 gen(rd()); 
  std::uniform_int_distribution<> d1(1, 20); 
  std::uniform_int_distribution<> d2(1, 8);
  std::uniform_int_distribution<> d3(1, 6);
  int d20 = d1(gen); 
  cout << d20 <<  "\n";
  int d8 = d2(gen);
  cout << d8 << "\n";
  int d6 = d3(gen);
  cout << d6 << "\n";
}
