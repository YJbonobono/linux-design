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
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0xac03436b, "power_supply_set_property" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd27dba6b, "power_supply_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x3075987b, "pm860x_reg_read" },
	{ 0xcb8954aa, "pm860x_bulk_read" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa661640b, "power_supply_put" },
	{ 0xeb65846a, "power_supply_get_property" },
	{ 0x4de9dee, "power_supply_get_by_name" },
	{ 0xc8cf93c, "pm860x_set_bits" },
	{ 0x74236285, "pm860x_reg_write" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf36f30f5, "power_supply_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A9F90738F466D99BA3E5D84");
