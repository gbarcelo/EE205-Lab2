// These two lines are the opening part of what's called a "header guard"
// If this file is ever included more than one, it'll make sure that
// only one version of this code will show up to the compiler.
//
// In other words, it won't try to redefine things twice because it
// was included twice.
#ifndef POINT2D_HPP
#define POINT2D_HPP

// You'll need to turn this into a class.
// Make sure you use the concept of encapsulation,
// and hide the class's internal data.
class Point2D {
  private:
    float x;
    float y;
  public:
    // Constructors:
    Point2D();
    Point2D(float, float);

    // - Setters:
    void set_x(float f);
    void set_y(float f);

    // - Getters:
    float get_x(void);
    float get_y(void);

    // - Overloaders:
};

// lhs = "left hand side"
// rhs = "right hand side"
Point2D operator+(Point2D lhs, Point2D rhs);
Point2D operator-(Point2D lhs, Point2D rhs);
Point2D operator*(Point2D lhs, Point2D rhs);
Point2D operator/(Point2D lhs, Point2D rhs);

#endif // POINT2D_HPP
