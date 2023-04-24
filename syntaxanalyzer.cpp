//CPSC 323 Project 2 - Rough Draft
//Donavie Ordonez, Abel Mendoza, Dano Nahabedian
//April 5, 2020

//C++
//compile: g++ -c -m64 -Wall -std=c++14 -fno-pie -no-pie syntaxanalyzer.o syntaxanalyzer.cpp
//This is a rough draft of Project 2 
//NOT THE FINAL ITERATION.
//This has been hard-coded and built on from the roughdraft of project 1 to get an idea of how to make a syntax analyzer.





#include <iostream>

#include <fstream>

#include <vector>

#include <string>

using namespace std;

 

int main() {

           //int position;

           string tokens[] = { "keyword", "identifier", "seperator", "operator" };

           //char example[] = "int a = 14;";

           char example[] = "x=a+b;";

           int example_length = sizeof(example) - 1;

 

           for (int i = 0; i < example_length; i++) {

                      if (example[i] == 'x') {

                                 cout << "Token: Identifier:    " << "Lexeme: x" << endl;

                                 cout << "    <Statement List> -> <Statement> | <Statement> <Statement List>" << "    <Statement> -> <Compound> | <Assign> | <If> | <Return> | <Print> | <Scan> | <While>" << "    <Assign> -> <Identifier> = <Expression>" << endl;

                      }

                      if (example[i] == '=') {

                                 cout << "Token: Operator:     " << "Lexeme: = " << endl;

                      }

                      if (example[i] == 'a') {

                                 cout << "Token: Identifier:     " << "Lexeme: a " << endl;

                                 cout << "    <Expression> -> <Term> <ExpressionPrime>" << "    <Term> -> <Factor> <TermPrime>" << "    <Factor> -> - <Primary> | <Primary>" << "    <Primary> -> <Identifier> | <Integer> | <Identifier> (<IDs>) | (<Expression>) | <Real> | true | false" << endl;

                      }

                      if (example[i] == '+') {

                                 cout << "Token: Operator    " << "Lexeme: +" << endl;

                                 cout << "    <Empty> -> Epsilon" << "    <TermPrime> ->* <Factor> <TermPrime> | / <Factor> <TermPrime> | <Empty>" << "    <Empty> -> Epsilon" << "    <ExpressionPrime> -> + <Term> <ExpressionPrime> | - <Term> <ExpressionPrime> | < Empty>" << endl;

                      }

                      if (example[i] == 'b') {

                                 cout << "Token: Identifier    " << "Lexeme: b" << endl;

                                 cout << "    <Term> -> <Factor> <TermPrime>" << "    <Factor> -> - <Primary> | <Primary>" << "    <Primary> -> <Identifier> | <Integer> | <Identifier> (<IDs>) | (<Expression>) | <Real> | true | false" << endl;

                      }

                      cout << endl;

           }

           

           return 0;

}