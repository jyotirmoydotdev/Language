#!/usr/bin/env python3.8

choice = 'y'
while choice.lower() == 'y':
	#Important algebraic
	
	print('''
┌───────────────────────────────────────────────────────────────┐
│                                                               │
│   mm   ""#                  #                      "          │
│   ##     #     mmmm   mmm   #mmm    mmm    m mm  mmm     mmm  │
│  #  #    #    #" "#  #"  #  #" "#  "   #   #"  "   #    #"  " │
│  #mm#    #    #   #  #""""  #   #  m"""#   #       #    #     │
│ #    #   "mm  "#m"#  "#mm"  ##m#"  "mm"#   #     mm#mm  "#mm" │
│                m  #                                           │
│                 ""                                            │
└───────────────────────────────────────────────────────────────┘
┌─────────────────────────────────────────────────┐
│                                                 │
│ mmmmmm                             ""#          │
│ #       mmm    m mm  mmmmm  m   m    #     mmm  │
│ #mmmmm #" "#   #"  " # # #  #   #    #    "   # │
│ #      #   #   #     # # #  #   #    #    m"""# │
│ #      "#m#"   #     # # #  "mm"#    "mm  "mm"# │
│                                                 │
│                                                 │
└─────────────────────────────────────────────────┘
''')
	print("welcome\nThis scripit is the to calculate 17 algebaric formula")
	print("WARNING: procced if you have a,b or a,b,c\n")
	input("ENTER to continoue")
	print("_"*60)
	#(a+b)^2 = a^2 + b^2 + 2ab
	def a1(a,b,c):
		z=(a**2)+(b**2)+2*a*b
		
		print("FORMULA: (a+b)² = a² + b² + 2ab")
		#STEPS
		z1=(a**2)
		z2=(b**2)
		z3=2*a*b
		print("	= (",z1,") + (",z2,") + (",z3,")")
		
		print("	=",z)
		return 'AND THE ANSWER IS',z
	
	#(a+b)^2 = a^2 + 2ab
	def a2(a,b,c):
		z=(a**2)+(b**2)-2*a*b
		print("FORMULA: (a-b)² = a² + b² - 2ab")
		#steps
		z1=(a**2)
		z2=(b**2)
		z3=2*a*b
		print("	= (",z1,") + (",z2,") - (",z3,")")
		
		z4=z1+z2
		print("	=",z4,"-",z3)
		print("	=",z)
		return 'AND THE ANSWER IS ',z

	#a^2 - b^2 = (a+b) (a-b)
	def a3(a,b,c):
		z=(a+b)*(a-b)
		
		print("FORMULA: a²-b²  = (a + b) (a-b)")
		#STEPS
		z1=(a+b)
		z2=(a-b)
		print("	=",z1," X ",z2)
		print("	=",z)
		return "AND THE ANSWER IS",z
	
	#a^2+b^2 = (a+b)^2-2ab or (a-b)^2+2ab
	def a41(a,b,c):
		z=((a+b)**2 - 2*a*b)
		
		print("FORMULA:a²+b²  = (a + b)² - 2ab")
		#steps
		z1=a+b
		z2=(z1)**2
		z3=2*a*b
		print("	=",z1,"²-",z3)
		print("	=",z2,"-",z3)
		print("	=",z)
		return "AND THE ANSWER IS ",z
	
	def a42(a,b,c):
		z=(((a-b)^2) + (2*a*b))
		
		print("FORMULA: a² + b² = (a-b)² +2ab")
		#steps
		z1=a-b
		z2=(a-b)**2
		z3=2*a*b
		
		print("	=",z1,"²+",z3)
		print("	=",z2,"+",z3)
		print("	=",z)
		return "AND THE ANSWER IS ",z
		
	#a^3 + b^3 = (a+b)^3 - 3ab(a+b)
	def a5(a,b,c):
		z=((a+b)**3) - (3*a*b*(a+b))
		
		print("FORMULA: a³+b³  = (a + b)(a² - ab + b²) = (a + b)³ – 3ab(a+ b)")
		#STEPS
		z1=a+b
		z2=(a+b)**3
		z3=3*a*b
		z4=3*a*b*(a+b)
		
		print("\na³+b³ = (a + b)³ – 3ab(a+ b)")
		print("	=",z1,"³-",z3,"X(",z1,")")
		print("	=",z2,"-",z4)
		print("	=",z)
		return "AND THE ANSWER IS ",z
	
	#a^3 - b^3 = (a-b)^3 + 3ab (a-b)
	def a6(a,b,c):
		z=((a-b)**3) + (3*a*b*(a-b))
		
		print("FORMULA: a³-b³  = (a - b)(a² + ab + b²) = (a – b)³ + 3ab(a- b)")
		print("\na³-b³ = (a – b)³ + 3ab(a- b)")
		
		#STEPS
		z1=a-b
		z2=3*a*b
		z3=(a-b)**3
		z4=z2*z1
		
		print("	=",z1,"³+",z2,"x",z1)
		print("	=",z3,"+",z4)
		print("	=",z)
		
		return "AND THE ANSWER IS ",z
	
	#2(a^2 + b^2)=(a+b)^2+(a-b)^2
	def a7(a,b,c):
		z=((a+b)**2)+((a-b)**2)
		print("FROMULA: 2(a²+b²) = (a + b)² + (a - b)²")
		
		#steps
		z1=a+b
		z2=(a+b)**2
		z3=a-b
		z4=(a-b)**2
		
		print("	=",z1,"² +",z3,"²")
		print("	=",z2,"+",z4)
		print("	=",z)
		return "AND THE ANSWER IS ",z
		
	#(a+b)^2-(a-b)^2=4ab
	def a8(a,b,c):
		z=4*a*b
		print("FORMULA: (a+b)²-(a-b)² = 4ab")
		
		#steps
		print("	= 4 X",a,"X",b)
		print("	=",z)
		return "AND THE ANSWER IS ",z
	
	#(a^4+b^4) = (a+b)(a-b)[(a+b)^2-2ab]
	def a9(a,b,c):
		z=((a+b)*(a-b)*((a-b)**2-(2*a*b)))
		print("FORMULA: a⁴+b⁴  = (a+ b)(a-b) [ (a+ b)² - 2ab ]")
		
		#steps
		z1=a+b
		z2=a-b
		z3=(a+b)**2
		z4=2*a*b
		print("	=",z1,"X",z2,"X((",z1,")²-",z4,")")
		print("	=",z1,"X",z2,"X(",z3,"-",z4,")")
		print("	=",z1*z2,"X",z3-z4)
		print("	=",(z1*z2)*(z3-z4))
		return "AND THE ANSWER IS ",z
		
	#(a-b)^2 = (a+b)^2 - 4ab
	def a10(a,b,c):
		z=(a+b)**2 - 4*a*b
		print("FORMULA: (a-b)² = (a+b)²-4ab")
		
		#STEPS
		print("	=",a+b,"² -",4*a*b)
		print("	=",(a+b)**2,"-",4*a*b)
		print("	=",((a+b)**2)-4*a*b)
		return "AND THE ANSWER IS ",z
	
	#(a+b)^2=(a-b)^2+4ab
	def b1(a,b,c):
		z=(((a-b)**2) + (4*a*b))
		print("FORMULA: (a+b)² = (a-b)² + 4ab")
		
		#steps
		print("	=",a-b,"² +",4*a*b)
		print("	=",(a-b)**2,"+",4*a*b)
		print("	=",z)
		return "AND THE ANSWER IS ",z
	
	#a^4 + b^4 = ((a+b)^2 -2ab)^2 - 2(ab)^2
	def b2(a,b,c):
		z=((a+b)**2 - 2*a*b)**2 - 2*(a*b)**2
		print("FORMULA: a⁴+b⁴ = [(a+ b)² – 2ab]² – 2(ab)²")
		#steps
		print("	=(",a+b,"²-",2*a*b,")² - 2X(",a*b,")²")
		print("	=(",(a+b)**2,"-",2*a*b,")² - 2X",(a*b)**2)
		print("	=",(a+b)**2-2*a*b,"² -",2*(a*b)**2)
		print("	=",((a+b)**2-2*a*b)**2,"-",2*(a*b)**2)
		print("	=",z)
		return "AND THE ANSWER IS ",z
		
	#(a+b+c)^2=a^2+b^2+c^2+2ab+2bc+2ca
	def b3(a,b,c):
		z=(a**2)+(b**2)+(c**2)+(2*a*b)+(2*b*c)+(2*c*a)
		print("FORMULA: (a+b+c)²  = a² + b² + c² + 2ab + 2bc + 2ca")
		
		#STEPS
		print("	=",a**2,"+",b**2,"+",c**2,"+",2*a*b,"+",2*b*c,"+",2*c*a)
		print("	=",z)
		return "AND THE ANSWER IS ",z
	
	#(a+b-c)^2=a^2+b^2+c^2+2ab-2bc-2ca
	def b4(a,b,c):
		z=(a**2)+(b**2)+(c**2)+(2*a*b)+(2*b*c)+(2*c*a)
		print("FORMULA: (a+b-c)²  = a² + b² + c² + 2ab - 2bc – 2ca")
		
		#STEPS
		print("	=",a**2,"+",b**2,"+",c**2,"+",2*a*b,"-",2*b*c,"-",2*c*a)
		print("	=",z)
		return "AND THE ANSWER IS ",z
		
	#(a-b-c)^2=a^2+b^2+c^2-2ab+2bc-2ca
	def b5(a,b,c):
		z=(a**2)+(b**2)+(c**2)-(2*a*b)+(2*b*c)-(2*c*a)
		print("FORMULA: (a-b-c)²  = a² + b² + c² - 2ab + 2bc - 2ca")
		
		#steps
		print("	=",a**2,"+",b**2,"+",b**2,"-",2*a*b,"+",2*b*c,"-",2*c*a)
		print("	=",z)
		return "AND THE ANSWER IS ",z
		
	#a^3+b^3+c^3-3abc=(a+b+c)(a^2+b^2+c^2-ab-bc-ca)
	def b6(a,b,c):
		z=(a+b+c)*((a**2)+(b**2)+(c**2)-(a*b)-(b*c)-(c*a))
		print("FORMULA: a³+b³+c³-3abc  = (a+ b+ c ) (a² + b² + c² - ab - bc - ca)")
		
		#STEPS
		print("	=",a+b+c,"X(",a**2,"+",b**2,"+",c**2,"-",a*b,"-",b*c,"-",c*a,")")
		print("	=",a+b+c,"X",a**2+b**2+c**2-a*b-b*c-c*a)
		print("	=",z)
		return "AND THE ANSWER IS ",z
		
	#a^4+b^2 X b^2+b^4=(a^2+ab+b^2)(a^2-ab+b^2)
	def b7(a,b,c):
		z=((a**2)+(a*b)+(b**2))*((a**2)-(a*b)+(b**2))
		print("FORMULA: a⁴+a²b²+b⁴ = (a² + ab + b²) (a² - ab + b²)")
		
		#STEPS
		print("	=(",a**2,"+",a*b,"+",b**2,")X(",a**2,"-",a*b,"-",b**2,")")
		print("	=",(a**2)+(a*b)+(b**2),"X",(a**2-(a*b)-(b**2)))
		print("	=",(a**2)+(a*b)+(b**2)*(a**2-(a*b)-(b**2)))
		return "AND THE ANSWER IS ",z
		
	print("""
1.} (a+b)²   = a² + b² + 2ab

2.} (a-b)² = a² + b² - 2ab

3.} a²-b²  = (a + b) (a-b)

4.} a²+b²  = (a + b)² - 2ab  or a² + b² = (a-b)² +2ab

5.} a³+b³  = (a + b)(a² - ab + b²) = (a + b)³ – 3ab(a+ b) 

6.} a³-b³  = (a - b)(a² + ab + b²) = (a – b)³ + 3ab(a- b)

7.} 2(a²+b²) = (a + b)² + (a - b)²

8.} (a+b)²-(a-b)² = 4ab

9.} a⁴+b⁴  = (a+ b)(a-b) [ (a+ b)² - 2ab ]

10.} (a-b)² = (a+b)²-4ab

11.} (a+b)² = (a-b)² + 4ab

12.} a⁴+b⁴ = [(a+ b)² – 2ab]² – 2(ab)²

13.} (a+b+c)²  = a² + b² + c² + 2ab + 2bc + 2ca 

14.} (a+b-c)²  = a² + b² + c² + 2ab - 2bc – 2ca

15.} (a-b-c)²  = a² + b² + c² - 2ab + 2bc - 2ca

16.} a³+b³+c³-3abc  = (a+ b+ c ) (a² + b² + c² - ab - bc - ca)

17.} a⁴+a²b²+b⁴ = (a² + ab + b²) (a² - ab + b²)
		""")
	print("_"*60)
	y=int(input("\nPlease enter the serial number of the\nformula which you want to calculate:  "))	
	
	a=int(input("Value of 'a' will be: "))
	b=int(input("Value of 'b' will be: "))
	print("\n[NOTE: if your formula did not contain 'c']\n[than put the value of 'c' as 0(zero)]\n")
	c=int(input("Value of 'c' will be: "))
	print(" ")
	print("_"*60)
	print("~Your inputs are :\na=",a,"\nb=",b,"\nc=",c)
	print("_"*60)
	print("\nSTEPS OF FRORMULA NUMBER ",y," IS:\n")
	
	if y==1:
		print(a1(a,b,c))
	elif y==2:
		print(a2(a,b,c))
	elif y==3:
		print(a3(a,b,c))
	elif y==4:
		print("As a²+b² has two formula\n1.} (a + b)² - 2ab\n2.}(a-b)² +2ab")
		ooo=int(input("select 1 or 2: "))
		if ooo==1:
			print(a41(a,b,c))
		elif ooo==2:
			print(a42(a,b,c))
		else:
			print("select 1 or 2")
	elif y==5:
		print(a5(a,b,c))
	elif y==6:
		print(a6(a,b,c))
	elif y==7:
		print(a7(a,b,c))
	elif y==8:
		print(a8(a,b,c))
	elif y==9:
		print(a9(a,b,c))
	elif y==10:
		print(a10(a,b,c))
	elif y==11:
		print(b1(a,b,c))
	elif y==12:
		print(b2(a,b,c))
	elif y==13:
		print(b3(a,b,c))
	elif y==14:
		print(b4(a,b,c))
	elif y==15:
		print(b5(a,b,c))
	elif y==16:
		print(b6(a,b,c))
	elif y==17:
		print(b7(a,b,c))
	else:
		print("please select between 1 to 17")
	print("")
	print("_"*60)
	print("◉‿◉  "*10)
	print("(≧▽≦) "*8)
	print("_"*60)
	print("")
	
	#code for the game
	choice = input ('run again? (y/n)')
	print(("◉‿◉  "*10))

    
    