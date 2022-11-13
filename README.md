# _printf
##### This project consists of a function that replicates the operation of the C library `printf` function.

### Description:
**`_printf`** receives a `format` and produces an output to the standard output stream according to the received `format`, and returns the number of characters printed.
**`_printf`** can receive multiple `arguments`, and will replace them according to their `format`.

**Supported formats:**
 - Character: `%c`
 - Integer: `%d` and `%i`
 - String: `%s`
 - Modulo: `%%`

---

### Flowchart:
<img src="https://i.imgur.com/j7MAMyE.png" data-align="center" width="500">

---

### Requirements:
 - C compiler.

### Compilation:
Your code can be compiled this way:
```bash
$ gcc *.c
```
### Example of use:
Code:
```bash
#include "main.h"
int main(void)
{	
	return(_printf("Hello %s\n", "World"));
}
```
Compilation:
```bash
$ gcc *.c
```
Output:
```bash
$ ./a.out
Hello World
$ echo $?
12
$
```	 	
### Testing:
```
$ cat main.c 
#include <limits.h>
#include <stdio.h>
#include "main.h"
int main(void)
{
    int len;

    len = _printf("Let's try to _printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    _printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    _printf("Unknown:[%r]\n");
    return (0);
}
$ gcc *.c
$ ./a.out
Let's try to _printf a simple sentence.
Length:[39, 39]
Negative:[-762534]
Character:[H]
String:[I am a string !]
Percent:[%]
Len:[12]
Unknown:[%r]
$
```
---

### Authors:
[<img src="https://i.imgur.com/tOqS5vt.png" width="15"/>](https://github.com/repli1) [Repli1](https://github.com/repli1)

[<img src="https://i.imgur.com/tOqS5vt.png" width="15"/>](https://github.com/brncd) [brncd](https://github.com/brncd)
