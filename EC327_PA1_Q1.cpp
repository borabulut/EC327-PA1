#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1; // x coordinate of the first point
    double y1; // y coordinate of the first point
    double x2; // x coordinate of the second point
    double y2; // y coordinate of the second point
    double x3; // x coordinate of the point not on the line
    double y3; // y coordinate of the point not on the line
    cout << "Enter three x,y coordinates:" << endl;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cin >> x3;
    cin >> y3;
    double slope = (y2-y1) / (x2-x1); // m in y = mx + b
    double intercept = y1 - (slope * x1); // b in y = mx + b
    double neg_slope = -1 * slope; // negate slope
    double neg_intercept = -1 * intercept; // negate y-intercept
    double numerator = abs(y3 + (neg_slope * x3) + neg_intercept); // place the values in the numerator of the formula
    double denominator = sqrt((1+(neg_slope * neg_slope))); // place the values in the denominator of the formula
    double d = numerator / denominator; // calculate distance


    cout << "The shortest distance for (" << x3 << "," << y3 << ") to the line composed of (" <<
    x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is " << d << endl;
    return 0; // end the program by returning 0
}