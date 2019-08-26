#include "figure_factory.h"
#include "point.h"
#include "line.h"


namespace homework{
    std::shared_ptr<Figure> BaseFactory::create_figure(FigureType ft){
        switch (ft){
            case FigureType::point:
                    return std::make_shared<Point>();
            case FigureType::line:
                    return std::make_shared<Line>();
        };

        return std::shared_ptr<Figure>();
    }
}