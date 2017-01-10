#include <vector>
#include <algorithm>
#include <iostream>
bool comp(std::vector<int> a, std::vector<int> b)
{
      if (a.empty() || b.empty())
        return false;
   	  std::for_each(a.begin(), a.end(), [&](int & param) { param*= param;});
      std::sort(a.begin(), a.end());
      std::sort(b.begin(), b.end());
	  return std::equal(a.begin(), a.end(), b.begin());
}

int main()
{
		const int arr1[] = {121, 144, 19, 161, 19, 144, 19, 11};
        std::vector<int> a1 (arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));
        const int arr2[] = {121, 14641, 20736, 36100, 25921, 361, 20736, 361};
        std::vector<int> b2 (arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));
        std:: cout << comp(a1, b2); // true
}