#include "Point2D.hpp"

// Start class Point2D members:
// Variables:

// Methods:
// - Constructor:
Point2D::Point2D(void){
  this->x = 0;
  this->y = 0;
}
// - Setter:
void Point2D::set_x(float f){
  this->x = f;
}

void Point2D::set_y(float f){
  this->y = f;
}

// - Getter:
float Point2D::get_x(void){
  return this->x;
}
float Point2D::get_y(void){
  return this->y;
}

//
Point2D operator+(Point2D lhs, Point2D rhs);
Point2D operator-(Point2D lhs, Point2D rhs);
Point2D operator*(Point2D lhs, Point2D rhs);
Point2D operator/(Point2D lhs, Point2D rhs);
