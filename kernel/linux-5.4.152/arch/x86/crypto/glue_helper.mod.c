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
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xaa5b91e6, "skcipher_walk_done" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x5d4e17a4, "skcipher_walk_virt" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6bdbe08e, "skcipher_walk_atomise" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0B78F5F0B0057514CE7FE0A");
