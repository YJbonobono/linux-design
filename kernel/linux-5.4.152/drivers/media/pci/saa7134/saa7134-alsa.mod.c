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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x730c4be3, "saa7134_boards" },
	{ 0x1211df5d, "saa7134_devlist" },
	{ 0xd7deeca2, "saa7134_dmasound_exit" },
	{ 0xb6043a42, "saa7134_dmasound_init" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0xcd260832, "snd_pcm_stop_xrun" },
	{ 0x13752e79, "saa7134_set_dmabits" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x87d35237, "saa7134_pgtable_build" },
	{ 0xb94c2e92, "saa7134_pgtable_alloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xfb578fc5, "memset" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xa9b584c7, "saa7134_pgtable_free" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0xa6de447a, "snd_ctl_add" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdd64e639, "strscpy" },
	{ 0x700ce568, "snd_card_new" },
	{ 0x999e8297, "vfree" },
	{ 0xc5850110, "printk" },
	{ 0xb3c189c2, "snd_pcm_hw_constraint_step" },
	{ 0xd2fda112, "snd_pcm_hw_constraint_integer" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xa7a2a03f, "saa7134_tvaudio_setmute" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x220493ec, "vmalloc_to_page" },
	{ 0xfe72f5f2, "saa_dsp_writel" },
	{ 0xd00fa911, "snd_ctl_notify" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-pcm,saa7134,snd");


MODULE_INFO(srcversion, "609CD127C6CB9BD85FE93A0");
