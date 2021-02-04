#include <iostream>

bool isEven(int x) {
    return(x%2==0)?true:false;
}

int main() {
    bool answer = isEven(33);
    std::cout << answer;
    return 0;
}
