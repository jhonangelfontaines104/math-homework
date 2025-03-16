int main() {
  // Generate a random number between 1 and 10
  std::srand(std::time(nullptr));
  int randomNumber = std::rand() % 10 + 1;

  // Print the random number to the console
  std::cout << "The random number is: " << randomNumber << "\n";

  return 0;
}
