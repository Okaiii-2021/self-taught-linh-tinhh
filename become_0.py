# chuyển giá trị của 1 list thành 0


a = [
[1,2,6,8,5,6],
[1,3,3,4,5,6],
[0,0,0,0,0,0],
[1,2,3,4,5,6],
[0,0,0,0],
[1,9,3,4,5,8],
[1,2,3,1,5,6],
[0,0,0,0],]

print(len(a))
print(len(a[1]))

for i in range(len(a)):
    for v in range(len(a[i])):
        a[i][v] = 0

print(a)

