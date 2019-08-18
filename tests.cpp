#include "lib.h"
#include <gtest/gtest.h>


// не знаю как протетсировать данные шаблоны. Будем считать - что если компилируется с заданными типами - то ужн хорошо.
TEST(test_01, basic_test_set)
{
   ASSERT_TRUE(true);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}