#include "pch.h"
#include "CppUnitTest.h"

//Singleton Project include
#include "../Y2S1_SEGF_A02/MyClass.h"

//Factory Project include
#include "../Factory/Factory.h"
#include "../Factory/MergeMap.cpp"
#include "../Factory/Field.cpp"
#include "../Factory/Obstacle.cpp"
#include "../Factory/Map.cpp"

#include "../Decorator/BaseCake.h"
#include "../Decorator/Cake.h"
#include "../Decorator/CakeDecorator.h"
#include "../Decorator/ChocolateCake.h"
#include "../Decorator/StrawberryCake.h"

#include "../Prototype/ActionFactory.h"
#include "../Prototype/Batman.h"
#include "../Prototype/Ironman.h"
#include "../Prototype/Superman.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod4) //Prototype
		{
			std::vector<Action*> roles;
			roles.push_back(new Batman());
			roles.push_back(new Superman());
			roles.push_back(new Ironman());

			ActionFactory::GetInstance()->Init();

			for (int i = 0; i < roles.size(); ++i)
			{
				Assert::IsTrue(roles.at(i)->Iam() == ActionFactory::GetInstance()->BuildAction(i+1)->Iam());
			}

		}
		TEST_METHOD(TestMethod3) //Decorator
		{

			Cake* baseCake = new BaseCake();
			Cake* decoratedCake;

			decoratedCake = new ChocolateCake(baseCake);
			Assert::IsTrue(decoratedCake->price() == baseCake->price() + ChocolateCake::DECORATOR_FEE);
			Assert::IsTrue(decoratedCake->Serve() != baseCake->Serve());
			delete decoratedCake;

			decoratedCake = new StrawberryCake(baseCake);
			Assert::IsTrue(decoratedCake->price() == baseCake->price() + StrawberryCake::DECORATOR_FEE);
			Assert::IsTrue(decoratedCake->Serve() != baseCake->Serve());
			delete decoratedCake;
			
			delete baseCake;
		}
		TEST_METHOD(TestMethod2) //Factory
		{

			MergeMap mm;
			Factory f;
			Map* map = mm.CreateMap(f);

			std::vector<Field*> map_fields = map->getFields();
			std::vector<Obstacle*> map_obstacles = map->getObstacles();
			Assert::IsTrue(map_fields.at(0)->getValue() == 1);
			Assert::IsTrue(map_fields.at(1)->getValue() == 2);
			Assert::IsTrue(map_obstacles.at(0)->getObstacleType() == Obstacle::OB_TEST);
			Assert::IsTrue(map_obstacles.at(0)->getStack() == 10);
		}
		TEST_METHOD(TestMethod1) //Singleton
		{
			int testVal = 0;
			MyClass* classVar_a = MyClass::GetInstance();
			classVar_a->set_value(testVal);
			MyClass* classVar_b = MyClass::GetInstance();
			
			Assert::IsTrue(classVar_b->get_value() == testVal);
		}



	};
}
