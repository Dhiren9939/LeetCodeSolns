class MyCircularQueue:
    q = []
    f = -1
    r = -1
    k = 0

    def __init__(self, k: int):
        self.k = k
        self.q = [0 for i in range(k)]

    def enQueue(self, value: int) -> bool:
        if self.isFull():
            return False
        self.r = (self.r + 1) % self.k
        self.q[self.r] = value
        if self.f == -1:
            self.f = 0
        return True

    def deQueue(self) -> bool:
        if self.isEmpty():
            return False
        if not self.f == self.r:
            self.f = (self.f + 1) % self.k
        else:
            self.f = self.r = -1
        return True

    def Front(self) -> int:
        if not self.isEmpty():
            return self.q[self.f]
        return -1

    def Rear(self) -> int:
        if not self.isEmpty():
            return self.q[self.r]
        return -1

    def isEmpty(self) -> bool:
        return self.f == -1

    def isFull(self) -> bool:
        return self.f == (self.r + 1) % self.k

q = MyCircularQueue(5)
q.enQueue(5)
print(q.Front())