# ******************************************* Programs of function

# write a python function to sum of all numbers in a list
def problem_1_1(list):
    return sum(list)

# . Write a python program to calculate area of 5 different circles using Simple Function (Parameterized Function with return type). Given the pie = 22/7 and radius of the circles entered by user.

def problem_1_2():
    
    # function for area
    def calculate_area(radius):
        return radius * radius * (22 / 7)
    
    # calling for 5 different circles
    for i in range(5):
        radius = float(input("Enter the radius for circle : "))
        area_result = calculate_area(radius)
        print("Area of circle", i + 1, "is", area_result)

#  Write a python program to print Multiplication table value entered by user using Parameterized Function.

def problem_1_3(number):
    for i in range(1, 11):
        print( i , " x " , number ," = ",i*number)

# Write a Python function that takes two lists and returns True if they have at least one common member.

def problem_1_4(list1,list2):
    for item in list1:
        if item in list2:
            return True
    return False

# problem 5

def problem_1_5(string):
    upper_count = 0
    lower_count = 0

    for char in string:
        if char.isupper():
            upper_count += 1
        elif char.islower():
            lower_count += 1

    print("No. of Upper case characters:", upper_count)
    print("No. of Lower case characters:", lower_count)

# print(problem1_1([1,2,3,4]))
# problem_1_2()
# problem_1_3(2)
# list_a = [1, 2, 3, 4, 5]
# list_b = [5, 6, 7, 8, 9]
# print(problem_1_4(list_a, list_b))
# problem_1_5("SAhil")
