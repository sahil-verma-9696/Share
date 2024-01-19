# Q1. check the given number is even or odd.✅
# n = int(input("Enter any number : "))

# if n%2 == 0 :
#     print("number is even")
# else:
#     print("number is odd")

#Q2. Greatest of three numbers ✅

# x = int(input("X : "))
# y = int(input("Y : "))
# z = int(input("Z : "))

# if x > y :
#     if x > z :
#         print("X is greator")
#     else :
#         print("Z is greator")
# else :
#     if y > z :
#         print("Y is greator")
#     else :
#         print("Z is greator")

#Q3. Check the grade of students. { 90+ : A , 80+ : B , 70+ : C , 60+ : D , below 30 : F }.✅

# marks = int(input("Enter the marks : "))

# if marks > 100 or marks < 0 :
#     print("Invalid marks !")
# elif marks >= 90:
#     print("Grade A")
# elif marks >= 80:
#     print("Grade B")
# elif marks >= 70:
#     print("Grade C")
# elif marks >= 60:
#     print("Grade D")
# elif marks >= 30:
#     print("Grade E")
# else:
#     print("Grade F")

#Q4. Check the leap year. ✅

# year = int(input("Enter any year : "))

# if(year%4 == 0):
#     if(year%100 == 0):
#         if(year%400 == 0):
#             print("yes leap year")
#         else:
#             print("no leap year")
#     else:
#         print("yes leap year")
# else:
#     print("no leap year")

#Q5. Check the "brave" is in "I am brave." ✅

# if "brave" in "I am brave":
#     print("yes")
# else:
#     print("no")

#Q6. Write a program that takes your full name as input and display the abbreviations of the first and middle names except the last name which is displayed as it is. For example, if your name is Robert Brett Toser, then the output should be R.B.Toser. ✅

# userName = input("Enter your name : ")
# nameList = userName.split(" ")
# listLenght = len(nameList)
# result = ""
# for i in range(listLenght-1):
#     result = result + nameList[i][0] + "."
# result = result + nameList[listLenght-1]
# print(result)

#Q7. Write a Python function that accepts a string and counts the number of upper and lower case letters.✅
# Sample Input : 'The quick Brow Fox'
# Expected Output :
# No. of Upper case characters : 3
# No. of Lower case Characters : 12

# def countLet(str):
    
#     upper = 0
#     lower = 0
    
#     for i in str:
#         if i.isupper():
#             upper = upper + 1
#         if i.islower():
#             lower = lower + 1
#     print(f"No. of Upper case characters : {upper}")        
#     print(f"No. of Lower case characters : {lower}")
    
# countLet("sahi verMa")        
    
#
# t = (
#     (1, 2, 3, 4),
#     (3, 5, 2, 1),
#     (2, 2, 3, 1)
# )
# lst = []
# for i in range(4):
#     sum = 0
#     for j in range(3):
#         sum = sum + t[j][i]
#     lst.append(sum)
# print(lst)