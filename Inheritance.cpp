#include <iostream>
using namespace std;

class student{
public:
  string name;
  int roll;
  int age;

  student(){
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Roll: ";
    cin>>roll;
  }
};

class test: public student{
public:
  int arr[5];
  test(){
    cout<<"Enter marks of 5 subjects: ";
    for(int i=0; i<5; i++){
      cin>>arr[i];
}
}
  void display(){
      cout<<"\n\nStudent Details: \nName:"<<name<<"\nRoll: "<<roll<<"\nAge: "<<age;
      cout<<"\nMarks: ";
      for(int i=0; i<5; i++){
      cout<<arr[i]<<"  ";
    }
}
};
int main(){
  class test t1;
  t1.display();
  return 0;

}
