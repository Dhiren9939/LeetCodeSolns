class MyCircularQueue
{
public:
    int *q;
    int length;
    int f, r;
    MyCircularQueue(int k)
    {
        length = k;
        q = new int[k];
        f = r = -1;
    }

    bool enQueue(int value)
    {
        if (isFull())
            return false;
        r = (r + 1) % length;
        q[r] = value;
        if (f == -1)
            f = 0;
        return true;
    }

    bool deQueue()
    {
        if (isEmpty())
            return false;
        if (f != r)
            f = (f + 1) % length;
        else
            f = r = -1;
        return true;
    }

    int Front()
    {
        if (!isEmpty())
            return q[f];
        return -1;
    }

    int Rear()
    {
        if (!isEmpty())
            return q[r];
        return -1;
    }

    bool isEmpty() { return f == -1; }

    bool isFull() { return f == (r + 1) % length; }

    ~MyCircularQueue() { delete[] q; }
};
