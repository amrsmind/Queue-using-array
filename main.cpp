#include <iostream>
#include <queue>

using namespace std;

class Queue{
private:
    int *arr = new int;
    int Back;
    int Front;
    int size;
public:
    Queue(int s){
    size = s;
    arr = new int[size];
    Back = size;
    Front=size;
    }
    void push(int value){
       if(Back==0){
        cout<<"queue is full "<<endl;
        return;
       }
       if(Front==size){
        Front--;
       }
       Back--;
       arr[Back] = value;
    }
    void pop(){
      if(Front==size){
        cout<<"queue is empty"<<endl;
        return;
      }
      if(Front==Back){
        Front = Back = size;
        return;
      }
      Front--;
    }
    void getFront(){
    if(Front==size){
        cout<<"queue is empty"<<endl;
       return;
    }
    cout <<arr[Front]<<endl;
    }
};

int main()
{
    Queue q(5);
    q.push(3);
    q.push(2);
    q.push(1);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.getFront();
    q.push(10);
    q.push(5);
    q.getFront();
    q.pop();
    q.getFront();
    q.push(2);
        q.push(2);
    q.push(2);
    q.push(2);
    q.push(2);
    q.push(2);
    q.push(2);
    q.push(2);
    q.push(2);
    q.push(2);
    q.push(2);
    q.push(2);
    q.push(2);



    return 0;
}
