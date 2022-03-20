#ifndef _USB_CONFIG_H
#define _USB_CONFIG_H

/* USB DEVICE Configuration */

/* USB HOST Configuration */
#ifndef CONFIG_USBHOST_RHPORTS
#define CONFIG_USBHOST_RHPORTS 1
#endif

#ifndef CONFIG_USBHOST_EHPORTS
#define CONFIG_USBHOST_EHPORTS 4
#endif

#ifndef CONFIG_USBHOST_INTF_NUM
#define CONFIG_USBHOST_INTF_NUM 6
#endif

#ifndef CONFIG_USBHOST_EP_NUM
#define CONFIG_USBHOST_EP_NUM 2
#endif

#ifndef CONFIG_USBHOST_HPWORKQ_PRIO
#define CONFIG_USBHOST_HPWORKQ_PRIO 5
#endif
#ifndef CONFIG_USBHOST_HPWORKQ_STACKSIZE
#define CONFIG_USBHOST_HPWORKQ_STACKSIZE 2048
#endif

#ifndef CONFIG_USBHOST_LPWORKQ_PRIO
#define CONFIG_USBHOST_LPWORKQ_PRIO 1
#endif
#ifndef CONFIG_USBHOST_LPWORKQ_STACKSIZE
#define CONFIG_USBHOST_LPWORKQ_STACKSIZE 2048
#endif

#ifndef CONFIG_USBHOST_PSC_PRIO
#define CONFIG_USBHOST_PSC_PRIO 4
#endif
#ifndef CONFIG_USBHOST_PSC_STACKSIZE
#define CONFIG_USBHOST_PSC_STACKSIZE 4096
#endif

#ifndef CONFIG_USBHOST_DEV_NAMELEN
#define CONFIG_USBHOST_DEV_NAMELEN 16
#endif

#define CONFIG_USBHOST_ASYNCH
//#define CONFIG_USBHOST_GET_STRING_DESC

/* EHCI Configuration */
#define CONFIG_USB_EHCI_HCCR_BASE (0x20072000)
#define CONFIG_USB_EHCI_HCOR_BASE (0x20072000 + 0x10)
#define CONFIG_USB_EHCI_QH_NUM    (10)
#define CONFIG_USB_EHCI_QTD_NUM   (10)
// #define CONFIG_USB_EHCI_INFO_ENABLE
// #define CONFIG_USB_ECHI_HCOR_RESERVED
// #define CONFIG_USB_EHCI_CONFIGFLAG

#endif