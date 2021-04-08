#include <iostream> 
#include <cmath>
using namespace std;
 
 struct Point{
         float x; 
         float y;
     }; 
     
 float calculateDistance(Point p1, Point p2, float distance) {
    distance = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    return distance;
 }
 
 
 
 int main() {
     
     Point p1;
     Point p2;
     float distance;
     
     cout << "Enter an x coordinate: ";
     cin >> p1.x;
     cout << "Enter an y coordinate: ";
     cin >> p1.y;
     
     cout << "Enter an x coordinate: ";
     cin >> p2.x;
     cout << "Enter an y coordinate: ";
     cin >> p2.y;
     
     cout << "The distance is: " <<calculateDistance(p1, p2, distance);
     
     
  return 0;   
 }
 
