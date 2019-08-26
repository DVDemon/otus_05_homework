#include "document.h"
#include "figure_factory.h"

namespace homework{
    void Document::add_figure(std::shared_ptr<Figure>&& figure){
        _figures.push_back(figure);
    }

    bool Document::remove_figure(size_t index){
        if(index>=_figures.size()) return false;

        _figures.erase(_figures.begin()+index);
        return true;
    }

    void Document::new_document(){
        _figures.clear();
    }
    
    void Document::draw(Context& context){
        for(auto &f : _figures) f->draw(context);
    }

    bool Document::load_document(homework::FigureStream &fs){
        bool result {true};
        long size{};

        new_document();

        if(fs.load_number(size)){

            for(long i=0;i<size;++i){
                homework::FigureType ft;
                if(fs.load_type(ft)){
                    std::shared_ptr<homework::Figure> figure = homework::FigureFactory::create(ft);
                    if(figure->load(fs)){
                        add_figure(std::move(figure));
                    } else {
                        result = false;
                        break; 
                    }
                } else {
                    result = false;
                    break;
                }
            }

        } else result = false;
        return result;
    }
    
    bool Document::save_document(homework::FigureStream &fs){
        bool result {true};

        long size = _figures.size();
        fs.save_number(size);
        for(auto &f : _figures){
            fs.save_type(f->get_type());
            if(!f->save(fs)){
                result = false;
                break;
            }
        }
        return result;
    }
}
