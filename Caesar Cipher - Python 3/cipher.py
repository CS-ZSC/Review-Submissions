print ("Welcome to Caesar cipher decoder/encoder"+"\n"+"\n")
final = ""
mode = int(input("Enter (1)for encoding and (2) for decoding..."+"\n"))
ph = input("Enter the sentence"+"\n")
key = int(input("Enter the key"+"\n"))
if mode == 1 :
    for i in ph:
        if i ==' ':
            final += ' '
        elif ord(i) in range(65,90):
            x = ord(i) + key
            if x > 90 :
                x -= 26
            final += chr(x)
        elif ord(i) in range(97,122):
            y = ord(i) + key
            if y > 122:
                y -= 26
            final += chr(y)
    
    print ("The encoded sentence is..." + "\n" + final)
elif mode == 2:
    for i in ph:
        if i ==' ':
            final += ' '
        elif ord(i) in range(65,90):
            x = ord(i) - key
            if x < 65:
                x += 26
            final += chr(x)
        elif ord(i) in range(97,122):
            y = ord(i) - key
            if y < 97:
                y += 26
            final += chr(y)
    
    print ("The decoded sentence is..." + "\n" + final)
