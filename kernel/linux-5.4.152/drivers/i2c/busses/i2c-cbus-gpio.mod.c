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
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xd72694ff, "gpiod_get_value" },
	{ 0xe426aec8, "gpiod_direction_input" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaa7413e8, "gpiod_direction_output" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xb6090661, "i2c_add_numbered_adapter" },
	{ 0xc81c5573, "gpiod_set_consumer_name" },
	{ 0xbef23ff4, "devm_gpiod_get_index" },
	{ 0xfe4cc80a, "gpiod_count" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9702D170B320C8A25C00FDC");
