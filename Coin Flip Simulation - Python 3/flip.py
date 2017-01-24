from random import randint

n = int(input("Enter the number of coin flips you want "))

heads = 0
tails = 0

for i in range(0,n) :
    x = randint(0,1)
    if x == 0 :
        heads = heads + 1
    else :
        tails = tails + 1

print ("Number of heads is {}\nNumber of tails is {}".format(heads, tails))
