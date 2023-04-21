class Queue:
    def __init__(self):
        self.items = []
 
    def is_empty(self):
        return self.items == []
 
    def enqueue(self, data):
        self.items.append(data)
 
    def dequeue(self):
        return self.items.pop(0)
 
 
q = Queue()
print(q.is_empty())

q.enqueue(1)

print(q.is_empty())

q.dequeue()

print(q.is_empty())
