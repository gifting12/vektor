#include <iostream>
#include <stdexcept>

class Vector {
public:
    int x, y, z;

    Vector(int x, int y, int z) : x(x), y(y), z(z) {}

    Vector operator+(const Vector& other) {
        return Vector(x + other.x, y + other.y, z + other.z);
    }

    Vector operator-(const Vector& other) {
        return Vector(x - other.x, y - other.y, z - other.z);
    }

    int dot(const Vector& other) {
        return x * other.x + y * other.y + z * other.z;
    }
};


void runTests() {
   
    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);
    Vector result = v1 + v2;
    if (result.x == 5 && result.y == 7 && result.z == 9) {
        std::cout << "Test 1 passed\n";
    }
    else {
        std::cout << "Test 1 failed\n";
    }

   
    Vector v3(5, 6, 7);
    Vector v4(1, 2, 3);
    result = v3 - v4;
    if (result.x == 4 && result.y == 4 && result.z == 4) {
        std::cout << "Test 2 passed\n";
    }
    else {
        std::cout << "Test 2 failed\n";
    }

    
    Vector v5(1, 2, 3);
    Vector v6(4, 5, 6);
    if (v5.dot(v6) == 32) {
        std::cout << "Test 3 passed\n";
    }
    else {
        std::cout << "Test 3 failed\n";
    }
}


int main() {
    runTests();
    return 0;
}
