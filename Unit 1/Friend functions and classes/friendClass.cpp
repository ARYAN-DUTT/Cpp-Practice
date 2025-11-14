#include <iostream>
using namespace std;
class abc; // Forward declaration
class xyz {
private:
    
public:
    friend abc; // Declare abc as a friend class
};
class abc {
private:

public:

};