#include "raindrops.h"

namespace raindrops {

std::string convert(int n){
    std::string s;
    if(n % 3 == 0){
        s += "Pling";
    }
    if(n % 5 == 0){
        s += "Plang";
    }
    if(n % 7 == 0){
        s += "Plong";
    }
    if(n % 3 != 0 && n % 5 != 0 && n % 7 != 0){
        s = std::to_string(n);
    }

    return s;
}

}  // namespace raindrops
