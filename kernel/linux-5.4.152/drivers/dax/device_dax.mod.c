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
	{ 0x6b17b63c, "cdev_set_parent" },
	{ 0xd62fc4d6, "cdev_del" },
	{ 0xc424c429, "inode_dax" },
	{ 0x3d0221e2, "cdev_init" },
	{ 0xd2ef1f28, "kill_dev_dax" },
	{ 0xc938b9c4, "vmf_insert_pfn_pud" },
	{ 0x64265fe7, "vmf_insert_pfn_pmd" },
	{ 0x77358855, "iomem_resource" },
	{ 0x70a9708a, "vmf_insert_mixed" },
	{ 0x3f84bcd7, "dax_alive" },
	{ 0xd0db0f12, "run_dax" },
	{ 0x1627a31e, "devm_memremap_pages" },
	{ 0xd84d35bd, "dax_read_lock" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x5138ef4c, "__dax_driver_register" },
	{ 0x1ff1dce8, "noop_set_page_dirty" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3e069e80, "noop_invalidatepage" },
	{ 0x6006847, "current_task" },
	{ 0x5f6f1e9e, "dax_get_private" },
	{ 0x13caabab, "noop_llseek" },
	{ 0xe20295f6, "dax_inode" },
	{ 0xeedb58ee, "linear_hugepage_index" },
	{ 0x97d452, "cdev_add" },
	{ 0x8eee3399, "dax_read_unlock" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x8b910be2, "errseq_sample" },
	{ 0xa23155cf, "dax_driver_unregister" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D5FDEE534285311573FA8AF");
