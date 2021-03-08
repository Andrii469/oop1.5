
#include <iostream>
#include "equaliteral.h"

using namespace std;

double Equilateral::getSquare() const {
    return square_;
}

const Triangle& Equilateral::getTriangle() const {
    return triangle;
}

void Equilateral::setTriangle(const Triangle& triangle) {
    Equilateral::triangle = triangle;
}

void Equilateral::Init(Triangle triangle) {
    this->triangle = triangle;
}

void Equilateral::Read() {
    double side = 0;
    cout << "Enter side equilateral triangle: "; cin >> side;
    triangle.Init(side, side, side);
    square();
}

void Equilateral::Display() {
    cout << toString();
}

string Equilateral::toString() {
    return "Equilateral " + triangle.toString() + " with square: " + to_string(square_);
}

void Equilateral::square() {
    square_ = sqrt(3) * pow(triangle.getA(), 2) / 4;
}
