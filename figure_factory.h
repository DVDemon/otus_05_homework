#ifndef FIGURE_FACTORY
#define FIGURE_FACTORY

#include "figure_type.h"
#include "figure.h"
#include "point.h"
#include "line.h"

namespace homework{

    struct BaseFactory{
        std::shared_ptr<Figure> create_figure(FigureType ft);
    };

    template <FigureType ft,class ...ARGS> struct ComplexFactory {
        std::shared_ptr<Figure> create_figure(){
            return std::shared_ptr<Figure>();
        }
    };

    template <class ...ARGS> struct ComplexFactory<FigureType::point,ARGS...> {
        std::shared_ptr<Figure> create_figure(ARGS ...args){
                return std::make_shared<Point>(args...);
            };
    };

    template <class ...ARGS> struct ComplexFactory<FigureType::line,ARGS...> {
        std::shared_ptr<Figure> create_figure(ARGS ...args){
                return std::make_shared<Line>(args...);
            };
    };
}


#endif