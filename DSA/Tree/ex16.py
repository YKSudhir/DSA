
string=""
for i in range(1,6):
    for j in range(1,5-i+1):
        string+=" "
    for k in range(1,2*i):
        string+="*"
    string+="\n"

print(string)