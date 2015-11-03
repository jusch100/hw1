#include <iostream>
using namespace std;
int main(){
 int N;
 cout << "N" << endl;
 cin >> N;
//  cout << N << endl;
 
 int f = 0;
 int a = 0;
 int b = 1;
  if (N == 0) f = a;
  if (N == 1) f = b;
 for (int i = 1; i < N; i++) { 
  f = b + a;
  a = b;
  b = f;
 }
 cout << N << "	" << f << endl;
return 0; 
}