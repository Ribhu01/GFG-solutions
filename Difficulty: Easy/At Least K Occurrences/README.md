<h2><a href="https://www.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1?page=1&category=Arrays&difficulty=Easy&sortBy=submissions">At Least K Occurrences</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given an array of <strong>n</strong> integers. Return the element that occurs at least<strong>&nbsp;k</strong> number of times.</span></p>
<p><span style="font-size: 14pt;"><em>Note:</em></span></p>
<ul>
<li><span style="font-size: 14pt;"><strong><span style="font-weight: 400;">If there are multiple answers, please return the first one.</span></strong></span></li>
<li><span style="font-size: 14pt;"><strong><span style="font-weight: 400;">If there is no element found, return -1.</span></strong></span></li>
</ul>
<p><span style="font-size: 14pt;"><strong>Examples</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>n = 7, k = 2, arr[] = [1, 7, 4, 3, 4, 8, 7]
<strong>Output: </strong>4
<strong>Explanation: </strong>Both 7 and 4 occur 2 times. But 4 is first that occurs twice. As the index = 4, is the first element.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>n = 10, k = 3, arr[] = [3, 1, 3, 4, 5, 1, 3, 3, 5, 4]<br><strong>Output: </strong>3<br><strong>Explanation: </strong>Here, 3 is the only number that appeared atleast 3 times in the array.<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>n = 3, k = 10, arr[] = [10, 8, 2]</span><br><span style="font-size: 14pt;"><strong>Output: </strong>-1</span><br><span style="font-size: 14pt;"><strong>Explanation:</strong> Here no element is returning atleast 10 number of times, so -1.</span></pre>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity:</strong> O(n).<br><strong>Expected Auxiliary Space:</strong> O(n).</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>4</sup><br>1 &lt;= k &lt;= 100<br>0 &lt;= arr[i] &lt;= 200</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Hash</code>&nbsp;<code>Data Structures</code>&nbsp;