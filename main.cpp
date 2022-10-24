#include <iostream>
#include "Model.h"
#include "Timer.h"


void RunTestOne()
{
	// TEST 1, Endast observation
	CModel myModel;

	START_TIMER(Vector4Float, "Vec4 Float");
	myModel.ComputeVector<float>();
	END_TIMER_AND_PRINT(Vector4Float, "Vec4 Float");

	START_TIMER(Vector4Int, "Vec4 Int");
	myModel.ComputeVector<int>();
	END_TIMER_AND_PRINT(Vector4Int, "Vec4 Int");

	START_TIMER(Vector4Short, "Vec4 Short");
	myModel.ComputeVector<short>();
	END_TIMER_AND_PRINT(Vector4Short, "Vec4 Short");

	START_TIMER(Vector4Long, "Vec4 Long");
	myModel.ComputeVector<long>();
	END_TIMER_AND_PRINT(Vector4Long, "Vec4 Long");

	START_TIMER(Vector4Char, "Vec4 Char");
	myModel.ComputeVector<char>();
	END_TIMER_AND_PRINT(Vector4Char, "Vec4 Char");

	std::cout << "Test 1 - Done!" << std::endl;
}

void RunTestTwo()
{
#pragma message("Please check HERE!")
	// TODO I know, I am so sorry for this! It was deadline and I didn't think :(:(:(:(, Please pix this code ASAP
	const unsigned int iterations = 10000000;
	START_TIMER(CustomTimer, "CustomTimer");

	std::vector<CModel*> models;
	for (int i = 0; i < iterations; i++)
	{
		CModel* model = new CModel();
		model->DoGreatStuff();
		models.push_back(model);
	} 

	END_TIMER_AND_PRINT(CustomTimer, "CustomTimer");
	std::cout << "Test 2 - Done!" << std::endl;
}

int main()
{
	RunTestOne();
	std::cout << "---------------------------" << std::endl;
	RunTestTwo();

	system("pause");
	return 0;
}