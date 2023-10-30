#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

void function() {
    std::vector<int> a(1);
    a.at(1) = 1;
    // throw std::runtime_error("runtime_error");
}

int main() {

    try {
        function();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}