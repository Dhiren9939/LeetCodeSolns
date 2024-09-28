class MyCircularQueue {

    int q[];
    int f, r;

    public MyCircularQueue(int k) {
        q = new int[k];
        f = r = -1;
    }

    public boolean enQueue(int value) {
        if (isFull())
            return false;
        r = (r + 1) % q.length;
        q[r] = value;
        if (f == -1)
            f = 0;
        return true;
    }

    public boolean deQueue() {
        if (isEmpty())
            return false;
        if (f != r)
            f = (f + 1) % q.length;
        else 
            f = r = -1;
        return true;
    }

    public int Front() {
        if(!isEmpty())
            return q[f];
        return -1;
    }

    public int Rear() {
        if(!isEmpty())
            return q[r];
        return -1;
    }

    public boolean isEmpty() {
        return f == -1;
    }

    public boolean isFull() {
        return f == (r + 1) % q.length;
    }
}
