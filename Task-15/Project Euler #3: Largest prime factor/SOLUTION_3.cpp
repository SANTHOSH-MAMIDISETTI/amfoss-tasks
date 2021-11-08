/*THIS IS THE SOLUTION MADE BY ME FOR THE QUESTION "Project Euler #3: Largest prime factor" FOR TASK-15.
MOST/all THE HEADER FILES IN THIS CODE ARE USELESSEXCEPT FOR THE HEADER FILE SHOWN SEPARATELY
JUST LEFT THEM AS THEY WERE GIVEN WITH THE QUESTION😁😁*/

#include <iostream>

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main()
{
   int t;
  std::cin >> t;
  while (t--)
  {
     long x;
    std::cin >> x;

    for ( long f = 2; f * f <= x; f++)
      
      while (x % f == 0 && x != f) 
        x /= f;

    std::cout << x << std::endl;
  }
  return 0;
}
