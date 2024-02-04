# Q1. WAP to print the table of n number given by user.✅

# n = int(input("Enter the number : "))

# for i in range(1,11) :
#     print(f"{n} n1 {i} = {n*i}")

# Q2. WAP check whether the number is prime or not. ✅

# n = int(input("Enter the number : "))

# a = 0
# if n == 1:
#     print(f"{n} is prime")
    
# for i in range(2,n):
#     if n%i != 0:
#         a = a+1
        
# if n-a == 2:
#     print(f"{n} is prime")
# else:
#     print(f"{n} is not prime")

# Q3. WAP check the given string is palindrom or not✅

# def isPalindrom(s):
#     reverse = ''
#     for i in s:
#         reverse = i + reverse
    
#     if reverse == s:
#         print(f"{s} is plaindrom")
#     else:
#         print(f"{s} is not palindrom")
    

# isPalindrom("noon")

# Q4. WAP check the given number is palindrom or not ✅
    
# num = int(input("Enter the number : "))

# length = 0

# n1 = num

# while(n1 != 0):
#     length = length + 1
#     n1 = n1//10

# n2 = num
# rev = 0
# while n2 != 0:
#     lastDigit = n2%10
#     rev = rev + lastDigit * (10**(length-1))
#     length-=1
#     n2 = n2//10

# if num == rev :
#     print(f"{num} is palindrom")
# else:
#     print(f"{num} is not palindrom")
