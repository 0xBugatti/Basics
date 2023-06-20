#include <cstddef>
#include <iostream>
#include <iomanip>
#include <type_traits>
#include <stdio.h>


/*
 *   This function prints hex dump of memory specified as a pointer.
 *   Reference: http://stackoverflow.com/questions/7775991/how-to-get-hexdump-of-a-structure-data
 */ 
#include <stdio.h>

void hexDump(char *desc, void *addr, int len)
{
  int i;
  unsigned char buff[17];
  unsigned char *pc = (unsigned char*)addr;

  // Output description if given.
  if (desc != NULL)
    printf ("%s:\n", desc);

  // Process every byte in the data.
  for (i = 0; i < len; i++) {
    // Multiple of 16 means new line (with line offset).
    if ((i % 16) == 0) {
      // Just don't print ASCII for the zeroth line.
      if (i != 0)
        printf ("  %s\n", buff);

      // Output the offset.
      printf ("  %04x ", i);
    }

    // Now the hex code for the specific character.
    printf (" %02x", pc[i]);

    // And store a printable ASCII character for later.
    if ((pc[i] < 0x20) || (pc[i] > 0x7e))
      buff[i % 16] = '.';
    else
      buff[i % 16] = pc[i];
    buff[(i % 16) + 1] = '\0';
  }

  // Pad out last line if not exactly 16 characters.
  while ((i % 16) != 0) {
    printf ("   ");
    i++;
  }

  // And print the final ASCII bit.
  printf ("  %s\n", buff);
}


int main (int argc, char *argv[]) {
  char my_str[52] = "a char string greater than 16 chars";
  hexDump ("my_str", &my_str, 100000*sizeof (my_str));
  return 0;
}

//   char test[32] =  "My sample data" ;
//   // output an address
//   std::cout << &test[0] << '\n'; // Uh oh -> wrong output stream operator
//   std::cout << (const void*)&test[0] << '\n';
// 


//unsigned size_t sizeof



















//   char test[32] = "My sample data";
//   // output an address
//   std::cout << (const void*)&test[0] << ':';
//   // output the contents
//   for (char c : test) {
//     std::cout << ' '
//       << std::hex << std::setw(2) << std::setfill('0')
//       << (unsigned)(unsigned char)c;
//   }
//   std::cout << '\n';
//   size_t len
// The stream output operator for char is intended to print a character (of course). There is another stream output operator for unsigned which fits better.
// To achieve that it's used, the char has to be converted to unsigned.
// But be prepared: The C++ standard doesn't mandate whether char is signed or unsigned—this decision is left to the compiler vendor. 
//To be on the safe side, the 'char' is first converted to 'unsigned char' then converted to unsigned