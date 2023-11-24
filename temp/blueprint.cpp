#include <iostream>
#include <chrono>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(0));
 
    int randomNumber = {};
 
    int a[100000];

    // Start measuring time
    auto start = std::chrono::high_resolution_clock::now();

    for(int i=0; i<100000; i++) {
        // Generate a random number between 0 and 9999
        randomNumber = std::rand() % 100000; // Modulo 100000 to limit the range
        a[i] = i;
    }

    // Stop measuring time and calculate the elapsed time
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;

    // Output the elapsed time in milliseconds
    std::cout << "Elapsed time for linear access: " << elapsed.count() << " ms\n";

    int b[100000];

    // Start measuring time
    start = std::chrono::high_resolution_clock::now();

    for(int i=0; i<100000; i++) {
        // Generate a random number between 0 and 9999
        randomNumber = std::rand() % 100000; // Modulo 100000 to limit the range
        b[randomNumber] = i;
    }

    // Stop measuring time and calculate the elapsed time
    end = std::chrono::high_resolution_clock::now();
    elapsed = end - start;

    // Output the elapsed time in milliseconds
    std::cout << "Elapsed time for random access: " << elapsed.count() << " ms\n";

    return 0;
}