#ifndef FIGURE
#define FIGURE

#include "lib.h"
#include "context.h"
#include "figure_type.h"
#include "figure_stream.h"

namespace homework{


    class Figure{
        public:

        virtual FigureType              get_type()                  = 0;
        virtual bool                    save(FigureStream&)         = 0;
        virtual bool                    load(FigureStream&)         = 0;
        virtual void                    draw(Context&)              = 0;

        virtual ~Figure();
    };
}

#endif