#include <stdio.h>
#include <math.h>
#include "point.h"

double distance(point_t p1, point_t p2) {
	return sqrt((p1.x - p2.x) * (p1.x - p2.x) +
		(p1.y - p2.y) * (p1.y - p2.y));
}

void print(point_t p) {
	printf("(%.2lf, %.2lf)\n", p.x, p.y); 
}

void main() {
	point_t a = {12.0, 42.0};
	point_t b = {15.0, 36.0};

	print(a);
}
