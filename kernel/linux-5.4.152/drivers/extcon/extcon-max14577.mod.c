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
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x6a07d4da, "devm_extcon_dev_register" },
	{ 0xb98b11e7, "devm_extcon_dev_allocate" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xa6acd45d, "extcon_set_state_sync" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:max14577-muic");
MODULE_ALIAS("platform:max77836-muic");

MODULE_INFO(srcversion, "8F7E9889FBCC2149B0216B5");
