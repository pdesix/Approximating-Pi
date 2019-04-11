#pragma once
#include <functional>
class IntegralUtilities
{
public:
	template<typename FunctionValueType, typename FunctionArgumentType>
	static double just_integrate(const FunctionArgumentType& a, const FunctionArgumentType& b, int accuracy_level, const std::function<FunctionValueType(FunctionArgumentType)>& f)
	{
		double sum{ 0.0 };
		double dx{ (b - a) / static_cast<double>(accuracy_level) };
		FunctionArgumentType x{ a };
		for (int i{ 0 }; i < accuracy_level; i++)
		{
			sum += dx * static_cast<double>(f(x));
			x += dx;
		}
		return sum;
	}
};