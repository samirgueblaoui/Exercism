#include "reverse_string.h"

namespace reverse_string {

std::string reverse_string(std::string s){
    std::string s_reverse;

    for(size_t i = 0; i < s.size(); i++){
        s_reverse += s[s.size() - i -1];
    }
    return s_reverse;
}

}  // namespace reverse_string
