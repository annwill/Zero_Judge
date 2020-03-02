import sys
while True:
    try:
        for x in sys.stdin:
            print(eval(x.replace("/","//")))
    except:break
