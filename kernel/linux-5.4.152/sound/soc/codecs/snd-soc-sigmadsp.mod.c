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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf20a3aa8, "devres_alloc_node" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x7f7c319e, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd00fa911, "snd_ctl_notify" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xce807a25, "up_write" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7835fd59, "devres_add" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9601035f, "request_firmware" },
	{ 0xa6de447a, "snd_ctl_add" },
	{ 0x9fe09916, "release_firmware" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "AC6635C45D305D554123928");
