#include "Person.hpp"
//#include "Point2D.hpp"
//#include <string.h>

// Methods:
// - Constructors:
Person::Person(void) : name(""), loc(0,0) { }
Person::Persion(std::string n, float x, float y) : name(n), pos(x, y) { }

// - Setters:
void Person::set_name(std::string n){
	this->name = n;
}

void Person::set_location(float x, float y){
	this->pos = Point2D(x, y);
}

// - Getters:
std::string Person::get_name(void){
	return this->name;
}

Point2D Person::get_location(void){
	return this->pos;
}
