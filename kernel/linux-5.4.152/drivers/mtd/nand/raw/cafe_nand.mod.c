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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xbe448051, "nand_cleanup" },
	{ 0x41509bb8, "mtd_device_parse_register" },
	{ 0xc1e34ea0, "nand_scan_with_ids" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd28d7dcc, "nand_get_set_features_notsupp" },
	{ 0xe9fe18b0, "init_rs_non_canonical" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x24b6e54e, "nand_wait_ready" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x69acdf38, "memcpy" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xbabf64f9, "nand_prog_page_end_op" },
	{ 0xaec6d3fd, "nand_prog_page_begin_op" },
	{ 0xf0d4efb, "nand_prog_page_op" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x51410142, "decode_rs16" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xed7b340d, "nand_read_page_op" },
	{ 0xcf8f9f05, "nand_read_oob_op" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x6c23f4ef, "free_rs" },
	{ 0xe997d403, "nand_release" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nand,mtd,reed_solomon");

MODULE_ALIAS("pci:v000011ABd00004100sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5640A95B99FF23C39C6FF86");
