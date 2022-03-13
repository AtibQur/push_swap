# <h1 align="center"><a href="https://github.com/AtibQur/push_swap/blob/main/push_swap.pdf" target="_blank">Push_swap</a> 🔄 🔀</h1>
<p><img align="right" src="./img/score.png" alt="Score" width="125" height="125"></p>
<h2> Description Push_swap</h2>   
This project involves sorting data on 2 stacks (stack A & stack B), with a limited set of instructions, and the smallest number of moves. To make this happen, you will have to manipulate various sorting algorithms and choose the most appropriate solution for optimized data sorting. 
<br><br>
The operations that we're allowed to use are as followed:
<br>
<table>
<li><code>sa</code> : <code>swap a</code> - Swap the first 2 elements at the top of stack A. Do nothing if there is only one or no elements).</li>
<li><code>sb</code> : <code>swap b</code> - Swap the first 2 elements at the top of stack B. Do nothing if there is only one or no elements).</li>
<li><code>ss</code> : <code>sa</code> and <code>sb</code> at the same time.</li>
<li><code>pa</code> : <code>push a</code> - take the first element at the top of b and put it at the top of a. Do nothing if B is empty.</li>
<li><code>pb</code> : <code>push b</code> - take the first element at the top of a and put it at the top of b. Do nothing if A is empty.</li>
<li><code>ra</code> : <code>rotate a</code> - shift up all elements of stack A by 1. The first element becomes the last one.</li>
<li><code>rb</code> : <code>rotate b</code> - shift up all elements of stack B by 1. The first element becomes the last one.</li>
<li><code>rr</code> : <code>ra</code> and <code>rb</code> at the same time.</li>
<li><code>rra</code> : <code>reverse rotate a</code> - shift down all elements of stack A by 1. The last element becomes the first one.</li>
<li><code>rrb</code> : <code>reverse rotate b</code> - shift down all elements of stack B by 1. The last element becomes the first one.</li>
<li><code>rrr</code> : <code>rra</code> and <code>rrb</code> at the same time.</li>
</table>
<h2>Function explanation 📚</h2>
<table>
<li>Error management</li>
Check for non numeric numbers, MAX & MIN integers, duplicated numbers. Any of these should return Error. No parameters should return nothing.
<li>Create list</li>
Loop through every argument and create a node for every argument and put it in a list. Every node recevies a value and index number -1.
<li>Check list</li>
Loop through the list and check if the parameters are already sorted. if the list is sorted, return nothing.
<li>Indexing</li>
Loop through every argument and check for the lowest number. The lowest number gets index 0 and it keeps incrementing untill every argument has its own index number.
<li>sort small stack</li>
If there are 2 and 3 numeric arguments. Check every possibility and sort them. With 4 or 5 arguments, check for the lowest index(s), and push them to stack_b. Call <em>sort_four()</em>, <em>sort_three()</em> functions.
<li>Sort big stack</li>
If there are more than 5 arguments, call the big stack function. This function uses the Radix sorting method. Bit-shift through the biggest index number. <em>rotate_a</em>  if the bitshift number (base 2) is 1. Else <em>push_b</em>. When looped through every argument, The whole list is in stack_b and already sorted upside down. <em>push_a</em> every item from stack_b until it's fully sorted.

</table>

<h2>Installation ⚙️</h2>
*To build the programm there is only a few steps: First of all, you can download the repository through the following steps in any shell of your preference:*
<br>
<pre>
git clone git@github.com:AtibQur/push_swap.git
cd push_swap
make
</pre>
These commands will compile everything and a executable <em>"push_swap"</em> should be created. 
<br>
<em>*Note: functions from the normal subject are made and tested. Bonus objects are not included.</em>
<br><br>
<h2>Usage 🛠️</h2>

<p>To compile the program, run the following command:</p>
<pre>
cd push_swap && make
</pre>
After creating the executable, the function is ready for use. This function only takes integers and will return errors if a non numeric character is used.
<br></br>
<pre>
$>./push_swap 5 1 4 2 3
sa
pb
rra
rra
pb
sa
ra
pa
pa

</pre>
<pre>
$>./push_swap 5 1 4 a 3
Error

</pre>
<p>The evaluation test is based on error management, sorted arguments, unsorted arguments (3, 5, 100, 500 arguments). To test all these arguments, use the following command: 
<br>
<em>ARG=`ruby -e "puts (0..499).to_a.shuffle.join(' ')"`; ./push_swap $ARG</em>
<br>
(This command returns random numbers, change numbers to test other tests.)</p>
<pre>
ARG=`ruby -e "puts (0..499).to_a.shuffle.join(' ')"`; ./push_swap $ARG | ./checker_Mac $ARG
Ok
ARG=`ruby -e "puts (0..499).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
6784
</pre>
<h2>Third-party helpers/testers</h2>
<li>Radix sorting explanation: <A href="https://www.youtube.com/watch?v=nu4gDuFabIM&feature=emb_title"> Radix Sort</A></li>
<li>Jamie Dawson explanation<A href="https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a"> Explanation</A></li>