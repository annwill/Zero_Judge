while True:
 try:
  x,y=map(int,input().split())
  m=[[0]*y for i in range(x)]
  for i in range(x):
    lst=list(input().split())
    for j in range(len(lst)):
        m[i][j]=lst[j]
    lst.clear()

  for i in range(y):
    for j in range(x):
      print(m[j][i] , end=" ")
    print()
     
 except:break
