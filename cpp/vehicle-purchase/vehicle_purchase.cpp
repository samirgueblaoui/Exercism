#include "vehicle_purchase.h"

namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.
bool needs_license(std::string kind) {
    if(kind == "car" || kind == "truck") return true;
    return false;
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {
    std::string mins, maxs;
    if(option1.size() <= option2.size()){
        mins = option1;
        maxs = option2;
    }
    else{
        mins = option2;
        maxs = option1;
    }

    for(size_t i = 0; i < mins.size(); i++){
        if(mins[i] < maxs[i]) return mins + " is clearly the better choice.";
        if(maxs[i] < mins[i]) return maxs + " is clearly the better choice.";
    }
    return "not yet implemented";
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    if(age < 3){
        return original_price * 80.0 / 100.0;
    }
    else if(age < 10){
        return original_price * 70.0 / 100.0;
    }
    else if (age >= 10){
        return original_price * 50.0 / 100.0;
    }
    return -1.0;
}

}  // namespace vehicle_purchase
