#include <iostream>
using namespace std;
int main() 
{
int sum = 0;
for(int i=1; i<=50; i++){
if(i%2==0){
cout<<" "<<i;
sum+=i;
}
}
cout << "\nThe sum of all even numbers between 1 and 50 is."<<sum<<endl;
return 0;
}
