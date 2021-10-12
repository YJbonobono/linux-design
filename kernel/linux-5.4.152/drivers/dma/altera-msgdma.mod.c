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
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5fc3eb3a, "dma_async_device_register" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x22a77893, "dma_async_tx_descriptor_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x323ddd2a, "dma_async_device_unregister" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xf652a497, "devm_free_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd97e4b96, "devm_ioremap_nocache" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xff547e40, "platform_get_resource_byname" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x87b8798d, "sg_next" },
	{ 0x37a0cba, "kfree" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0AD68B9D12280399D01CC65");
