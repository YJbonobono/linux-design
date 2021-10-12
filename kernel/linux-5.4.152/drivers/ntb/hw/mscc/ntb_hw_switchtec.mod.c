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
	{ 0xc3eedd3f, "param_ops_ulong" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x4fc2d391, "class_interface_unregister" },
	{ 0x34199ef9, "class_interface_register" },
	{ 0xe81b5c39, "switchtec_class" },
	{ 0x59758741, "pci_iomap_range" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x10ca65ff, "ntb_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xfb578fc5, "memset" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xc5534d64, "ioread16" },
	{ 0xeb7840a1, "kmem_cache_alloc_node_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9bc3cd, "ntb_link_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf10de535, "ioread8" },
	{ 0xbe86e725, "ntb_db_event" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x848d372e, "iowrite8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd21c5139, "iowrite64_lo_hi" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x3c457453, "ioread64_lo_hi" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x27916597, "ntb_unregister_device" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "switchtec,ntb");


MODULE_INFO(srcversion, "D763E46C4D5F87944B2EC3D");
