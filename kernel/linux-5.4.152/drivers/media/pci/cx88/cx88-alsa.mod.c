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
	{ 0x28fed39f, "snd_ctl_boolean_mono_info" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x9bb9597e, "cx88_risc_databuffer" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xfb578fc5, "memset" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa6de447a, "snd_ctl_add" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0xdd64e639, "strscpy" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x41bde8c7, "cx88_core_get" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x700ce568, "snd_card_new" },
	{ 0xb3a09e2, "cx88_sram_channel_setup" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfaa9a0d6, "snd_pcm_hw_constraint_pow2" },
	{ 0x220493ec, "vmalloc_to_page" },
	{ 0x1c3a419c, "cx88_sram_channel_dump" },
	{ 0x8d88137a, "cx88_sram_channels" },
	{ 0xc5850110, "printk" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0x5edb7ae5, "cx88_print_irqbits" },
	{ 0xe25ceaa4, "cx88_core_irq" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xf1b26b78, "cx88_core_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfc71cdba, "v4l2_ctrl_g_ctrl" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x257d42e1, "__v4l2_ctrl_s_ctrl" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x39a24b60, "v4l2_ctrl_find" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-pcm,snd,cx88xx,videodev");

MODULE_ALIAS("pci:v000014F1d00008801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00008811sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B8395DEA2DAFB2CB0D42A0C");
