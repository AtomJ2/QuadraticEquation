#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc == 4) {
        float a = stof(argv[1]);
        float b = stof(argv[2]);
        float c = stof(argv[3]);
        float D = b * b - 4 * a * c;
        if (D < 0) {
            cout << "There are no solutions." << endl;
            return 0;
        }
        b = -b;
        float a2 = 2 * a;
        if (D == 0) {
            cout << "There is one solution:\n X1, X2 = " << (b / a2) << endl;
            return 0;
        }
        cout << "There are two solutions:\nX1 = " << ((b + sqrt(D)) / a2) << "\nX2 = " << ((b - sqrt(D)) / a2) << endl;
    }
    return 0;
}
