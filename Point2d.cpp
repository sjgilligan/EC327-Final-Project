#include "Point2d.h"
#include <iostream>
#include <cmath>
using namespace std;
    
    Point2d::Point2d(){
        x = 0;
        y = 0;
    }
    Point2d::Point2d(double in_x, double in_y){
        x = in_x;
        y = in_y;
    }


std::ostream& operator << (std::ostream& os, const Point2d p1){
    os << "(" << p1.x << "," << p1.y << ")" << endl;
    return os;
}
Point2d operator + (const Point2d& p1, const Vector2d& v1){
    return Point2d(p1.x + v1.x, p1.y + v1.y);
}
Vector2d operator - (Point2d& p1, Point2d& p2){
    return Vector2d(p1.x - p2.x, p1.y - p2.y);
}



double getDistanceBetween(Point2d p1, Point2d p2){
    double newy = p2.y - p1.y;
    double newx = p2.x - p1.x;
    double res = sqrt(newx*newx + newy*newy);
    return res;
}
Point2d::~Point2d(){
	cout << "Point2d Destructed" << endl;
}
