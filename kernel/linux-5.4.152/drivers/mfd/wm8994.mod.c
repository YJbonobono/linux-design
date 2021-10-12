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
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0x70a2e2f5, "regmap_register_patch" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x8605a977, "mfd_remove_devices" },
	{ 0x97c8a653, "irq_find_mapping" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x6d109050, "irq_create_mapping_affinity" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xbfe628d2, "handle_edge_irq" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0xd82577e1, "__irq_domain_add" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xbf07ab3b, "regmap_reinit_cache" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xcdee9461, "regulator_bulk_get" },
	{ 0xfd5c2022, "mfd_add_devices" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x700e6bbe, "gpiod_get_raw_value_cansleep" },
	{ 0x9ee3af0f, "regmap_add_irq_chip" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x270ac3e, "irq_set_chip_and_handler_name" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xfd52385f, "regcache_mark_dirty" },
	{ 0xcb33e804, "regcache_sync_region" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0x5d3277e2, "regulator_bulk_free" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x9f09f6f3, "regcache_sync" },
	{ 0x267bccb0, "regcache_cache_only" },
	{ 0x70e5da06, "irq_domain_xlate_twocell" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cwlf,wm1811");
MODULE_ALIAS("of:N*T*Cwlf,wm1811C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8994");
MODULE_ALIAS("of:N*T*Cwlf,wm8994C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8958");
MODULE_ALIAS("of:N*T*Cwlf,wm8958C*");
MODULE_ALIAS("i2c:wm1811");
MODULE_ALIAS("i2c:wm1811a");
MODULE_ALIAS("i2c:wm8994");
MODULE_ALIAS("i2c:wm8958");

MODULE_INFO(srcversion, "DD2653AB79DF0735C392088");
