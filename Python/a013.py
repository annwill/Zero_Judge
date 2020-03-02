
def Rome_To_Decimal(Rm):
    num=0
    for i in range(len(Rm)):
        dr={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000} 
        num+=dr.get(Rm[i])      
        if(Rm[i-1]=='I' and Rm[i]!='I'):
            num-=2   
        elif(Rm[i-1]=='X'):
            num-=20
        elif(Rm[i-1]=='C'):
            num-=200
    return num




##while True:
##    try:
x,y=input().split(" ")
##print("a={},b={}".format(x,y))
print(Rome_To_Decimal(x))
print(Rome_To_Decimal(y))
##    except:break
