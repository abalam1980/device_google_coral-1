/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __IAXXX_SYSTEMID_H__
#define __IAXXX_SYSTEMID_H__
#include <linux/kernel.h>
#include <limits.h>
enum {
  IAXXX_SYSID_RESOURCE_TYPE_SPECIAL = (0x0),
  IAXXX_SYSID_RESOURCE_TYPE_DRIVER,
  IAXXX_SYSID_RESOURCE_TYPE_MODULE,
  IAXXX_SYSID_RESOURCE_TYPE_PLUGIN,
  IAXXX_SYSID_RESOURCE_TYPE_CHANNEL,
  IAXXX_SYSID_RESOURCE_TYPE_TUNNEL,
  IAXXX_SYSID_RESOURCE_TYPE_STREAM,
  IAXXX_SYSID_RESOURCE_TYPE_DEVICE,
  IAXXX_SYSID_RESOURCE_TYPE_BT,
  IAXXX_SYSID_RESOURCE_TYPE_SENSOR,
  IAXXX_SYSID_RESOURCE_TYPE_DEBUG,
  IAXXX_SYSID_RESOURCE_TYPE_FILE,
  IAXXX_SYSID_RESOURCE_TYPE_NUM,
  IAXXX_SYSID_RESOURCE_TYPE_FORCE_SIZE = INT_MAX,
};
enum sysid_driver_type_e {
  IAXXX_SYSID_DRIVER_TYPE_NONE = 0,
  IAXXX_SYSID_DRIVER_TYPE_I2C,
  IAXXX_SYSID_DRIVER_TYPE_SPI,
  IAXXX_SYSID_DRIVER_TYPE_UART,
  IAXXX_SYSID_DRIVER_TYPE_SLIMBUS_CTRL,
  IAXXX_SYSID_DRIVER_TYPE_SOUNDWIRE_CTRL,
  IAXXX_SYSID_DRIVER_TYPE_I3C_CTRL,
  IAXXX_SYSID_DRIVER_TYPE_PCM,
  IAXXX_SYSID_DRIVER_TYPE_PDM_IN,
  IAXXX_SYSID_DRIVER_TYPE_PDM_OUT,
  IAXXX_SYSID_DRIVER_TYPE_I2S,
  IAXXX_SYSID_DRIVER_TYPE_SLIMBUS_DATA,
  IAXXX_SYSID_DRIVER_TYPE_SOUNDWIRE_DATA,
  IAXXX_SYSID_DRIVER_TYPE_I3C_DATA,
  IAXXX_SYSID_DRIVER_TYPE_SSP,
  IAXXX_SYSID_DRIVER_TYPE_AF,
  IAXXX_SYSID_DRIVER_TYPE_DAC,
  IAXXX_SYSID_DRIVER_TYPE_A400,
  IAXXX_SYSID_DRIVER_TYPE_FILTER_IN,
  IAXXX_SYSID_DRIVER_TYPE_FILTER_OUT,
  IAXXX_SYSID_DRIVER_TYPE_STMR_TIMER,
  IAXXX_SYSID_DRIVER_TYPE_STMR_PT,
  IAXXX_SYSID_DRIVER_TYPE_SW_TIMER,
  IAXXX_SYSID_DRIVER_TYPE_TIMER,
  IAXXX_SYSID_DRIVER_TYPE_PLL,
  IAXXX_SYSID_DRIVER_TYPE_DMA,
  IAXXX_SYSID_DRIVER_TYPE_GPIOA,
  IAXXX_SYSID_DRIVER_TYPE_GPIOB,
  IAXXX_SYSID_DRIVER_TYPE_REGMAP,
  IAXXX_SYSID_DRIVER_TYPE_FLASHDRV,
  IAXXX_SYSID_DRIVER_TYPE_BUTTON,
  IAXXX_SYSID_DRIVER_TYPE_LED,
  IAXXX_SYSID_DRIVER_TYPE_ADAU1361,
  IAXXX_SYSID_DRIVER_TYPE_USBDRV,
  IAXXX_SYSID_DRIVER_TYPE_CSR8811,
  IAXXX_SYSID_DRIVER_TYPE_CYW20707,
  IAXXX_SYSID_DRIVER_TYPE_MAC,
  IAXXX_SYSID_DRIVER_TYPE_BQ27425,
  IAXXX_SYSID_DRIVER_TYPE_SENSOR,
  IAXXX_SYSID_DRIVER_TYPE_FLICKER,
  IAXXX_SYSID_DRIVER_TYPE_DMA_STRM,
  IAXXX_SYSID_DRIVER_TYPE_CPUSTRMDRV,
  IAXXX_SYSID_DRIVER_TYPE_NUM,
  IAXXX_SYSID_DRIVER_TYPE_FORCE_SIZE = INT_MAX,
};
enum sysid_iaxxx_device_type_e {
  IAXXX_SYSID_DEVICE_TYPE_BUTTON,
  IAXXX_SYSID_DEVICE_TYPE_LED,
  IAXXX_SYSID_DEVICE_TYPE_FLASH,
  IAXXX_SYSID_DEVICE_TYPE_CODEC,
  IAXXX_SYSID_DEVICE_TYPE_SENSOR,
  IAXXX_SYSID_DEVICE_TYPE_INPUT_PIN,
  IAXXX_SYSID_DEVICE_TYPE_OUTPUT_PIN,
  IAXXX_SYSID_DEVICE_TYPE_STMR_TMR,
  IAXXX_SYSID_DEVICE_TYPE_STMR_PT,
  IAXXX_SYSID_DEVICE_TYPE_INTERFACE,
  IAXXX_SYSID_DEVICE_TYPE_USB,
  IAXXX_SYSID_DEVICE_TYPE_BT,
  IAXXX_SYSID_DEVICE_TYPE_BATTERY,
  IAXXX_SYSID_DEVICE_TYPE_NUM,
  IAXXX_SYSID_DEVICE_TYPE_FORCE_SIZE = INT_MAX,
};
enum sysid_special_type_e {
  IAXXX_SYSID_SPECIAL_TYPE_INVALID = 0,
  IAXXX_SYSID_SPECIAL_TYPE_HOST,
  IAXXX_SYSID_SPECIAL_TYPE_ALL = (0xF),
  IAXXX_SYSID_SPECIAL_TYPE_NUM,
  IAXXX_SYSID_SPECIAL_TYPE_FORCE_SIZE = INT_MAX,
};
enum sysid_dir_e {
  IAXXX_SYSID_DIR_IN = 0,
  IAXXX_SYSID_DIR_OUT,
  IAXXX_SYSID_DIR_FORCE_SIZE = INT_MAX,
};
#define IAXXX_SYSID_POS_RESOURCE_TYPE (12)
#define IAXXX_SYSID_MASK_RESOURCE_TYPE (0xF000)
#define IAXXX_SYSID_POS_SPECIAL_TYPE (8)
#define IAXXX_SYSID_MASK_SPECIAL_TYPE (0x0F00)
#define IAXXX_SYSID_POS_SPECIAL_INST_INDEX (0)
#define IAXXX_SYSID_MASK_SPECIAL_INST_INDEX (0x00FF)
#define IAXXX_SYSID_POS_DRIVER_TYPE (5)
#define IAXXX_SYSID_MASK_DRIVER_TYPE (0x0FE0)
#define IAXXX_SYSID_POS_DRIVER_INST_INDEX (0)
#define IAXXX_SYSID_MASK_DRIVER_INST_INDEX (0x001F)
#define IAXXX_SYSID_POS_MODULE_PROC_ID (9)
#define IAXXX_SYSID_MASK_MODULE_PROC_ID (0x0E00)
#define IAXXX_SYSID_POS_MODULE_TYPE (4)
#define IAXXX_SYSID_MASK_MODULE_TYPE (0x01F0)
#define IAXXX_SYSID_POS_MODULE_INST (0)
#define IAXXX_SYSID_MASK_MODULE_INST (0x000F)
#define IAXXX_SYSID_POS_PLUGIN_ID (6)
#define IAXXX_SYSID_MASK_PLUGIN_ID (0x0FC0)
#define IAXXX_SYSID_POS_PLUGIN_EP_DIR (5)
#define IAXXX_SYSID_MASK_PLUGIN_EP_DIR (0x0020)
#define IAXXX_SYSID_POS_PLUGIN_EP_INDEX (0)
#define IAXXX_SYSID_MASK_PLUGIN_EP_INDEX (0x001F)
#define IAXXX_SYSID_POS_CHANNEL_ID (6)
#define IAXXX_SYSID_MASK_CHANNEL_ID (0x0FC0)
#define IAXXX_SYSID_POS_CHANNEL_EP_DIR (5)
#define IAXXX_SYSID_MASK_CHANNEL_EP_DIR (0x0020)
#define IAXXX_SYSID_POS_CHANNEL_EP_INDEX (0)
#define IAXXX_SYSID_MASK_CHANNEL_EP_INDEX (0x001F)
#define IAXXX_SYSID_POS_TUNNEL_ID (6)
#define IAXXX_SYSID_MASK_TUNNEL_ID (0x0FC0)
#define IAXXX_SYSID_POS_TUNNEL_EP_DIR (5)
#define IAXXX_SYSID_MASK_TUNNEL_EP_DIR (0x0020)
#define IAXXX_SYSID_POS_TUNNEL_EP_INDEX (0)
#define IAXXX_SYSID_MASK_TUNNEL_EP_INDEX (0x001F)
#define IAXXX_SYSID_POS_BT_ID (6)
#define IAXXX_SYSID_MASK_BT_ID (0x0FC0)
#define IAXXX_SYSID_POS_BT_EP_DIR (5)
#define IAXXX_SYSID_MASK_BT_EP_DIR (0x0020)
#define IAXXX_SYSID_POS_BT_EP_INDEX (0)
#define IAXXX_SYSID_MASK_BT_EP_INDEX (0x001F)
#define IAXXX_SYSID_POS_FILE_ID (6)
#define IAXXX_SYSID_MASK_FILE_ID (0x0FC0)
#define IAXXX_SYSID_POS_FILE_EP_DIR (5)
#define IAXXX_SYSID_MASK_FILE_EP_DIR (0x0020)
#define IAXXX_SYSID_POS_FILE_EP_INDEX (0)
#define IAXXX_SYSID_MASK_FILE_EP_INDEX (0x001F)
#define IAXXX_SYSID_POS_SENSOR_ID (6)
#define IAXXX_SYSID_MASK_SENSOR_ID (0x0FC0)
#define IAXXX_SYSID_POS_SENSOR_EP_DIR (5)
#define IAXXX_SYSID_MASK_SENSOR_EP_DIR (0x0020)
#define IAXXX_SYSID_POS_SENSOR_EP_INDEX (0)
#define IAXXX_SYSID_MASK_SENSOR_EP_INDEX (0x001F)
#define IAXXX_SYSID_POS_DEBUG_PROC_ID (9)
#define IAXXX_SYSID_MASK_DEBUG_PROC_ID (0x0E00)
#define IAXXX_SYSID_POS_DEBUG_TYPE (6)
#define IAXXX_SYSID_MASK_DEBUG_TYPE (0x01C0)
#define IAXXX_SYSID_POS_DEBUG_EP_DIR (5)
#define IAXXX_SYSID_MASK_DEBUG_EP_DIR (0x0020)
#define IAXXX_SYSID_POS_DEBUG_EP_INDEX (0)
#define IAXXX_SYSID_MASK_DEBUG_EP_INDEX (0x001F)
#define IAXXX_SYSID_POS_STREAM_ID (0)
#define IAXXX_SYSID_MASK_STREAM_ID (0x001F)
#define IAXXX_SYSID_POS_DEVICE_ID (6)
#define IAXXX_SYSID_MASK_DEVICE_ID (0x0FC0)
#define IAXXX_SYSID_POS_DEVICE_INST (0)
#define IAXXX_SYSID_MASK_DEVICE_INST (0x003F)
#define IAXXX_SYSID_GET_RESOURCE_TYPE(id) \
(((id) & IAXXX_SYSID_MASK_RESOURCE_TYPE) >> IAXXX_SYSID_POS_RESOURCE_TYPE)
#define IAXXX_SYSID_IS_SPECIAL(id) (IAXXX_SYSID_GET_RESOURCE_TYPE(id) == IAXXX_SYSID_RESOURCE_TYPE_SPECIAL)
#define IAXXX_SYSID_IS_DRIVER(id) (IAXXX_SYSID_GET_RESOURCE_TYPE(id) == IAXXX_SYSID_RESOURCE_TYPE_DRIVER)
#define IAXXX_SYSID_IS_DEVICE(id) (IAXXX_SYSID_GET_RESOURCE_TYPE(id) == IAXXX_SYSID_RESOURCE_TYPE_DEVICE)
#define IAXXX_SYSID_IS_MODULE(id) (IAXXX_SYSID_GET_RESOURCE_TYPE(id) == IAXXX_SYSID_RESOURCE_TYPE_MODULE)
#define IAXXX_SYSID_IS_PLUGIN(id) (IAXXX_SYSID_GET_RESOURCE_TYPE(id) == IAXXX_SYSID_RESOURCE_TYPE_PLUGIN)
#define IAXXX_SYSID_IS_CHANNEL(id) (IAXXX_SYSID_GET_RESOURCE_TYPE(id) == IAXXX_SYSID_RESOURCE_TYPE_CHANNEL)
#define IAXXX_SYSID_IS_TUNNEL(id) (IAXXX_SYSID_GET_RESOURCE_TYPE(id) == IAXXX_SYSID_RESOURCE_TYPE_TUNNEL)
#define IAXXX_SYSID_IS_STREAM(id) (IAXXX_SYSID_GET_RESOURCE_TYPE(id) == IAXXX_SYSID_RESOURCE_TYPE_STREAM)
#define IAXXX_SYSID_IS_BT(id) (IAXXX_SYSID_GET_RESOURCE_TYPE(id) == IAXXX_SYSID_RESOURCE_TYPE_BT)
#define IAXXX_SYSID_IS_SENSOR(id) (IAXXX_SYSID_GET_RESOURCE_TYPE(id) == IAXXX_SYSID_RESOURCE_TYPE_SENSOR)
#define IAXXX_SYSID_IS_DEBUG(id) (IAXXX_SYSID_GET_RESOURCE_TYPE(id) == IAXXX_SYSID_RESOURCE_TYPE_DEBUG)
#define IAXXX_SYSID_IS_HOST(id) ((IAXXX_SYSID_IS_SPECIAL(id)) && (IAXXX_SYSID_GET_SPECIAL_TYPE(id) == IAXXX_SYSID_SPECIAL_TYPE_HOST))
#define IAXXX_SYSID_IS_FILE(id) (IAXXX_SYSID_GET_RESOURCE_TYPE(id) == IAXXX_SYSID_RESOURCE_TYPE_FILE)
#define IAXXX_SYSID_GEN_SPECIAL_SYSID(type,index) \
(((IAXXX_SYSID_RESOURCE_TYPE_SPECIAL << IAXXX_SYSID_POS_RESOURCE_TYPE) & IAXXX_SYSID_MASK_RESOURCE_TYPE) | \
(((type) << IAXXX_SYSID_POS_SPECIAL_TYPE) & IAXXX_SYSID_MASK_SPECIAL_TYPE) | \
(((index) << IAXXX_SYSID_POS_SPECIAL_INST_INDEX) & IAXXX_SYSID_MASK_SPECIAL_INST_INDEX))
#define IAXXX_SYSID_GET_SPECIAL_TYPE(sysId) \
(((sysId) & IAXXX_SYSID_MASK_SPECIAL_TYPE) >> IAXXX_SYSID_POS_SPECIAL_TYPE)
#define IAXXX_SYSID_GET_SPECIAL_INST_INDEX(sysId) (((sysId) & IAXXX_SYSID_MASK_SPECIAL_INST_INDEX) >> IAXXX_SYSID_POS_SPECIAL_INST_INDEX)
#define IAXXX_SYSID_GET_HOST_ID(sysId) IAXXX_SYSID_GET_SPECIAL_INST_INDEX(sysId)
#define IAXXX_SYSID_GEN_DRIVER_SYSID(type,index) \
(((IAXXX_SYSID_RESOURCE_TYPE_DRIVER << IAXXX_SYSID_POS_RESOURCE_TYPE) & IAXXX_SYSID_MASK_RESOURCE_TYPE) | \
(((type) << IAXXX_SYSID_POS_DRIVER_TYPE) & IAXXX_SYSID_MASK_DRIVER_TYPE) | \
(((index) << IAXXX_SYSID_POS_DRIVER_INST_INDEX) & IAXXX_SYSID_MASK_DRIVER_INST_INDEX))
#define IAXXX_SYSID_GET_DRIVER_TYPE(sysId) \
(((sysId) & IAXXX_SYSID_MASK_DRIVER_TYPE) >> IAXXX_SYSID_POS_DRIVER_TYPE)
#define IAXXX_SYSID_GET_DRIVER_INST_INDEX(sysId) (((sysId) & IAXXX_SYSID_MASK_DRIVER_INST_INDEX) >> IAXXX_SYSID_POS_DRIVER_INST_INDEX)
#define IAXXX_SYSID_GEN_MODULE_SYSID(procId,modType,modInst) \
(((IAXXX_SYSID_RESOURCE_TYPE_MODULE << IAXXX_SYSID_POS_RESOURCE_TYPE) & IAXXX_SYSID_MASK_RESOURCE_TYPE) | \
(((procId) << IAXXX_SYSID_POS_MODULE_PROC_ID) & IAXXX_SYSID_MASK_MODULE_PROC_ID) | \
(((modType) << IAXXX_SYSID_POS_MODULE_TYPE) & IAXXX_SYSID_MASK_MODULE_TYPE) | \
(((modInst) << IAXXX_SYSID_POS_MODULE_INST) & IAXXX_SYSID_MASK_MODULE_INST))
#define IAXXX_SYSID_GET_MODULE_PROC_ID(sysId) (((sysId) & IAXXX_SYSID_MASK_MODULE_PROC_ID) >> IAXXX_SYSID_POS_MODULE_PROC_ID)
#define IAXXX_SYSID_GET_MODULE_TYPE(sysId) \
(((sysId) & IAXXX_SYSID_MASK_MODULE_TYPE) >> IAXXX_SYSID_POS_MODULE_TYPE)
#define IAXXX_SYSID_GET_MODULE_INST(sysId) \
(((sysId) & IAXXX_SYSID_MASK_MODULE_INST) >> IAXXX_SYSID_POS_MODULE_INST)
#define IAXXX_SYSID_INDEX_VALUE_PLUGIN_INST (0x001F)
#define IAXXX_SYSID_GEN_PLUGIN_SYSID(pluginId,dir,index) \
(((IAXXX_SYSID_RESOURCE_TYPE_PLUGIN << IAXXX_SYSID_POS_RESOURCE_TYPE) & IAXXX_SYSID_MASK_RESOURCE_TYPE) | \
(((pluginId) << IAXXX_SYSID_POS_PLUGIN_ID) & IAXXX_SYSID_MASK_PLUGIN_ID) | \
(((dir) << IAXXX_SYSID_POS_PLUGIN_EP_DIR) & IAXXX_SYSID_MASK_PLUGIN_EP_DIR) | \
(((index) << IAXXX_SYSID_POS_PLUGIN_EP_INDEX) & IAXXX_SYSID_MASK_PLUGIN_EP_INDEX))
#define IAXXX_SYSID_GET_PLUGIN_ID(sysId) (((sysId) & IAXXX_SYSID_MASK_PLUGIN_ID) >> IAXXX_SYSID_POS_PLUGIN_ID)
#define IAXXX_SYSID_GET_PLUGIN_EP_DIR(sysId) \
(((sysId) & IAXXX_SYSID_MASK_PLUGIN_EP_DIR) >> IAXXX_SYSID_POS_PLUGIN_EP_DIR)
#define IAXXX_SYSID_GET_PLUGIN_EP_INDEX(sysId) (((sysId) & IAXXX_SYSID_MASK_PLUGIN_EP_INDEX) >> IAXXX_SYSID_POS_PLUGIN_EP_INDEX)
#define IAXXX_SYSID_INDEX_VALUE_CHANNEL (0x001F)
#define IAXXX_SYSID_GEN_CHANNEL_SYSID(channelId,dir,index) \
(((IAXXX_SYSID_RESOURCE_TYPE_CHANNEL << IAXXX_SYSID_POS_RESOURCE_TYPE) & IAXXX_SYSID_MASK_RESOURCE_TYPE) | \
(((channelId) << IAXXX_SYSID_POS_CHANNEL_ID) & IAXXX_SYSID_MASK_CHANNEL_ID) | \
(((dir) << IAXXX_SYSID_POS_CHANNEL_EP_DIR) & IAXXX_SYSID_MASK_CHANNEL_EP_DIR) | \
(((index) << IAXXX_SYSID_POS_CHANNEL_EP_INDEX) & IAXXX_SYSID_MASK_CHANNEL_EP_INDEX))
#define IAXXX_SYSID_GET_CHANNEL_ID(sysId) \
(((sysId) & IAXXX_SYSID_MASK_CHANNEL_ID) >> IAXXX_SYSID_POS_CHANNEL_ID)
#define IAXXX_SYSID_GET_CHANNEL_EP_DIR(sysId) \
(((sysId) & IAXXX_SYSID_MASK_CHANNEL_EP_DIR) >> IAXXX_SYSID_POS_CHANNEL_EP_DIR)
#define IAXXX_SYSID_GET_CHANNEL_EP_INDEX(sysId) \
(((sysId) & IAXXX_SYSID_MASK_CHANNEL_EP_INDEX) >> IAXXX_SYSID_POS_CHANNEL_EP_INDEX)
#define IAXXX_SYSID_INDEX_VALUE_TUNNEL (0x001F)
#define IAXXX_SYSID_GEN_TUNNEL_SYSID(tunnelId,dir,index) \
(((IAXXX_SYSID_RESOURCE_TYPE_TUNNEL << IAXXX_SYSID_POS_RESOURCE_TYPE) & IAXXX_SYSID_MASK_RESOURCE_TYPE) | \
(((tunnelId) << IAXXX_SYSID_POS_TUNNEL_ID) & IAXXX_SYSID_MASK_TUNNEL_ID) | \
(((dir) << IAXXX_SYSID_POS_TUNNEL_EP_DIR) & IAXXX_SYSID_MASK_TUNNEL_EP_DIR) | \
(((index) << IAXXX_SYSID_POS_TUNNEL_EP_INDEX) & IAXXX_SYSID_MASK_TUNNEL_EP_INDEX))
#define IAXXX_SYSID_GET_TUNNEL_ID(sysId) \
(((sysId) & IAXXX_SYSID_MASK_TUNNEL_ID) >> IAXXX_SYSID_POS_TUNNEL_ID)
#define IAXXX_SYSID_GET_TUNNEL_EP_DIR(sysId) (((sysId) & IAXXX_SYSID_MASK_TUNNEL_EP_DIR) >> IAXXX_SYSID_POS_TUNNEL_EP_DIR)
#define IAXXX_SYSID_GET_TUNNEL_EP_INDEX(sysId) (((sysId) & IAXXX_SYSID_MASK_TUNNEL_EP_INDEX) >> IAXXX_SYSID_POS_TUNNEL_EP_INDEX)
#define IAXXX_SYSID_GEN_BT_SYSID(btId,dir,index) (((IAXXX_SYSID_RESOURCE_TYPE_BT << IAXXX_SYSID_POS_RESOURCE_TYPE) & IAXXX_SYSID_MASK_RESOURCE_TYPE) | (((btId) << IAXXX_SYSID_POS_BT_ID) & IAXXX_SYSID_MASK_BT_ID) | (((dir) << IAXXX_SYSID_POS_BT_EP_DIR) & IAXXX_SYSID_MASK_BT_EP_DIR) | (((index) << IAXXX_SYSID_POS_BT_EP_INDEX) & IAXXX_SYSID_MASK_BT_EP_INDEX))
#define IAXXX_SYSID_GET_BT_ID(sysId) (((sysId) & IAXXX_SYSID_MASK_BT_ID) >> IAXXX_SYSID_POS_BT_ID)
#define IAXXX_SYSID_GET_BT_EP_DIR(sysId) \
(((sysId) & IAXXX_SYSID_MASK_BT_EP_DIR) >> IAXXX_SYSID_POS_BT_EP_DIR)
#define IAXXX_SYSID_GET_BT_EP_INDEX(sysId) \
(((sysId) & IAXXX_SYSID_MASK_BT_EP_INDEX) >> IAXXX_SYSID_POS_BT_EP_INDEX)
#define IAXXX_SYSID_GEN_FILE_SYSID(fileId,dir,index) \
(((IAXXX_SYSID_RESOURCE_TYPE_FILE << IAXXX_SYSID_POS_RESOURCE_TYPE) & IAXXX_SYSID_MASK_RESOURCE_TYPE) | \
(((fileId) << IAXXX_SYSID_POS_FILE_ID) & IAXXX_SYSID_MASK_FILE_ID) | \
(((dir) << IAXXX_SYSID_POS_FILE_EP_DIR) & IAXXX_SYSID_MASK_FILE_EP_DIR) | \
(((index) << IAXXX_SYSID_POS_FILE_EP_INDEX) & IAXXX_SYSID_MASK_FILE_EP_INDEX))
#define IAXXX_SYSID_GET_FILE_ID(sysId) (((sysId) & IAXXX_SYSID_MASK_FILE_ID) >> IAXXX_SYSID_POS_FILE_ID)
#define IAXXX_SYSID_GET_FILE_EP_DIR(sysId) \
(((sysId) & IAXXX_SYSID_MASK_FILE_EP_DIR) >> IAXXX_SYSID_POS_FILE_EP_DIR)
#define IAXXX_SYSID_GET_FILE_EP_INDEX(sysId) \
(((sysId) & IAXXX_SYSID_MASK_FILE_EP_INDEX) >> IAXXX_SYSID_POS_FILE_EP_INDEX)
#define IAXXX_SYSID_GEN_SENSOR_SYSID(sensorId,dir,index) \
(((IAXXX_SYSID_RESOURCE_TYPE_SENSOR << IAXXX_SYSID_POS_RESOURCE_TYPE) & IAXXX_SYSID_MASK_RESOURCE_TYPE) | \
(((sensorId) << IAXXX_SYSID_POS_SENSOR_ID) & IAXXX_SYSID_MASK_SENSOR_ID) | \
(((dir) << IAXXX_SYSID_POS_SENSOR_EP_DIR) & IAXXX_SYSID_MASK_SENSOR_EP_DIR) | \
(((index) << IAXXX_SYSID_POS_SENSOR_EP_INDEX) & IAXXX_SYSID_MASK_SENSOR_EP_INDEX))
#define IAXXX_SYSID_GET_SENSOR_ID(sysId) (((sysId) & IAXXX_SYSID_MASK_SENSOR_ID) >> IAXXX_SYSID_POS_SENSOR_ID)
#define IAXXX_SYSID_GET_SENSOR_EP_DIR(sysId) (((sysId) & IAXXX_SYSID_MASK_SENSOR_EP_DIR) >> IAXXX_SYSID_POS_SENSOR_EP_DIR)
#define IAXXX_SYSID_GET_SENSOR_EP_INDEX(sysId) (((sysId) & IAXXX_SYSID_MASK_SENSOR_EP_INDEX) >> IAXXX_SYSID_POS_SENSOR_EP_INDEX)
#define IAXXX_SYSID_GEN_DEBUG_SYSID(procId,type,dir,index) \
(((IAXXX_SYSID_RESOURCE_TYPE_DEBUG << IAXXX_SYSID_POS_RESOURCE_TYPE) & IAXXX_SYSID_MASK_RESOURCE_TYPE) | \
(((procId) << IAXXX_SYSID_POS_DEBUG_PROC_ID) & IAXXX_SYSID_MASK_DEBUG_PROC_ID) | \
(((type) << IAXXX_SYSID_POS_DEBUG_TYPE) & IAXXX_SYSID_MASK_DEBUG_TYPE) | \
(((dir) << IAXXX_SYSID_POS_DEBUG_EP_DIR) & IAXXX_SYSID_MASK_DEBUG_EP_DIR) | \
(((index) << IAXXX_SYSID_POS_DEBUG_EP_INDEX) & IAXXX_SYSID_MASK_DEBUG_EP_INDEX))
#define IAXXX_SYSID_GET_DEBUG_CORE(sysId) (((sysId) & IAXXX_SYSID_MASK_DEBUG_PROC_ID) >> IAXXX_SYSID_POS_DEBUG_PROC_ID)
#define IAXXX_SYSID_GET_DEBUG_TYPE(sysId) (((sysId) & IAXXX_SYSID_MASK_DEBUG_TYPE) >> IAXXX_SYSID_POS_DEBUG_TYPE)
#define IAXXX_SYSID_GET_DEBUG_EP_DIR(sysId) \
(((sysId) & IAXXX_SYSID_MASK_DEBUG_EP_DIR) >> IAXXX_SYSID_POS_DEBUG_EP_DIR)
#define IAXXX_SYSID_GET_DEBUG_EP_INDEX(sysId) (((sysId) & IAXXX_SYSID_MASK_DEBUG_EP_INDEX) >> IAXXX_SYSID_POS_DEBUG_EP_INDEX)
#define IAXXX_SYSID_GEN_STREAM_SYSID(streamId) (((IAXXX_SYSID_RESOURCE_TYPE_STREAM << IAXXX_SYSID_POS_RESOURCE_TYPE) & IAXXX_SYSID_MASK_RESOURCE_TYPE) | (((streamId) << IAXXX_SYSID_POS_STREAM_ID) & IAXXX_SYSID_MASK_STREAM_ID))
#define IAXXX_SYSID_GET_STREAM_ID(sysId) \
(((sysId) & IAXXX_SYSID_MASK_STREAM_ID) >> IAXXX_SYSID_POS_STREAM_ID)
#define IAXXX_SYSID_GEN_DEVICE_SYSID(deviceId,inst) (((IAXXX_SYSID_RESOURCE_TYPE_DEVICE << IAXXX_SYSID_POS_RESOURCE_TYPE) & IAXXX_SYSID_MASK_RESOURCE_TYPE) | (((deviceId) << IAXXX_SYSID_POS_DEVICE_ID) & IAXXX_SYSID_MASK_DEVICE_ID) | (((inst) << IAXXX_SYSID_POS_DEVICE_INST) & IAXXX_SYSID_MASK_DEVICE_INST))
#define IAXXX_SYSID_GET_DEVICE_ID(sysId) (((sysId) & IAXXX_SYSID_MASK_DEVICE_ID) >> IAXXX_SYSID_POS_DEVICE_ID)
#define IAXXX_SYSID_GET_DEVICE_INST(sysId) \
(((sysId) & IAXXX_SYSID_MASK_DEVICE_INST) >> IAXXX_SYSID_POS_DEVICE_INST)
#define IAXXX_SYSID_INVALID IAXXX_SYSID_GEN_SPECIAL_SYSID(IAXXX_SYSID_SPECIAL_TYPE_INVALID, 0)
#define IAXXX_SYSID_HOST IAXXX_SYSID_GEN_SPECIAL_SYSID(IAXXX_SYSID_SPECIAL_TYPE_HOST, 0)
#define IAXXX_SYSID_HOST_0 IAXXX_SYSID_GEN_SPECIAL_SYSID(IAXXX_SYSID_SPECIAL_TYPE_HOST, 0)
#define IAXXX_SYSID_HOST_1 IAXXX_SYSID_GEN_SPECIAL_SYSID(IAXXX_SYSID_SPECIAL_TYPE_HOST, 1)
#endif
