#include <iostream>
using namespace std;
void minMax(long _array[], short length, long& _min, long& _max) {
	short i;
	long min = _array[0];
	long max = _array[1];

	for (i = 1; i < length; i++) {
	
		if (_array[i] < min) min = _array[i];
		if (_array[i] > max) max = _array[i];

	}

	_min = min;
	_max = max;

}
