// Always include the original .hpp that corresponds to the .cpp
#include "point_in_polygon.hpp"
#include "Point2D.hpp"

// Here is the original C version from Stack Overflow.
//
// Adapt it to use Person objects and a Person array
// instead of just pure x/y coordinates.
//
// Make the function match the types in the function
// declaration in "point_in_polygon.hpp"
//
// Remember -- the algorithm already essentially works!
//
// You just need to have it use our C++ object type now!
//

/*
vertx, verty = loc
testx, testy = pos
nvert = nloc ????

for (i = 0, j = nloc-1; i < nloc; j = i++){
        if (((loc->y[i] > pos->y) !=
                  (loc->y[j] > pos->y)) && (pos->x <
                      (loc->x[j] - loc->x[i]) *
                      (pos->y - loc->y[i]) /
                      (loc->y[j] - loc->y[i]) + loc->x[i]) ) {
    c = !c;
}
*/

bool pnpoly(int nvert, Person * points, Person test) {
    Person * loc = points;
    Person pos = test;
    int nloc = nvert;

    int i, j, c = 0;
    for (i = 0, j = nvert-1; i < nvert; j = i++) {
      if (((loc[i].get_location().get_y() > pos.get_location().get_y()) !=
                (loc[j].get_location().get_y() > pos.get_location().get_y())) && (pos.get_location().get_x() <
                    (loc[j].get_location().get_x() - loc[i].get_location().get_x()) *
                    (pos.get_location().get_y() - loc[i].get_location().get_y()) /
                    (loc[j].get_location().get_y() - loc[i].get_location().get_y()) + loc[i].get_location().get_x()) ) {
            c = 1;
        }
    }
    return c;
}

    // Etc Methods:
