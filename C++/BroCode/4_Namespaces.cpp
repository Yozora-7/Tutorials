#include <iostream>

// Namespaces allow for 2 or more entities to share the same name.

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

// A namespace provides a solution for preventing name conflicts in large projects.
// Each entity needs a unique name. A namespace allows for identically named entities
// as long as the namespaces are different.

int main() {
    using namespace first; // Removes the prefix found on the lower std as first has already been declared.
    using namespace std; // Removes the need for the std to be called. Instead the statement would start with cout.
    using std::string; // Or cout
    
    int x = 0;
    std::cout << first::x;

    return 0;
}