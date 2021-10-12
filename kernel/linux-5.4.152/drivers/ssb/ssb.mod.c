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
	{ 0x2d42350d, "sdio_writeb" },
	{ 0x9cda2403, "sdio_readb" },
	{ 0x55353855, "bus_register" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xa4b94fea, "iowrite8_rep" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34e0549f, "driver_register" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0xc393be13, "sdio_writesb" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4044488a, "gpiochip_remove" },
	{ 0xc286be29, "_dev_emerg" },
	{ 0xc1dda9e4, "gpiochip_add_data_with_key" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x79de05e8, "sdio_writel" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0xf10de535, "ioread8" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0xe5a01321, "device_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6ace0f86, "sdio_readl" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0xe417a2e3, "sdio_readsb" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf441ac43, "ioread8_rep" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3750a460, "get_device" },
	{ 0x875ef424, "sdio_writew" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x2196534, "pci_prepare_to_sleep" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0x6f7c5b5b, "pci_back_from_sleep" },
	{ 0x51ce92, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf5064f4d, "sdio_readw" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xbbdba794, "sdio_claim_host" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4ba2093e, "device_set_wakeup_enable" },
	{ 0xaa57bcf0, "sdio_release_host" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d00004301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004306sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004307sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014A4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004322sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004324sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004325sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004328sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004329sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004351sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F9E13DC5EF408C009304430");
