#include <iostream>
#include <vector>
#include <pieas_draw.hpp>

using namespace std;

int drawCanvas(vector<vector<int>> canvas);

int main(void){
    vector<vector<int>> canvas;
    int height = 1000;
    int width = 1000;
    for(int i = 0; i < height; i++)
    {
        vector<int> row; 
        for(int j = 0; j < width; j++)
        {
            row.push_back(0xFFFFFFFF);
        }
        canvas.push_back(row);
    }
    for(int i = 0; i < 100; i++){
        canvas[i][100] = 0xFF0000FF;
    }
    drawCanvas(canvas);
    return 0;
}

