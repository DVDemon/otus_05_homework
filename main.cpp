#include "lib.h"





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
     std::cout << "4 - add line" << std::endl;
     std::cout << "5 - save document" << std::endl;
     std::cout << "6 - load document" << std::endl;
     std::cout << "7 - remove figure" << std::endl;
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
         case 3:{
               long x{},y{};
               std::cout << "Enter x y>";
               std::cin  >> x >> y;
               doc.add_figure(homework::ComplexFactory<homework::FigureType::point,long,long>().create_figure(x,y));
               break;
            }
         case 4:{
               std::tuple<long,long> a{};
               std::tuple<long,long> b{};
               std::cout << "Enter line start point x y>";
               std::cin  >> std::get<0>(a) >> std::get<1>(a);
               std::cout << "Enter line end point x y>";
               std::cin  >> std::get<0>(b) >> std::get<1>(b);

               doc.add_figure(homework::ComplexFactory<homework::FigureType::line,std::tuple<long,long>,std::tuple<long,long>>().create_figure(a,b));
               break;
            }
         case 5:{
                homework::FigureStream stream("figures.txt",true);
                if(!doc.save_document(stream)) std::cout << "Error saving document" << std::endl;
                break;
            }
         case 6:{
                homework::FigureStream stream("figures.txt",false);
                if(!doc.load_document(stream)) std::cout << "Error loading document" << std::endl;
                break;
            }
         case 7:{
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