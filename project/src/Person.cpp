#include "Person.hpp"
//#include "Point2D.hpp"
//#include <string.h>

// Methods:
// - Constructors:
Person::Person(void) : name(""), pos(0,0) { }
Person::Person(std::string n, float x, float y) : name(n), pos(x, y) { }

// - Setters:
void Person::set_name(std::string n){
	this->name = n;
}

void Person::set_location(Point2D p){
	this->pos = p;
}

// - Getters:
std::string Person::get_name(void){
	return this->name;
}

Point2D Person::get_location(void){
	return this->pos;
}
