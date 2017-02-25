/* Generated file - do not edit. */

#ifndef SYS_CONFIG_H_
#define SYS_CONFIG_H_

#include "fw/src/mgos_config.h"

struct sys_config {
  struct sys_config_http {
    int enable;
    char *listen_addr;
    char *ssl_cert;
    char *ssl_key;
    char *ssl_ca_cert;
    char *upload_acl;
    char *hidden_files;
    struct sys_config_http_tunnel {
      int enable;
      char *addr;
    } tunnel;
  } http;
  struct sys_config_rpc {
    int enable;
    int max_queue_size;
    struct sys_config_rpc_mqtt {
      int enable;
      int is_trusted;
    } mqtt;
    struct sys_config_rpc_uart {
      int uart_no;
      int baud_rate;
      int fc_enable;
      int wait_for_start_frame;
    } uart;
    struct sys_config_rpc_ws {
      int enable;
      char *server_address;
      int reconnect_timeout_min;
      int reconnect_timeout_max;
      char *ssl_server_name;
      char *ssl_ca_file;
      char *ssl_client_cert_file;
    } ws;
  } rpc;
  struct sys_config_dns_sd {
    int enable;
    char *service_name;
    char *service_type;
  } dns_sd;
  struct sys_config_i2c {
    int enable;
    int sda_gpio;
    int scl_gpio;
    int debug;
  } i2c;
  struct sys_config_mqtt {
    char *server;
    char *user;
    char *pass;
    int reconnect_timeout_min;
    int reconnect_timeout_max;
    char *ssl_cert;
    char *ssl_key;
    char *ssl_ca_cert;
    char *ssl_cipher_suites;
    char *ssl_psk_identity;
    char *ssl_psk_key;
    int clean_session;
    int keep_alive;
    char *will_topic;
    char *will_message;
  } mqtt;
  struct sys_config_update {
    char *url;
    int interval;
    int timeout;
    int commit_timeout;
    char *ssl_ca_file;
    char *ssl_client_cert_file;
    char *ssl_server_name;
    int enable_post;
  } update;
  struct sys_config_wifi {
    struct sys_config_wifi_sta {
      int enable;
      char *ssid;
      char *pass;
      char *ip;
      char *netmask;
      char *gw;
    } sta;
    struct sys_config_wifi_ap {
      int enable;
      char *ssid;
      char *pass;
      int hidden;
      int channel;
      int max_connections;
      char *ip;
      char *netmask;
      char *gw;
      char *dhcp_start;
      char *dhcp_end;
      int keep_enabled;
      int trigger_on_gpio;
    } ap;
  } wifi;
  struct sys_config_device {
    char *id;
    char *password;
  } device;
  struct sys_config_debug {
    int mbedtls_level;
    int level;
    int stdout_uart;
    int stderr_uart;
    int enable_prompt;
    int factory_reset_gpio;
  } debug;
  struct sys_config_sys {
    struct sys_config_sys_atca {
      int enable;
      int i2c_addr;
      int ecdh_slots_mask;
    } atca;
    int wdt_timeout;
  } sys;
  char *conf_acl;
};

const struct mgos_conf_entry *sys_config_schema();

#endif /* SYS_CONFIG_H_ */
