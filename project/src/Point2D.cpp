#include "Point2D.hpp"

// Start class Point2D members:
// Variables:

// Methods:
// - Constructors:
Point2D::Point2D() : x(0),y(0) { }

Point2D::Point2D(float x, float y) : x(x),y(y) { }

// - Setters:
void Point2D::set_x(float f){
  this->x = f;
}

void Point2D::set_y(float f){
  this->y = f;
}

// - Getters:
float Point2D::get_x(void){
  return this->x;
}

float Point2D::get_y(void){
  return this->y;
}

//
Point2D operator+(Point2D lhs, Point2D rhs){
  Point2D fin(lhs.get_x()+rhs.get_x(),lhs.get_y()+rhs.get_y());
  //fin.set_x();
  //fin.set_y();
  return fin;
}
Point2D operator-(Point2D lhs, Point2D rhs){
  Point2D fin(lhs.get_x()-rhs.get_x(),lhs.get_y()-rhs.get_y());
  return fin;
}
Point2D operator*(Point2D lhs, Point2D rhs){
  Point2D fin(lhs.get_x()*rhs.get_x(),lhs.get_y()*rhs.get_y());
  return fin;
}
Point2D operator/(Point2D lhs, Point2D rhs){
  Point2D fin(lhs.get_x()/rhs.get_x(),lhs.get_y()/rhs.get_y());
  return fin;
}
