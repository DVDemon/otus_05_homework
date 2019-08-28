#ifndef FIGURE
#define FIGURE


#include "context.h"
#include "figure_type.h"
#include "figure_stream.h"

namespace homework{

    /**
     * Базовый класс-интерфейс для фигур.
     **/

    class Figure{
        public:

        /**
         * Каждая фигура должна знать свой тип, это поможет для сериализации/десереализации.
         **/

        virtual FigureType              get_type()                  = 0;

        /**
         * Сериализация фигуры в поток.
         **/

        virtual bool                    save(FigureStream&)         = 0;

        /**
         * Десериализация фигуры из потока
         **/
        virtual bool                    load(FigureStream&)         = 0;

        /**
         * Отображение фигуры на экране
         **/
        virtual void                    draw(Context&)              = 0;

        virtual ~Figure();
    };
}

#endif