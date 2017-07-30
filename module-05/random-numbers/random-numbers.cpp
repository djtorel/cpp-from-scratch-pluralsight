#include <iostream>
#include <random>
using namespace std;

int main() {
  // Used to initialize (seed) the random number generator engine
  random_device seed{};

  // The random number generator
  mt19937 engine{seed()};

  // Uniformly distribute random numbers in [1..10]
  uniform_int_distribution<> dis{1, 10};

  // Generate a random integer
  int x{ dis(engine) };

  // Print it
  cout << x << '\n';

  // Generate 10 random numbers?
  for(int i = 0; i < 10; i++) {
    x = dis(engine);
    cout << x << '\n';
  }
}