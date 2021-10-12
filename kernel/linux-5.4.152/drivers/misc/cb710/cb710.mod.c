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
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0x40355fb5, "pci_get_slot" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb578fc5, "memset" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x53cea585, "sg_miter_next" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x9570732b, "platform_device_register" },
	{ 0xf652a497, "devm_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x69acdf38, "memcpy" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xe6852960, "platform_device_put" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001524d00000510sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "26ECB81F2148DE00456492B");
