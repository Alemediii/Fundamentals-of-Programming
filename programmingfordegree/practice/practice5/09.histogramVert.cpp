// 08.histogramVert.cpp
// Osiris García Parras
// Double Degree in Maths and Computer Science
// 2023-11-15

#include <iostream>
#include <array>
using namespace std;

const int N = 5;

typedef array<float,N> TVec;

TVec readArr();
void printArr(TVec a);
void vHistArr(TVec a);
int maxArr(TVec a);


int main(){

	cout << "Introduce the elements of the array:" << endl;
	
	TVec arr = readArr();

	cout << "------ ARRAY ------" << endl;

	printArr(arr);

	cout << "------ HISTOGRAM -------" << endl;

	vHistArr(arr);


	return 0;
}

void vHistArr(TVec a) {								// This function creates the vertical histogram. Notice one thing, the top row will be
													// the max element! If not, we will have blank space. 
	for (int i = maxArr(a); i > 0; --i) {				

		for (int j = 0; j < a.size(); ++j) {		// Once we know the number of rows ( maxArr(a) ), we will start traversing the positions
													// in the columns (++j) and will begin descending (--i).
												
			if (a[j] < i)							// And this is the key point. Is a[j] < "the row we are in"? Imagine a vertical histogram.
				cout << " ";						// YES -> a '#' must be printed ||| NO -> empty space 
			else
				cout << "#";						// And the histogram is finished :)

		}

		cout << endl; 
	}
}

int maxArr(TVec a) {

	int max=a[0];

	for (int i=1; i<a.size(); ++i) {
		if (a[i] > max)
			max = a[i];
	}

	return max;
}


TVec readArr() {
		
		TVec vec;
		int num;
		
		for (int i=0; i < vec.size(); ++i) {
			cout << ">> "; cin >> num;
			vec[i]=num;
		}
		return vec;
}

void printArr(TVec a) {

	for (int i=0; i < a.size(); ++i) {
		cout << a[i] << " ";
	}
	
	cout << endl;
}