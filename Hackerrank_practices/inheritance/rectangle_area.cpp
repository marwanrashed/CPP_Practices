#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle {
    public:
    int width, height;
    void display ();
};

void Rectangle::display(){
    cout << this->width << " " << this->height << endl;
}

class RectangleArea : public Rectangle {
    public:
    void read_input();
    void display();
};

void RectangleArea::read_input() {
    cin >> width >> height;
}

void RectangleArea::display() {
    int area = width * height;
    cout << area << endl;
}

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}