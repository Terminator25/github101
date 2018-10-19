print("Input the number to calculate factorial for=")
num=int(input())
factorial=1
for i in range(1, num+1):
  factorial=factorial*i
print("The factorial of",num,"is",factorial)
