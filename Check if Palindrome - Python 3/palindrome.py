s = input("Enter a word to ckeck if palindrome: ").lower()

str1 = list(s)
str2 = str1[len(str1)-1::-1]

if str1 == str2 :
    print ("The word is a palindrome")
else :
    print ("The word is not a palindrome")
