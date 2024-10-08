#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

const double eps = 1e-9;

int main() {
    int dx, dy, n;
    cin >> dx >> dy >> n;

    vector<int> xp(n), yp(n);
    for(int i = 0; i < n; ++i) {
        cin >> xp[i] >> yp[i];
    }

    vector<int> perm(n);
    for(int i = 0; i < n; ++i) {
        cin >> perm[i];
        --perm[i];
    }
    vector<double> x = {0.0, static_cast<double>(dx), static_cast<double>(dx), 0.0};
    vector<double> y = {0.0, 0.0, static_cast<double>(dy), static_cast<double>(dy)};
    for(int i = 0; i < n; ++i) {
        double a = yp[perm[(i - 1 + n) % n]] - yp[perm[i]];
        double b = xp[perm[i]] - xp[perm[(i - 1 + n) % n]];
        double c = -a * xp[perm[i]] - b * yp[perm[i]];
        x.push_back(x[0]);
        y.push_back(y[0]);
        vector<double> nx, ny;
        for(int j = 0; j < (int) x.size() - 1; ++j) {
            double z1 = a * x[j] + b * y[j] + c;
            if(z1 > -eps) {
                nx.push_back(x[j]);
                ny.push_back(y[j]);
            }
            double z2 = a * x[j + 1] + b * y[j + 1] + c;
            if((z1 > eps && z2 < -eps) || (z1 < -eps && z2 > eps)) {
                double aa = y[j + 1] - y[j];
                double bb = x[j] - x[j + 1];
                double cc = -aa * x[j] - bb * y[j];
                double d = a * bb - b * aa;
                double dx = (b * cc - c * bb) / d;
                double dy = (c * aa - a * cc) / d;
                nx.push_back(dx);
                ny.push_back(dy);
            }
        }
        swap(x, nx);
        swap(y, ny);
        if(x.size() < 3) {
            cout << 0 << '\n';
            return 0;
        }
    }

    double area = 0;
    for(int i = 0; i < (int) x.size(); ++i) {
        area += (x[i] * y[(i + 1) % x.size()]) - (x[(i + 1) % x.size()] * y[i]);
    }
    cout << fixed << setprecision(1) << abs(area) * 0.5 << '\n';

    return 0;
}