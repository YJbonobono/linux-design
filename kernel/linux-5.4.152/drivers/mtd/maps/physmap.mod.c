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
	{ 0x5ba8f35a, "simple_map_init" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x10a4894b, "devm_gpiod_get_array_optional" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x96b7827e, "map_destroy" },
	{ 0x2f196493, "do_map_probe" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x41509bb8, "mtd_device_parse_register" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xa6dec835, "mtd_concat_destroy" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xa8a6ac49, "mtd_device_unregister" },
	{ 0x80529df3, "mtd_concat_create" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xf9b525f7, "devm_kmalloc" },
};

MODULE_INFO(depends, "map_funcs,chipreg,mtd");


MODULE_INFO(srcversion, "C71D088BE0579289D90978A");
