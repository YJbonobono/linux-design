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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x430143ad, "param_ops_byte" },
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x94ef4d05, "cpci_hp_stop" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8254725, "cpci_hp_unregister_controller" },
	{ 0xf07014a0, "cpci_hp_unregister_bus" },
	{ 0x6a8441be, "cpci_hp_start" },
	{ 0xccf7f0e4, "cpci_hp_register_bus" },
	{ 0xb80112f0, "cpci_hp_register_controller" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xb83f8558, "pci_get_domain_bus_and_slot" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5A9D3739A5FF2F382DD199A");
