#pragma once
#include "Triad.h"

class Triangle_Public : public Triad
{
public:
	Triangle_Public();
	Triangle_Public(const double a, const double b, const double c);
	Triangle_Public(const Triangle_Public& v);

	Triangle_Public& operator ++ ();
	Triangle_Public& operator -- ();
	Triangle_Public operator ++ (int);
	Triangle_Public operator -- (int);

	double Sum();
	double Square() const;
	void Angle(double& A, double& B, double& C) const;
};

