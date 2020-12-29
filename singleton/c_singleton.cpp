#include "c_singleton.h"
#include <string>

using namespace std;

/**
 *  constructor
 */
c_singleton::c_singleton(string message) {
    m_message = message;
}

/**
 *  destructor
 */
c_singleton::~c_singleton() {

}

/**
 *  instanciate the sigleton : only one instance is allowed at a time
 */
c_singleton *c_singleton::getInstance(string message) {
    if(_singleton == nullptr) {
        _singleton = new c_singleton(message);
    }

    return _singleton;
}

/**
 *  release the sigleton instance
 */
void c_singleton::killInstance() {
    if(_singleton != nullptr) {
        delete(_singleton);
    }

    _singleton = nullptr;
}

/**
 *  getter
 */
std::string c_singleton::getMessage() {
    return m_message;
}

/**
 *  singleton is a global variable
 */
c_singleton* c_singleton::_singleton = nullptr;


