# cook your dish here
diff=[('0','1'),('1','0')]
testcases= int(input())

while testcases:
    testcases-=1
    n= int(input())
    mystring=input()
    i,j=0,len(mystring)-1
    third,total= 1,0
    while i<j:
        if(mystring[i],mystring[j])==diff[third]:
            i+=1
            j-=1 
            total+=1 
            third=1-third
        elif third==1:
            if mystring[i]=='0':
                i+=1
            if mystring[i]=='1':
                j-=1
        elif third==0:
            if mystring[i]=='1':
                i+=1 
            if mystring[j]=='0':
                j-=1
    print(total)
        
    