# include<iostream>
using namespace std;
class cuboid
{
    public:
    double h = 1.0;
    double b = 5.0;
    double l = 7.0;
};
int main()
{
  cuboid c1;
  double vol = c1.h * c1.b * c1.l;
  cout<<"Volume "<<vol<<endl;
}
    