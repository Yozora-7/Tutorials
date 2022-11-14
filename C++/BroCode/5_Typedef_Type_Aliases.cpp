#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
// New identifiers will typically end in "_t" for type

typedef std::string text_t;
typedef int number_t;

using text_t = std::string; // "Using" keyword is more popular, easier to use
using number_t = int;

int main(){

    // Typedef = reserved keyword used to create an additional name
    //           (alias) for another data type.
    //           New identifier for an existing type
    //           Helps with readability and reduces typos
    //           Use when there is a clear benefit
    //           Replaced with 'using' (works better w/ templates)

    // pairlist_t pairname;

    text_t firstName = "Jay";
    number_t age = 18;

    std::cout << firstName << "\n";
    std::cout << age << "\n";

    return 0;
}