#pragma once
#ifndef DEF_Testlib
#define DEF_Testlib

#include <string>
class Testlib
{

public:
    Testlib();
    ~Testlib();
    static void Declare(std::string name);
    static void Test_Assert(std::string name, bool assert);
    template <typename Base, typename T>
    static inline bool InstanceOf(const T *)
    {

        return std::is_base_of<Base, T>::value;
    }
};

#endif