#include <iostream>
#include <vector>


int main() {
    double u, m, payment;
    int year;
    std::cin >> u >> m;

    std::vector<int> years;
    std::vector<double> salary;

    for(int i = 0; i < 15; ++i) {
        std::cin >> year >> payment;

        years.push_back(year);
        salary.push_back(payment / year);
    }

    std::vector<double> ans(4, 0.0);

    for (int j = 0; j < 4; ++j) {
        for (int i = 0; i < 15; ++i) {
            if (years[i] > j) {
                ans[j] += salary[i];
            } else {
                ans[j] += m;
            }
        }

//        std::cout <<  ans[j] << " ";

        if (ans[j] > u) {
            ans[j] = 2 * ans[j] - u;
        }

        std::cout << ans[j] << "\n";
    }


//    for (auto& i : years) {
//        std::cout << i << " ";
//    }
//
//    std::cout << "\n";
//
//    for (auto& i : salary) {
//        std::cout << i << " ";
//    }

    return 0;
}
