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
	{ 0xfcec0987, "enable_irq" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0xf8c679e2, "input_event" },
	{ 0x45c9ddea, "i2c_smbus_read_byte" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe4b8a68d, "devm_led_classdev_register_ext" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9f9e6624, "regulator_set_voltage" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xb80ad490, "i2c_smbus_write_byte" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ccypress,tm2-touchkey");
MODULE_ALIAS("of:N*T*Ccypress,tm2-touchkeyC*");
MODULE_ALIAS("of:N*T*Ccypress,midas-touchkey");
MODULE_ALIAS("of:N*T*Ccypress,midas-touchkeyC*");
MODULE_ALIAS("of:N*T*Ccypress,aries-touchkey");
MODULE_ALIAS("of:N*T*Ccypress,aries-touchkeyC*");
MODULE_ALIAS("of:N*T*Ccoreriver,tc360-touchkey");
MODULE_ALIAS("of:N*T*Ccoreriver,tc360-touchkeyC*");
MODULE_ALIAS("i2c:tm2-touchkey");

MODULE_INFO(srcversion, "9B15999D6DB51D634FA0026");
