#include "sum_of_multiples.h"

namespace sum_of_multiples {

int to(std::vector<int> v, int level){
    std::vector<int> multiple;
    for(int x : v){
        for(int i = x; i < level; i += x){
            if(std::find(multiple.begin(), multiple.end(), i) == multiple.end()){
                multiple.push_back(i);
            }
        }
    }
    int sum = 0;
    for(int x : multiple){
        sum += x;
    }

    return sum;
}

}  // namespace sum_of_multiples
