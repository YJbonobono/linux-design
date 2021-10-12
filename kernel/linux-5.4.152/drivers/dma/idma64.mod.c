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
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x5fc3eb3a, "dma_async_device_register" },
	{ 0x172ddb05, "vchan_init" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xeaac5f23, "vchan_tx_desc_free" },
	{ 0xf72c8ce3, "vchan_tx_submit" },
	{ 0x22a77893, "dma_async_tx_descriptor_init" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdde949c7, "dma_pool_create" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa0a6c2a3, "vchan_dma_desc_free_list" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xa91f3b9a, "vchan_find_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xf652a497, "devm_free_irq" },
	{ 0x323ddd2a, "dma_async_device_unregister" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "virt-dma");


MODULE_INFO(srcversion, "E0CD1C5BFF73C86BC5E05D2");
