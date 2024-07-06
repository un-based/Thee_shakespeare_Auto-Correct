# Thee_shakespeare_Auto-Correct
## Introduction
While binge-grinding LeetCode, I stumbled upon an interesting problem: [Edit Distance](https://leetcode.com/problems/edit-distance/description/). Initially, I thought of using recursion, but it took some time to get the transitions down. Once that was done, I quickly memoized the code and got it accepted. I realized that this algorithm could potentially be used for more than just finding an edit distance.

## Levenshtein Distance
After researching the question further, I fell into a fascinating rabbit hole. The Levenshtein distance algorithm is beautiful, especially when you see the inner workings of the DP matrix in tabulation form. I read that this was the origin of Auto-Correct, so I had to try it out.

## From LeetCode to William Shakespeare
I didn't want to create just another "edit distance" Auto-Correct, so I decided to give it a unique twist. That's when the idea struck me: why not make an auto-correct that corrects in Shakespearean English? "My spirits soared with boundless glee."

## Shakespear_Words.csv
Thanks to Kaggle for this wonderful collection of all words Shakespeare ever used in his plays. Without the open-source contribution of those who scraped the plays, this project would not have been possible.

## Driver Code
By iterating through the CSV files and using basic concepts of OOP and header files, I got the edit distance algorithm to work. The driver.cpp was designed to select the words with the lowest edit distance while ensuring zero repetitions of any sort. Additionally, I devised logic to account for the potential proportionality between the length of the input word and the number of errors in it, which I quantified in the code.

## Auto-Correction
![IMG-01](https://github.com/un-based/Thee_shakespeare_Auto-Correct/assets/128747230/2520db01-2476-406b-b2ac-d799897b7384)
![IMG-02](https://github.com/un-based/Thee_shakespeare_Auto-Correct/assets/128747230/63e42f9b-9b07-46df-8861-fa13c2983399)
