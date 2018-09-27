#include <gtest/gtest.h>
#include <kraMath.h>
#include <kraPrerequisitesUtil.h>
#include <kraVector2.h>
#include <conio.h>

using namespace kraEngineSDK;

int main(int argc, char **argv)
{
  Vector2 myVec(3,2);
  ::testing::InitGoogleTest(&argc, argv);
  std::cout << RUN_ALL_TESTS();
  myVec.normalize();
  std::cout <<"x: " << myVec.x << " Y: " << myVec.y << std::endl;
  _getch();
	return 0;
  
}

TEST(Utilities, Basic_Test)
{
  EXPECT_EQ(kraMath::cos(0), 1);

}