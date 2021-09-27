

#include <algorithm>
#include "TheSecondChapter.h"
#include <vector>
using namespace std;
int main()
{
	using namespace introductionToAlgorithms;
	vector<int> a{ 1,7,2,4,78,3 };
	
	insertion_sort(a.begin(), a.end(), [](int  a, int  b)->bool {return a > b; });
	return 0;
}