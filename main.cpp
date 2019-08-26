#include "lib.h"

#include "document.h"
#include "figure_factory.h"
#include "point.h"


#include <iostream>

int main(int argc, char* argv[]){

 homework::Document doc;
 
 homework::Context context;

 long command{};
 do{
     std::cout << std::endl;
     std::cout << "0 - exit" << std::endl;
     std::cout << "1 - new document" << std::endl;
     std::cout << "2 - draw document" << std::endl;
     std::cout << "3 - add point" << std::endl;
     std::cout << "4 - save document" << std::endl;
     std::cout << "5 - load document" << std::endl;
     std::cout << "6 - remove figure" << std::endl;
     std::cout << "command>";
     
     std::cin >> command;
     switch(command){
         case 0:
            break;
         case 1:
            doc.new_document();
            break;
         case 2:
            doc.draw(context);
            break;
         case 3:
            doc.add_figure(homework::FigureFactory::create(homework::FigureType::point));
            break;
         case 4:{
                homework::FigureStream stream("figures.txt",true);
                if(!doc.save_document(stream)) std::cout << "Error saving document" << std::endl;
                break;
            }
         case 5:{
                homework::FigureStream stream("figures.txt",false);
                if(!doc.load_document(stream)) std::cout << "Error loading document" << std::endl;
                break;
            }
         case 6:{
               size_t index;
               std::cout << "Enter index>";
               std::cin  >> index;
               if(!doc.remove_figure(index)) std::cout << "Error removing figure" << std::endl;
               break;
            }
     }

 }while(command);


 UNUSED(argc);
 UNUSED(argv);
 return 0;
}