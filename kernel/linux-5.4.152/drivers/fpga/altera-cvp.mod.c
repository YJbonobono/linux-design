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
	{ 0xc2b6c2f1, "driver_remove_file" },
	{ 0xc5850110, "printk" },
	{ 0x1e487b2f, "driver_create_file" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xaf5db98f, "fpga_mgr_register" },
	{ 0x45cf8d12, "devm_fpga_mgr_create" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xc67ffbce, "pci_request_region" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xaad752d3, "pci_find_next_ext_capability" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x9b130b11, "pci_release_region" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x8ba76927, "fpga_mgr_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fpga-mgr");

MODULE_ALIAS("pci:v00001172d*sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "ADF7E1B4B606CB312A936C6");
