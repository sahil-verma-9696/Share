# print statement in python.

# print(object,sep=seperator,end=end,file=file,flush=flush)

# print("sahil"); "sahil" = object

# print("sahil","verma","baby"); default sep = " "

# print("sahil","verma","baby", sep = "|") sahil|verma|baby

# print("sahil","verma","baby", sep = "❤️ ") default end = "\n"
# print("sahil","verma","baby", sep = "❤️ ",end="🤔") 

# with open("testing.txt","w") as myFile:
#     print("hii can this is add to the file ",file=myFile)
var_dict = {"name":"sahil","age":19}
var_list = [2,3,4]
print(type(var_dict),type(var_list),sep="\n")