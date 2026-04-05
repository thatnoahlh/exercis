#include "raindrops.h"


namespace raindrops {

// TODO: add your solution here
    std::string rain;

    std::string convert(int num){
        rain = "";
        
        if((num % 3 != 0) && (num % 5 != 0) && (num % 7 != 0)){
            return std::to_string(num);
        }
        if(num % 3 == 0){
            rain = rain + "Pling";
        }
        if(num % 5 == 0){
            rain = rain + "Plang";
        }
        if(num % 7 == 0){
            rain = rain + "Plong";
        }
        return rain;
    }

}  // namespace raindrops
