typedef enum {false, true} BOOLEAN;

int main() {
  int x = 10;
  int result = 0;

  result = 10 + x;
  if (result < 50 | result == 0)
    result = 50;

  return 0;
}
