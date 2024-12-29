// making a function frirebd of class 
// #include <iostream>
// using namespace std;

// class reactangle{
//     int h,w;
//     public:
//     void set_value(int ,int);
//     int area(){
//         return h+w;
//     };
//     friend reactangle duplicate(reactangle);

// };
// void reactangle::set_value(int a,int b) {
//     h=a;
//     w=b;
// };
// reactangle duplicate(reactangle rectparam){
//     reactangle rectres;
//     // rectres.h=rectparam.h*2;
//     // rectres.w=rectparam.w*2;
//     rectres.set_value(rectparam.h*2,rectparam.w*2);
//     return rectres;
// };
// int main(){
//     cout<<"hii"<<endl;
//     reactangle rect1,rect2;
//     rect1.set_value(6,6);
//     rect2=duplicate(rect1);
//     cout<<rect2.area()<<endl;
//     return 0;
    
// }

// making a friend of class 

// #include <iostream>
// using namespace std;

// class square;
// class reactangle{
//     int h,w;
//     public:
//     void set_value(int ,int);
//     int area(){
//         return h*w;
//     };
//     void convert(square sqr);
//     friend reactangle duplicate(reactangle);

// };
// class square{
//    int side;
//    public:
//    void set_side(int a){
//        side =a;
//    };
//    int area (){
//     return side*side;
//    };
//    friend class reactangle;
// };
// void reactangle::convert(square sqr){
//     h=sqr.side;
//     w=sqr.side;

// };
// void reactangle::set_value(int a,int b) {
//     h=a;
//     w=b;
// };
// reactangle duplicate(reactangle rectparam){
//     reactangle rectres;
//     // rectres.h=rectparam.h*2;
//     // rectres.w=rectparam.w*2;
//     rectres.set_value(rectparam.h,rectparam.w);
//     return rectres;
// };
// int main(){
//     cout<<"hii"<<endl;
//     reactangle rect1;
//     square sq;
//     sq.set_side(6);
//     cout<<"area of square "<<sq.area()<<endl;
//     rect1.convert(sq);
//     cout<<"area of rect "<<rect1.area()<<endl;
//     return 0;
    
// }

// inheritance
//  syntax
//  class derived_class_name: public base_class_name{....}
// #include <iostream>
// using namespace std;

// class polygon{
//     protected:
//         int h,w;
//     public:
//     void set_values(int a,int b){
//        h=a;
//        w=b;
//     };
// };
// class rectangle:public polygon{
//     public:
//     int area(){
//         return h*w;
//     }

// };
// class triangle:public polygon{
//     public:
//     int area(){
//         return (h*w)/2;
//     }

// };
// int main(){
//     cout<<"hii"<<endl;
//     rectangle a;
//     triangle b;
//     a.set_values(5,6);
//     b.set_values(3,4);
//     cout<<"area of rectangle "<<a.area()<<endl;
//     cout<<"area of triangle "<<b.area()<<endl;
//     return 0;

// }

//multiple inherits

#include <iostream>
using namespace std;

class polygon{
    protected:
        int h,w;
    public:
    void set_values(int a,int b){
       h=a;
       w=b;
    };
};
class output{
    public:
    void showoutput(int i){
        cout<<"the output is "<<i<<endl;
    };
};
class rectangle:public polygon,public output{
    public:
    int area(){
        return h*w;
    }

};
class triangle:public polygon,public output{
    public:
    int area(){
        return (h*w)/2;
    }

};

int main(){
    cout<<"hii"<<endl;
    rectangle a;
    triangle b;
    a.set_values(5,6);
    b.set_values(3,4);
    a.showoutput(a.area());
    b.showoutput(b.area());
    // cout<<"area of rectangle "<<a.area()<<endl;
    // cout<<"area of triangle "<<b.area()<<endl;
    return 0;

}