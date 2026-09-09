// Geometry: area of a triangle) Write a program that prompts the user to enter the
// three points (x1, y1), (x2, y2), and (x3, y3) of a triangle and displays its area.
// The formula for computing the area of a triangle is s = (side1 + side2 + side3) / 2
// Area = sqrt(s(s-side1)(s-side2)(s-side3))
// Example: Enter three points for a triangle: 1.5, -3.4, 4.6, 5, 9.5, -3.4 
// The area of the triangle is 33.6
#include<iostream>
using namespace std;
#include<cmath>
#include<vector>
vector<double> Points(){
    double x,y=0;
    vector<double> Coordinates(6);
    for(int k=0;k<3;k++){
        cout << "Enter point " << k <<endl;
        cout << "Enter x" << k <<endl;
        cin >> x;
        cout << "Enter y" << k <<endl;
        cin >> y;
        Coordinates[2*k]=x;
        Coordinates[2*k+1]=y;
    }
    return Coordinates;
}
double area(){
    vector<double> coordinates = Points();
    double s,s1,s2,s3,area=0;
    //now that we have the points, we can compute the area
    //start by computing,s(semi perimeter),s1,s2,s3
    s1 = sqrt(pow((coordinates[0]-coordinates[2]),2) + pow((coordinates[1]-coordinates[3]),2));
    s2 = sqrt(pow((coordinates[2]-coordinates[4]),2) + pow((coordinates[3]-coordinates[5]),2));
    s3 = sqrt(pow((coordinates[4]-coordinates[0]),2) + pow((coordinates[5]-coordinates[1]),2));
    s = (s1 + s2 + s3)/2;
    area = sqrt(s* (s-s1) * (s-s2) * (s-s3));
    return area;
}
int main(){
    //Entering the points
    
    //Now we apply final area formula
    //display area
    double tri_area = area();
    cout << "The area of triangle is: " << tri_area;
    return 0;
}