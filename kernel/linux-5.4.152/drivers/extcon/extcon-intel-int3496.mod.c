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
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x6a07d4da, "devm_extcon_dev_register" },
	{ 0xb98b11e7, "devm_extcon_dev_allocate" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x4958b4be, "devm_acpi_dev_add_driver_gpios" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xa6acd45d, "extcon_set_state_sync" },
	{ 0xaa7413e8, "gpiod_direction_output" },
	{ 0x1b45043a, "gpiod_get_value_cansleep" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xf652a497, "devm_free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT3496:*");

MODULE_INFO(srcversion, "64738E32956F944AF8CCA97");
