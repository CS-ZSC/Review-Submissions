print ("Fibonacci Sequence Generator"+"\n"+"\n")
x = int(input("Enter the size of sequence"+"\n"))
f = [0,1]
if x == 1:
    f.remove(1)
    print ("The Fibonacci Sequence for the entered number is"+"\n"+str(f))
elif x == 2:
    print ("The Fibonacci Sequence for the entered number is"+"\n"+str(f))
elif x > 2 :
    for i in range(2,x):
        f.append(f[-1]+f[-2])
    print("The Fibonacci Sequence for the entered number is"+"\n"+str(f))
else:
    print("invaild number")
