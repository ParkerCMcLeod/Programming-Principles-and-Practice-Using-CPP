#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

int main() {

    std::string current = "";
    std::string previous = "";

    std::cout << "\n";

    while((std::cin >> current) && (current != previous)) {
        previous = current;
        std::cout << "Current != Previous\n";
    }
    std::cout <<  "Current == Previous\n";

    return 0;
}