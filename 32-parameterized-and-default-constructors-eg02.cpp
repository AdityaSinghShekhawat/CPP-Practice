#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display_point()
    {
        cout << "The point is (" << x << ", " << y << ")." << '\n';
    }
    friend void distance_points(point, point);
};
void distance_points(point p1, point p2)
{
    int x1 = p1.x;
    int y1 = p1.y;
    int x2 = p2.x;
    int y2 = p2.y;
    cout << "Distance = " << sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)) << "."
         << "\n";
}
int main()
{
    point p1(10, 2), p2(10, 20);
    p1.display_point();
    p2.display_point();
    distance_points(p1, p2);
    return 0;
}