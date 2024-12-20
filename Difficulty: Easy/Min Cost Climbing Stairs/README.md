<h2><a href="https://www.geeksforgeeks.org/problems/min-cost-climbing-stairs/1">Min Cost Climbing Stairs</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array of integers <strong>cost[]</strong>&nbsp;where&nbsp;<strong>cost[i]</strong>&nbsp;is the cost of the i<sup>th</sup>&nbsp;step on a staircase.&nbsp;Once&nbsp;the cost is paid, you can either climb one or two steps.<br>You can either start from the step with index 0, or the step with index 1.<br>Return the minimum cost to reach the top of the floor.</span><br><br><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>cost[] = [10, 15, 20]
<strong>Output: </strong>15<strong>
Explanation:
<img style="height: 313px; width: 556px;" src="https://media.geeksforgeeks.org/img-practice/746_1-1629788354.png" alt="">
</strong>Cheapest option is to start at cost[1], pay that cost, and go to the top.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [1, 100, 1, 1, 1, 100, 1, 1, 100, 1]
<strong>Output: </strong>6<strong>
Explanation: </strong>Cheapest option is to start on cost[0], and only step on 1s, skipping cost[3].</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>2 ≤ cost.size() ≤ 2*10<sup>3</sup><br>0&nbsp;≤ cost[i] ≤ 999</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;