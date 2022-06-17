# Stack and queue

import os

l=[]

# To clear the screen
def clear():
    os.system("cls")

# To display stack
def stack_display():
    for row in l:
        print(row)

# Stack program
def stack():
    ji="y"
    while ji=="y":
        clear()
        print("1. Add in stack\n2. Delete in stack\n3. Exit")
        i=int(input("Enter the number : "))
        if i==1:
            c="y"
            while c=="y":
                clear()
                print("stack")
                stack_display()
                print("")
                i_s=input("Enter the element: ")
                l.append(i_s)
                print("Element name ",i_s,"added")
                c=(input("Add more data (y/n):"))
        elif i==2:
            c="y"
            while c=="y":
                if l==[]:
                    print("The list is empty")
                else:
                    clear()
                    print("stack")
                    stack_display()
                    print("")
                    d=l.pop()
                    print(f"Element {d} has been deleted!")
                    c=(input("delete more data (y/n):"))
        elif i==3:
            ji="n"
# To display queue
def queue_display():
    print(l)

# Queue program
def queue():
    g="y"
    while g=="y":
        clear()
        print("1. Add in queue\n2. Delete in queue\n3. Exit")
        iy=int(input("Enter the number : "))
        if iy==1:
            c="y"
            while c=="y":
                clear()
                print("QUEUE")
                queue_display()
                i_s=input("Enter the element: ")
                l.append(i_s)
                print("Element name ",i_s,"added")
                c=(input("Add more data (y/n):"))
        
        elif iy==2:
            c="y"
            while c=="y":
                if l==[]:
                    print("The list is empty")
                    c="n"
                else:
                    clear()
                    print("QUEUE")
                    queue_display()
                    d=l.pop(0)
                    print(f"Element {d} has been deleted!")
                    c=(input("delete more data (y/n):"))
        elif iy==3:
            g="n"

# MAIN PROGRAM
c3="y"
while c3=="y":
    clear()
    print("1. STACK\n2. QUEUE\n3. EXit")
    m=int(input("Enter number: "))
    if m==1:
        clear()
        stack_display()
        stack()
    elif m==2:
        clear()
        queue_display()
        queue()
    elif m==3:
        c3="n"
        






        
