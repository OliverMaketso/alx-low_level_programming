#include main.h

/**
 * @brief Prints all natural numbers from n to 98, followed by a new line.
 *
 * @param n The starting number.
 */
void print_to_98(int n) {
  /* Betty documenting style */
  /* Function's name: print_to_98 */
  /* Function's parameters: n */

  for (int i = n; i <= 98; i++) {
    /* Numbers must be separated by a comma, followed by a space */
    printf("%d, ", i);
  }
  /* Numbers should be printed in order */
  /* The first printed number should be the number passed to your function */
  /* The last printed number should be 98 */
  printf("\n");
}
