#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x623e8a07, "rtsx_usb_write_ppbuf" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x1b903dfe, "rtsx_usb_transfer_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5f3cf361, "rtsx_usb_ep0_read_register" },
	{ 0xb0d07001, "rtsx_usb_switch_clock" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x3d75c109, "mmc_add_host" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x95ee7d3a, "mmc_alloc_host" },
	{ 0x23051c2d, "rtsx_usb_card_exclusive_check" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x506526cc, "rtsx_usb_write_register" },
	{ 0xf18677ae, "rtsx_usb_read_register" },
	{ 0xd5ba6ec9, "rtsx_usb_read_ppbuf" },
	{ 0xa0855b24, "rtsx_usb_get_rsp" },
	{ 0xefee9631, "rtsx_usb_send_cmd" },
	{ 0x68607235, "rtsx_usb_add_cmd" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0xb733a31d, "rtsx_usb_ep0_write_register" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xd20e0112, "mmc_free_host" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xed46adb4, "mmc_remove_host" },
	{ 0xe7363a56, "mmc_request_done" },
	{ 0xb9a3671e, "mmc_detect_change" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf49935ac, "rtsx_usb_get_card_status" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rtsx_usb");

MODULE_ALIAS("platform:rtsx_usb_sdmmc");

MODULE_INFO(srcversion, "9FB7A9BF9EB028301A802C1");
