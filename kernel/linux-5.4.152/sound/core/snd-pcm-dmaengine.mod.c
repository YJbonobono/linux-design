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
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0xd2fda112, "snd_pcm_hw_constraint_integer" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5f47b51b, "__dma_request_channel" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xc5bbcaca, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "snd-pcm");


MODULE_INFO(srcversion, "A1D907FBE641F7F8283D4FB");
