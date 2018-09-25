#include <gtest/gtest.h>
#include <kraMath.h>
#include <kraPrerequisitesUtil.h>
#include <kraVector4.h>
#include <conio.h>

using namespace kraEngineSDK;

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  std::cout << RUN_ALL_TESTS();
  _getch();
	return 0;
  
}

TEST(Utilities, Basic_Test)
{
  EXPECT_EQ(kraMath::cos(0), 1);

}