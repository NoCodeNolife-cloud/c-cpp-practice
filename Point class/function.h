#pragma once
//ÖØÔØÔËËã·û"+"
Point operator+(Point& pt, int nOffset) {
	Point ptTemp = pt;
	ptTemp.x += nOffset;
	ptTemp.y += nOffset;
	return ptTemp;
}
Point operator+(int nOffset, Point& pt) {
	Point ptTemp = pt;
	ptTemp.x += nOffset;
	ptTemp.y += nOffset;
	return ptTemp;
}
