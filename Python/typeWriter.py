'''
This program takes input from user and displays it in two ways:
    1. Like a simple typewriter.
    2. Goes through ascii characters in order untill the character is found.
'''
from time import sleep
import sys

t1 = 0.1    #Modify this to change speed of simple typewriter.
t2 = 0.01   #Modify this to change speed to fancy typewriter.

def take_input():
    inp = input("Enter : ")
    return inp

def typewriter(s):
    
    for char in s:
        
        sleep(t1)
        sys.stdout.write(char)
        sys.stdout.flush()
    
    print("")

def fancy_typewriter(s):
    
    for char in s:
        
        for i in range (32, 127):
            
            sys.stdout.write(chr(i))
            
            if(chr(i) == char):
                break
            
            sleep(t2)
            sys.stdout.flush()
            sys.stdout.write("\b")

    print("")        

print("\nWelcome to Typewriter!\n")
s = take_input()
typewriter(s)
fancy_typewriter(s)
