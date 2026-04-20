#pragma once

#include "Shape.hpp"


class Circle : public Shape {
    private :
    double r;

    public: 
    Circle(double r);

    double area() ;
    double perimeter() ;
    ~Circle();


};