import numpy as np

x=np.array([[1,2],[4,5]])
y=np.array([[7,8],[9,10]])

print("The element wise addition of matrix is : ")
print(np.add(x,y))

print("The element wise substaction of matrix is : ")
print(np.subtract(x,y))

print("The element wise multiply of matrix is : ")
print(np.dot(x,y))

print("Transpose of given matrix is : ")
print(x.T)
print("\n\n")