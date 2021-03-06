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
	{ 0xf43ccbff, "pcibios_resource_to_bus" },
	{ 0xf8e62a5a, "pcmcia_register_socket" },
	{ 0x1aaccdf7, "pccard_nonstatic_ops" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xc62fc0ed, "pcmcia_parse_events" },
	{ 0xc5850110, "printk" },
	{ 0xdcc305dd, "pcmcia_unregister_socket" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia_core,pcmcia_rsrc");

MODULE_ALIAS("pci:v00008086d00001221sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "94F082A850F840D92C007BE");
