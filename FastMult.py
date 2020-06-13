##Multiply the given numbers.

##Input
##n [the number of multiplications <= 1000]

##l1 l2 [numbers to multiply (at most 10000 decimal digits each)]

##Text grouped in [ ] does not appear in the input file.

##Output
##The results of multiplications.


n = int(raw_input())
while (n > 0):
    line = raw_input().split(' ')
    print int(line[0]) * int(line[1])
    n = n - 1
