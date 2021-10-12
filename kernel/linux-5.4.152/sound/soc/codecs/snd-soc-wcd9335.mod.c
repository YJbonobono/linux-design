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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0xcb1354de, "snd_soc_component_update_bits" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0x447583c9, "slim_driver_unregister" },
	{ 0x9d10da1c, "gpiod_direction_output_raw" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x9268b9ae, "__slim_driver_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0xf9b525f7, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,slimbus");


MODULE_INFO(srcversion, "0073DCEA75AE56E782B9E33");
