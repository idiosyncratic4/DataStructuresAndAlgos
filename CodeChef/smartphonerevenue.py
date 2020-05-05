# cook your dish here
n=int(input())
list1=[]
for _ in range(n):
    list1.append(int(input()))
list1.sort()
max = 0
for x in range(n):
    sum=list1[x]*(n-x)
    if sum > max:
        max=sum
print(max)
    
