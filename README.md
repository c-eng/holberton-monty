# Monty
### Description
A basic Monty interpreter

### Compilation & Output
```
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

### Directory Contents

|   ***File/Folder***    |  **Decription**                       |
|-----------------|---------------------------------------|
| `README.md`     | read me file. |
| `main.c`        | body of Monty interpreter |
| `str_tokenize.c` | tokenizes a string |
| `get_opcode.c` | get the correct operation code |
| `input_get.c` | gets input for Monty interpretation |
| `intcheck.c` | checks string if it is an int |
| `error_exit.c` | error handling and error exiting for monty interpreter |
| `free_monty.c` | frees monty list |
| `push.c` | pushes value onto head of list |
| `pall.c` | prints the elements |
| `pint.c` | prints the value at the top of the stack |
| `pop.c` | removes the top element of the stack |
| `swap.c | swaps the first two elements of the stack |
| `add.c` | adds the top two elements of the stack |
| `nop.c` | does nothing |
| `sub.c` | subtracts the top two elements of the stack |
| `div.c` | divides the top two elements of the stack |
| `mul.c` | multiplies the top two elements of the stack |
| `mod.c` | modulo the top two elements of the stack |
| `pchar.c` | prints the char at the top of the stack |
| `pstr.c` | prints the string starting at the top of the stack |
| `rotl.c` | rotate the stack to the top |
| `rotr.c` | rotate the stack to the bottom |


### Authors
*Dennis Pham* - [Github](https://github.com/dspham/) || [Twitter](https://twitter.com/grepdennis)

*Cameron Eng* - [Github](https://github.com/c_eng/) || [Twitter](https://twitter.com/c33Eng)
