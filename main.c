#include <stdio.h>
#include "pico/stdlib.h"

int main() {
  stdio_init_all();
  gpio_init(3);
  gpio_init(25);
  gpio_set_dir (3,false);
  gpio_set_dir (25,true);
  
  while (1) {

    int boton = gpio_get(3);
    if(boton){
    
      if(gpio_get(25)==0)
        gpio_put(25,true);
      else if(gpio_get(25)==1)
        gpio_put(25,false);
    
    }
    sleep_ms(500);
    
  }
}
