#include <iostream>
using namespace std;
int main() {
int r;
cout << "Enter the number of rows: ";
cin >> r;
for (int i = 0; i < r; i++) {
for (int space = 1; space <= r - i; space++) {
cout << " ";
}
int n = 1;
for (int j = 0; j <= i; j++) {
cout << n << " ";
n = n * (i - j) / (j + 1);
}
cout<<endl;
}
return 0;
}
