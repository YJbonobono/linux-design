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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x38cf3a18, "dln2_register_event_cb" },
	{ 0x69ba222, "gpiochip_irqchip_add_key" },
	{ 0xb8bd1db6, "handle_simple_irq" },
	{ 0xda3ba270, "devm_gpiochip_add_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xddea90b6, "dln2_transfer" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x97c8a653, "irq_find_mapping" },
	{ 0x42757752, "dln2_unregister_event_cb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dln2");


MODULE_INFO(srcversion, "2F7B2BE57515326C8CC76FE");
