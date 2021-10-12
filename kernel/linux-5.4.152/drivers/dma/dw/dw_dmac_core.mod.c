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
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x86a998c8, "_dev_crit" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0x22a77893, "dma_async_tx_descriptor_init" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x5fc3eb3a, "dma_async_device_register" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x323ddd2a, "dma_async_device_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x78925aca, "dmam_pool_create" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E59543ECA2A424472B5894D");
