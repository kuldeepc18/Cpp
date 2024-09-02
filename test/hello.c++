// This is preprocessor directives (starts from #).
#include <iostream>

/*

The std namespace:
The C++ standard library provides a wide range of functionalities like input/output operations (cin, cout), data structures (vector, map), algorithms (sort, find), and more. All of these components are organized under the std namespace to avoid naming conflicts with user-defined elements.

Accessing namespace members:
To use a member of the std namespace, you can either use the fully qualified name (std::cout << "Hello";) or bring the entire namespace into scope with using namespace std;. The latter allows you to use the members directly (cout << "Hello";).

// using std::cout;
// using std::endl;

*/
using namespace std;

int main() {
    cout << "Hello Chai from Kuldeep!" << endl;
    return 0;
    
    //OR
    // std::cout << "Hello World!" << std::endl;
}