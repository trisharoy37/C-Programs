//programs for swapping
//first way
#include <iostream>
using namespace std;
int main()
{
    int a,b,temp;
    a=10;
    b=33;
    cout<<"Actual value of a and b are "<<a<<" and "<<b;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"\nAfter swapping value of a and b are "<<a<<" and "<<b;
    return 0;
}
//second way
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    a=10;
    b=33;

    cout<<"Before swap a="<<a<<" b = "<<b<<"\n";

    b=(a+b)-(a=b);

    cout<<"After swap a ="<<a<<" b = "<<b<<"\n";
    return 0;
}
//third way
#include <iostream>
using namespace std;
int main()
{
int a,b;
a=4;
b=2;

cout<<"Before swap a="<<a<<" b = "<<b<<"\n";

b=(a*b)/(a=b);

cout<<"After swap a ="<<a<<" b = "<<b<<"\n";
return 0;
}
//fourth way
#include<iostream>
using namespace std;

int main()
{
int a,b,c;
float avg;
cout<<"enter three numbers";
cin>>a>>b>>c;
avg=(float)(a+b+c)/3;
cout<<"the average of three numbers is "<<avg;
return 0;
}
//fifth way
#include <iostream>
using namespace std;
int main()
{
int a,b;
a=7;
b=5;

cout<<"Before swap a="<<a<<" b = "<<b<<"\n";
a=a^b;
b=b^a;
a=a^b;

cout<<"After swap a ="<<a<<" b = "<<b<<"\n";
return 0;
}
//sixth way
#include <iostream>
using namespace std;
int main()
{
int a,b;
a=45;
b=23;

cout<<"Before swap a="<<a<<" b = "<<b<<"\n";
a^=b;
b^=a;
a^=b;

cout<<"After swap a ="<<a<<" b = "<<b<<"\n";
return 0;
}
//seventh way
#include <iostream>
using namespace std;
int main()
{
int a,b;
a=11;
b=34;

cout<<"Before swap a="<<a<<" b = "<<b<<"\n";

a^=b^=a^=b;


cout<<"After swap a ="<<a<<" b = "<<b<<"\n";
return 0;
}
