# row = int(input("Enter the row: "))
# col = int(input("Enter the col: "))
# matrix = [[]]
# for rows in range(row):
#     for cols in range(col):
#         ele  = int(input(f"Enter the element of {rows}th and {cols}th of matrix: "))
#         matrix[row][col] = ele
row = int(input("Enter the number of rows: "))
col = int(input("Enter the number of columns: "))

# Initialize an empty matrix
matrix = []

# Iterate over each row
for rows in range(row):
    # Initialize an empty row
    current_row = []
    # Iterate over each column in the current row
    for cols in range(col):
        # Take input for each element in the matrix
        ele = int(input(f"Enter the element of {rows}th row and {cols}th column of the matrix: "))
        current_row.append(ele)
    # Append the current row to the matrix
    matrix.append(current_row)

print("Matrix:", matrix)
# X = int(input("Enter the val of X: "))
# bool = 0
# rows = 0 
# cols = 0
# for rows in range(row):
#     for cols in range(col):
#         if(matrix[rows][cols]==X):
#             print("Yes !")
#             bool = 1
#             break
# if(bool==0):
#     print("No !")
num = row*col
count = [0]*num
for rows in range(row):
    for cols in range(col):
        count[matrix[rows][cols]]+=1
        
for ind , ele in enumerate(count):
    print(f"The occurance of {ind} in matrix is {ele}")
