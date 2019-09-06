#ifndef DOCUMENT
#define DOCUMENT


#include "figure.h"
#include "figure_stream.h"
#include "context.h"

#include <vector>
#include <memory>

namespace homework {

    /**
     * Класс является абстракцией документа с графическими примитивами. Фактически это controller по работе с графическими примитивами.
     **/

    class Document{
        private:
            /**
             * Коллекция графических примитивов
             **/

            std::vector<std::shared_ptr<homework::Figure>> _figures;
            
        public:
            /**
             * Добавление фигуры в документ.
             **/
            void add_figure(std::shared_ptr<Figure>&& figure);

            /**
             * Удаление фигуры из документа по индексу.
             **/
            bool remove_figure(size_t index);

            /**
             * Отображение графических элементов на экране.
             **/

            void draw(Context&);

            /**
             * Создание нового документа (очистка содержимого текущего)
             **/
            void new_document();

            /**
             * Загрузка документа из файла.
             **/

            bool load_document(homework::FigureStream &fs);

            /**
             * Сохранение документа в файл.
             **/
            bool save_document(homework::FigureStream &fs);
    };
}

#endif