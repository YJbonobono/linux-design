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
	{ 0xe3efd44, "sst_context_init" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x8c9c1022, "pcim_iomap" },
	{ 0xa4338956, "sst_context_cleanup" },
	{ 0x997e5495, "pci_dev_get" },
	{ 0xe6076c75, "sst_alloc_drv_context" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xbc3b40c5, "intel_sst_pm" },
	{ 0x2bd83cb4, "sst_configure_runtime_pm" },
	{ 0x709cd25f, "relocate_imr_addr_mrfld" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x656e4a6e, "snprintf" },
};

MODULE_INFO(depends, "snd-intel-sst-core");


MODULE_INFO(srcversion, "F16587AB81DA2F95A75068F");
