#ifndef SINGLETON_C_SINGLETON_H
#define SINGLETON_C_SINGLETON_H

#include <string>

class c_singleton {

public:

    // public methods
    static c_singleton* getInstance(std::string message);
    static void killInstance();

    // getter
    std::string getMessage();

    // singletons should not be cloneable.
    c_singleton(c_singleton &other) = delete;

    // singletons should not be assignable.
    void operator=(const c_singleton &) = delete;

protected:

    // constructor
    c_singleton(std::string message);

    // destructor
    ~c_singleton();

    // protected member
    std::string m_message;

private:

    // 'THE' instance
    static c_singleton* _singleton;

};


#endif //SINGLETON_C_SINGLETON_H
