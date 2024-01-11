# write a program to print every character of a string entered by user a new line using loop.
def problem_1():
    str = input("Enter any string\n")
    for x in str:
        print(x)

# Write a program to find the length fo stirng entered by user without using len function
def problem_2():
    str = input("Enter any string\n");
    length = 0;
    for x in str:
        length = length+1;
    print(length);
    
# Write a program to ceck if the letter is present in the word or not.
def problem_3():
    str = input("Enter the any String\n");
    letter = "s";
    print(letter in str)

# Write a program to check if the word is present in the sentence or not.
def problem_4():
    sentence = "my name is sonal verma.\n I love programming.";
    word = "love";
    print(word in sentence);
    
# Write the program to find the first and the last occurence of the letter in a String.
def problem_5():
    sentence = "my name is hoo";
    letter = "a";
    print("first occurrence = ",sentence.find(letter),"Last occurrence = ", sentence.rfind(letter));
    
# Write a program that takes your full name as input and display the abbreviations of the first and middle names except the last name which is displayed as it is. For example, if your name is Robert Brett Toser, then the output should be R.B.Toser.
def problem_6():
    name = input("Enter your name\n");
    wordList = name.strip().split(" ");
    print(wordList)
    result = ""
    length = len(wordList);
    count = 0
    for word in wordList:
        count = count + 1
        if(count < length):
            result = result + word[0] + "."
    print(result + wordList[length-1])
    
#  Write a program to find the number of vowels, consonants, digits and white space characters in a string

def problem_7(string):
    vowels = "aeiouAEIOU"
    consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"
    digits = "0123456789"

    vowel_count = 0
    consonant_count = 0
    digit_count = 0
    space_count = 0

    for char in string:
        if char in vowels:
            vowel_count += 1
        elif char in consonants:
            consonant_count += 1
        elif char in digits:
            digit_count += 1
        elif char == ' ':
            space_count += 1
    print("Number of vowels:", vowel_count)
    print("Number of consonants:", consonant_count)
    print("Number of digits:", digit_count)
    print("Number of spaces:", space_count)
     
# Write a program to make a new string with all the consonants deleted from a string

def problem_8(string):
    vowels = "aeiouAEIOU"
    result = ""

    for char in string:
        if char in vowels:
            result += char

    print(result)      
            
# problem_1()
# problem_2()
# problem_3()
# problem_4()
# problem_5()
problem_6()
# problem_7("xgf fhf")

