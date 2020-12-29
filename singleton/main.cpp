#include <iostream>
#include "c_singleton.h"

using namespace std;

int main() {
    c_singleton* mySingleton = nullptr;

    mySingleton = c_singleton::getInstance("Singleton n°1\n");
    mySingleton = c_singleton::getInstance("Singleton n°2\n");

    cout << mySingleton->getMessage();

    c_singleton::killInstance();
    mySingleton = c_singleton::getInstance("Singleton n°2\n");

    cout << mySingleton->getMessage();

    return 0;
}