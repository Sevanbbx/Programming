number = int(input('\n Ներմուծեք հնգանիշ թիվ\n'))
a = number // 10000
b = (number // 1000) % 10
c = (number // 100) % 10
d = (number // 10) % 10
e = (number % 10)
print('Թվանշանների գումարը՝', a, '+', b, '+', c, '+', d, '+', e, '=', a + b + c + d + e)