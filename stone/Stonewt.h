#pragma once
class Stonewt
{
private:
	enum { Lbs_per_stn = 14 };
	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt();
	~Stonewt();

	Stonewt(double lbs);
	Stonewt(int stn, double lbs);

	void show_lbs()const;
	void show_stn()const;

	void SetStone(int _stone);
	int GetStone()const;

	void SetPounds(double _pounds);
	double GetPounds()const;

	void SetPds_left(double _pds_left);
	double GetPds_left()const;

	//conversion functions
	operator int() const;
	operator double()const;
};
