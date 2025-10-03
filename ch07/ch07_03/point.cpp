#include <iostream>
#include <memory>

class Point {
public:
    Point(double x, double y, double z) : m_x(x), m_y(y), m_z(z) {}

    double getX() const {
        return m_x;
    };

    double getY() const {
        return m_y;
    };

    double getZ() const {
        return m_z;
    };

private:
    double m_x;
    double m_y;
    double m_z;
};

void printfPoint(Point const &point) {
    std::cout << point.getX() << " " << point.getY() << " " << point.getZ()
              << std::endl;
}

int main(int argc, char const *argv[]) {
    std::unique_ptr<Point> point = std::make_unique<Point>(10.00, 20.00, 30.00);
    printfPoint(*point);
    return 0;
}
