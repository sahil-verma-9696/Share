#  ********************** Arithmatic operator *************************
# Arithmetic Operators (+, -, *, /, %, //, **)

# # Example:
# a = 10
# b = 3

# print("a + b =", a + b)  # Addition
# print("a - b =", a - b)  # Subtraction
# print("a * b =", a * b)  # Multiplication
# print("a / b =", a / b)  # Division
# print("a % b =", a % b)  # Modulus
# print("a // b =", a // b)  # Floor Division
# print("a ** b =", a ** b)  # Exponentiation

#  ********************** Assignment operator *************************
# Assignment Operators (=, +=, -=, *=, /=, %=, //=, **=)

# # Example :

# # Assignment Operator (=)
# x = 5  # Assigns the value 5 to variable x
# print("x =", x)

# # Addition Assignment (+=)
# x += 3  # Equivalent to x = x + 3 (x will be 8 after this operation)
# print("x += 3:", x)

# # Subtraction Assignment (-=)
# y = 10
# y -= 4  # Equivalent to y = y - 4 (y will be 6 after this operation)
# print("y -= 4:", y)

# # Multiplication Assignment (*=)
# z = 3
# z *= 2  # Equivalent to z = z * 2 (z will be 6 after this operation)
# print("z *= 2:", z)

# # Division Assignment (/=)
# a = 15
# a /= 3  # Equivalent to a = a / 3 (a will be 5.0 after this operation)
# print("a /= 3:", a)

# # Modulus Assignment (%=)
# b = 17
# b %= 5  # Equivalent to b = b % 5 (b will be 2 after this operation)
# print("b %= 5:", b)

# # Floor Division Assignment (//=)
# c = 21
# c //= 4  # Equivalent to c = c // 4 (c will be 5 after this operation)
# print("c //= 4:", c)

# # Exponentiation Assignment (**=)
# d = 2
# d **= 3  # Equivalent to d = d ** 3 (d will be 8 after this operation)
# print("d **= 3:", d)


#  ********************** Comparison operator *************************
#  ********************** Logic operator ******************************
# Logic operators ( and , or , not)

# Example : 

# # Logical AND (and)
# result_and_1 = False and True  # False evaluates to False, so the result is False
# result_and_2 = True and "Hello"  # True evaluates to True, so the result is "Hello"

# print("False and True:", result_and_1)  # Output: False
# print("True and 'Hello':", result_and_2)  # Output: 'Hello'

# # Logical OR (or)
# result_or_1 = True or False  # True evaluates to True, so the result is True
# result_or_2 = False or "Python"  # False evaluates to False, so the result is "Python"

# print("True or False:", result_or_1)  # Output: True
# print("False or 'Python':", result_or_2)  # Output: 'Python'

# # Logical NOT (not)
# result_not_1 = not True  # True evaluates to True, so the result is False
# result_not_2 = not "Hello"  # Non-empty string evaluates to True, so the result is False

# print("not True:", result_not_1)  # Output: False
# print("not 'Hello':", result_not_2)  # Output: False

#  ********************** Identity operator ***************************
# Operator
# is
# is not

# The { is } operator evaluates to { True } if the operand on { both } side of the operator { point to the same object }, and { False otherwise }. 

# # Example : 

# # integers, strings, tuples, and small immutable objects.
# # lists, dictionaries, sets, and mutable objects in general

# # Integers
# int_var_A = 9080768933
# int_var_B = 9080768933

# print("Memory address of int_var_A:", id(int_var_A))
# print("Memory address of int_var_B:", id(int_var_B))

# print("int_var_A is int_var_B:", int_var_A is int_var_B) # True


# # Strings
# str_var_A = "Hello"
# str_var_B = "Hello"

# print("Memory address of str_var_A:", id(str_var_A))
# print("Memory address of str_var_B:", id(str_var_B))

# print("str_var_A is str_var_B:", str_var_A is str_var_B) # True

# # Tuples
# tuple_var_A = (1, 2, 3)
# tuple_var_B = (1, 2, 3)

# print("Memory address of tuple_var_A:", id(tuple_var_A))
# print("Memory address of tuple_var_B:", id(tuple_var_B))

# print("tuple_var_A is tuple_var_B:", tuple_var_A is tuple_var_B) # True

# # Lists
# lst_var_A = [1, 2, 3]
# lst_var_B = [1, 2, 3]

# print("Memory address of lst_var_A:", id(lst_var_A))
# print("Memory address of lst_var_B:", id(lst_var_B))

# print("lst_var_A is lst_var_B:", lst_var_A is lst_var_B) # False

# # Dictionaries
# dict_var_A = {"a": 1, "b": 2}
# dict_var_B = {"a": 1, "b": 2}

# print("Memory address of dict_var_A:", id(dict_var_A))
# print("Memory address of dict_var_B:", id(dict_var_B))

# print("dict_var_A is dict_var_B:", dict_var_A is dict_var_B) # False

# # Sets
# set_var_A = {1, 2, 3}
# set_var_B = {1, 2, 3}

# print("Memory address of set_var_A:", id(set_var_A))
# print("Memory address of set_var_B:", id(set_var_B))

# print("set_var_A is set_var_B:", set_var_A is set_var_B) # False

# # Explanation:

# # For integers, strings, tuples, and small immutable objects, 
# # the is operator might return True when variables are assigned the same value 
# # due to Python's memory optimization.

# # For lists, dictionaries, sets, and mutable objects in general, 
# # even if they have the same content, 
# # the is operator will usually return False
# # because they are distinct objects in memory.

#  ********************** Membership operator *************************
# Example

# String
my_string = "Hello, World!"
print('H' in my_string)         # Output: True
print('X' not in my_string)     # Output: True
print('ello' in my_string)      # Output: True

# List
my_list = [1, 2, 3, 4, 5]
print(3 in my_list)             # Output: True
print(6 not in my_list)         # Output: True
print([1, 2] in my_list)        # Output: False alone is not capable for checking sublist

# Tuple
my_tuple = (10, 20, 30, 40, 50)
print(30 in my_tuple)           # Output: True
print(25 not in my_tuple)       # Output: True

# Dictionary
my_dict = {'a': 1, 'b': 2, 'c': 3}
print('a' in my_dict)           # Output: True
print('d' not in my_dict)       # Output: True (checks for keys, not values)
print(1 in my_dict.values())    # Output: True (checks for values)

# Set
my_set = {1, 2, 3, 4, 5}
print(2 in my_set)              # Output: True
print(6 not in my_set)          # Output: True



#  ********************** Bitwise operator ****************************