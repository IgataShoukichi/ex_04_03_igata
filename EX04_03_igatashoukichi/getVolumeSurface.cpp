void getVolumeSurface(double x, double y, double z, double* volume, double* surfase) {
	*volume = x * y * z;
	*surfase = 2 * (x * y + x * z + y * z);
}