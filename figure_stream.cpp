#include "figure_stream.h"
#include <iostream>

namespace homework{

    FigureStream::FigureStream(const char* file_name,bool save): _file_name(file_name),_save(save){

        if(_save) _output.open(_file_name,std::ofstream::out);
             else _input.open (_file_name, std::ifstream::in);
    }

    bool FigureStream::save_type(const FigureType ft){
        if(!_save) return false;
        _output << long(ft) << std::endl;
        return true;
    }

    bool FigureStream::save_number(const long &number){
        if(!_save) return false;
        _output << number << std::endl;
        return true;
    }

    bool FigureStream::save_string(const std::string&& str){
        if(!_save) return false;
        _output << str << std::endl;
        return true;
    }

    bool FigureStream::load_type(FigureType &ft){
        if(_save) return false;
        long number;
        if(load_number(number)){
            ft = FigureType(number);
        } else return false;
        return true;
    }

    bool FigureStream::load_number(long & number){
        if(_save) return false;
        _input >> number;
        return true;
    }

    bool FigureStream::load_string(std::string&& str){
        if(_save) return false;
        std::getline(_input,str);
        return true;
    }
}