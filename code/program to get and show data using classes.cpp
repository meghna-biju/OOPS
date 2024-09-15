#include <iostream>
using namespace std;
class Mobile
{
    
    protected:
    int bat,cam;
};
class Apple: public Mobile
{
    protected:
    int ram,rom;
};
class iphone: public Apple
{
    protected:
    string dor;
    float cost;
    public:
    void get_data()
    {
        cout<<"camera"<<endl;
        cin>>cam;
        cout<<"battery"<<endl;
        cin>>bat;
        cout<<"RAM"<<endl;
        cin>>ram;
        cout<<"ROM"<<endl;
        cin>>rom;
        cout<<"Date of release"<<endl;
        cin>>dor;
        cout<<"cost"<<endl;
        cin>>cost;
    }
    void show_data()
    {
        
        cout<<"camera: "<<cam<<endl;
        cout<<"battery: "<<bat<<endl;
        cout<<"RAM: "<<ram<<endl;
        cout<<"ROM: "<<rom<<endl;
        cout<<"Date of release: "<<dor<<endl;
        cout<<"cost: "<<cost<<endl;
    }

};
int main()
{
    iphone obj;
    obj.get_data();
    obj.show_data();
}