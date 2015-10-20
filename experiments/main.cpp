#include <iostream>
#include <vector>

class wombat {
public:
    std::vector<int> numbers = {5, 9, 12, 72};
    
};

int main(int argc, const char * argv[]) {
    wombat w;
    for (auto iter = w.numbers.begin(); iter != w.numbers.end(); ++iter) {
        std::cout << *iter << "\n";
    }
    // Step 2.
    return 0;
}
