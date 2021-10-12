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
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb5385b52, "alcor_write16" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xb9a3671e, "mmc_detect_change" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6a94a73c, "alcor_write32be" },
	{ 0x44458f85, "sg_miter_start" },
	{ 0x5821bcab, "alcor_read32be" },
	{ 0x5d3fd46f, "alcor_read32" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xed46adb4, "mmc_remove_host" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd20e0112, "mmc_free_host" },
	{ 0x3d75c109, "mmc_add_host" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x95ee7d3a, "mmc_alloc_host" },
	{ 0x9eb51295, "alcor_write32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x446ff715, "alcor_write8" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x3cac7cba, "sg_miter_stop" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0x53cea585, "sg_miter_next" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xe7363a56, "mmc_request_done" },
	{ 0x11f94558, "alcor_read8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "alcor_pci");

MODULE_ALIAS("platform:alcor_sdmmc");

MODULE_INFO(srcversion, "A9DD2E5B16AA0105871C517");
