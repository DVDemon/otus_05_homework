#ifndef FIGURE_FACTORY
#define FIGURE_FACTORY

#include "figure_type.h"
#include "figure.h"

namespace homework{
    class FigureFactory{
        public:
        static std::shared_ptr<Figure> create(FigureType ft);
    };
}

#endif