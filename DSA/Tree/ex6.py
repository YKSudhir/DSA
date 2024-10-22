name = 'a'
string=""
for i in range(5,0,-1):
    for j in range(i):
        string+="*"
        string+=" "
    string+="\n"

print(string)