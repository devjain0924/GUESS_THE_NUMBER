# Guess the Number Game

A simple number-guessing game in C++! Players guess a randomly generated number, with feedback provided on each attempt.

---

## Features

- Random number generation between customizable ranges.
- Feedback on guesses (too high, too low, correct).
- Point system to reward fewer guesses.
- User-friendly interface with rules and retry options.

---

## How to Play

1. Guess a number in the given range (default: 10 to 50).
2. Receive feedback: "Too high," "Too low," or "Correct!"
3. Points are awarded based on the number of attempts.
4. Play again or exit after completion.

---

## Setup

1. Clone the repo:
   ```bash
   git clone https://github.com/devjain0924/guess-the-number.git
   ```
2. Compile and run:
   ```bash
   g++ -o guess_number game.cpp && ./guess_number
   ```

---

## Example

```
=====================================
        WELCOME TO NUMBER GUESS       
=====================================

Rules:
1. Guess the number between 10 and 50.
2. You'll get hints after each wrong guess.
3. Earn points based on fewer guesses!

Press Enter to start the game.

Guess the number!
> 50
WRONG! The number is LESS than 50.
> 25
WRONG! The number is GREATER than 25.
> 37
CONGRATULATIONS! You guessed the right number.
You earned 9 points!

=====================================
          THANK YOU FOR PLAYING!      
=====================================
```

---

## Contact

- **Email:** [24devjain@gmail.com](mailto:24devjain@gmail.com)
- **LinkedIn:** [Dev Jain](https://www.linkedin.com/in/dev-jain-567366233/)
- **GitHub:** [devjain0924](https://github.com/devjain0924)

Enjoy the game! 🎮
