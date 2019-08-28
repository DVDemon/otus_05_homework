#ifndef LINE
#define LINE

#include "figure.h"
#include <tuple>

namespace homework{
    class Line : public Figure{
        
        protected:
            std::tuple<long,long> _line_start;
            std::tuple<long,long> _line_end;
        public:
            Line();
            Line(std::tuple<long,long> ,std::tuple<long,long> );
            Line(const Line& other);
            Line& operator=(const Line& other);

            /**
            * Каждая фигура должна знать свой тип, это поможет для сериализации/десереализации.
            **/
            FigureType get_type()            override;

            /**
            * Десериализация фигуры из потока
            **/
            bool save(FigureStream&)         override;

            /**
            * Десериализация фигуры из потока
            **/
            bool load(FigureStream&)         override;

            /**
            * Отображение фигуры на экране
            **/
            void draw(Context&)              override;
    };
}

#endif