class Stack: 
    def __init__(self): 
        self.elements = [] 
    
    def push(self, data): 
        self.elements.append(data) 
        return data 
    
    def pop(self): 
        return self.elements.pop() 
        
    def peek(self): 
        return self.elements[-1] 
        
    def is_empty(self): 
        return len(self.elements) == 0
    
    def getSize(self):
        return len(self.elements)



stack = Stack()

print(stack.is_empty())

for i in range(1, 11):
    stack.push(i)

print(stack.peek())

stack.pop()
stack.pop()

print(stack.peek())
print(stack.getSize())