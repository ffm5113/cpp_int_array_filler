// Source(s) of logic assistance:  
// Gaddis, T. (2018). Starting out with C++:
// From control structures through objects. Pearson. 

#include <iostream> // To use cin/cout
#include <iomanip>  // To access setw, setprecision for output width
#include <ctime>    // To access random number generator
using namespace std;

// Global Constant Initialization
const string TITLE = "Integer Array Filler Program";
const string AUTHOR_LINE = "By Forrest Moulin";
const int ARRAY_SIZE = 50;

int main()
{
	// Seed the random number generator
	// using the current time
	srand(time(NULL));
	int randomNumber;
	// Declare array of ints, size 50
	int numArray[ARRAY_SIZE];

	cout << TITLE << endl
		<< AUTHOR_LINE << endl << endl;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		// Fill array w/ random number from 1 to 10,000
		randomNumber = rand() % 10000 + 1;
		numArray[i] = randomNumber;
		// Print the random number
		cout << right << setw(6) << randomNumber;
		// Skip to new line after 10th int (remainder is 0)
		if ((i + 1) % 10 == 0)
		{	
			cout << endl;
		}
	}
	cout << endl << "Array filled and printed." << endl
		<< "Until next time :)" << endl;
}
/*
* CONSOLE OUTPUT EXAMPLE # 1
* Integer Array Filler Program
* By Forrest Moulin
*
*    221   410   986   352  1772  6942  1112  6958  5613  5180
*   8399  2309  6131  2230  8346  2453  5456  5399  2011  9975
*   4937  6948  2224   531   933  6964  6086    66  8726   641
*   4044  6598  5339  2847  4537  2073  3365  4573  8960  8803
*   6600  4138  2546  5376  3428  4362  2084  2066  5973  6425
*
* Array filled and printed.
* Until next time :)
*/

/*
* CONSOLE OUTPUT EXAMPLE # 2
* Integer Array Filler Program
* By Forrest Moulin
*
*    364  4588   578   562  9629  5878  6988  9230  1227  9577
*   1891  4247  7201  9373  1761  1665  5800  9677  7027  9252
*   5699  9981  7517  1493  8104  2030  3390  1332  2432    80
*   5013  9111  8480   376  8228  9335  5513  6722  3828  2777
*   2878  8281  5098  5983  3380  4772  9912  1040   910  6467
*
* Array filled and printed.
* Until next time :)
*/
