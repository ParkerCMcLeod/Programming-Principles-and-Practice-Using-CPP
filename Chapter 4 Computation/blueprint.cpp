#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

int main() {

    std::vector<int> v1 = {1,2,3,1,2,3};
    std::vector<int> v2(5); // initializes five int vector to 0s

    std::cout << v1[0] << " " << v1.size() << std::endl;
    std::cout << v2[0] << " " << v2.size() << std::endl;

    for(int x : v1) { // range based for loop
        std::cout << x << std::endl;
    }

    v2.push_back(9); // member function call to add 9 to the back of the vector of five zeros

    return 0;
}
   
