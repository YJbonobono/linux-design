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
	{ 0xf72c8ce3, "vchan_tx_submit" },
	{ 0xa91f3b9a, "vchan_find_desc" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x87b8798d, "sg_next" },
	{ 0x22a77893, "dma_async_tx_descriptor_init" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5fc3eb3a, "dma_async_device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xeaac5f23, "vchan_tx_desc_free" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa0a6c2a3, "vchan_dma_desc_free_list" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x323ddd2a, "dma_async_device_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x172ddb05, "vchan_init" },
};

MODULE_INFO(depends, "virt-dma");


MODULE_INFO(srcversion, "11AE181B16D892DA832E0E2");
