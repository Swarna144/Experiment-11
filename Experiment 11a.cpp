# include<iostream>
using namespace std;
class cuboid
{
    public:
    double h = 6.0,b = 8.0,l = 4.0;
    double volume()
    {
        double vol = h * b * l;
        cout<<"Volume "<<vol<<endl;
    }

};
int main()
{
    cuboid c1;
    c1.volume();
  
}
    