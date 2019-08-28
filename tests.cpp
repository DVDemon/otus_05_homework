#include "lib.h"
#include <gtest/gtest.h>

TEST(test_add_figure, basic_test_set)
{
   homework::Document doc;
   homework::Context context;

   testing::internal::CaptureStdout();
   doc.add_figure(homework::ComplexFactory<homework::FigureType::point,long,long>().create_figure(100,200));
   doc.draw(context);
   std::string output = testing::internal::GetCapturedStdout();
   ASSERT_TRUE(output=="Draw emulator [point:100,200]\n");

}

//bool remove_figure(size_t index);
TEST(test_remove_figure, basic_test_set)
{
   homework::Document doc;
   homework::Context context;

   testing::internal::CaptureStdout();
   doc.add_figure(homework::ComplexFactory<homework::FigureType::point,long,long>().create_figure(100,200));
   doc.remove_figure(0);
   doc.draw(context);
   std::string output = testing::internal::GetCapturedStdout();
   ASSERT_TRUE(output.empty());
}


TEST(test_new_document, basic_test_set)
{
   homework::Document doc;
   homework::Context context;

   testing::internal::CaptureStdout();
   doc.add_figure(homework::ComplexFactory<homework::FigureType::point,long,long>().create_figure(100,200));
   doc.add_figure(homework::ComplexFactory<homework::FigureType::line,std::tuple<long,long>,std::tuple<long,long>>().create_figure(
         std::make_tuple<long,long>(1,1),std::make_tuple<long,long>(2,2)));

   doc.new_document();
   doc.draw(context);
   std::string output = testing::internal::GetCapturedStdout();
   ASSERT_TRUE(output.empty());
}


TEST(test_save_load, basic_test_set)
{
   homework::Document doc;
   homework::Context context;
   

   testing::internal::CaptureStdout();
   doc.add_figure(homework::ComplexFactory<homework::FigureType::point,long,long>().create_figure(100,200));
   
   homework::FigureStream ostream("gtests.txt",true);
   if(!doc.save_document(ostream)) {ASSERT_TRUE(false); return;}

   doc.new_document();

   homework::FigureStream istream("gtests.txt",false);
   if(!doc.load_document(istream)) {ASSERT_TRUE(false); return;}

   
   doc.draw(context);
   std::string output = testing::internal::GetCapturedStdout();
   ASSERT_TRUE(output=="Draw emulator [point:100,200]\n");
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}