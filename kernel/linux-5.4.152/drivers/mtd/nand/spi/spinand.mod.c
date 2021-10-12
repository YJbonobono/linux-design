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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4ebbcd28, "nanddev_mtd_max_bad_blocks" },
	{ 0x3edef11e, "mtd_ooblayout_get_databytes" },
	{ 0x26572aee, "spi_mem_supports_op" },
	{ 0x3fde920, "spi_mem_adjust_op_size" },
	{ 0x7668e30a, "nanddev_isreserved" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x37470888, "devm_spi_mem_dirmap_create" },
	{ 0xe8fb69a5, "nanddev_isbad" },
	{ 0x88f43287, "mtd_ooblayout_set_databytes" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6a90fea9, "nanddev_markbad" },
	{ 0xfb578fc5, "memset" },
	{ 0x100d53fd, "mtd_ooblayout_count_freebytes" },
	{ 0x9f67be93, "spi_mem_driver_unregister" },
	{ 0x65c179d2, "spi_mem_dirmap_write" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc91f311, "nanddev_mtd_erase" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x41509bb8, "mtd_device_parse_register" },
	{ 0x2a1b3041, "nanddev_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcc567bbf, "nanddev_cleanup" },
	{ 0x61a96f63, "spi_mem_exec_op" },
	{ 0xa8a6ac49, "mtd_device_unregister" },
	{ 0xcec6005d, "spi_mem_dirmap_read" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x9f28c982, "spi_mem_driver_register_with_owner" },
};

MODULE_INFO(depends, "nandcore,mtd");

MODULE_ALIAS("spi:spi-nand");

MODULE_INFO(srcversion, "A89ED7697A5DA190D838471");
