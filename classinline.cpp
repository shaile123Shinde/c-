#include<iostream>
using namespace std;
class max{
    public:
    void shailesh(){
        cout<<"hello shailesh hai how are you:"<<endl;
    }
    
};
class B:public max{
    int a,b;
    public:

    void getdata(){
        cout<<"enter the two number:"<<endl;
        cin>>a>>b;
}
 inline void putdata(){

         cout<<a+b<<endl;
    }
};
int main(){
B sh;
sh.getdata();
sh.putdata();
sh.shailesh();
return 0;
}