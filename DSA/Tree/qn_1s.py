List =[]
length = int(input("Enter the length of list: "))
for i in range(length):
    element = int(input((f"Enter the {i+1}th eelement of list: ")))
    List.append(element)

print("Input List" , List)  
temp_List=[]

for ele in range(length):
    if(List[ele]>0):
        temp_List.append(List[ele])
ele = 0 
for ele in range(length):
    if(List[ele]<0):
        temp_List.append(List[ele])

del List
List = temp_List
del temp_List
print(List)

# or
List = []
length = int(input("Enter the length of the list: "))

# Taking input elements and storing them in the list
for i in range(length):
    element = int(input(f"Enter the {i+1}th element of the list: "))
    List.append(element)

print("Input List:", List)

# Creating a temporary list to hold positive and negative elements separately
positive_list = []
negative_list = []

# Separating positive and negative elements
for i in range(length):
    if List[i] > 0:
        positive_list.append(List[i])
    elif List[i] < 0:
        negative_list.append(List[i])

# Combining positive and negative elements in the original list
List = positive_list + negative_list

print("Modified List:", List)

    