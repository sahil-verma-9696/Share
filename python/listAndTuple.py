def problem_1(list):
    print("sum = ",sum(list))
    
def problem_2(list):
    mul = 1
    for i in list:
        mul = mul*i
    print("multiplication = ",mul)
    
def problem_3(list):
    print("largest = ",max(list))
    print("smallest = ",min(list))
    
def problem_4(list):
    count = 0
    for i in list:
        if(len(i) >= 2 and i[0] == i[-1]):
            count = count +1
    print("number of strng present = ",count)

def problem_5(lst):
    print(list(set(lst)))

def problem_6(lst):
    result = []
    for i in lst:
         if ( i % 2 != 0):
             result.append(i)
    print(result)
            
def problem_7(lst, k): #❌
    count = 0
    for i in lst:
        if i in lst:
            count = count + 1
            print("count = ",count,"i = ",i)
    print(count)
        

#  Write a Python program to get the 4th element from the last element of a tuple.
def problem(tup):
    pass
# problem_1([1,2])
# problem_2([1,2])
# problem_3([1,2])
# problem_4([1,2])
# problem_5([1,2])
# problem_6( [1, 2, 3, 4, 5, 6, 7, 8, 9])
problem_7([1, 2, 2, 3, 4, 4, 4, 5, 5, 5],3)

