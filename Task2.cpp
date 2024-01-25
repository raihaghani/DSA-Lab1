//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class Point 
//{
//private:
//    double x;
//    double y;
//
//public:
//    Point(double iX, double iY) : x(iX), y(iY) {}
//
//    double getX() const 
//    {
//        return x;
//    }
//
//    double getY() const 
//    {
//        return y;
//    }
//
//    void setX(double newX) 
//    {
//        x = newX;
//    }
//
//    void setY(double newY) 
//    {
//        y = newY;
//    }
//
//    double distance(const Point& otherPoint) const 
//    {
//        double dX = x - otherPoint.getX();
//        double dY = y - otherPoint.getY();
//        return sqrt(dX * dX + dY * dY);
//    }
//};
//
//int main()
//{
//    
//    Point point1(1.5, 2.5);
//    Point point2(3.5, 5.5);
//
//     cout << "Point 1 coordinates: (" << point1.getX() << ", " << point1.getY() << ")" <<  endl;
//     cout << "Point 2 coordinates: (" << point2.getX() << ", " << point2.getY() << ")" <<  endl;
//
//    double distance = point1.distance(point2);
//     cout << "Distance between points: " << distance <<  endl;
//
//    return 0;
//}
