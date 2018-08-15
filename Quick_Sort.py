import numpy
def sort_as(mass, first, last):
    f=first
    l=last
    mid=mass[int((f+l)/2)]
    while(mass[f]<mid):
        f+=1
    while(mass[l]>mid):
        l-=1
    if(f<=l):
        temp=mass[f]
        mass[f]=mass[l]
        mass[l]=temp
        f+=1
        l-=1
    if(first<l):
        sort_as(mass,first,l)
    if(f<last):
        sort_as(mass,f,last)
    return mass
def sort_des(mass, first, last):
    f=first
    l=last
    mid=mass[int((f+l)/2)]
    while(mass[f]>mid):
        f+=1
    while(mass[l]<mid):
        l-=1
    if(f<=l):
        temp=mass[f]
        mass[f]=mass[l]
        mass[l]=temp
        f+=1
        l-=1
    if(first<l):
        sort_des(mass,first,l)
    if(f<last):
        sort_des(mass,f,last)
    return mass
n = int(input("Enter size of array"))
mass = numpy.random.randint(1000, size=n)
for i in range(n):
    print("", mass[i]," ",end="")
print("")
a = int(input("Choose how to sort: ascending or descending(enter 1 or 2 respectively)."))
if(a==1):
    sort_as(mass, 0, n-1)
if(a==2):
    sort_des(mass, 0, n-1)
print("The array is sorted: ",end="")
for i in range(n):
    print("", mass[i]," ",end="")