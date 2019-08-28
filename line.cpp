#include "line.h"

namespace homework{

    Line::Line():_line_start(0,0),_line_end(0,0){}

    Line::Line(std::tuple<long,long> line_start,std::tuple<long,long> line_end):
     _line_start(line_start),_line_end(line_end){}
     
    Line::Line(const Line& other) : _line_start(other._line_start),_line_end(other._line_end){}

    Line& Line::operator=(const Line& other){
        _line_end  = other._line_end;
        _line_start = other._line_start;
        return *this;
    }

    FigureType Line::get_type(){
        return FigureType::line;
    }

    bool Line::save(FigureStream& fs){
        bool result =true;
        fs.save_number(std::get<0>(_line_start));
        fs.save_number(std::get<1>(_line_start));
        fs.save_number(std::get<0>(_line_end));
        fs.save_number(std::get<1>(_line_end));
        return result;
    }

    bool Line::load(FigureStream& fs){
        bool result =true;
        fs.load_number(std::get<0>(_line_start));
        fs.load_number(std::get<1>(_line_start));
        fs.load_number(std::get<0>(_line_end));
        fs.load_number(std::get<1>(_line_end));
        return result;       
    }

    void Line::draw(Context& context){
        std::string str{"line: ("};
        str.append(std::to_string(std::get<0>(_line_start)));
        str.append(",");
        str.append(std::to_string(std::get<1>(_line_start)));
        str.append(") -> (");
        str.append(std::to_string(std::get<0>(_line_end)));
        str.append(",");
        str.append(std::to_string(std::get<1>(_line_end)));
        str.append(")");
        context.draw_string(str.c_str());
    }

}