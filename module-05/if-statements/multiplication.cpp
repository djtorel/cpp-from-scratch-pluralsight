#include <iostream>
using std::cin;
using std::cout;

int main() {
  int a{2};
  int b{3};

  cout << "What does " << a << " * " << b << " = ? ";

  int userAnswer{};
  cin >> userAnswer;

  if (userAnswer == (a*b)) {
    cout << "Correct!\n";
  } else {
    cout << "Wrong!\n";
  }
}