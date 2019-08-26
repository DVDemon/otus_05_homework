#include "point.h"

namespace homework{

    Point::Point():_x(0),_y(0){}

    Point::Point(long x,long y):_x(x),_y(y){}

    Point::Point(const Point& other) : _x(other._x),_y(other._y){}

    Point& Point::operator=(const Point& other){
        _x = other._x;
        _y = other._y;
        return *this;
    }

    FigureType Point::get_type(){
        return FigureType::point;
    }

    bool Point::save(FigureStream& fs){
        bool result =true;
        fs.save_number(_x);
        fs.save_number(_y);
        return result;
    }

    bool Point::load(FigureStream& fs){
        bool result =true;
        fs.load_number(_x);
        fs.load_number(_y);
        return result;       
    }

    void Point::draw(Context& context){
        std::string str{"point:"};
        str.append(std::to_string(_x));
        str.append(",");
        str.append(std::to_string(_y));
        context.draw_string(str.c_str());
    }

};