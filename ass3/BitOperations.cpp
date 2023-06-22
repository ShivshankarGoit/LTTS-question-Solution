/*Bit Operations:
https://1.bp.blogspot.com/-Tfj_D_f_AF0/VZO5QIIGAUI/AAAAAAAAAmI/5Rw6uIU3EiI/s1600/DS1307%2BTime%2BKeeper%2BRegister.PNG

DS1307 has its time registers in BCD format as shown in the image found in the above link, so 
a. Write a function to Set, clear and toggle bit of an 8-bit number

Concepts to be used.
- Operators*/



#include <stdio.h>

void set_bit(unsigned char *num, int bit_num) {
  *num |= (1 << bit_num);
}

void clear_bit(unsigned char *num, int bit_num) {
  *num &= ~(1 << bit_num);
}

void toggle_bit(unsigned  char *num, int bit_num) {
  *num ^= (1 << bit_num);
}

int main() {
  unsigned char num;
  printf("Enter a number: ");
  scanf("%hhx", &num);

  set_bit(&num, 0);
  printf("After setting bit 0, number = 0x%x\n", num);

  clear_bit(&num, 1);
  printf("After clearing bit 1, number = 0x%x\n", num);

  toggle_bit(&num, 2);
  printf("After toggling bit 2, number = 0x%x\n", num);

  return 0;
}


