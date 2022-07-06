# cook your dish here
# this is second function...............................dsf
def fun2(x,y):
    a=2^x
    b=2
    c=b^y
    helper = [a,b,c]
    for i in range(len(helper)):
        helper[i]%=2
    if helper.count(0)==1:
        return [a,b,c]
    return []








# this is 3rd function used::::::::::::::::::::::::::::::::sdfsdfsdffffffffffffffffffffff
def fun3(x,y):
    b=2^y
    c=2
    a=b^x
    helper = [a,b,c]
    for i in range(len(helper)):
        helper[i]%=2
    if helper.count(0)==1:
        return [a,b,c]
    return []














# this is first function.....................
def fun1(x,y):
    b=2^x
    a=2
    c=b^y
    helper = [a,b,c]
    for i in range(len(helper)):
        helper[i]%=2
    if helper.count(0)==1:
        return [2,min(b,c),max(b,c)]
    return []
















# this is main function written by me.......................................................
def friendSolveFunction():
    first,second = list(map(int,input().split()))
    finalans = fun1(first,second)
    if finalans:
        finalans.sort()
        print(*finalans)
    else:
        finalans= fun2(first,second)
        finalans.sort()
        if finalans:
            print(*finalans)
        else:
            finalans= fun3(first,second)
            finalans.sort()
            if finalans:
                print(*finalans)
















testcases =1
testcases = int(input())
while testcases:
    testcases -=1
    friendSolveFunction()
