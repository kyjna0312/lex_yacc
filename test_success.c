struct Person {
  char *name;
  int age;
  char *address;
} ;

int main() {
  struct Person p1;

  p1.name = "Kim";
  p1.age = 25;
  p1.address = "Seoul";
  
  return 0;
}
