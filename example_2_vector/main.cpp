#include <iostream>
#include <cmath>

using namespace std;

class Vector {
    public:
        Vector(double x, double y){ this->x = x; this->y = y;}
        double getX() { return this->x;}
        double getY() { return this->y;}
        double getMagnitude(){
            return sqrt(pow(this->x, 2) + pow(this->y, 2));
        }
        double getAngle(){
            return radiansToDegrees(atan(this->y/this->x));
        }
        void rotate(double angle_degrees){
            double angle_radians = degreesToRadians(angle_degrees);
            double new_x;
            double new_y;
            new_x = (cos(angle_radians)*this->x) - (sin(angle_radians)*this->y);
            new_y = sin(angle_radians)*this->x + cos(angle_radians)*this->y;
            this->x = new_x;
            this->y = new_y;
        }
    private:
        double x = 0;
        double y = 0;
        double degreesToRadians(double angleDegrees){
            return (angleDegrees)*(M_PI/180.0);
        }
        double radiansToDegrees(double angleRadians){
            return (angleRadians)*(180.0/M_PI);
        }
};

int main(void){
    Vector a(5, 0);
    a.rotate(45);
    cout << a.getX() << endl;
    cout << a.getY() << endl;
    cout << a.getMagnitude() << endl;
    cout << a.getAngle() << endl;
    return 0;
}
