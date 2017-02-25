/* Auto-generated, do not edit. */

/*
 * Symbols filtered by the following globs:
 *   fclose
 *   fopen
 *   fread
 *   fwrite
 *   get_led_gpio_pin
 *   mg_send
 *   mgos_add_http_endpoint
 *   mgos_bind
 *   mgos_bind_http
 *   mgos_connect
 *   mgos_connect_http
 *   mgos_disconnect
 *   mgos_get_free_heap_size
 *   mgos_get_heap_size
 *   mgos_get_http_message_param
 *   mgos_get_sys_http_server
 *   mgos_gpio_*
 *   mgos_i2c_*
 *   mgos_mqtt_pub
 *   mgos_mqtt_sub
 *   mgos_peek
 *   mgos_set_timer
 *   mgos_system_restart
 *   mgos_usleep
 *   testfunc
 */

#include "fw/src/mgos_dlsym.h"

/* NOTE: signatures are fake */
void fclose(void);
void fopen(void);
void fread(void);
void fwrite(void);
void get_led_gpio_pin(void);
void mg_send(void);
void mgos_add_http_endpoint(void);
void mgos_bind(void);
void mgos_bind_http(void);
void mgos_connect(void);
void mgos_connect_http(void);
void mgos_disconnect(void);
void mgos_get_free_heap_size(void);
void mgos_get_heap_size(void);
void mgos_get_http_message_param(void);
void mgos_get_sys_http_server(void);
void mgos_gpio_dev_init(void);
void mgos_gpio_dev_int_cb(void);
void mgos_gpio_dev_int_done(void);
void mgos_gpio_dev_set_int_mode(void);
void mgos_gpio_disable_int(void);
void mgos_gpio_enable_int(void);
void mgos_gpio_init(void);
void mgos_gpio_read(void);
void mgos_gpio_remove_int_handler(void);
void mgos_gpio_service_init(void);
void mgos_gpio_set_button_handler(void);
void mgos_gpio_set_int_handler(void);
void mgos_gpio_set_mode(void);
void mgos_gpio_set_pull(void);
void mgos_gpio_toggle(void);
void mgos_gpio_write(void);
void mgos_i2c_close(void);
void mgos_i2c_create(void);
void mgos_i2c_get_global(void);
void mgos_i2c_init(void);
void mgos_i2c_read_byte(void);
void mgos_i2c_read_bytes(void);
void mgos_i2c_read_reg_b(void);
void mgos_i2c_read_reg_w(void);
void mgos_i2c_send_ack(void);
void mgos_i2c_send_byte(void);
void mgos_i2c_send_bytes(void);
void mgos_i2c_service_init(void);
void mgos_i2c_start(void);
void mgos_i2c_stop(void);
void mgos_i2c_write_reg_b(void);
void mgos_i2c_write_reg_w(void);
void mgos_mqtt_pub(void);
void mgos_mqtt_sub(void);
void mgos_peek(void);
void mgos_set_timer(void);
void mgos_system_restart(void);
void mgos_usleep(void);
void testfunc(void);

struct mgos_ffi_export ffi_exports[] = {
  {"fclose", fclose},
  {"fopen", fopen},
  {"fread", fread},
  {"fwrite", fwrite},
  {"get_led_gpio_pin", get_led_gpio_pin},
  {"mg_send", mg_send},
  {"mgos_add_http_endpoint", mgos_add_http_endpoint},
  {"mgos_bind", mgos_bind},
  {"mgos_bind_http", mgos_bind_http},
  {"mgos_connect", mgos_connect},
  {"mgos_connect_http", mgos_connect_http},
  {"mgos_disconnect", mgos_disconnect},
  {"mgos_get_free_heap_size", mgos_get_free_heap_size},
  {"mgos_get_heap_size", mgos_get_heap_size},
  {"mgos_get_http_message_param", mgos_get_http_message_param},
  {"mgos_get_sys_http_server", mgos_get_sys_http_server},
  {"mgos_gpio_dev_init", mgos_gpio_dev_init},
  {"mgos_gpio_dev_int_cb", mgos_gpio_dev_int_cb},
  {"mgos_gpio_dev_int_done", mgos_gpio_dev_int_done},
  {"mgos_gpio_dev_set_int_mode", mgos_gpio_dev_set_int_mode},
  {"mgos_gpio_disable_int", mgos_gpio_disable_int},
  {"mgos_gpio_enable_int", mgos_gpio_enable_int},
  {"mgos_gpio_init", mgos_gpio_init},
  {"mgos_gpio_read", mgos_gpio_read},
  {"mgos_gpio_remove_int_handler", mgos_gpio_remove_int_handler},
  {"mgos_gpio_service_init", mgos_gpio_service_init},
  {"mgos_gpio_set_button_handler", mgos_gpio_set_button_handler},
  {"mgos_gpio_set_int_handler", mgos_gpio_set_int_handler},
  {"mgos_gpio_set_mode", mgos_gpio_set_mode},
  {"mgos_gpio_set_pull", mgos_gpio_set_pull},
  {"mgos_gpio_toggle", mgos_gpio_toggle},
  {"mgos_gpio_write", mgos_gpio_write},
  {"mgos_i2c_close", mgos_i2c_close},
  {"mgos_i2c_create", mgos_i2c_create},
  {"mgos_i2c_get_global", mgos_i2c_get_global},
  {"mgos_i2c_init", mgos_i2c_init},
  {"mgos_i2c_read_byte", mgos_i2c_read_byte},
  {"mgos_i2c_read_bytes", mgos_i2c_read_bytes},
  {"mgos_i2c_read_reg_b", mgos_i2c_read_reg_b},
  {"mgos_i2c_read_reg_w", mgos_i2c_read_reg_w},
  {"mgos_i2c_send_ack", mgos_i2c_send_ack},
  {"mgos_i2c_send_byte", mgos_i2c_send_byte},
  {"mgos_i2c_send_bytes", mgos_i2c_send_bytes},
  {"mgos_i2c_service_init", mgos_i2c_service_init},
  {"mgos_i2c_start", mgos_i2c_start},
  {"mgos_i2c_stop", mgos_i2c_stop},
  {"mgos_i2c_write_reg_b", mgos_i2c_write_reg_b},
  {"mgos_i2c_write_reg_w", mgos_i2c_write_reg_w},
  {"mgos_mqtt_pub", mgos_mqtt_pub},
  {"mgos_mqtt_sub", mgos_mqtt_sub},
  {"mgos_peek", mgos_peek},
  {"mgos_set_timer", mgos_set_timer},
  {"mgos_system_restart", mgos_system_restart},
  {"mgos_usleep", mgos_usleep},
  {"testfunc", testfunc},
};
int ffi_exports_cnt = 55;