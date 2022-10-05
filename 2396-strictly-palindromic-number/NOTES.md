`return false;` is the statement which most of them wrote and it's correct it is impossible for a larger number to stay palindromic as per the conditions given
​
but here we've done it the way we're asked to- we take a vector, pushback the element n into the array digit wise inside the for loop which runs from 2 to n-1
​
x initialised to 0 when compared with arr.size() - and is smaller than it then we check another condition of
arr[x] != arr[j-x-1]
return false
and iterate x by1, we then clear the array and we return true for i=1&0