#ifndef CLASES_H
#define CLASES_H

#endif // CLASES_H
#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

class Roots
{
public:
    vector<double> Disc(double a,double b,double c)
    {
        double x1, x2, d;
        vector<double> res;
        d = pow(b, 2) - 4 * a * c;
        if (d < 0)
        {
            return res;
        }
        x1 = (-b - sqrt(d)) / (2 * a);
        x2 = (-b + sqrt(d)) / (2 * a);
        res.push_back(x1);
        res.push_back(x2);
        return res;
    }
};


class sinusus
{
private:int fact(int a)
    {int res=1;
        for(int i=1;i<=a; i++)
            res*=i;
        return res;
    }
public:
    double sinus (double a)
    {

        while(a>=6.2532)
            a-=6.2532;
        double res=0;
        for(int i=0; i<5; i++)
        {
            res+= pow(-1,i)*pow(a,2*i+1)/fact(2*i+1);
        }
        return res;


    }
};
class prost
{public:
    vector<int> prostoye(int a)
    {
        vector<int> res;

        while(a!=-1)
        {int b=1;
            for(int i=2; i<=sqrt(a); i++)
            {
                if(a%i==0) {res.push_back(i); a=a/i; b=0; break;}
            }
            if(b!=0) { res.push_back(a); a=-1; }
        }
        if(res.size()==1) { res.clear();}
        return res;

    }
};

int main() {
    double a,b,c,d;
    cin>>a>>b>>c;
    //vector<int> resul=prostoye(a);
    //for(int i=0; i<resul.size(); i++)
    //cout<<resul[i]<<" ";
    //sinusus e;
    //cout<<endl<<e.sinus(a);
    Roots u;
    vector<double> r1=u.Disc(a,b,c);
    for(int i=0; i<r1.size(); i++)
        cout<<r1[i]<<" ";


}
