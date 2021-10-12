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
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x4f7a8eee, "adf_dev_init" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xf951a732, "adf_enable_vf2pf_comms" },
	{ 0x67f8a6b3, "adf_vf_isr_resource_free" },
	{ 0xe0368a1e, "adf_devmgr_update_class_index" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xbf57da9f, "adf_dev_stop" },
	{ 0xb36d797c, "adf_devmgr_rm_dev" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x283375a3, "adf_dev_shutdown" },
	{ 0x1d12722e, "adf_cfg_dev_add" },
	{ 0x3de0fc12, "adf_vf2pf_notify_init" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0xc5850110, "printk" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0xd9270b60, "adf_cfg_dev_remove" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xef67f0e8, "adf_devmgr_add_dev" },
	{ 0x3bee70e, "pci_select_bars" },
	{ 0xeb7840a1, "kmem_cache_alloc_node_trace" },
	{ 0x35539ee9, "adf_dev_start" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x65764852, "qat_crypto_dev_config" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc3b167a, "adf_clean_vf_map" },
	{ 0x516a498e, "adf_vf2pf_notify_shutdown" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x471d3d99, "adf_devmgr_pci_to_accel_dev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0x2de72461, "adf_vf_isr_resource_alloc" },
	{ 0x4a386517, "pci_enable_device" },
};

MODULE_INFO(depends, "intel_qat");

MODULE_ALIAS("pci:v00008086d000019E3sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BD3059EE548346B73BD4BC5");
