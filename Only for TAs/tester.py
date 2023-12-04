# for testing our executable, place it in the same directory as this script and feed the correct password as input
# to get the answers for values of x, y in {0 .. 30}.
import os

password = str(input('Enter correct password: '))

for i in range(0,30):
    for j in range(0,30):
        os.system('./code {} {} {} > ans.txt'.format(i,j,password))
        with open('ans.txt','r') as f:
            ans = int(f.readlines()[0])
        print('({},{}) = {}'.format(i,j,ans))

os.system('rm ans.txt')
