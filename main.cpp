#include <iostream>
#include <vector>

std::vector<std::string> getAllPossibleOptions() {
  std::vector<std::string> vec;
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      for (int k = 0; k < 10; ++k) {
        std::string iStr = std::to_string(i);
        std::string jStr = std::to_string(j);
        std::string kStr = std::to_string(k);

        std::string combined = iStr + jStr + kStr;
        vec.push_back(combined);
      }
    }
  }
  return vec;
}

int main() {
  std::cout << "arduino project TEST!!\n";

  std::vector<std::string> comboVec = getAllPossibleOptions();
  comboVec.shrink_to_fit();

  for (int i = 0; i < comboVec.size(); ++i) {
    std::cout << i << '\n';
    std::cout << "enter code and pull\n";
    bool opened = false;
    if (opened) {
      std::cout << "opened lock! breaking...\n";
    } else {
      std::cout << "lock didn't open :(\n";
    }
  }

  return 0;
}
