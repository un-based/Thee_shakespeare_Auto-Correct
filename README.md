# Thee_shakespeare_Auto-Correct
## Introduction
Was binge-grinding leetcode when this interesting problem [Edit Distance](https://leetcode.com/problems/edit-distance/description/) caught my eye. Thought of recursion but it took some time to get the transtions down. Once that was done, quickly memoised the code and got it accepted. Realised that this algorithm could potentially be used for than just finding an edit distance.

## Levenshtein distance
Searched up the question and immediately fell into this rabbit-hole. What a beautiful algorithm. Especially once you see all the inner-workings of the DP matrix in the tabulation form. Read that this was once the origins of Auto-Correct so just had to try it out.

## From LC TO William Shakespeare
Did not just want to make another "edit distance" Auto-Correct and wanted to give this a unique spin. That's when the idea struck me, why not make an auto-correct that can correct you in shakespearean english. 
"My spirits soared with boundless glee."

## Shakespear_Words.csv
Thanks to Kaggle for this wonderful collection of all words Shakespeare ever used in his plays. Without the open-source contribution of those who scraped the plays, this would not have been possible.

## Driver Code
Iterating through the csv files and using basic concepts of OOPS and header files I got the edit distance to work. The driver.cpp was designed to select the words with the lowest edit distance while ensuring zero repititions of any sort. Also, came with the logic of potential proportionality between the length of the input word and amount of errors in it and quantified this in the code.

## Auto-Correction
![IMG-01](https://github.com/un-based/Thee_shakespeare_Auto-Correct/assets/128747230/2520db01-2476-406b-b2ac-d799897b7384)
![IMG-02](https://github.com/un-based/Thee_shakespeare_Auto-Correct/assets/128747230/63e42f9b-9b07-46df-8861-fa13c2983399)
