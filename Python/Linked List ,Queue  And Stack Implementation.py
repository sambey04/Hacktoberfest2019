class LL_node:
  
  def __init__(self,value,nex=None,prev=None):
    self.nex=nex
    self.prev=prev
    self.value=value
    print("node created with value "+str(value))
  
  
previous=0
class LL:
  def __init__(self,value,head=None,tail=None):
    self.value=value
    self.head=head
    self.tail=tail
    
  '''add_q() method is used to add element as in queue '''
    

  
  '''add_el() method is equivalent to push method for stack'''
  def add_el(self,value):
    
    if(self.head is None):
      print("value is "+str(value))
      print("head is created")
      
      self.head=self.tail=LL_node(value)
    
    else:
      print("head exist")
      print("value is "+str(value))
      
      self.tail.nex = LL_node(value)
      
      prev = self.tail
      
      
      self.tail=self.tail.nex
      self.tail.prev=prev
      
      self.tail.nex=None
 
  def print_LL(self):
    
    current=self.head
    global previous
    while(current!=None):
      
      print(str(current.value)+"--->")
      previous=current
      print('previous id is '+str(previous))
      current=current.nex
      
  
  '''pop() method of stack used to pop element from tail i.e from last'''
  def pop_s(self):
   
    tr=self.tail.value
    self.tail = self.tail.prev
    
    self.tail.nex=None
    return tr
    
  def remove_q(self):
    
    if(self.head is None):
      print('Queue is empty')
    
    elif(self.head.nex is None):
      
      tr=self.head.value
      self.head=None
      return 
        
    
    else:
      tr=self.head.value
      self.head=self.head.nex
      self.head.prev=None
      return tr
    
    
    
    
  def remove(self,a):
    current=self.head;
    while(current!=None or current.val ==a ):
      curre
      current=curre
      
#Demonstration Part      
LL1=LL(5)
LL1.add_el(6)

LL1.add_el(7)
LL1.add_el(8)

LL1.print_LL()