#include "darts.h"
#include <cmath>

namespace darts {

// TODO: add your solution here
    int score(double x, double y){
        double dist = sqrt(pow(x, 2) + pow(y, 2));

        if(dist > 10){
            return 0;
        } else if(dist > 5){
            return 1;
        } else if(dist > 1){
            return 5;
        } else {
            return 10;
        }
    }
    
}  // namespace darts
