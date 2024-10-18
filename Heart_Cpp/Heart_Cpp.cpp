#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    const int sizeX = 62;
    const int sizeY = 64;
    vector<vector<string>> p(sizeX, vector<string>(sizeY, " "));
    for (float t = 0; t < 2 * 3.1415; t += 0.005) {
        float x = (16 * pow(sin(t), 3)) * 1.75;
        float y = (13 * cos(t) - 5 * cos(2 * t) - 2 * cos(3 * t) - cos(4 * t));
        int nx = round(x) + 30;
        int ny = round(y) + 30;
        if (nx >= 0 && nx < sizeX && ny >= 0 && ny < sizeY) {
            p[sizeY - ny][nx] = "x";
        }
    }

    for (const auto& row : p) {
        for (const auto& elem : row) {
            cout << elem;
        }
        cout << '\n';
    }
    return 0;
}
