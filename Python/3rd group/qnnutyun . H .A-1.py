n=int(input("n = "));
if(n/1000<=1):
print( " - " );
a=n%10;
b=(n//10)%10;
c=(n//100)%10;
d=n//1000;
print(str(a)+str(b)+str(c)+str(d));

