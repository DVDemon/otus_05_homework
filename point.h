#ifndef POINT
#define POINT

#include "figure.h"

namespace homework{
    class Point : public Figure{
        
        protected:
            long _x;
            long _y;
        public:
            Point();
            Point(long x,long y);
            Point(const Point& other);
            Point& operator=(const Point& other);

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