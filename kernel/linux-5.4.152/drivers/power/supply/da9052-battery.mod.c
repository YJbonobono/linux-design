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
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd27dba6b, "power_supply_register" },
	{ 0x114ea56b, "da9052_request_irq" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8786d90, "da9052_adc_read_temp" },
	{ 0x62f217fc, "da9052_adc_manual_read" },
	{ 0xf36f30f5, "power_supply_unregister" },
	{ 0x3de7b968, "da9052_free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DE0754C7AF476383EBB1740");
