#include <iostream>
#include <string>
#include <vector>
#include <map>

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
    return 0;
}
