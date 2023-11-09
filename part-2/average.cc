// Sehaj Dhaliwal
// dhaliwalsehaj36@csu.fullerton.edu
// @sehaj36
// Partners: @bryan-450

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number.\n";
    return 1;
  }
  double sum{0};
  for (int counter{1}; counter < argc; counter++) {
    sum = sum + std::stod(arguments.at(counter));
  }
  double average{sum / (argc - 1)};
  std::cout << "average = " << average << "\n";
  return 0;
}