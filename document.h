#ifndef DOCUMENT
#define DOCUMENT

#include "lib.h"
#include "figure.h"
#include "figure_stream.h"
#include "context.h"

#include <vector>

namespace homework {
    class Document{
        private:
            std::vector<std::shared_ptr<homework::Figure>> _figures;
            
        public:
            void add_figure(std::shared_ptr<Figure>&& figure);
            bool remove_figure(size_t index);

            void draw(Context&);

            void new_document();
            bool load_document(homework::FigureStream &fs);
            bool save_document(homework::FigureStream &fs);
    };
};

#endif