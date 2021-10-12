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
	{ 0x2d3385d3, "system_wq" },
	{ 0xfc8efb9e, "typec_altmode_notify" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe10b1ac, "typec_altmode_unregister_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x345eabfc, "typec_altmode_exit" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xcf856dc1, "typec_altmode_vdm" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x5c1a610, "typec_altmode_enter" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe89408aa, "sysfs_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb92337a8, "typec_altmode_get_partner" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xc039876d, "__typec_altmode_register_driver" },
};

MODULE_INFO(depends, "typec");

MODULE_ALIAS("typec:idFF01m01");

MODULE_INFO(srcversion, "D8CD29FD688BC2C3ACB666B");
