#include <stdio.h> 
#include <iostream>

using namespace std;
class troad
{ 
public:
float Length;
int Width;
troad();
};
 troad::troad()
{
Length=0;
Width=0.0;
}
int main()
{
troad road;
road.Length=60.0;
return 0;
}
