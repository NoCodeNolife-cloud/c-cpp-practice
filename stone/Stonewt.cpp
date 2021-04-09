#include "Stonewt.h"
#include <iostream>
using namespace std;

Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
	return;
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	return;
}

Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
	return;
}

Stonewt::~Stonewt()
{
	return;
}

void Stonewt::show_lbs() const
{
	cout << pounds << " pounds" << endl;
	return;
}

void Stonewt::show_stn() const
{
	cout << stone << " stone, " << pds_left << " pounds" << endl;
	return;
}

void Stonewt::SetStone(int _stone)
{
	stone = _stone;
	return;
}

int Stonewt::GetStone() const
{
	return stone;
}

void Stonewt::SetPounds(double _pounds)
{
	pounds = _pounds;
	return;
}

double Stonewt::GetPounds() const
{
	return pounds;
}

void Stonewt::SetPds_left(double _pds_left)
{
	pds_left = _pds_left;
	return;
}

double Stonewt::GetPds_left() const
{
	return pds_left;
}

Stonewt::operator int() const
{
	return int(pounds + 0.5);
}

Stonewt::operator double() const
{
	return pounds;
}