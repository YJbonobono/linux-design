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
	{ 0x8b0966be, "unregister_mtd_chip_driver" },
	{ 0x4860106b, "register_mtd_chip_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3f5f70b6, "cfi_send_gen_cmd" },
	{ 0xec15edfa, "cfi_build_cmd" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9ff4c8db, "cfi_qry_mode_off" },
	{ 0x1eaf0db4, "cfi_qry_present" },
	{ 0xe024a80, "cfi_qry_mode_on" },
	{ 0xc5850110, "printk" },
	{ 0xe09c9493, "mtd_do_chip_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "chipreg,cfi_util,gen_probe");


MODULE_INFO(srcversion, "B6ED73AE68A89944133A408");
