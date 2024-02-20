




## Overview
The ft_printf function mimic the printf function in C , a fundamental output function used to display formatted data on the standard output stream (usually the console) ft_printf allows developers to display various types of data, such as integers, floating-point numbers, characters, and strings, address, in a specific format.

## Syntax

- The syntax of the printf function is:
    `int ft_printf(const char *format, ...);`

- format: A string that contains the text to be displayed along with format 

- `...` : Represents additional arguments that match the format specifiers in the format string.

## Format Specifiers
- Format specifiers are placeholders in the format string that indicate the type and format of the corresponding arguments. Some common format specifiers include:

`%d`: Print an integer in decimal format.

`%f`: Print a floating-point number.

`%c`: Print a single character.

`%s`: Print a null-terminated string.

`%x, %X`: Print an integer in hexadecimal format (lowercase or uppercase).

`%p`: Print an address.


### Formatting Options
- Input
```
int num = 3;
char ch = 'A';
char str[] = "Hello its Jesus!";

printf("Character: %c\n", ch);
printf("String: %s\n", str);
printf("Decimal: %d\n", num);
printf("Hexadecimal: %x\n", num);

```

- Output
```
Character: A
String: Hello its Jesus!
Decimal: 3
Hexadecial:2a

```
##Return Value
On success, ft_printf returns the number of characters printed (excluding the null byte used to end the string).
On failure, it returns a negative value.






