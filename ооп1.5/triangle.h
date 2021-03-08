#pragma once
#include <string>

using namespace std;

class Triangle
{
private:
    double a, b, c;
public:
    void Init(double a, double b, double c);
    double perimeter();
    double getAlpha() const;
    double getBeta() const;
    double getGamma();
    double getA() const;
    void setA(double a);
    double getB() const;
    void setB(double b);
    double getC() const;
    void setC(double c);
    void Read();
    void Display();
    string toString() const;

};
