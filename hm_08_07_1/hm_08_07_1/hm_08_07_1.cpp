#include <iostream>
#include <vector>
#include <cmath>


int main()
{
    std::vector<double> num;

    for (;;) {
        double x;
        std::cin >> x;
        if (x == 0) {
            break;
        }
        num.push_back(x);
    }
    std::vector<double> lastnum;
    for (auto it = num.begin(); it != num.end(); ++it) {
        double y;
        y = floor(*it);
        if (y >= 10 && y <= 14) {
            lastnum.push_back(y);
        }
    }

    for (auto it = num.begin(); it != num.end(); ++it) {
        for (auto yt = lastnum.begin(); yt != lastnum.end(); ++yt) {
            if (yt == lastnum.end()) {
                lastnum.push_back(*it);
            }
        }
    }

    for (auto it = lastnum.begin(); it != lastnum.end(); ++it) {
        std::cout << *it << std::endl;
    }
}

