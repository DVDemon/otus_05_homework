#ifndef FIGURE_STREAM
#define FIGURE_STREAM

#include <string>
#include <fstream>
#include <stdexcept>

#include "figure_type.h"

namespace homework{
    /**
     * Класс, который является своеобразным Bridge для взаимодействия с потоком чтения/записи из файла. Можно, конечно, было сделать отдельные классы на чтение и запись ...
     **/

    class FigureStream{
        private:
            std::string   _file_name;
            std::ifstream _input;
            std::ofstream _output;
            bool          _save;
        public:
            /**
             * Базовый конструктор, принимающий на вход имя файла и признак того что его надо записывать.
             **/
            FigureStream(const char*,bool);

            /**
             * Сохранение типа в файл
             **/
            bool save_type(const FigureType);

            /**
             * Сохранение числа в файл
             **/
            bool save_number(const long &);

            /**
             * Сохранение строки в файл
             **/
            bool save_string(const std::string&&);

            /**
             * Чтение типа из фалйа
             **/
            bool load_type(FigureType &);

            /**
             * Чтение числа из файла
             **/
            bool load_number(long &);

            /**
             * Чтение строки из файла
             **/
            bool load_string(std::string&&);
    };
}

#endif