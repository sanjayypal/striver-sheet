class Queue {

	int front, rear;
	vector<int> arr;

public:
	Queue()
	{
		front = 0;
		rear = 0;
		arr.resize(100001);
	}

	// Enqueue (add) element 'e' at the end of the queue.
	void enqueue(int e)
	{
     if(rear == arr.size())
	 return;

     else {
         arr[rear] = e;
         rear++;
     }
        }

        // Dequeue (retrieve) the element from the front of the queue.
	 int dequeue()

    {

        // Write your code here.

        if(front == rear)return -1;

        else{

            int element = arr[front];

            front++;

        return element;

        }

    }
};