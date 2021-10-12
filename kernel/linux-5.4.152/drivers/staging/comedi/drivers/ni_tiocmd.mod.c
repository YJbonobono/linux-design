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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xef6602ed, "ni_tio_write" },
	{ 0x42035e0e, "mite_dma_arm" },
	{ 0xb2f75a93, "mite_dma_disarm" },
	{ 0x2ee38a60, "ni_tio_set_gate_src_raw" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x65365ea5, "ni_tio_set_gate_src" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6107c2bd, "ni_tio_get_soft_copy" },
	{ 0x76bc308, "ni_find_route_source" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x735032e2, "mite_prep_dma" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb3e302a3, "ni_route_to_register" },
	{ 0xeb067347, "mite_ack_linkc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9d48933e, "ni_tio_read" },
	{ 0xda11f2f2, "comedi_buf_write_alloc" },
	{ 0xe5163673, "ni_tio_set_bits" },
	{ 0xa0bf8246, "mite_done" },
	{ 0x6efe01f1, "ni_tio_arm" },
};

MODULE_INFO(depends, "ni_tio,mite,ni_routing,comedi");


MODULE_INFO(srcversion, "C0CBDA81FC9C6783709381C");
