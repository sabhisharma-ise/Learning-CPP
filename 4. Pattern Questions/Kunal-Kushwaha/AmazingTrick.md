 [ Remember - Optimized is the best method to use in competitions or anywhere because 
 they are time-saving, code is not lengthy, and easy to understand ]

 It's second alternative is AmazingTrick ----> Only Applicable for symmetrical problems like

        *           
        **              
        ***             
        ****            
        *****           
        ****            
        ***             
        **          
        *

       * * * * *
        * * * *
         * * *
          * *  
           *
           *
          * *
         * * *
        * * * *
       * * * * *

       ********** 
       ****  ****
       ***    ***
       **      **
       *        *
       *        *
       **      **
       ***    ***
       ****  ****
       **********

       *        *
       **      **
       ***    ***
       ****  ****
       **********
       ****  ****
       ***    ***
       **      **
       *        *

In this trick, the formula for totalSpacesInRow, totalColInRow and so on, remains same, if we use the following pattern in the upper-half & lower-half for loops i.e.,

//printing upper-half
for (int row = 1; row <= n; row++) {

    totalSpacesInRow = ..
    totalColInRow = ...

}

//printing lower-half
for (int row = n; row >= 1; row--) {

    totalSpacesInRow = ..
    totalColInRow = ...

}

"Great to use in competitions problems, as we don't have to think about both upper & lower halves logic,
the upper-half logic itself works as the lower-half as well"