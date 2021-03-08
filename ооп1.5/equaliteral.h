#pragma once
#include <string>
#include "triangle.h"


using namespace std;

class Equilateral
{
private:
    Triangle triangle;
    double square_;

    void square();
public:
    double getSquare() const;
    const Triangle& getTriangle() const;
    void setTriangle(const Triangle& triangle);
    void Init(Triangle triangle);
    void Read();
    void Display();
    string toString();


};