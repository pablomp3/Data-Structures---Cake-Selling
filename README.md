# Data-Structures - Cake-Selling

## Description
                                                                 
                                                               
A cake maker wants to earn as much money as he can. Different flavors of cakes have different sizes. 
For example, a chocolate cake is small and can only be cut up to 3 pieces. Vanilla cake is big and can be cut up to 20 pieces. 
He has a list of prices for slices of different sizes (for each flavor of cake).

For example:

   Chocolate cake:

* Price of a piece of size 1/3: 22 USD
* Price of a piece of size 2/3: 33 USD
* Price of a piece of size 3/3 (whole cake): 44 USD

| name  |     ñ    |    ñ     |   ñ    |
|-------|----------|----------|--------|
| Slice |    1/3	 |   2/3	  |  3/3   |
| Price | 	22 USD |	33 USD	| 44 USD |
     

   Vanilla cake:

* Price of a piece of size 1/20: 5 USD
* Price of a piece of size 2/20: 7 USD
* ...
* Price of a piece of size 20/20: 1090 USD

|  name  |    ñ    |   ñ    |   ñ   |    ñ     |
|--------|---------|--------|-------|----------|
| Slice	 |  1/20	 |  2/20	| ....	| 20/20    |
| Price  |  5 USD	 |  7 USD	| ....	| 1090 USD |
 

Given a list of prices, find the _highest amount of money_, the cake maker can make by cutting _one cake_ (best cutting strategy). 


For example:
The maximum earnings we can make out of the chocolate cake is 66 USD.

## WHY?
All cutting strategies:

* 3 pieces of size 1/3: 22 + 22 + 22 = 66 USD
* 1 piece of 1/3 and 1 piece of 2/3: 22 + 33 = 55 USD
* 1 piece of 3/3 (whole cake): 44 USD
So the best way to cut it is into 3 pieces of size 1/3.

 
Help the cake maker to maximize his profit out of "one" cake!!!

 
## Input
As input, you will be given the list of prices for each size of slices (for a specific flavor of cake).
For example:

    22 33 44

Which means: The cake can be cut up to 3 pieces.

* Price of a slice of size 1/3: 22 USD
* Price of a slice of 2/3: 33 USD
* Price of a slice of 3/3 (whole cake): 44 USD 


## Output
As output, you should provide one integer, the maximum amount of money you can make by cutting one cake, and there is NOT a
'\n' at the end of integer.
For example:

    66

### Sample Input (see attached)

    3 7 8 9 10
### Sample Output (see attached)

    17
 
