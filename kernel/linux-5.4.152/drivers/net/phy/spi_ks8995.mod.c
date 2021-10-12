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
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xff85df97, "sysfs_create_bin_file" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0x2292b333, "spi_setup" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0xf18898ab, "sysfs_remove_bin_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrel,ks8995");
MODULE_ALIAS("of:N*T*Cmicrel,ks8995C*");
MODULE_ALIAS("of:N*T*Cmicrel,ksz8864");
MODULE_ALIAS("of:N*T*Cmicrel,ksz8864C*");
MODULE_ALIAS("of:N*T*Cmicrel,ksz8795");
MODULE_ALIAS("of:N*T*Cmicrel,ksz8795C*");
MODULE_ALIAS("spi:ks8995");
MODULE_ALIAS("spi:ksz8864");
MODULE_ALIAS("spi:ksz8795");

MODULE_INFO(srcversion, "D3B1B467214F23D6F83DA27");
