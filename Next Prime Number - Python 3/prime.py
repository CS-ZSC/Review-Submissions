i = int(input("Enter the number you want to start with: "))

while (i >= 2):
    i += 1
    if all(i%num != 0 for num in range(2,i-1)):
            print(i)
            
    else:
        continue
    n = input("Next[Y/N]?")
    if n == 'N':
        break
    else :
        continue
