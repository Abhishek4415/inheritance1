

/*=============================================================
                    c++ protected members
=========================================================================*/

// #include<iostream>
// using namespace std;
// class Animal{
//     private:
//     string color;
//     protected:
//     string type;
//     public:
//     int m=30;

//     void eat(){
//         cout<<"i can eat!"<<endl;

//     };

//     void setcolor(string clr){
//         color=clr;
//     };

//     string getcolor(){
//         return color;
//     };

   



// };
// class dog:public Animal{
//     public:

//     //wrong can't declare private output that class
//     //  string getcolor(){
//     //     return color;
//     // }
//     void bark(){
//         cout<<"i can bark woof!!!!"<<endl;
//     }
//     //access private protected member

//     void settype(string tp){
//         type=tp;

//     };

//     string gettype(){
//         return type;
//     }
//     void display(string c){
//     cout<<"i am "<< type <<endl;
//     cout<<"my color "<<c<<endl;


// }

// };

// int main(){
//     //create object of dog class
//     dog obj;
//     //call base class
//     obj.eat();
//     obj.setcolor("red");
//     //call derived class
//     obj.bark();
//     cout<<endl;
//     obj.settype("mammel");

//     //access private protected member
//     obj.display(obj.getcolor());
//     cout<<obj.getcolor();
//     //access protected member
//    cout<< obj.gettype();
//     //access public
//     cout<<obj.m;
// }


/*==================================
    mode of access class
    ===================================*/
//protected and private is same?

#include<iostream>
using namespace std;
class Animal{
    private:
    string color="black";
    protected:
    string type="mammel";
    public:
    int m=30;

    //for access private
    string getcolor(){
        return color;
    }

};

class dog:protected Animal{
    public:
    //for access protected member from base
    string gettype(){
        return type;
    };

    //function to access public member from base
    int getpublic(){
        return m;
    }
};

int main(){
    dog obj;
   //cout<<obj.getcolor(); can't access private member when protected and private mode is declare

   cout<< obj.gettype();
   cout<< obj.getpublic();
};

//welcome to new topic inheritance overloading