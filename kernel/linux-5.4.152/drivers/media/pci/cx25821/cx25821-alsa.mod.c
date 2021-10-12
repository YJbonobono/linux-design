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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0xaee8e631, "driver_for_each_device" },
	{ 0x41b82dec, "driver_find" },
	{ 0xc1f99d96, "pci_bus_type" },
	{ 0x4d7cd581, "cx25821_risc_databuffer_audio" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xfb578fc5, "memset" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdd64e639, "strscpy" },
	{ 0x700ce568, "snd_card_new" },
	{ 0xfaa9a0d6, "snd_pcm_hw_constraint_pow2" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x32e9906b, "cx25821_sram_channel_setup_audio" },
	{ 0x469f4573, "cx25821_set_gpiopin_direction" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x220493ec, "vmalloc_to_page" },
	{ 0x5e459b1, "cx25821_sram_channel_dump_audio" },
	{ 0xe9050411, "cx25821_sram_channels" },
	{ 0xc5850110, "printk" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0x44b517f5, "cx25821_print_irqbits" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-pcm,cx25821,snd");

MODULE_ALIAS("pci:v000014F1d00000920sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "549CED33EE85A1CCB4DF3EB");
