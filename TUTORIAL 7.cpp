#include <iostream> using namespace std;

class Complex
{
float real, imag;

public:
Complex()
{
real = 0;
imag = 0;
}

Complex(float r, float i)
{
real = r; imag = i;
}

// Display the complex number void display()
{
cout << real;

if (imag >= 0)
cout << " + " << imag << "i"; else
cout << " - " << -imag << "i";
 
cout << endl;
}

// Overload + operator Complex operator+(Complex c)
{
return Complex(real + c.real, imag + c.imag);
}

// Overload - operator Complex operator-(Complex c)
{
return Complex(real - c.real, imag - c.imag);
}

// Overload * operator Complex operator*(Complex c)
{
return Complex(
real * c.real - imag * c.imag, real * c.imag + imag * c.real
);
}

// Overload / operator Complex operator/(Complex c)
{
float denominator =
c.real * c.real + c.imag * c.imag;

return Complex(
(real * c.real + imag * c.imag) / denominator, (imag * c.real - real * c.imag) / denominator
);
}
};

int main()
{
Complex c1(5, 6), c2(2, 8), result;
 
cout << "First complex number: "; c1.display();

cout << "Second complex number: "; c2.display();

result = c1 + c2;
cout << "\nAddition: "; result.display();

result = c1 - c2;
cout << "Subtraction: "; result.display();

result = c1 * c2;
cout << "Multiplication: "; result.display();

result = c1 / c2; cout << "Division: "; result.display();

return 0;
}
