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
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2f5c814b, "matroxfb_DAC_out" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdfa0350f, "matroxfb_DAC_in" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xb0e602eb, "memmove" },
};

MODULE_INFO(depends, "matroxfb_misc");


MODULE_INFO(srcversion, "8846C26D60939F95FAF03CE");
