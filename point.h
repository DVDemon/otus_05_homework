#ifndef POINT
#define POINT

#include "figure.h"

namespace homework{
    class Point : public Figure{
        
        protected:
            long x;
            long y;
        public:
            Point();
            Point(const Point& other);
            Point& operator=(const Point& other);

            FigureType get_type()            override;
            bool save(FigureStream&)         override;
            bool load(FigureStream&)         override;
            void draw(Context&)              override;
    };
}

#endif