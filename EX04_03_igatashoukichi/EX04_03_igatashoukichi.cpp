﻿#include <iostream>
#include"getVolumeSurface.h"
using namespace std;

int main() {
	double x, y, z;
	cout << "幅を入力(cm):";
	cin >> x;
	cout << "高さを入力(cm):";
	cin >> y;
	cout << "奥行を入力(cm):";
	cin >> z;
	double volume, surface;
	getVolumeSurface(x, y, z, &volume, &surface);
	cout << "体積は" << volume << "cm^3" << endl << "表面積は" << surface << "cm^2" << endl;
	int e;
	cin >> e;
	return 0;
}