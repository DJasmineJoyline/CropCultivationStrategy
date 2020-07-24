# CropCultivationStrategy
### If a crop is grown for once, the fertility of the soil reduces by 30. After cultivation, if the land is left free for one month, the fertility increases by a factor of 2. If the fertility becomes 0, the crop cannot be grown futher. Write a program to get the initial fertility and get the number of months the land is left free after every cultivation and find the number of times the crops are successfully grown, before the fertility becomes 0.    Note 1: If the fertility becomes 0 in the middle of the growth of crop, the crop stops growing.  Note 2: Stop getting the input if the fertility becomes 0.    
#### Input Format:  First input is an integer that corresponds to the initial fertility of the soil.  Next inputs are number of months the land is left free after every cultivation.  
#### Output Format:  Number of times the crops are grown successfully.    
### Sample Input:  35  3  1  
### Sample Output:  2     
#### Explanation:  
##### 35->after first cultivation fertility become 5  3-> after 3 months the fertility becomes 40( 5*2 = 10, 10*2 = 20, 20*2 = 40); 
##### After second cultivation the fertility becomes 10  1-> after 1 month the fertility becomes 20; 
##### In the middle of the crop growth the fertility becomes 0, so stop.  
##### So the total number of successful cultivations = 2.
