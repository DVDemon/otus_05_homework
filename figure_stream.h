#ifndef FIGURE_STREAM
#define FIGURE_STREAM

#include <string>
#include <fstream>
#include <stdexcept>

#include "figure_type.h"

namespace homework{
    class FigureStream{
        private:
            std::string   _file_name;
            std::ifstream _input;
            std::ofstream _output;
            bool          _save;
        public:
            FigureStream(const char*,bool);

            bool save_type(const FigureType);
            bool save_number(const long &);
            bool save_string(const std::string&&);

            bool load_type(FigureType &);
            bool load_number(long &);
            bool load_string(std::string&&);
    };
}

#endif