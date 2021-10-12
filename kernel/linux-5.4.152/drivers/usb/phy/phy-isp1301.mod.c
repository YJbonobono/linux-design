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
	{ 0xe6dfb004, "usb_remove_phy" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x386d0f54, "i2c_bus_type" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74d36c3b, "bus_find_device" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x77bb7c11, "usb_add_phy_dev" },
	{ 0xf9b525f7, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:isp1301");
MODULE_ALIAS("of:N*T*Cnxp,isp1301");
MODULE_ALIAS("of:N*T*Cnxp,isp1301C*");

MODULE_INFO(srcversion, "8B3573DFF664E3D2749172F");
