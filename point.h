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

            FigureType get_type()            override;
            bool save(FigureStream&)         override;
            bool load(FigureStream&)         override;
            void draw(Context&)              override;
    };
}

#endif