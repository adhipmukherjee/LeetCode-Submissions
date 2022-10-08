we take two vectors of row and col
row -> stores max row element
col -> max col
ans = min of row and col minus grid
basically ans is the sum of all the increased height
for example, gridNew = [ [8, 4, 8, 7],
[7, 4, 7, 7],
[9, 4, 8, 7],
[3, 3, 3, 3] ]
ans = [ [8-3=5]+[4-0=4]+[8-8=0]+[7-4=3]+......] = 35