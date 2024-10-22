# '''if n=5
# 55555
# 4444
# 333
# 22
# 1
# 1
# 22
# 333
# 4444
# 55555'''
# n=int(input("Enter the number: "))
# ans=""
# for i in range(n+1 , 0 , -1):
#     for j in range(i):
#         ans+=(str(i))
#         # if(j!=n):
#         #     ans+=str("\n")
# for i in range(1 , n+1):
#     for j in range(i):
#         ans+=(str(i))
#         # ans+=str("\n")
# print(ans
ans = "1,2,3,,,"
ans.rstrip(",")
print(ans)