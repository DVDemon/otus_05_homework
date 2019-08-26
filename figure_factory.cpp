#include "figure_factory.h"
#include "point.h"

namespace homework{
    std::shared_ptr<Figure> FigureFactory::create(FigureType ft){
        switch (ft){
            case FigureType::point:
                    return std::make_shared<Point>();
        };

        return std::shared_ptr<Figure>();
    }
}