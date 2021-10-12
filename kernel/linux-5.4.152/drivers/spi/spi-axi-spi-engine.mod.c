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
	{ 0xb9e1fec6, "spi_register_controller" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0xe705f9d, "__spi_alloc_controller" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5f787440, "spi_finalize_current_message" },
	{ 0x37a0cba, "kfree" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xec313f9e, "spi_unregister_controller" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x3750a460, "get_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cadi,axi-spi-engine-1.00.a");
MODULE_ALIAS("of:N*T*Cadi,axi-spi-engine-1.00.aC*");

MODULE_INFO(srcversion, "DAAF045902BAF4D7598DD49");
