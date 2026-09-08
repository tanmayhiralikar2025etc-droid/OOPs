//Write a  c++ program to print pascal triangle as per no of rows entered by the user.
#include <iostream>
using namespace std;

int fact(int k){
    int res = 1 ;
    for (int i = k ; i>1 ; i--){
        res*=i;
    }
    return res ; 
}

int binoCoeff(int d , int m){
    int coeff ; 
    coeff = fact(d)/(fact(m)*fact(d-m));
    return coeff ; 
}

void printPascal(int s){
    for(int i =0 ; i<s ; i++){
        for(int j = 0 ; j<= i ; j++){
            cout<<"\t"<<binoCoeff(i,j);
        }
        cout<<endl;
    }
}

int main(){
    int r ; 
    cout<<"Enter number of rows :";
    cin>>r;
    printPascal(r);
    return 0;
}
