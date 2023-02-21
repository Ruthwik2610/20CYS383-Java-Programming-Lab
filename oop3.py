import math
class Point:
    def __init__(self,x=0,y=0):
        self.x=x
        self.y=y
        
    def show(self):
        a=(self.x,self.y)
        print(a)
    def move(self,x,y): 
        tmp=Point()
        tmp.x=self.x+x
        tmp.y=self.y+y
        #t=(self.x,self.y)
        #print(t)
        return tmp
    def dist(self,obj2):
        dist=math.sqrt(math.pow((obj2.x-self.x),2)+math.pow((obj2.y-self.y),2))
        print(dist)
p1=Point(2,3)
p2=Point(3,3)
p1.show()
p2.show()
t=p1.move(10,-10)
t.show()
p1.show()
p2.show()
p1.dist(p2)


