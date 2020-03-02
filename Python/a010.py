while True:
    try:
        num=int(input())
        ss=""
        for i in range(2,num+1):
            cnt=0
            while(not(num%i)):
                cnt+=1
                num//=i
            
            if cnt!=0:
                if cnt>1 and num>1:
                   ss+=str(i)+"^"+str(cnt)+" * "
                elif cnt==1 and num>1:
                    ss+=str(i)+" * "
                elif cnt>1 and num==1:
                    ss+=str(i)+"^"+str(cnt)
                else:
                    ss+=str(i)
        print(ss)
    except:break    
