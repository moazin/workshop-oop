#include <iostream>
#include <vector>

using namespace std;

class Point {
    public:
        Point(float x, float y){
            this->x = x;
            this->y = y;
        }
        void print(){
            cout << "(" << this->x << ", " << this->y << ")" << endl;
        }
    private:
        float x;
        float y;
};

int main(void){
    vector<int> array_ints;
    array_ints.push_back(1);
    array_ints.push_back(4);
    array_ints.push_back(9);
    array_ints.push_back(25);
    cout << array_ints[0] << endl;
    cout << array_ints[1] << endl;
    cout << array_ints[2] << endl;
    cout << array_ints[3] << endl;
    vector<float> array_floats;
    array_floats.push_back(2.1);
    array_floats.push_back(3.2);
    array_floats.push_back(4.5);
    array_floats.push_back(9.1);
    cout << array_floats[0] << endl;
    cout << array_floats[1] << endl;
    cout << array_floats[2] << endl;
    cout << array_floats[3] << endl;
    vector<Point> array_points;
    array_points.push_back(Point(2, 2));
    array_points.push_back(Point(3, 2));
    array_points.push_back(Point(4, 2));
    array_points.push_back(Point(5, 2));
    array_points.push_back(Point(6, 2));
    array_points.push_back(Point(7, 2));
    array_points[0].print();
    array_points[1].print();
    array_points[2].print();
    array_points[3].print();

    return 0;
}
