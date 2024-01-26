#include <iostream>
using namespace std;

const int SIZE = 5;
class CircularQueue {
private:
	int front, rear;
	int arr[SIZE];
	int count;

public:
	CircularQueue()
	{
		front = -1;
		rear = -1;
		count = 0;
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = 0;
		}
	}

	bool isempty()
	{
		if ((front == -1) && (rear == -1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isfull()
	{
		if (((rear + 1) % SIZE) == front)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void Enqueue(int value)
	{
		if (isfull())
		{
			cout << "CircularQueue is full" << endl;
			return;
		}
		else if (isempty())
		{
			rear = front = 0;
			arr[rear] = value;
			count++;
		}
		else
		{
			rear = (rear + 1) % SIZE;
			arr[rear] = value;
			count++;
		}
	}

	int Dequeue()
	{
		int temp;

		if (isempty())
		{
			cout << "CircularQueue is empty" << endl;
			return 0;
		}
		else if (front == rear)
		{
			temp = arr[rear];
			front = -1;
			rear = -1;
			count--;
			return temp;
		}
		else
		{
			temp = arr[front];
			arr[front] = 0;
			front = (front + 1) % SIZE;
			count--;
			return temp;
		}
	}

	int itemcount()
	{
		return (count);
	}


	void display()
	{
		int index = SIZE - 1;
		for (int i = index; i >= 0; i--)
		{
			cout << arr[i];
			cout << endl;
		}
	}
};

int main() {
	CircularQueue obj;
	int option, value;

	do
	{
		cout << "Select one option from the below to perform your desired fuction opeartions: " << endl;
		cout << "1. for Enqueue operation" << endl;
		cout << "2. for Dequeue operation" << endl;
		cout << "3. for Empty operation" << endl;
		cout << "4. for Full operation" << endl;
		cout << "5. for Count operation" << endl;
		cout << "6. for Display operation" << endl;
		cout << "7. for Clearing the Screen" << endl;
		cout << "0. for closing the program" << endl;

		cin >> option;
		switch (option)
		{
		case 0:
			break;
		case 1:
			cout << "Enter value you want to Enqueue into CircularQueue: " << endl;
			cin >> value;
			obj.Enqueue(value);
			break;
		case 2:
			cout << " The Value: " << obj.Dequeue() << " is dequeued ...!" << endl;
			break;
		case 3:
			if (obj.isempty())
			{
				cout << "CircularQueue is empty " << endl;
			}
			else
			{
				cout << "Stack has some values " << endl;
			}
			break;
		case 4:
			if (obj.isfull())
			{
				cout << "CircularQueue is full " << endl;
			}
			else
			{
				cout << "Some values can be added in the CircularQueue " << endl;
			}
			break;
		case 5:
			cout << "Total values in the CircularQueue are: " << obj.itemcount() << endl;
			break;
		case 6:
			cout << "Values in the CircularQueue are: " << endl;
			obj.display();
			break;
		case 7:
			system("cls");
			break;


		default:
			cout << "Please choose proper option....!" << endl;
			break;
		}


	} while (option != 0);

	return 0;
}

