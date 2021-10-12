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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0x392b1aed, "snd_i2c_device_create" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xf67c83aa, "snd_pcm_hw_constraint_msbits" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x5d2b89e7, "snd_mpu401_uart_new" },
	{ 0xef74a227, "snd_ice1712_akm4xxx_build_controls" },
	{ 0xb177d101, "seq_printf" },
	{ 0x52840069, "snd_i2c_sendbytes" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x4fba9d41, "snd_card_disconnect" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xc0fec227, "snd_mpu401_uart_interrupt" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x9e3b036e, "snd_cs8427_reg_write" },
	{ 0x3dd0f9ef, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7f7c319e, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0xa3180561, "snd_ctl_boolean_stereo_info" },
	{ 0xd00fa911, "snd_ctl_notify" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5044d49, "snd_akm4xxx_reset" },
	{ 0xad7b6cfa, "snd_cs8427_iec958_build" },
	{ 0x7d5a28c9, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x28fed39f, "snd_ctl_boolean_mono_info" },
	{ 0x28707648, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xac5ccce, "snd_ac97_suspend" },
	{ 0x700ce568, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xeac04ee8, "snd_cs8427_create" },
	{ 0x2d4ce4eb, "snd_ice1712_akm4xxx_free" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x1f6c02ae, "snd_i2c_bus_create" },
	{ 0x54bdcdaa, "snd_cs8427_init" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x74964a03, "snd_i2c_readbytes" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc4844275, "snd_cs8427_iec958_pcm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xdc77dbde, "snd_pcm_set_sync" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd0acea1c, "snd_ac97_bus" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x603ece0c, "snd_ac97_mixer" },
	{ 0x5b963be9, "snd_card_rw_proc_new" },
	{ 0x914b8adc, "snd_ac97_set_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xb918d62f, "snd_cs8427_iec958_active" },
	{ 0x5e3ee5cf, "snd_akm4xxx_write" },
	{ 0x45172700, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x43dd3bad, "snd_ac97_resume" },
	{ 0xa6de447a, "snd_ctl_add" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xaf379d98, "snd_ice1712_akm4xxx_init" },
	{ 0x79864e36, "snd_akm4xxx_init" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-pcm,snd-i2c,snd-mpu401-uart,snd-ice17xx-ak4xxx,snd,snd-cs8427,snd-ak4xxx-adda,snd-ac97-codec");

MODULE_ALIAS("pci:v00001412d00001712sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "21E56CBFB2F32EE3E63ED19");
