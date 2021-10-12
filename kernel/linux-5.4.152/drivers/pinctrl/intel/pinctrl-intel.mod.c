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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xbb3602b6, "gpiochip_generic_config" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xda3ba270, "devm_gpiochip_add_data" },
	{ 0x1b8822d8, "pinctrl_gpio_direction_output" },
	{ 0x97c8a653, "irq_find_mapping" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x7f7bc9e0, "gpiochip_generic_free" },
	{ 0xb177d101, "seq_printf" },
	{ 0xbfe628d2, "handle_edge_irq" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x721084b9, "gpiochip_line_is_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x69ba222, "gpiochip_irqchip_add_key" },
	{ 0x75c2d19f, "device_get_match_data" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x1226ef6f, "gpiochip_is_requested" },
	{ 0xf015a0e2, "devm_pinctrl_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92e93b4f, "handle_bad_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x21cf72e0, "pinctrl_dev_get_drvdata" },
	{ 0x73f0a8ed, "gpiochip_add_pin_range" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdd86eed3, "gpiochip_set_chained_irqchip" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x7e32dfbb, "gpiochip_generic_request" },
	{ 0x1bc5eebe, "pinctrl_gpio_direction_input" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xf38a6078, "handle_level_irq" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0875E6435963BADEE8B61F7");
