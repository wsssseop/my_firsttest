

#include <iostream>

class Cents
{
private:
	int m_cents;
public:
	Cents(int cents) { m_cents = cents; }
	int GetCents() const
	{
		return m_cents;
	}
};

Cents operator + (const Cents& c1, const Cents& c2)
{
	return Cents(c1.GetCents() + c2.GetCents());
}

int main()
{

	Cents c1(6);
	Cents c2(10);


	std::cout << (c1 + c2).GetCents() << std::endl;


}
