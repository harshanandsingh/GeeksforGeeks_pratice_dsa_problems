<h2><a href="https://www.geeksforgeeks.org/problems/ipl-2021-match-day-2--141634/1?page=1&category=sliding-window&difficulty=Medium&sortBy=submissions">IPL 2021 - Match Day 2</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Due to the rise of covid-19 cases in India, this year BCCI decided to organize knock-out matches in IPL rather than a league. </span></p>

<p><span style="font-size:18px">Today is matchday 2 and it is between the most loved team Chennai Super Kings and the most underrated team - Punjab Kings. </span> <span style="font-size:18px">Stephen Fleming</span>, <span style="font-size:18px">the head coach of CSK, analyzing the batting stats of Punjab. He has stats of runs scored by all N players in the previous season and he wants to find the maximum score for each and every contiguous sub-list of size K to strategize for the game. </span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 9, K = 3
arr[] = 1 2 3 1 4 5 2 3 6</span>
<span style="font-size:18px"><strong>Output: </strong>
3 3 4 5 5 5 6 </span>
<span style="font-size:18px"><strong>Explanation: </strong>
1st contiguous subarray = {1 2 3} Max = 3
2nd contiguous subarray = {2 3 1} Max = 3
3rd contiguous subarray = {3 1 4} Max = 4
4th contiguous subarray = {1 4 5} Max = 5
5th contiguous subarray = {4 5 2} Max = 5
6th contiguous subarray = {5 2 3} Max = 5
7th contiguous subarray = {2 3 6} Max = 6</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 10, K = 4
arr[] = 8 5 10 7 9 4 15 12 90 13</span>
<span style="font-size:18px"><strong>Output: </strong>
10 10 10 15 15 90 90
<strong>Explanation: 
</strong>1st contiguous subarray = {8 5 10 7}, Max = 10
2nd contiguous subarray = {5 10 7 9}, Max = 10 
3rd contiguous subarray = {10 7 9 4}, Max = 10 
4th contiguous subarray = {7 9 4 15}, Max = 15
5th contiguous subarray = {9 4 15 12}, Max = 15 
6th contiguous subarray = {4 15 12 90}, Max = 90 
7th contiguous subarray = {15 12 90 13}, Max = 90 </span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task: &nbsp;</strong><br>
You don't need to read input or print anything. Complete the function <strong>max_of_subarrays()</strong> which takes the array, N, and K as input parameters and returns a list of integers denoting the maximum of every contiguous subarray of size K.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>6</sup><br>
1 ≤ K ≤ N<br>
0 ≤ arr[i]&nbsp;≤ 10<sup>6</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Directi</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>sliding-window</code>&nbsp;<code>Arrays</code>&nbsp;<code>Queue</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;