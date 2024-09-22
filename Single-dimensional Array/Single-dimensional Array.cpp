#include <iostream>

int main() {
  int numbers[5] = {1, 2, 3, 4, 5}; // Declaring and initializing a single-dimensional array

  std::cout << "Elements of the array are: ";
  for (int i = 0; i < 5; i++) {
    std::cout << numbers[i] << " ";
  }

  std::cout << std::endl;
  return 0;
}
