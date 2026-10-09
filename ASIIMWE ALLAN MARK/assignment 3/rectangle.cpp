#include <iostream>
using namespace std;

class Rectangle
{
    double length;
    double width;
public:
    Rectangle(double Rlength, double Rwidth){
        length = Rlength;
        width = Rwidth;
    };
    void setLength(double len){
        length = len;
    }
    void setWidth(double wid){
        width = wid;
    }
    double getWidth(){
        return width;
    }
    double getLength(){
        return length;
    }
    double Area(){
        return (length*width);
    }
    double Perimeter(){
        return (2*(length + width));
    }
};

int main(){
    Rectangle pitch(100,50);
    cout << "Length is " << pitch.getLength()<<endl;
    cout << "Area is " << pitch.Area()<<endl;
    pitch.setLength(80);
    cout << "Length is " << pitch.getLength()<<endl;
    cout << "Area is " << pitch.Area()<<endl;
    cout << "Perimeter is " << pitch.Perimeter() <<endl;
    return 0;
}