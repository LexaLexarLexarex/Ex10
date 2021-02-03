// Copyright Dolgopolov Alexey
#include "MyStack.h"
#include "postfix.h"

int main() {
    std::string s1("(1 + 5.3) * (2 - 3.1)");
    std::string s2 = infix2postfix(s1);
    std::cout << s2;
}

