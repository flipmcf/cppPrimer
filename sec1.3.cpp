// exercise 1.7: compile a program that has incorrecctly nested comments

int main()
{
/* this is a comment
  /* that is incorrectly nested */
  and this line is an error  */
  
  return 0;

/* fyi - my IDE also hates me now */

}


// flip@GazelleMcF:~/c++primer$ c++ -o sec1.3 sec1.3.cpp
// sec1.3.cpp: In function ‘int main()’:
// sec1.3.cpp:7:7: error: expected identifier before ‘this’
//   and this line is an error  */
//       ^
// sec1.3.cpp:7:7: error: expected ‘;’ before ‘this’
