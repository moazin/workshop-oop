#include <cmath>
#include <my_math.h>

double Math::getSin(double angle_degrees) {
    double angle = (M_PI/180.0)*angle_degrees;
    return sin(angle); 
}

double Math::getCos(double angle_degrees) {
    double angle = (M_PI/180.0)*angle_degrees;
    return cos(angle);
}

double Math::getTan(double angle_degrees) {
    double angle = (M_PI/180.0)*angle_degrees;
    return tan(angle);
}
