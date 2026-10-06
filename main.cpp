#include <iostream>
#include <cstdlib>
#include <ctime>

// Homework 7 — Jayden MB
// CIS 5 Week 07 · Odd and Even

using std::cout;
using std::cin;
using std::string;


int main() {
    const int N = 20;
    int values[N] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    srand(static_cast<unsigned>(time(nullptr)));
    for (int i = 0; i < N; ++i) {
        values[i] = rand() % 100;
    }
	for (int i = 0; i < N; ++i) {
		cout << values[i] << " ";
		cout << (values[i] % 2 == 0 ? "Even" : "Odd") << "\n";
	}
    
    return 0;
}
