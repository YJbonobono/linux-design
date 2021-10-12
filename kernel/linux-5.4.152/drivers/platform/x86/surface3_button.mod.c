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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf271f57a, "devm_kfree" },
	{ 0xe6852960, "platform_device_put" },
	{ 0x78fb0a28, "platform_device_add_data" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0x8bb8c57b, "gpiod_put" },
	{ 0x9ef2743f, "desc_to_gpio" },
	{ 0x4debdc27, "gpiod_get_index" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xfe4cc80a, "gpiod_count" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:MSHW0028:*");

MODULE_INFO(srcversion, "3D355A7E3EB48C366961A03");
