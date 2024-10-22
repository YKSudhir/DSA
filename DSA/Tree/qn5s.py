# num = int(input("Enter the numbefrs of students: "))
# List =[]
# for student in range(num):
#     student = int(input((f"Enter the {student+1}th student marks: ")))
#     List.append(student)
# # List.sort()
# freq = []
# for student in range(1, num+1):
#     int count = 1
#     for j in range (2 , n+1):
#         if List[i]==List[j]:
#             count = count+1
#     freq.append(count)
num = int(input("Enter the number of students: "))
marks_list = []

# Take input for each student's marks
for student in range(num):
    marks = int(input(f"Enter the marks for student {student+1}: "))
    marks_list.append(marks)

# Initialize a frequency list to store the count of each mark
freq = [0] * 11  # We'll use indices 0 to 10 to represent marks from 0 to 10

# Count the frequency of each mark
for marks in marks_list:
    freq[marks] += 1

# Print the frequency of each mark
for mark, count in enumerate(freq):
    print(f"Number of students with marks {mark}: {count}")

    
    