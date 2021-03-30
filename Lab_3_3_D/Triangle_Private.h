#pragma once
#include "Triad.h"

class Triangle_Private : private Triad
{
public:
	using Triad::GetA;
	using Triad::GetB;
	using Triad::GetC;

	using Triad::SetA;
	using Triad::SetB;
	using Triad::SetC;

	using Triad::Triad;

	Triangle_Private();
	Triangle_Private(const double a, const double b, const double c);
	Triangle_Private(const Triangle_Private& s);

	Triangle_Private& operator = (const Triangle_Private& s);
	operator string () const;

	friend ostream& operator << (ostream& out, const Triangle_Private& s);
	friend istream& operator >> (istream& in, Triangle_Private& s);

	Triangle_Private& operator ++ ();
	Triangle_Private& operator -- ();
	Triangle_Private operator ++ (int);
	Triangle_Private operator -- (int);

	double Sum();
	double Square() const;
	void Angle(double& A, double& B, double& C) const;
};
