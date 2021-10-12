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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc1f99d96, "pci_bus_type" },
	{ 0x815588a6, "clk_enable" },
	{ 0xaa7413e8, "gpiod_direction_output" },
	{ 0xb9e1fec6, "spi_register_controller" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x75d94971, "pci_match_id" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2f81b10a, "acpi_match_device" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x287dc7ba, "dma_request_slave_channel" },
	{ 0xbef23ff4, "devm_gpiod_get_index" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xec313f9e, "spi_unregister_controller" },
	{ 0x393a2318, "__devm_spi_alloc_controller" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5f47b51b, "__dma_request_channel" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xee3b4fd8, "spi_finalize_current_transfer" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xba497f13, "loops_per_jiffy" },
	{ 0xc5bbcaca, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0xfe4cc80a, "gpiod_count" },
	{ 0x1c1f001, "spi_controller_suspend" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x8d58bdcd, "spi_controller_resume" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8bb8c57b, "gpiod_put" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT33C0:*");
MODULE_ALIAS("acpi*:INT33C1:*");
MODULE_ALIAS("acpi*:INT3430:*");
MODULE_ALIAS("acpi*:INT3431:*");
MODULE_ALIAS("acpi*:80860F0E:*");
MODULE_ALIAS("acpi*:8086228E:*");
MODULE_ALIAS("of:N*T*Cmarvell,mmp2-ssp");
MODULE_ALIAS("of:N*T*Cmarvell,mmp2-sspC*");

MODULE_INFO(srcversion, "CF4CAF01AF9D77FA2927F60");
