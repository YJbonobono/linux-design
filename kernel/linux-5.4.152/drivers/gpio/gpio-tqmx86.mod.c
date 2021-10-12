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
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xda3ba270, "devm_gpiochip_add_data" },
	{ 0xb8bd1db6, "handle_simple_irq" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x1693b589, "devm_ioport_map" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x7598336a, "platform_get_irq_optional" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x97c8a653, "irq_find_mapping" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3E8C376D8396CBDD05F26D3");
