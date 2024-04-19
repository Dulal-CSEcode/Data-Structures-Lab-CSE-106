#P_12 Type Checking, Type Error and Type Conversion | Type Casting in Python???
#
#1.Types casting 
length=len("Pankaj Mahanto")
print(length)



print("Your name has "+str(length)+" characters")

new_len=str(length)
print(type(new_len))

print(type(length))
length=len("12345")
print(length)

""" print(len(1234)) """
#types error because syntex is correct
"""
int()
float()
str()
"""
v=10+10
print(v)
s="10"
b="10" 
print(s+b)
print(int(s)+int(b))
print(float(s)+float(b))
""" 
Assignment Work is:
input the number and sum it """
first_num=input("Enter first number:\n")
second_num=input("Enter the second num:\n")
sum=int(first_num)+int(second_num)
print(sum)