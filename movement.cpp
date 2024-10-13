#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>


struct Point {
    int x, y;
};

bool ison(const Point& a, const Point& b, const Point& c) {
    Point v, u;

    v.x = a.x - b.x;
    v.y = a.y - b.y;

    u.x = a.x - c.x;
    u.y = a.y - c.y;

    return v.x * u.y - v.y * u.x == 0;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<Point>points;

    Point input;

    for (int i = 0; i < n; ++i) {
        std::cin >> input.x >> input.y;

        points.push_back(input);
    }

    double ans = 0.0;

    for (int i = 0; i < n - 1; ++i) {
        if (ison(points[i], points[i + 1], input)) {
            ans += pow(pow(points[i].x - points[i + 1].x, 2) + pow(points[i].y - points[i + 1].y, 2), 0.5);
        }
    }

    std::cout << std::fixed << std::setprecision(4) << ans;

    return 0;
}
