#pragma once
#include "Common.h"

template <typename T>
class Point {
public:
	union {
		struct {
			T x;
			T y;
		};
		T coords[2];
	};
	Point() {}
	Point(const T& n) : x(n), y(n) {}
	Point(const T& x, const T& y) : x(x), y(y) {}
	Point(const Point& p) : x(p.x), y(p.y) {}

	Point& operator+(const T& n) {
		x += n;
		y += n;
		return *this;
	}
	Point& operator-(const T& n) {
		x -= n;
		y -= n;
		return *this;
	}
	Point& operator*(const T& n) {
		x *= n;
		y *= n;
		return *this;
	}
	Point& operator/(const T& n) {
		x /= n;
		y /= n;
		return *this;
	}
	
	Point& operator+(const Point<T>& p);
	Point& operator-(const Point<T>& p);
	Point& operator*(const Point<T>& p);
	Point& operator/(const Point<T>& p);

	inline double distance(const Point<T>& p) { return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2)); }
	inline double squraredDist(const Point<T>& p) { return (x - p.x)*(x - p.x) + (y - p.y)*(y - p.y); }
};