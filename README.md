The Doomed Dice Challenge
Overview
This coding challenge involves working with two six-sided dice, Die A and Die B, each with faces numbered from 1 to 6. The goal is to perform various operations on these dice, such as calculating total combinations, distribution of combinations, and probability of sums. Additionally, there's a more challenging task involving a transformation function to "undo" the effects of a mischievous deity, Loki.

Part-A (15-20 Minutes):
Total Combinations:

The total number of combinations when rolling both Die A and Die B together is calculated using the formula: Total Combinations = 6 * 6.
Distribution of Combinations:

A 6x6 matrix is created to represent the distribution of all possible combinations. Each element in the matrix corresponds to a unique combination of Die A and Die B.
Probability of Sums:

The probability of obtaining each possible sum is calculated and displayed. For each sum from 2 to 12, the probability is calculated as the ratio of the count of combinations resulting in that sum to the total number of combinations.
Part-B (25-30 Minutes):
In this challenging part, the mischievous deity Loki removes the "spots" from the dice. However, the goal is to reattach the spots on the dice while maintaining the same probability of obtaining each sum when rolling both dice.

Input:

Die_A = [1, 2, 3, 4, 5, 6]
Die_B = Die_A = [1, 2, 3, 4, 5, 6]
Output:

A Transform Function undoom_dice that takes (Die_A, Die_B) as input and outputs New_Die_A and New_Die_B. The conditions for the transformation are:
Die A cannot have more than 4 spots on a face.
Die A may have multiple faces with the same number of spots.
Die B can have as many spots on a face as necessary (even more than 6).
The goal is to ensure that the probability of obtaining each sum remains the same after the transformation.
Instructions
Part-A:
Run the provided code to calculate total combinations, distribution, and probability of sums when rolling Die A and Die B together.
Part-B:
Implement the undoom_dice function to reattach spots on Die A and Die B, following the specified conditions.
Run the code to see the transformed dice and verify that the probability of obtaining each sum remains unchanged.
Feel free to experiment with different inputs and test cases to ensure the correctness of your implementation.

