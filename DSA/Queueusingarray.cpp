#include <iostream>
using namespace std;
const int SIZE = 5;
class Queue{
	int front, rear , arr[SIZE];
public:
	Queue():front(-1),rear(-1),arr{0}{}
	inline bool isempty(){
		return ((front == -1) && (rear == -1));
	}
	inline bool isfull(){
		return (rear == sizeof(arr - 1));
	}
	void Enqueue(int value){
		if (isfull())
			cout << "Queue is full" << endl;
		else if (isempty()){
			rear = front = 0;
			arr[rear] = value;
		}
		else arr[++rear] = value;
	}
	int Dequeue(){
		int temp = 0;
		if (isempty())
			cout << "Queue is empty" << endl;
		else if (front == rear){
			temp = arr[rear];
			front=rear=-1;
		}
		else{
			temp = arr[front];
			arr[front++] = 0;
		}
		return temp;
	}
	inline int count(){
		return isempty() ? 0:(rear - front + 1);
	}
	void display(){
		if(isempty())
			cout << "Queue is empty" << endl;
		else{
			for(int i = rear; i >= front; i--)
				cout << arr[i]<<" ";
			cout<<endl;
		}
	}
};
int main(){
	Queue obj;
	int option, value;
	for(;;){
		cout << "Select one option from the below to perform your desired fuction opeartions: " << endl
		<< "1. for Enqueue operation" << endl
		<< "2. for Dequeue operation" << endl
		<< "3. for Empty operation" << endl
		<< "4. for Full operation" << endl
		<< "5. for Count operation" << endl
		<< "6. for Display operation" << endl
		<< "7. for Clearing the Screen" << endl
		<< "0. for closing the program" << endl;
		cin >> option;
		switch (option){
		case 0:
			return EXIT_SUCCESS;
		case 1:
			cout << "Enter value you want to Enqueue into Queue: " << endl;
			cin >> value;
			obj.Enqueue(value);
			break;
		case 2:
			cout << " The Value: " << obj.Dequeue() << " is dequeued ...!" << endl;
			break;
		case 3:
			cout <<(obj.isempty() ? "Queue is empty ":"Queue has some values ")<< endl;
			break;
		case 4:
			cout<<(obj.isfull() ? "Queue is full ":"Some values can be added in the Queue ")<<endl;
			break;
		case 5:
			cout << "Total values in the Queue are: " << obj.count() << endl;
			break;
		case 6:
			cout << "Values in the Queue are: " << endl;
			obj.display();
			break;
		case 7:
			system("clear");
			break;
		default:
			cout << "Please choose proper option....!" << endl;
		}
	}
}