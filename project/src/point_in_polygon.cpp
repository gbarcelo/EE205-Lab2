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

int pnpoly(
        int nvert,
        float *vertx,
        float *verty,
        // Point2D * loc,
        float testx,
        float testy
        // Person per) {
    int i, j, c = 0;
    for (i = 0, j = nvert-1; i < nvert; j = i++) {
      //if (((loc[i]->get_y()>per.get_y) !=
        if (((verty[i]>testy) !=
                    (verty[j]>testy)) && (testx <
                        (vertx[j]-vertx[i]) *
                        (testy-verty[i]) /
                        (verty[j]-verty[i]) + vertx[i]) ) {
            c = !c;
        }
    }
    return c;
}

    // Etc Methods:
