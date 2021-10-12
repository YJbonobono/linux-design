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
	{ 0x12a38747, "usleep_range" },
	{ 0xb0d07001, "rtsx_usb_switch_clock" },
	{ 0x1b903dfe, "rtsx_usb_transfer_data" },
	{ 0x23051c2d, "rtsx_usb_card_exclusive_check" },
	{ 0xb733a31d, "rtsx_usb_ep0_write_register" },
	{ 0x5f3cf361, "rtsx_usb_ep0_read_register" },
	{ 0xa0855b24, "rtsx_usb_get_rsp" },
	{ 0xefee9631, "rtsx_usb_send_cmd" },
	{ 0x68607235, "rtsx_usb_add_cmd" },
	{ 0x52f694f5, "memstick_add_host" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa03fd67b, "memstick_alloc_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x506526cc, "rtsx_usb_write_register" },
	{ 0xf18677ae, "rtsx_usb_read_register" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xaa8939ac, "memstick_free_host" },
	{ 0x5665bd53, "memstick_remove_host" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xaf08c2d3, "memstick_next_req" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2d2a5de5, "memstick_suspend_host" },
	{ 0x9ca37bd1, "memstick_resume_host" },
	{ 0x89558cf4, "memstick_detect_change" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rtsx_usb,memstick");

MODULE_ALIAS("platform:rtsx_usb_ms");

MODULE_INFO(srcversion, "EDCB765630E723C67EC3ED4");
