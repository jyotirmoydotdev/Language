#this file make student file

#!/usr/bin/env python3.8

choice = 'y'
while choice.lower() == 'y':
  import time
  import os
  
  def history(a):
    f=open("history.data","a")
    time1=time.localtime()
    times=time.strftime("%d/%m/%Y,%H:%M:%S",time1)
    f.write(times)
    f.write("\n")
    f.write(">")
    f.write(ct)
    f.write("\n")
    f.write(">")
    f.write(student)
    f.write("\n")
    f.write("\n")
    f.close
    return
  
  def tim(a):
    time1=time.localtime()
    times=time.strftime("%d/%m/%Y,%H:%M:%S",time1)
    f.write(times)
    f.write("\n")
  
  
  #making history.data file
  #this file contain all the action you take
  f=open("history.data","a")
  f.write("")
  f.close
  
  #making student_file.data file
  #this file contain all the file which you creat
  f=open("student_file.data","a")
  f.write("")
  f.close
  
  print("-"*50)
  print("-"*50)
  print("\n\n\nSTUDENT DATA\n\n\n")
  print("-"*50)
  print("-"*50)
  print("""
  1> To view student data
  2> To edite student data
  3> To see history
  4> Restart
  
  """)
  opt0=int(input("Enter number: "))
  print("-"*50)
  
  if opt0==1:
    ct="view students data"
    f=open("student_file.data","r")
    p=f.read()
    print("FILES\n")
    print(p)
    f.close
    print("-"*50)
    print("[ NOTE: if the file is empty than click 1]")
    student=input("Enter student name: ")
    students=(student+".txt")
    print("-"*50)
    print("")
    if student=="1":
      print("DONE!!")
    else:
      f=open(students,"r")
      p=f.read()
      print(p)
      f.close
      
    history(1)
    
  elif opt0==2:
    print("""
    1> Add student
    2> Add student data
    3> Delete student data
    
    """)
    opt1=int(input("Enter number: "))
    if opt1==1:
      ct="Add student"
      student=input("Name of the student: ")
      students=(student+".txt")
      f=open("student_file.data","a")
      f.write(">")
      f.write(student)
      f.write("\n")
      f.close
      history(1)
      f=open(students,"a")
      f.write("")
      f.close
    
    elif opt1==2:
      ct="Add student data"
      print("FILES\n")
      f=open("student_file.data","r")
      p=f.read()
      print(p)
      f.close
      student=input("Name of the student: ")
      students=(student+".txt")
      history(1)
      print("")
      f=open(students,"a")
      tim(1)
      name=(input("Name: "))
      f.write(">")
      f.write(name)
      f.write("\n")
      roll=(input("Roll No.: "))
      f.write(">")
      f.write(roll)
      f.write("\n")
      classs=input("class: ")
      f.write(">")
      f.write(classs)
      f.write("\n")
      year=input("year:")
      f.write(">")
      f.write(year)
      f.write("\n")
      note=input("Note: ")
      f.write(">")
      f.write(note)
      f.write("\n")
      f.close
      
    elif opt1==3:
      ct="Delete student"
      f=open("student_file.data","r")
      p=f.read()
      print("FILES\n")
      print(p)
      print("-"*50)
      history(1)
      student=input("Name of the student: ")
      students=(student+".txt")
      os.remove(students)
      f.close
      
    else:
      print("PLEASE SELECT 1,2 OR 3")
  elif opt0==3:
    ct="watch history"
    f=open("student_file.data","r")
    p=f.read()
    print("FILES\n")
    print(p)
    print("-"*50)
    f.close
    student=input("Enter the name of the student: ")
    students=(student+".txt")
    history(1)
    f=open("history.data","r")
    p=f.read()
    print(p)
    f.close
    
  elif opt0==4:
    os.remove("history.data")
    os.remove("student_file.data")
    
  else:
    print("error!!")
  print("-"*50)
  choice = input ('run again? (y/n)')
  print("-"*50)