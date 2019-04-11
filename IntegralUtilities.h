#pragma once
#include <functional>

/**
	Klasa (choæ równie dobrze mog³aby byæ to przestrzeñ nazw, w praktyce ni¹ w³aœnie jest)
	zawieraj¹ca	metody ca³kowania. Aktualny projekt wymaga tylko jakiejkolwiek ca³ki,
	ale niewykluczone jest, ¿e w przysz³oœci zostanie rozszerzona o pe³en wachlarz
	mo¿liwoœci ca³kowania, np. funkcjê licz¹c¹ sumê górn¹/doln¹ dla zadanego podzia³u,
	czy po prostu funkcjê realizuj¹c¹ np. metodê Simpsona z zadanymi parametrami.
*/
class IntegralUtilities
{
public:
	/**
		Jako, ¿e obecny projekt nie skupia siê na ca³kowaniu i potrzebuje jakiegokolwiek ca³kowania, to
		funkcja ca³kuj¹ca po prostu ma ca³kowaæ.
	*/
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