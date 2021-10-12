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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x1ee2b308, "isa_unregister_driver" },
	{ 0x4736d750, "isa_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x69ba222, "gpiochip_irqchip_add_key" },
	{ 0xbfe628d2, "handle_edge_irq" },
	{ 0xda3ba270, "devm_gpiochip_add_data" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x97c8a653, "irq_find_mapping" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DCED2002F8414514D1F980B");
