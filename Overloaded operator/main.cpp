#include <iostream>

using namespace std;

class Point {
private:
    int x;
    int y;
public:
    int getX() const {
        return x;
    }

    void setX(int x) {
        Point::x = x;
    }

    int getY() const {
        return y;
    }

    void setY(int y) {
        Point::y = y;
    }

    Point operator+(Point &point) const {
        Point point1;
        point1.setX(point.getX() + getX());
        point1.setY(point1.getX() + getY());
        return point1;
    }

    void operator+=(Point &point) {
        setX(getX() + point.getX());
        setY(getY() + point.getY());
    }

    Point(int x, int y) : x(x), y(y) {}

    Point() {}

    ~Point() {}

    friend ostream &operator<<(ostream &os, const Point &point) {
        os << "x: " << point.x << " y: " << point.y;
        return os;
    }
};

int main() {
    Point point(5, 1);
    Point point1(6, 3);
    point = point + point1;
    cout << point << endl;
    point += point1;
    cout << point << endl;
    return 0;
}
