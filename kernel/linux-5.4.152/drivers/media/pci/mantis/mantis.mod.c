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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x952faaa2, "mantis_stream_control" },
	{ 0x74a29ca6, "mantis_i2c_exit" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x92401e, "mantis_gpio_set_bits" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xba44e819, "mantis_dvb_init" },
	{ 0xbe455c7a, "mantis_i2c_init" },
	{ 0x39c2a42b, "mantis_pci_exit" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x3ead1395, "mantis_uart_exit" },
	{ 0xc5850110, "printk" },
	{ 0x65309b90, "mantis_input_init" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x834a8f39, "mantis_get_mac" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x18e567e7, "mantis_dma_init" },
	{ 0xd202a73b, "mantis_dma_exit" },
	{ 0x409f9588, "mantis_pci_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x194311d6, "mantis_input_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x492b0dcc, "mantis_frontend_power" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x89c379cb, "mantis_frontend_soft_reset" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x34430515, "mantis_uart_init" },
	{ 0x70a328c5, "mantis_dvb_exit" },
};

MODULE_INFO(depends, "mantis_core");

MODULE_ALIAS("pci:v00001822d00004E35sv00001AE4sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001AE4sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001AE4sd00000003bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv0000153Bsd00001178bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv0000153Bsd00001179bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000014bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000031bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000043bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000024bc*sc*i*");

MODULE_INFO(srcversion, "0FF5C6755BFD155210A6814");
