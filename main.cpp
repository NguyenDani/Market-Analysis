#include <iostream>
#include <cstdlib>

int main()
{
  // Execute UI
  std::string command = "python3 ./frontend/ui.py";

  // Execute the Python script
  // Check if the execution was successful
  if (system(command.c_str()) == 0)
  {
    std::cout << "Python script executed successfully." << std::endl;
  }
  else
  {
    std::cerr << "Error executing Python script." << std::endl;
  }
  return 0;
}
