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
	{ 0xbbe34bea, "pcf50633_reg_write" },
	{ 0x69468a37, "pcf50633_reg_set_bit_mask" },
	{ 0xf36f30f5, "power_supply_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdb77aea7, "pcf50633_free_irq" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xddb01144, "pcf50633_reg_read" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x2f2ddfe9, "pcf50633_register_irq" },
	{ 0xd27dba6b, "power_supply_register" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x475514d, "pcf50633_reg_clear_bits" },
};

MODULE_INFO(depends, "pcf50633");


MODULE_INFO(srcversion, "070845CBE8FD6E0B735CA36");
