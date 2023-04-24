# CPSC 323 Compilers - Syntax Analyzer

This is a repository for the CPSC 323 course at California State University, Fullerton. This repository contains the code for the syntax analyzer, which is a program that reads source code and checks whether the syntax of the code is correct according to the language's grammar rules.

The syntax analyzer is implemented in C++ and uses the Flex and Bison tools to generate lexical analyzers and parsers respectively. It reads input from a file, tokenizes the input, and generates a parse tree based on the grammar rules.

## Getting Started

To use this program, you will need to have the following installed on your system:

* C++ compiler
* Flex
* Bison

Once you have these dependencies installed, you can clone this repository to your local machine and build the program. To build the program, run the following commands in your terminal:

```go
make clean
make
```

This will generate the executable file `syntax_analyzer`.

To run the program, you can execute the following command:

```bash
./syntax_analyzer input_file
```

where `input_file` is the path to the file containing the source code that you want to analyze.

## Contributing

This repository is not open to contributions at this time as it is an assignment for a course. However, feel free to fork the repository and modify the code for your own purposes.

## License

This project is licensed under the MIT License. See the [LICENSE](https://chat.openai.com/LICENSE) file for details.
