# str.c
A simple string library for c

## **setstr()**

Assigns a value to a **string**  
(Note: It automatically allocates memory for you)

```c
str text;
setstr(&text, "Hello, world!");
```

## **retstr()**

Gets value of a **string**

```c
str text;
setstr(&text, "Hello, world!");

printf("%s\n", retstr(&text));
```

## **lenstr()**

Gets lenght of a string

```c
printf("%i\n", lenstr("Hello, world!"));
```

## **cmpstr()**

Returns the difference level of two strings.  

```c
printf("%i\n", cmpstr("Hwi, wowd!", "Hello, world!"));
```

## **addstr()**

Adds two strings together.

```c
printf("%s\n", addstr("Hello, ", "world!"));
```

## **substr()**

Extracts substring from index a to index b.

```c
printf("%s\n", substr("Hi!", 0, 0)); // H
```
