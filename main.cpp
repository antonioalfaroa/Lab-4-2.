#include <iostream>

using namespace std;

class Rational{
public:
Rational(int n, int d);
Rational add(Rational first);
Rational sub(Rational first);
Rational mult(Rational first);
Rational div(Rational first);

private:
int numerator;
int denominator;


};

Rational::Rational(int n,int d){
numerator = n;
denominator = d;
  
}

Rational Rational::add(Rational first){
Rational r; //I wasnt able to do this exercise due that it allways gives me this error, even using a const object 
  r.numerator = r.numerator * denominator + r.denominator * numerator;
  r.denominator = r.denominator * denominator;
  
    return r;
}
Rational Rational::sub(Rational first){
  Rational r; 
  r.numerator = r.numerator * denominator - r.denominator * numerator;
  r.denominator = r.denominator * denominator;
  
    return r;
  
}
Rational Rational::mult(Rational first){
  Rational r; 
r.numerator = r.numerator* numerator;
  r.denominator = r.denominator * denominator;
  
    return r;
  
}
Rational Rational::div(Rational first){
  Rational r; 
r.numerator = r.denominator * numerator;
  r.denominator = denominator * r.numerator;
  
    return r;
  
}


int main(){
  Rational(4, 9);
  






  
}




