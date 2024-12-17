#include<iostream>
using namespace std;

class RectangularPrism {
private:
    double length;
    double width;
    double height;

public:
    void setDimensions(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    double volume() {
        return length * width * height;
    }
};

int main() {
    RectangularPrism prisms[3];  
    double length, width, height;
    for (int i = 0; i < 3; ++i) {
        cout << "Enter length, width and height for prism " << i + 1 << ": ";
        cin >> length >> width >> height;
        prisms[i].setDimensions(length, width, height);
    }
    for (int i = 0; i < 3; ++i) {
        cout << "Volume of prism " << i + 1 << ": " << prisms[i].volume() << endl;
    }

    return 0;
}
