import time as t
import random as r
import sys

letter_small=["a","b","c","d","e","f","h","i","j","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
letter_big = ["A","B","C","D","F","G","H","I","J","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]
num_list = ["1","2","3","4","5","6","7","8","9","0"]

file_name_length = (r.randint(2,10))

if file_name_length==2:
  a=r.choice(letter_small)
  b=r.choice(letter_big)
  file_name=a+b
elif file_name_length==3:
  a=r.choice(letter_small)
  b=r.choice(letter_big)
  c=r.choice(letter_small)
  file_name=a+b+c
elif file_name_length==4:
  a=r.choice(letter_small)
  b=r.choice(letter_big)
  c=r.choice(letter_small)
  d=r.choice(letter_big)
  file_name=a+b+c+d
elif file_name_length==5:
  a=r.choice(letter_small)
  b=r.choice(letter_big)
  c=r.choice(letter_small)
  d=r.choice(letter_big)
  e=r.choice(letter_small)
  file_name=a+b+c+d+e
elif file_name_length==6:
  a=r.choice(letter_small)
  b=r.choice(letter_big)
  c=r.choice(letter_small)
  d=r.choice(letter_big)
  e=r.choice(letter_small)
  f=r.choice(letter_big)
  file_name=a+b+c+d+e+f
elif file_name_length==7:
  a=r.choice(letter_small)
  b=r.choice(letter_big)
  c=r.choice(letter_small)
  d=r.choice(letter_big)
  e=r.choice(letter_small)
  f=r.choice(letter_big)
  g=r.choice(letter_small)
  file_name=a+b+c+d+e+f+g
elif file_name_length==8:
  a=r.choice(letter_small)
  b=r.choice(letter_big)
  c=r.choice(letter_small)
  d=r.choice(letter_big)
  e=r.choice(letter_small)
  f=r.choice(letter_big)
  g=r.choice(letter_small)
  h=r.choice(letter_big)
  file_name=a+b+c+d+e+f+g+h
elif file_name_length==9:
  a=r.choice(letter_small)
  b=r.choice(letter_big)
  c=r.choice(letter_small)
  d=r.choice(letter_big)
  e=r.choice(letter_small)
  f=r.choice(letter_big)
  g=r.choice(letter_small)
  h=r.choice(letter_big)
  i=r.choice(letter_small)
  file_name=a+b+c+d+e+f+g+h+i
elif file_name_length==10:
  a=r.choice(letter_small)
  b=r.choice(letter_big)
  c=r.choice(letter_small)
  d=r.choice(letter_big)
  e=r.choice(letter_small)
  f=r.choice(letter_big)
  g=r.choice(letter_small)
  h=r.choice(letter_big)
  i=r.choice(letter_small)
  j=r.choice(letter_big)
  file_name=a+b+c+d+e+f+g+h+i+j
else:
  print("ERROR!!")
  
f=open(file_name+".txt","a")
f.write("""hello
i am here
""")
f.close