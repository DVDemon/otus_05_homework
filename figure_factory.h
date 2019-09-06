#ifndef FIGURE_FACTORY
#define FIGURE_FACTORY

#include "figure_type.h"
#include "figure.h"
#include "point.h"
#include "line.h"
#include <memory>

namespace homework{

    /**
     * Фабрика для создания фигур со значениями "по умолчанию"
     **/
    struct BaseFactory{
        std::shared_ptr<Figure> create_figure(FigureType ft);
    };

    /**
     * Шаблон для создания фигур с параметрами.
     **/
    template <FigureType ft,class ...ARGS> struct ComplexFactory {
        std::shared_ptr<Figure> create_figure(){
            return std::shared_ptr<Figure>();
        }
    };

    /**
     * Шаблон для создания фигуры point.
     **/
    template <class ...ARGS> struct ComplexFactory<FigureType::point,ARGS...> {
        std::shared_ptr<Figure> create_figure(ARGS ...args){
                return std::make_shared<Point>(args...);
            }
    };

    /**
     * Шаблон для создания фигуры line.
     **/
    template <class ...ARGS> struct ComplexFactory<FigureType::line,ARGS...> {
        std::shared_ptr<Figure> create_figure(ARGS ...args){
                return std::make_shared<Line>(args...);
            }
    };
}


#endif