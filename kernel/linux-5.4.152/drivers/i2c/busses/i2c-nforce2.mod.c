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
	{ 0x85bd1608, "__request_region" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3ada9e06, "acpi_check_region" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x656e4a6e, "snprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010DEd00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000084sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000264sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000368sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000446sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000542sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000007D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000752sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AA2sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4A7BA9C76DBB73FDC894C98");
