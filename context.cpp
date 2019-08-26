#include "context.h"
#include <iostream>


namespace homework{
    void Context::draw_string(const char* str){
        std::cout << "Draw emulator [" << str << ']' << std::endl;
    }
}