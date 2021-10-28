l2 = [i**2 for i in range(10)]

# d1 = dict()
# d1['asd'] = 6
# d1['adfjkladf'] = 18
# d1['cxzcxc'] = 27

d1 = {
    'asd': 6,
    'adfjkladf': 18,
    'cxzcxc': 27,
}

print(d1['asd'])

for key, value in d1.items():
    print(f'{key} -> {value}')

