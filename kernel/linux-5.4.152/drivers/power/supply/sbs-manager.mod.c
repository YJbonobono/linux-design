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
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x272c5d5a, "i2c_mux_add_adapter" },
	{ 0xda013ad6, "devm_power_supply_register" },
	{ 0xda3ba270, "devm_gpiochip_add_data" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0x4dded074, "devm_kasprintf" },
	{ 0xb0dc1bd3, "devm_kmemdup" },
	{ 0x9e6b178e, "i2c_mux_alloc" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb541d519, "i2c_smbus_write_word_data" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0x5e108ee9, "i2c_mux_del_adapters" },
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0xa43ceb8b, "device_for_each_child" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x304f5efa, "i2c_verify_client" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("i2c:sbs-manager");
MODULE_ALIAS("i2c:ltc1760");

MODULE_INFO(srcversion, "E21CDFA0520B510AC09C116");
