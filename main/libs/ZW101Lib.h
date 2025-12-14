#ifndef MY_ZW101_H_
#define MY_ZW101_H_

#include <cstdint>
#include <stdio.h>

#define MY_ZW101_PACK_BUFF_LEN (256)

#ifdef __cplusplus
extern "C" {
#endif

typedef struct my_zw101 {
  uint32_t address;
  uint8_t pack_buffer[MY_ZW101_PACK_BUFF_LEN];
  uint16_t pack_buffer_len;
  void (*div_p)(struct my_zw101 *);
} my_zw101_node;

uint8_t my_zw101_get_echo(my_zw101_node *node);
uint8_t my_zw101_ps_check_sensor(my_zw101_node *node);
uint8_t my_zw101_ps_sleep(my_zw101_node *node);
uint8_t my_zw101_ps_auto_identify(my_zw101_node *node, uint8_t level, uint16_t id, uint16_t data);
uint8_t my_zw101_ps_auto_enroll(my_zw101_node *node, uint16_t id, uint8_t entries, uint16_t param);

uint8_t my_zw101_answer_check(my_zw101_node *node, uint16_t *head, uint16_t *pack_data_len);

#ifdef __cplusplus
}
#endif

#endif