import matplotlib.pyplot as plt
import numpy as np 

x=np.array([5,7,8,7,2,17,2,9,4,11,12,9,6])
y=np.array([99,86,87,88,111,86,10,87,94,78,77,85,86])
plt.scatter(x,y)
plt.show()

x=np.array([5,7,8,7,2,17,2,9,4,11,12,9,6])
y=np.array([99,86,87,88,111,86,10,87,94,78,77,85,86])
plt.scatter(x,y) #store scaterplot in plt

x=np.array([2,2,8,1,15,8,12,9,7,3,11,4,7,14,12])
y=np.array([100,105,84,105,90,99,90,95,94,100,79,112,91,80,85])
plt.scatter(x,y) #storescatterplot in plt
plt.show() #Display combined scaterplot of above two


x=np.array(['A','B','C','D'])
y=np.array([3,8,1,10])
plt.bar(x,y) #strore bar graph
plt.show()

plt.barh(x,y) #store horizontal ar graph
plt.show()

x=np.random.normal(170,10,250)
plt.hist(x) #Store the Histogram in plt
plt.show()

x=np.array([35,25,25,15])
MyLabel=['Apple','Banana','Cherries','Dates']
plt.pie(x,labels=MyLabel,startangle=90) #Store the pie chart in plt
plt.show()

x=np.array([0,1,2,3])
y=np.array([3,8,1,10])
plt.subplot(2,3,1)
plt.plot(x,y)

x=np.array([0,1,2,3])
y=np.array([10,20,30,40])
plt.subplot(2,3,2)
plt.plot(x,y)

x=np.array([0,1,2,3])
y=np.array([3,8,1,10])
plt.subplot(2,3,3)
plt.plot(x,y)

x=np.array([0,1,2,3])
y=np.array([10,20,30,40])
plt.subplot(2,3,4)
plt.plot(x,y)

x=np.array([0,1,2,3])
y=np.array([3,8,1,10])
plt.subplot(2,3,5)
plt.plot(x,y)

x=np.array([0,1,2,3])
y=np.array([10,20,30,40])
plt.subplot(2,3,6)
plt.plot(x,y)

plt.show()