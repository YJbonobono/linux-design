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
	{ 0xa8a6ac49, "mtd_device_unregister" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x997e5495, "pci_dev_get" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x41509bb8, "mtd_device_parse_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0xc5850110, "printk" },
	{ 0xfb578fc5, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "8257AEB7FEF35C80E7EF1E3");
