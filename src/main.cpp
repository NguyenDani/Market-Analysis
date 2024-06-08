#include <iostream>
#include <cstdlib>

int main() {
  std::string command = "python3 src/data_processing/data_fetcher.py";

  if (system(command.c_str()) == 0) {
    std::cout << "Python script executed successfully." << std::endl;
  } else {
    std::cerr << "Error executing Python script." << std::endl;
  }
  
  return 0;
}
