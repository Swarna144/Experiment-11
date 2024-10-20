# Experiment-11
Aim:
To study and implement Classes and Objects

Theory:
Object Oriented Programming (OOP):
Object-oriented programming is based on the concept of objects. In object-oriented programming data structures, or objects are defined, each with its own properties or attributes.
To understand OOP better, let us understand some key concepts of OOPS

Class:
A class is a collection of objects, a blueprint of objects defining the common attributes and behavior. This user-defined datatype holds its own instance variables, class variables and member functions which are accessed based on need. This can be done by creating a unique instance of that class.

Object:
A unique instance of a data structure that's defined by its class. It is an identifiable entity with a set of characteristics and behavior.

Inheritance:
The mechanism which creates classes that are built upon existing classes, in a new implementation while maintaining the same behaviors.

Encapsulation:
The mechanism which combines similar data and functions into a single unit called a class. It helps protect the data from any change.

Abstraction:
The mechanism that depends on the separation of the interface and implementation details of the program. It provides only the required details to the user, hiding the technical internal ones.

Polymorphism:
The mechanism which allows an object to be represented in various forms.

![Screenshot 2024-10-21 021142](https://github.com/user-attachments/assets/d589fcc7-9d0a-4487-981d-a28b60102299)


CODE:-

11
```
# include<iostream>
using namespace std;
class cuboid
{
    public:
    double h = 2.0;
    double b = 3.0;
    double l = 4.0;
};
int main()
{
  cuboid c1;
  double vol = c1.h * c1.b * c1.l;
  cout<<"Volume "<<vol<<endl;
}
```

11a
```
# include<iostream>
using namespace std;
class cuboid
{
    public:
    double h = 5.0,b = 3.0,l = 8.0;
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
```

11b
```
# include<iostream>
using namespace std;
class cuboid
{
    private:
    double h = 20.0,b = 13.0,l = 17.0;
    public:
    double volume()
    {
        double vol;
        vol = h * b * l;
        cout<<"Volume "<<vol<<endl;
    }

};
int main()
{
    cuboid c1;
    c1.volume();
  
}
```


11c
```
# include<iostream>
using namespace std;
class cuboid
{
    private:
    double h = 7.0,b = 8.0,l = 9.0;
    public:
    double volume()
    {
        double vol;
        vol = h * b * l;
        return vol;
    }

    void disp(double vol)
    {
        cout<<"Volume "<<vol<<endl;

    }

};
int main()
{
    cuboid c1;
    double v = c1.volume();
    c1.disp(v);
  
}
```

11d
```
# include<iostream>
using namespace std;
class cuboid
{
    public:
    double h,b,l;
    void input()
    {
        cout<<"Enter the length: ";
        cin>>l;
        cout<<"Enter the breadth: ";
        cin>>b;
        cout<<"Enter the height: ";
        cin>>h;
    }
    double volume()
    {
        double vol;
        vol = h * b * l;
        return vol;
    }

    void disp(double vol)
    {
        cout<<"Volume "<<vol<<endl;

    }

};
int main()
{
    cuboid c1;
    c1.input();
    double v = c1.volume();
    c1.disp(v);
  
}
```

OUTPUT:-

11
```
![Ex 11 JPG](https://github.com/user-attachments/assets/da6cd0a4-b9a1-4875-8fd4-8438fdd194ec)
```

11a
```
![EX 11a  JPG](https://github.com/user-attachments/assets/845d4bfa-a188-4630-ae88-c0e8519ea1bc)
```

11b
```
![Ex 11b JPG](https://github.com/user-attachments/assets/e1e7f5f4-1729-43fc-8c80-582d873df247)
```

11c
```
![EX 11c JPG](https://github.com/user-attachments/assets/7390b04a-1ff6-493b-936c-6db227c7b36e)
```

11d
```
![EX 11d JPG](https://github.com/user-attachments/assets/5a0f670b-c4e5-4dd6-b395-66f09b5e2ed2)
```

CONCLUSION:-
→ We learnt about OOP in C++.
→ We learnt the use case of classes and objects in C++.








    
    


