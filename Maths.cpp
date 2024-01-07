#include <iostream>
#include <cmath>

namespace pi{
    const double P = 3.14;
}
namespace e{
    const double EE = 2.71;
}


int main(){
using namespace std;
using namespace pi;
using namespace e;

int max_num = (int)max(P,EE);
int min_num = (int)min(P,EE);

cout << max_num << "\n";
cout << min_num << "\n";

int pow1 = (int)pow(max_num,min_num);

int pow2 = (int)pow(min_num,max_num);

double round1 = round(max_num);

double round2 = round(min_num);

int ceil1 = ceil(max_num);

int ceil2 = ceil(min_num);

int floor1 = floor(max_num);

int floor2 = floor(min_num);

cout << pow1 << "\n";
cout << pow2 << "\n";
cout << round1 << "\n";
cout << round2 << "\n";
cout << ceil1 << "\n";
cout << ceil2 << "\n";
cout << floor1 << "\n";
cout << floor2 << "\n";

//A maths program made in C++.
//To calculate.
//Enjoy!!!

return 0;

}