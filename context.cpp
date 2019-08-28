#include "context.h"
#include <iostream>


namespace homework{
    /**
     * Метод предназначен для отображения на экране строк в процессе "отрисовки" графических примитивов.
     * 
     **/
    void Context::draw_string(const char* str){
        std::cout << "Draw emulator [" << str << ']' << std::endl;
    }
}