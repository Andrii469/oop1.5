
#include <iostream>
#include "triangle.h"

using namespace std;

void Triangle::Init(double a, double b, double c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

double Triangle::getA() const {
    return a;
}

void Triangle::setA(double a) {
    Triangle::a = a;
}

double Triangle::getB() const {
    return b;
}

void Triangle::setB(double b) {
    Triangle::b = b;
}

double Triangle::getC() const {
    return c;
}

void Triangle::setC(double c) {
    Triangle::c = c;
}

void Triangle::Read() {
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;

    if (((a + b) < c) || ((a + c) < b) || ((c + b) < a))
    {
        cout << "Error, side of triangle entered incorrectly" << endl;
        return  Read();
    }

}

void Triangle::Display()
{
    std::cout << toString() << std::endl;
}

string Triangle::toString()const
{
    return "Triangle: (" + to_string(a) + ", " + to_string(b) + ", " + to_string(c) + ")";
}

double Triangle::perimeter()
{
    
    return  a + b + c;
}

double Triangle::getAlpha() const
{
  
    return acos((b * b + c * c - a * a) / (2 * b * c));
}

double Triangle::getBeta() const
{
   
    return acos((a * a + c * c - b * b) / (2 * a * c));
}

double Triangle::getGamma()
{
    
    return acos((b * b + a * a - c * c) / (2 * b * a));
}