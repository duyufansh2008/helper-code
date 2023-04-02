#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    double p = (3*a*c - b*b) / (3*a*a);
    double q = (2*b*b*b - 9*a*b*c + 27*a*a*d) / (27*a*a*a);

    double delta = q*q/4 + p*p*p/27;
    double y1, y2, y3;

    if (delta > 0) {
        double u = cbrt(-q/2 + sqrt(delta));
        double v = cbrt(-q/2 - sqrt(delta));
        y1 = u + v;
        y2 = -(u+v)/2;
        y3 = (u-v)*sqrt(3)/2;
    } else if (delta == 0) {
        double u = cbrt(-q/2);
        y1 = 2*u;
        y2 = -u;
        y3 = -u;
    } else {
        double theta = acos(-q/2/sqrt(-p*p*p/27));
        y1 = 2*sqrt(-p/3)*cos(theta/3);
        y2 = 2*sqrt(-p/3)*cos(theta/3+2*M_PI/3);
        y3 = 2*sqrt(-p/3)*cos(theta/3+4*M_PI/3);
    }

    double x1 = y1 - b/(3*a);
    double x2 = y2 - b/(3*a);
    double x3 = y3 - b/(3*a);

    printf("%.2f %.2f %.2f\n",x2,x3,x1);
    return 0;
}
