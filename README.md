# push_swap

Ever seen numbers fight for their place? Welcome to push_swap!

---

## Table of Contents

1. [Introduction](#introduction)
2. [Features](#features)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Sorting Algorithm](#sorting-algorithm)
6. [Rules & Operations](#rules--operations)
7. [Contributing](#contributing)
8. [License](#license)
9. [Acknowledgments](#acknowledgments)

---

## Introduction

Welcome to **push_swap**, the ultimate brain teaser disguised as a sorting algorithm! 🧠✨

This project is part of the 42 School curriculum and challenges you to sort numbers with a limited set of operations. Think of it as playing chess with numbers—every move counts! ♟️🔢

---

## Features

✅ **Optimized Sorting** – Uses one of the most efficient algorithm to sort a stack of numbers with minimal operations.  
✅ **Limited Moves, Maximum Strategy** – Only a handful of operations are allowed. Get creative!
✅ **Handles Various Input Sizes** – Works smoothly for small to large numbers of integers.  
✅ **Error Handling Included** – No funky inputs allowed! (Looking at you, duplicate numbers and invalid entries... 👀)  

---

## Installation

Want to sort like a pro? Follow these steps:

1. Clone the repository:
   ```sh
   git clone https://github.com/MKNSTEJA/push_swap.git
   ```

2. Navigate to the project directory:
   ```sh
   cd push_swap
   ```

3. Compile the program:
   ```sh
   make
   ```

---

## Usage

Test your sorting skills by running the program:

```sh
./push_swap "4 67 3 87 23"
```

Example output:
```sh
sa
pb
ra
...
```

Use any push_swap visualiser or tester of your choice. I personally use [this one](https://codepen.io/ahkoh/full/bGWxmVz)!

Easiest way to check if it works or not is by transferring the output to a file by:
```sh
./push_swap "4 67 3 87 23" > any_name.txt
```
Go to `any_name.txt` file, copy the whole content from it and paste it in the [visualiser](https://codepen.io/ahkoh/full/bGWxmVz) along with the input you have given previously.

---

## Sorting Algorithm

🤖 *No brute force here!* Our sorting approach is optimized for minimal operations. Depending on the number of elements, different strategies are used:

- **3 numbers?** -> *Super quickie sortie!* 🏎️
- **5 numbers?** -> *Surgical precision sorting!* 🩺
- **More than 5?** -> *Radix sort (gets better as the size increases!)* 🔮

---

## Rules & Operations

You can only use the following operations to sort your stack:

- `sa` – Swap the first two elements of stack A.
- `sb` – Swap the first two elements of stack B.
- `ss` – Swap both A and B at the same time.
- `pa` – Push the top element from B to A.
- `pb` – Push the top element from A to B.
- `ra` – Rotate stack A upwards.
- `rb` – Rotate stack B upwards.
- `rr` – Rotate both stacks upwards.
- `rra` – Reverse rotate stack A.
- `rrb` – Reverse rotate stack B.
- `rrr` – Reverse rotate both stacks.

🧐 Sounds simple? Try it and see how complex sorting can get! 🤹‍♂️

---

## Contributing

Want to improve the sorting wizardry? 🧙‍♂️✨

1. Fork the repository.
2. Create a new branch:
   ```sh
   git checkout -b feature/your-feature-name
   ```
3. Commit your changes:
   ```sh
   git commit -m "Add new sorting improvement"
   ```
4. Push your changes:
   ```sh
   git push origin feature/your-feature-name
   ```
5. Open a pull request on GitHub.

---

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

## Acknowledgments

- **42 School:** For making sorting an extreme sport. 🏅
- **Sorting Algorithms:** For keeping our lives in order. 📚
- **Open-Source Community:** For making projects like this even better!

---

## Author

**MKNSTEJA**

- GitHub: [MKNSTEJA](https://github.com/MKNSTEJA)
- Email: chessmaniacs123@gmail.com

