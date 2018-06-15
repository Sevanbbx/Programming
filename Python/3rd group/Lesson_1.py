
a = int (input ( " a = " ) );
b = int (input ( " b = " ) );
c = int (input ( " c = " ) );
max= a ;
min1= b ;
if (max<b) :
    max = b;
if ( max < c ) :
    max = c ;
if ( min1 > a ) :
    min1= a ;
if ( min1 > c ) :
    min1 = c ;
min2 = a + b + c - min1 - max ;
print(" min1 = ", min1) ;
print(" min2 = ", min2 ) ;
print(" min2 + min1 = " , min1+min2) ;