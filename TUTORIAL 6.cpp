#include<iostream> 
using namespace std; 

class complex { 
    float real, img; 
public: 
    void accept(float r, float i) { 
        real = r; 
        img = i; 
    } 
    
    void display() { 
        if (img >= 0) { 
            cout << real << " + " << img << "i"; 
        } else { 
            cout << real << " - " << -img << "i"; 
        } 
    } 
    
    complex operator+(complex b)
    { complex sum;
        sum.real = real + b.real; 
        sum.img = img + b.img;
        return sum;
    } 
    complex operator-(complex b)
    { complex subt;
        subt.real = real - b.real; 
        subt.img = img - b.img;
        return subt;
    }
    complex operator^(complex b)
    { complex mult;
    mult.real = (real * b.real) - (img * b.img);
    mult.img  = (real * b.img)  + (img * b.real);
    return mult;
    }
    complex operator&(complex b)
    { complex divi;
    float denominator = (b.real * b.real) + (b.img * b.img);
    divi.real = (real * b.real + img * b.img) / denominator;
    divi.img  = (img * b.real - real * b.img) / denominator;
    return divi;
    }

}; 

int main() { 
    complex c1, c2, c3, c4, c5, c6; 
    
    c1.accept(3, -5); 
    c2.accept(9, 20); 
    
    cout << "c1 = "; 
    c1.display(); 
    cout << "\nc2 = "; 
    c2.display(); 
    
    c3=c1+c2; 
    cout << "\n\nAddition: "; 
    c3.display();
    
    c4=c1-c2;
    cout << "\n\nSubtraction:";
    c4.display();
    
    c5=c1^c2;
    cout << "\n\nMultiplication:";
    c5.display();
    
    c6=c1&c2;
    cout << "\n\nDivision:";
    c6.display();
    return 0; 
}
