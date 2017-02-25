#include <stdio.h>

extern "C"{
#include "common/platform.h"
#include "common/cs_file.h"
#include "fw/src/mgos_app.h"
#include "fw/src/mgos_gpio.h"
#include "fw/src/mgos_sys_config.h"
#include "fw/src/mgos_timers.h"
#include "fw/src/mgos_hal.h"
#include "fw/src/mgos_dlsym.h"
#include "mjs.h"
}

#if CS_PLATFORM == CS_P_ESP8266
#define LED_GPIO 2 /* On ESP-12E there is a blue LED connected to GPIO2  */
#elif CS_PLATFORM == CS_P_ESP32
#define LED_GPIO 21 /* No LED on DevKitC, use random GPIO close to GND pin */
#elif CS_PLATFORM == CS_P_CC3200
#define LED_GPIO 64 /* The red LED on LAUNCHXL */
#elif(CS_PLATFORM == CS_P_STM32) && defined(BSP_NUCLEO_F746ZG)
/* Nucleo-144 F746 */
#define LED_GPIO STM32_PIN_PB7 /* Blue LED */
#elif(CS_PLATFORM == CS_P_STM32) && defined(BSP_DISCO_F746G)
/* Discovery-0 F746 */
#define LED_GPIO STM32_PIN_PI1 /* Green LED */
#else
#error Unknown platform
#endif

extern "C" int get_led_gpio_pin(void) {
  return LED_GPIO;
}
void init()
{
	/* Initialize JavaScript engine */
  struct mjs *mjs = mjs_create();
  mjs_set_ffi_resolver(mjs, mgos_dlsym);
  mjs_err_t err = mjs_exec_file(mjs, "init.js", NULL);
  if (err != MJS_OK) {
    LOG(LL_ERROR, ("MJS exec error: %s\n", mjs_strerror(mjs, err)));
  }

}







class Date {

public:  
  Date(int, int, int);
  void set(int, int, int);
  void print();

private:
  int year;
  int month;
  int day;
};
extern "C" int testfunc()
{
   // Declare today to be object of class Date
   // Values are automatically intialised by calling constructor function
   Date today(1,9,1999);

   printf("This program was written on ");
   today.print(); 

   printf("This program was modified on ");
   today.set(5,10,1999);
   today.print(); 

   return 0;
}


// Date constructor function definition
Date::Date(int d, int m, int y)
{
  if(d>0 && d<31) day = d;
  if(m>0 && m<13) month = m;
  if(y>0) year =y;
}

// Date member function definitions
void Date::set(int d, int m, int y)
{
  if(d>0 && d<31) day = d;
  if(m>0 && m<13) month = m;
  if(y>0) year =y;
}

void Date::print()
{
  printf("%d-%d-%d", day, month, year);
}


enum mgos_app_init_result mgos_app_init(void) {
  init();
  testfunc();
  return MGOS_APP_INIT_SUCCESS;
}