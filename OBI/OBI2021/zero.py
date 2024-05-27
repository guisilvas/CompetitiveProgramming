n = int(input())
arr1 = []
for i in range(n):
    y = int(input())
    if y==0:
        if(arr1):
            arr1.pop()
    else:
        arr1.append(y)
z = len(arr1)
total_sum = sum(arr1)
print(total_sum)
    