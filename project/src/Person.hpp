#ifndef PERSON_HPP
#define PERSON_HPP

#include "Point2D.hpp"

// std::string is a class from the C++ standard
// library that can be default-constructed
// and constructed from a C-style string (string
// literal like "Hello world")
#include <string>

// Make sure to use both Point2D and std::string
// as member variables in the class below.
class Person { 
	private:
		std::string name;
		Point2d pos;
	public:
		// Constructors:
		Person(void);
		Person(std::string,float,float);
		
		// Setters:
		void set_name(std::string);
		void set_location(float, float);

		// Getters:
		void get_name(void);
		void get_location(void);
};

#endif // PERSON_HPP
