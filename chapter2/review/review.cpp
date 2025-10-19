/*Q1. What's meant by the term prompt? Ans: Prompt is a text which appears in the console/terminal which prompts the user to give an input.
  Q2. Which operator do you use to read into a variable? Ans: std::cin operator is used to read into a variable.
  Q3. What notations can you use to initialize an object? Ans: We can use '=', (), {}
  Q4. “If you want the user to input an integer value into your program for a variable named number, what are two lines of code you could write to ask the user to do it and to input the value into your program?”
  Ans: std::cout << "Please enter a number: ";
       std::cin >> number;
  Q5. What is \n called and what purpose does it serve? Ans: It's called "backslash n" or a newline character and it basically moves the cursor to a new line while printing.
  Q6. What terminates an input into a string? Ans: A new line, tab-character'\t', space terminates an input into a string.
  Q7. What terminates an input into an int? Ans: Anything which is not an integer.
  Q8. “How would you write the following as a single line of code:
cout << "Hello, ";
cout << first_name;
cout << "!\n";”
Ans: std::cout << "Hello, " << first_name << "!\n";
  Q9. What is an object? Ans: An object is a place in the system's memory which holds the type of data to be stored and the data itself, like the data-type can be int and the value can be 0.
  Q10. What is a literal? Ans: A literal is any type of data which is hardcoded into the program. Like int 42, string "Hello, World!".
  Q11. What kinds of literal are there? Ans: There are as many literals as there are data-types. (int/ string/double) literal and many more.
  Q12. What is a variable? Ans: An object with a name is called a variable.
  Q13. What are the typical sizes for a char, an int and a double? Ans: For char- it's one byte, for int 32 and for double 64 bytes respectively.
  Q14. What measures do we use for the size of small entities in memory, such as ints and strings? Ans: We use bits and bytes.
  Q15. What is the difference between = and ==? Ans: '=' is used to assign a value, like int a = 4; now a is a variable with value 4 in it. Whereas, "==" is used to compare whether two things are equal or not and it always returns a bool(either true or false).
  Q16. What is a definition? Ans: A definition is used to define something.
  Q17. What is initialization and how is it different from assignment? Ans: Initialization is when a value is given to a variable at the same time when it is created, however we can always assign a new value to a variable, but only initialize it once when it's created.
  Q18. What is string concatenation and how do you make it work in C++? Ans: string concatenation is the method to join two or more strings together and it can simply be achieved by '+'. For example "Hello" + "World" = "HelloWorld".
  Q19. What operators can you apply to an int? Ans: We can use >, >=, <, <= and == operators on int.
  Q20. Legal names ans: This_little_pig, This_1_is_fine, _this_is_ok, MineMineMine, number.
  Q21. We shouldn't use a name like _this_is_ok, even though it is legal as names starting with an underscore as reserved by the system.
  Q23. What is type safety and why is it important? Ans: Type safety ensures that a particular data type is treated as such. We really don't want to use an int as a char or vice-versa and that's why type-safety is very important.
  Q24. Why can conversion from double to int be a bad thing? Ans: Double holds way more value than an int does with double holding decimal parts as well, and if a number isn't an int, converting from double to int will truncate(in other words, the fractional or decimal part will get lost. Like 4.59 will become just 4, which leads to data loss.)
  Q27. What are the uses of auto? Ans: auto is a keyword in cpp, which helps assign the variable type itself if it's known at compile time. For example- int num 4; can be written as auto num 4; and the compiler will store it as an int as it's obvious at compile time.
  
*/