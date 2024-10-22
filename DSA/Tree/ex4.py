string=""
for i in range(1,6):
    for j in range(i,0,-1):
        string+=str(j)
        string+=" "
    string+="\n"

print(string)