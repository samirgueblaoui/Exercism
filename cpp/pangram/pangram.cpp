#include "pangram.h"
#include <algorithm>

namespace pangram {

std::string maj_to_min(std::string s){
    std::string s_min;
    for(char x : s){
        if(65 <= x && x <= 90){
            x += 32;
            s_min += x;
        }
        else {
            s_min += x;
        }
    }
    return s_min;
}

bool is_pangram(std::string s){
    std::string alphabet = "azertyuiopqsdfghjklmwxcvbn";

    std::string s_min = maj_to_min(s);

    for(char x : alphabet){
        if(std::count(s_min.begin(), s_min.end(), x) == 0){
            return false;
        }
    }

    return true;
}

}  // namespace pangram
