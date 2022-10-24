#pragma once
#include <vector>
#include "Math.h"
class CModel
{
public:
	CModel();
	~CModel();

	template <class Type>
	void ComputeVector();

	void DoGreatStuff();

private:
	int mySomething;
};

#define ITERATIONS 10
#define COMPUTATIONS 1000
#define SUBCOMPUTATIONS 1000
template <class Type>
void CModel::ComputeVector()
{
	for (int k = 0; k < ITERATIONS; k++)
	{
		std::vector<Math::Vector4<Type>> listOfVectors;
		for (int i = 0; i < COMPUTATIONS; i++)
		{
			for (int j = 0; j < SUBCOMPUTATIONS; j++)
			{
				Math::Vector4<Type> newVec;
				listOfVectors.push_back(newVec);
			}
		}
	}
}

