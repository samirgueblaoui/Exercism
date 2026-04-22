#include <string>

namespace log_line {
std::string message(std::string line) {
    if(line[1] == 'E') return line.substr(9); 
    if (line[1] == 'I') return line.substr(8); 
    if (line[1] == 'W') return line.substr(11); 
    return "Mauvais format";
}

std::string log_level(std::string line) {
    if(line[1] == 'E') return "ERROR"; 
    if (line[1] == 'I') return "INFO"; 
    if (line[1] == 'W') return "WARNING"; 
    return "Mauvais format";
}

std::string reformat(std::string line) {
    if(line[1] == 'E') return line.substr(9) + " (ERROR)"; 
    if (line[1] == 'I') return line.substr(8) + " (INFO)"; 
    if (line[1] == 'W') return line.substr(11) + " (WARNING)"; 
    return "Mauvais format";
}
}  // namespace log_line
