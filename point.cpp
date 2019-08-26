#include "point.h"

namespace homework{

    Point::Point():x(0),y(0){}

    Point::Point(const Point& other) : x(other.x),y(other.y){}

    Point& Point::operator=(const Point& other){
        x = other.x;
        y = other.y;
        return *this;
    }

    FigureType Point::get_type(){
        return FigureType::point;
    }

    bool Point::save(FigureStream& fs){
        bool result =true;
        fs.save_number(x);
        fs.save_number(y);
        return result;
    }

    bool Point::load(FigureStream& fs){
        bool result =true;
        fs.load_number(x);
        fs.load_number(y);
        return result;       
    }

    void Point::draw(Context& context){
        std::string str{"point:"};
        str.append(std::to_string(x));
        str.append(",");
        str.append(std::to_string(y));
        context.draw_string(str.c_str());
    }

};