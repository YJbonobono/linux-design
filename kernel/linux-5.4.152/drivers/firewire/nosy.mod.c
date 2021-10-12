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
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x93082893, "misc_deregister" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xf9575308, "stream_open" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8eb423bd, "misc_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000104Cd00008000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E077C13B3917D48844A04FA");
