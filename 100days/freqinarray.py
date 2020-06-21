a=[3,4,4,5,6,3,1,2,6,6,6]
a.sort()
freq=[]
k=0
n=len(a)-1
for i in range(0,n):
    count=0
    for j in range(0,n):
        if a[i]==a[j]:
            count+=1
    freq.append(count)
    k=k+1
print(freq)    
    
