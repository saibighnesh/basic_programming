#To create an inverted pyramid of alphabets
a=97
for i in range(5,0,-1):
    print(" "*(5-i),end="")
    for j in range (i*2-1):
        print(chr(a),end="")
        a+=1
    print()
