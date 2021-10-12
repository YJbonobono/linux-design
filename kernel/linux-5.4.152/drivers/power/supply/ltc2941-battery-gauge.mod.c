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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xbbb14b01, "i2c_smbus_write_i2c_block_data" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf36f30f5, "power_supply_unregister" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Clltc,ltc2941");
MODULE_ALIAS("of:N*T*Clltc,ltc2941C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2942");
MODULE_ALIAS("of:N*T*Clltc,ltc2942C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2943");
MODULE_ALIAS("of:N*T*Clltc,ltc2943C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2944");
MODULE_ALIAS("of:N*T*Clltc,ltc2944C*");
MODULE_ALIAS("i2c:ltc2941");
MODULE_ALIAS("i2c:ltc2942");
MODULE_ALIAS("i2c:ltc2943");
MODULE_ALIAS("i2c:ltc2944");

MODULE_INFO(srcversion, "FAB389826555BF0CBF970F0");
