#pragma once

class Conus
{
private:
	double *height;
	double *radius;
public:
	Conus();
	Conus(double height, double radius);
	Conus(const Conus &obj);
	~Conus();

	double GetHeight();
	double GetRadius();

	void SetHeight(double a);
	void SetRadius(double b);

	double Ñapacity();
	double Area();
};
