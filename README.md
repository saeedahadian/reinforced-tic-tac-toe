# reinforced-tic-tac-toe

An intelligent tic-tac-toe player!

# Purpose

Tic-tac-toe is a very simple game with a limited range of possibilities to play---so limited that creating a reinforcement model to play the game might seem like an overkill! But it is a good opportunity to learn about the concepts of reinforcement learning that might scale to much bigger projects.

This project in particular is interested in finding out how much a reinforcement model trained in the **imperfections** of an opponent might be more likely to win the game compared to model that is trained on a perfect opponent. As a starting point, we consider an opponent that does not take advantage of the symmetry of the game and might behave differently in situations that seem symmetrical. We want to determine the probabibility of winning in 1000 iterations of the game for each of our models.

The whole project is inspired by __Exercise 1.2__ of __Reinforcement Learning: An Introduction (Sutton & Barto, 2018)__.