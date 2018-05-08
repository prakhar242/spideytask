# Selection Sort
sort an array A
 
for loop i = 1 to n-1
 
   smallest = i
    
   for loop j = i + 1 to n
        if A[ j ] ≥ A[ smallest ]
              smallest = j
               
   if smallest ≠ i  
        Exchange A[ j ] with A[ smallest ]
