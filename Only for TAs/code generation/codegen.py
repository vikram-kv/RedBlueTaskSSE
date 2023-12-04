# use as python3 codegen.py > out.out
# generates the codes in our C file along with the key(mapping) and the correct password

import secrets
import string
import numpy as np

# generate 100 random strings of size 100 and print them
SIZE = 100
codes = []
for i in range(SIZE):
    res = ''.join(secrets.choice(string.ascii_uppercase+string.ascii_lowercase+string.digits) for i in range(SIZE))
    codes.append(res)
    print('codes[{}] = "{}";'.format(i,res))

# generate a random 1-1 mapping from 0 .. 99 to 0 .. 99
a = np.array([i for i in range(SIZE)])
np.random.shuffle(a)
res = ', '.join(str(a[i]) for i in range(SIZE))
print('int key[] = { '+res+' };')

# print the correct password from the mapping and codes
res = ''.join(codes[i][a[i]] for i in range(SIZE))
print('password = '+res)