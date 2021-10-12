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
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x81ffec8b, "rtsx_pci_card_power_on" },
	{ 0x53f3ae70, "rtsx_pci_card_pull_ctl_enable" },
	{ 0x15c1364, "rtsx_pci_card_pull_ctl_disable" },
	{ 0x19c94ee0, "rtsx_pci_card_power_off" },
	{ 0x3957acc5, "rtsx_pci_card_exclusive_check" },
	{ 0x89558cf4, "memstick_detect_change" },
	{ 0x51be3763, "rtsx_pci_transfer_data" },
	{ 0x4e0a7517, "rtsx_pci_send_cmd_no_wait" },
	{ 0xc4ee0834, "rtsx_pci_switch_clock" },
	{ 0xf877e682, "rtsx_pci_start_run" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x23ae43c2, "rtsx_pci_write_register" },
	{ 0x9671b2ce, "rtsx_pci_read_register" },
	{ 0x907fe8f9, "rtsx_pci_send_cmd" },
	{ 0x3373f21, "rtsx_pci_add_cmd" },
	{ 0x52f694f5, "memstick_add_host" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa03fd67b, "memstick_alloc_host" },
	{ 0xaa8939ac, "memstick_free_host" },
	{ 0x5665bd53, "memstick_remove_host" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xaf08c2d3, "memstick_next_req" },
	{ 0x88c15f2c, "rtsx_pci_complete_unfinished_transfer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2d2a5de5, "memstick_suspend_host" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x9ca37bd1, "memstick_resume_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rtsx_pci,memstick");

MODULE_ALIAS("platform:rtsx_pci_ms");

MODULE_INFO(srcversion, "B3E914813B70C28F08D4E99");
