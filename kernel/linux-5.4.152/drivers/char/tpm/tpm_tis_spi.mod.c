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
	{ 0x4bcf1f88, "tpm_tis_resume" },
	{ 0x7c53209d, "tpm_pm_suspend" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x79b31cee, "spi_bus_unlock" },
	{ 0x3ba631f3, "spi_sync_locked" },
	{ 0xa2c86dca, "spi_bus_lock" },
	{ 0x4afd6337, "tpm_tis_core_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2014dd25, "tpm_tis_remove" },
	{ 0xaa37bd45, "tpm_chip_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:SMO0768:*");
MODULE_ALIAS("of:N*T*Cst,st33htpm-spi");
MODULE_ALIAS("of:N*T*Cst,st33htpm-spiC*");
MODULE_ALIAS("of:N*T*Cinfineon,slb9670");
MODULE_ALIAS("of:N*T*Cinfineon,slb9670C*");
MODULE_ALIAS("of:N*T*Ctcg,tpm_tis-spi");
MODULE_ALIAS("of:N*T*Ctcg,tpm_tis-spiC*");
MODULE_ALIAS("spi:tpm_tis_spi");

MODULE_INFO(srcversion, "D2DF03C81BCB086824643BF");
