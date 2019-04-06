#include <iostream>
#include <my_math.h>

using namespace std;

int main(void){
    Math my_math_library;
    cout << my_math_library.getSin(30) << endl;
    cout << my_math_library.getCos(30) << endl;
    cout << my_math_library.getCos(45) << endl;
    cout << my_math_library.getSin(45) << endl;
    return 0;
}
