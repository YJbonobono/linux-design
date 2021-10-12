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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xe1c838c3, "pcmcia_unregister_driver" },
	{ 0xdfcd882, "pcmcia_register_driver" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe7363a56, "mmc_request_done" },
	{ 0x3d75c109, "mmc_add_host" },
	{ 0x95ee7d3a, "mmc_alloc_host" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0xd20e0112, "mmc_free_host" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0xed46adb4, "mmc_remove_host" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD9F522EDpbC3901202pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD9F522EDpbACE80909pc*pd*");

MODULE_INFO(srcversion, "014806DD60080BEA5967047");
