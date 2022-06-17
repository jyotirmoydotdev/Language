# Creator: JYOTIRMOY BARMAN
# creation date : 23-03-2021
# github : jyotirmoybarman


# HERE we get some def
# 1. display_files() = to display file present in the folder
# 2. clear() = to clear the screen
# 3. edit() = to open a editor
# 4. read() = to open a file
# 5. reset() = to delete file data
# 6. detail() = to display mode

import os # Importing the os module as it help to give command with python

# Display file in the current foldar
def display_files():
        Display = os.listdir()
        for i in Display:
            print(i)

# TO clear the screen
def clear():
    if os.name=="nt":
        os.system('cls')

    elif os.name=="posix":
        os.system("clear")

    else:
        print("operating system is unkown")

# To open a editor
def edit():
    f=input("Enter file name: ")
    print("1. nano\n2. vim")
    editor=int(input("Enter 1 or 2: "))
    if editor==1:
        os.system(f"nano {f}")
    elif editor==2:
        os.system(f"vim {f}")
    else:
        print("Enter correct number")

# To read a file
def read():
    f=(input("Enter file name: "))
    clear()
    print("1. Binary mode\n2. Text mode")
    mood=int(input("Enter 1 or 2: "))
    if mood==1:
        f=open(f,"rb")
        clear()
        print(f.read())
    elif mood==2:
        f=open(f,"r")
        clear()
        print(f.read())

# To delete all file data
def reset():
    f=input("Enter file name: ")
    f=open(f,"w+")
    print (f.read())

# To see all mood details
def detail():
        print(">'r'  and 'rb'\nREAD ONLY\n")
        print(">'a'  and 'ab'\nAPPEND\n")
        print(">'r+' and 'r+b' or 'rb+'\nREAD and WRITE\n")
        print(">'w+' and 'w+b' or 'wb+'\nWRITE and READ\n")
        print(">'a+' and 'a+b' or 'ab+'\nWRITE and READ\n")

# MAIN PROGRAM------------------------------

clear()
c="y"

while c=="y":
    clear()
    print("1. Files\n2. Edit\n3. Reset\n4. Details\n5. Read file")
    i=int(input("Enter number: "))
    if i==1:
        clear()
        display_files()
        print("")
    elif i ==2:
        clear()
        display_files()
        edit()
        print("")
    elif i ==3:
        clear()
        display_files()
        reset()
        print("")
    elif i ==4:
        clear()
        detail()
    elif i ==5:
        clear()
        display_files()
        read()
        print("")
    else:
        print("Please enter the correct number")
    c=input("Run again y/n : ")
