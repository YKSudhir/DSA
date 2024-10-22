name = 'a'
string=""
for i in range(5,0,-1):
    for j in range(1,i+1):
        string+=str(j)
        string+=" "
    string+="\n"

print(string)