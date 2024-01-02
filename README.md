# The Doomed Dice Challenge

## Overview

This coding challenge revolves around two six-sided dice, Die A and Die B, each with faces numbered from 1 to 6. The tasks include calculating total combinations, distribution of combinations, and the probability of sums. Additionally, there is a challenging task involving a transformation function to undo the effects of the mischievous deity, Loki.

### Part-A (15-20 Minutes):

1. **Total Combinations:**
   - Calculate the total number of combinations when rolling both Die A and Die B together using the formula: Total Combinations = 6 * 6.

2. **Distribution of Combinations:**
   - Create a 6x6 matrix to represent the distribution of all possible combinations. Each element corresponds to a unique combination of Die A and Die B.

3. **Probability of Sums:**
   - Calculate and display the probability of obtaining each possible sum. For each sum from 2 to 12, calculate the ratio of the count of combinations resulting in that sum to the total number of combinations.

### Part-B (25-30 Minutes):

In this challenging part, the mischievous deity Loki removes the "spots" from the dice. However, the goal is to reattach the spots on the dice while maintaining the same probability of obtaining each sum when rolling both dice.

- **Input:**
  - Die_A = [1, 2, 3, 4, 5, 6]
  - Die_B = Die_A = [1, 2, 3, 4, 5, 6]

- **Output:**
  - Implement the `undoom_dice` function to reattach spots on Die A and Die B, adhering to the specified conditions.
  - Ensure Die A cannot have more than 4 spots on a face.
  - Allow Die A to have multiple faces with the same number of spots.
  - Allow Die B to have as many spots on a face as necessary (even more than 6).
  - Verify that the probability of obtaining each sum remains unchanged after the transformation.

### Instructions

#### Part-A:

1. Run the provided code to calculate total combinations, distribution, and probability of sums when rolling Die A and Die B together.

#### Part-B:

1. Implement the `undoom_dice` function to reattach spots on Die A and Die B, following the specified conditions.
2. Run the code to observe the transformed dice and verify that the probability of obtaining each sum remains unchanged.

Feel free to experiment with different inputs and test cases to ensure the correctness of your implementation.

Make it better by providing clear examples, edge cases, and additional context in the code comments or documentation. Consider using a consistent coding style and meaningful variable/function names for better readability.
