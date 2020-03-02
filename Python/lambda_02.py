##score=int(input('請輸入分數: '))
##level={
##  10:lambda score:score+10,
##  9:lambda score:score+20,
##  8:lambda score:score+30,
##  7:lambda score:score+40,
##  6:lambda score:score+50
##}
##print(level.get(score))
x  = 0
value={
  1: lambda y: y+ 1,
  2: lambda y: y*5
}

print(value[1])
