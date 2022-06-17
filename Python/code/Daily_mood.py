# This python program is used to recoded daily mood
# Na thing specil 
# just a time pass program

import time
import glob
print("-"*50)

print("-"*50)

print(""" ____    _    ___ _  __   __
|  _ \  / \  |_ _| | \ \ / /
| | | |/ _ \  | || |  \ V /
| |_| / ___ \ | || |___| |
|____/_/   \_\___|_____|_|
""")
time.sleep(0.3)
print("""
 __  __  ___   ___  ____
|  \/  |/ _ \ / _ \|  _ \

| |\/| | | | | | | | | | |
| |  | | |_| | |_| | |_| |
|_|  |_|\___/ \___/|____/
""")
print("-"*50)
time.sleep(1)
#!/usr/bin/env python3.8

choice = 'y'
while choice.lower() == 'y':

  print("-"*50)
  print("""
  1. Click 1 to see history
  2. Click 2 to see what file are present
  3. Click 3 to modifie file
  
  """)
  import time
  opt=int(input("ENTER NUMBER:"))
  print("-"*50)
  time.sleep(0.5)
  print("-"*50)
  f=open("data.data","a")
  f.write("")
  f.close
  
  f=open("data1.data","a")
  f.write("")
  f.close
    
  
  if opt==1:
  
    f=open("data1.data","r+")
    p=f.read()
    print(p)
    f.close
    
  elif opt==2:
    print("FILES\n")
    f=open("data.data","r+")
    p=f.read()
    print(p)
    print("-"*50)
    
    print("""
    1. To view file data
    2. To over ther program
    
    """)
    print("-"*50)
    print("-"*50)
    num=int(input("Enter the number: "))
    if num==1:
      
      f=open("data1.data","a")
      time1=time.localtime()
      timeq=time.strftime("%d/%m/%Y,%H:%M:%S",time1)
      f.write(timeq)
      f.write("\n")
      f.write(">")
      f.write("view data")
      f.write("\n")
      f.close
      
      file=input("Enter the filename: ")
      files=(file+".jb")
      print("-"*50)
      f=open("data1.data","a")
      f.write(">")
      f.write(file)
      f.write("\n")
      f.write("\n")
      f.close
      
      f=open(files,"r+")
      p=f.read()
      print(p)
    else:
      print("program over")
    print("-"*50)
    
  elif opt==3:
    print("""
    1. To add file
    2. To add data to file
    3. To delete data of file
    4. To view data
    
    """)
    print("-"*50)
    opt2=int(input("ENTER NUMBER: "))
    print("-"*50)
    if opt2==1:
      name=input("Enter the name of the file: ")
      names=(name+".jb")
      
      f=open(names,"a")
      f.write("")
      f.close
      
      f=open("data.data","a")
      f.write(">")
      f.write(name)
      f.write("\n")
      f.close
      
      f=open("data1.data","a")
      time1=time.localtime()
      time=time.strftime("%d/%m/%Y,%H:%M:%S",time1)
      f.write(time)
      f.write("\n")
      f.write(">")
      f.write("file added")
      f.write("\n")
      f.write(">")
      f.write(name)
      f.write("\n")
      f.write("\n")
      f.close
  
      print("1 File add.")
      print("-"*50)
    elif opt2==2:
      print("[NOTE: to add data in a file you need to first name the file.]")
      print("-"*50)
      print("THE FILE PRESENT ARE\n")
      
      #VIEW FILE
      f=open("data.data","r+")
      p=f.read()
      print(p)
      f.close
      print("-"*50)
      print("")
      
      #FILE NAME
      print("Enter the file name exectly")
      file=input("File name: ")
      files=(file+".jb")
      
      #HISTORY
      f=open("data1.data","a")
      time1=time.localtime()
      time=time.strftime("%d/%m/%Y,%H:%M:%S",time1)
      f.write(time)
      f.write("\n")
      f.write(">")
      f.write("Add data to")
      f.write("\n")
      f.write(">")
      f.write(file)
      f.write("\n")
      f.write("\n")
      
      #ADD DATA TO A FILE
      import time
      import datetime
      f=open(files,"r+")
      time1=time.localtime()
      time=time.strftime("%d/%m/%Y,%H:%M:%S",time1)
      f.write(time)
      f.write("\n")
      happy=(input("HAPPY: "))
      f.write("HAPPY: ")
      f.write(happy)
      f.write("\n")
      sad=input("SAD: ")
      f.write("SAD: ")
      f.write(sad)
      f.write("\n")
      normal=input("NORMAL: ")
      f.write("NORMAL: ")
      f.write(normal)
      f.write("\n")
      f.write("\n")
      print("-"*50)
    elif opt2==3:
      
      #VIEW FILE
      f=open("data.data","r+")
      p=f.read()
      print(p)
      f.close
      print("-"*50)
      print("")
      
      #FILE NAME
      print("Enter the file name exectly")
      file=input("File name: ")
      files=(file+".jb")
      
      f=open("data1.data","a")
      time1=time.localtime()
      time=time.strftime("%d/%m/%Y,%H:%M:%S",time1)
      f.write(time)
      f.write("\n")
      f.write(">")
      f.write("erase file")
      f.write("\n")
      f.write(">")
      f.write(file)
      f.write("\n")
      f.write("\n")
      f.close
      
      f=open(files,"r+")
      f.truncate(0)
      f.close
      print("done!!")
    elif opt2==4:
      f=open("data1.data","a")
      time1=time.localtime()
      time=time.strftime("%d/%m/%Y,%H:%M:%S",time1)
      f.write(time)
      f.write("\n")
      f.write(">")
      f.write("\n")
      f.write("view data")
      f.write("\n")
      
      file=input("Enter the filename: ")
      files=(file+".jb")
      print("-"*50)
      f.write(">")
      f.write(file)
      f.write("\n")
      f.write("\n")
      f.close
      
      f=open(files,"r+")
      p=f.read()
      print(p)
      print("-"*50)
    else:
      print("ERROR!!")
  choice = input ('run again? (y/n)') 
  print("-"*50)
