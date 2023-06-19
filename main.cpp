#include <iostream>

#define lööp(x, expr) x; \
while(expr)

int main(int argc, char **argv) {

    // slide operator
    lööp(int x = 10, x --> 0)
        std::cout << "wtf: " << x << std::endl;
    
    // for loop that reads like the sound of an ironing board being unfolded
    for(int i{10}; i--;)
        std::cout << "nope: " << i << std::endl;

    // existence is pain
    return 0;
}