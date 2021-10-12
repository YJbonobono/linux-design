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
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5534d64, "ioread16" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x12a38747, "usleep_range" },
	{ 0xad65ce76, "mmc_regulator_set_ocr" },
	{ 0x87b8798d, "sg_next" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd78696a, "pinctrl_select_state" },
	{ 0x83380314, "mmc_regulator_set_vqmmc" },
	{ 0x3d75c109, "mmc_add_host" },
	{ 0x287dc7ba, "dma_request_slave_channel" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x371e8a2a, "pinctrl_lookup_state" },
	{ 0x5d7d2894, "devm_pinctrl_get" },
	{ 0x5bbfc3fa, "mmc_of_parse" },
	{ 0x7f22b221, "mmc_regulator_get_supply" },
	{ 0x95ee7d3a, "mmc_alloc_host" },
	{ 0xfb44fe01, "platform_get_irq_byname" },
	{ 0xb9a3671e, "mmc_detect_change" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x130b568, "wake_up_process" },
	{ 0xe484e35f, "ioread32" },
	{ 0xe7363a56, "mmc_request_done" },
	{ 0x56470118, "__warn_printk" },
	{ 0x69acdf38, "memcpy" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd20e0112, "mmc_free_host" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xed46adb4, "mmc_remove_host" },
	{ 0xc5bbcaca, "dma_release_channel" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crenesas,usdhi6rol0");
MODULE_ALIAS("of:N*T*Crenesas,usdhi6rol0C*");

MODULE_INFO(srcversion, "85FE2BC52E8B304AABAA86E");
