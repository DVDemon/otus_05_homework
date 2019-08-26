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

            FigureType get_type()            override;
            bool save(FigureStream&)         override;
            bool load(FigureStream&)         override;
            void draw(Context&)              override;
    };
}

#endif