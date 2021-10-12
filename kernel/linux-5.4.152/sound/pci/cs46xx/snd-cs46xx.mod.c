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
	{ 0x85bd1608, "__request_region" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfd3cab45, "snd_ac97_read" },
	{ 0xdc1fece, "snd_ac97_write" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0x14fc55be, "snd_dma_alloc_pages" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x342a2354, "copy_to_user_fromio" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0x168a4a30, "snd_info_create_card_entry" },
	{ 0xb177d101, "seq_printf" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x23aa7ffb, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb1871d0c, "snd_rawmidi_new" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3dd0f9ef, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7f7c319e, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0xd00fa911, "snd_ctl_notify" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7d5a28c9, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc5a6d10b, "release_and_free_resource" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x5b5b223, "__gameport_register_port" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x28fed39f, "snd_ctl_boolean_mono_info" },
	{ 0x28707648, "snd_pcm_lib_malloc_pages" },
	{ 0xac5ccce, "snd_ac97_suspend" },
	{ 0x700ce568, "snd_card_new" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0xf2081e5a, "gameport_unregister_port" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe48ede9b, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x582ea6dd, "snd_ctl_find_id" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd0acea1c, "snd_ac97_bus" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x603ece0c, "snd_ac97_mixer" },
	{ 0x8502ffc7, "snd_ac97_update_bits" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0xecf88348, "snd_info_free_entry" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x9601035f, "request_firmware" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x45172700, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x43dd3bad, "snd_ac97_resume" },
	{ 0xa6de447a, "snd_ctl_add" },
	{ 0xee2d68d2, "snd_ac97_write_cache" },
	{ 0x901fe54f, "snd_rawmidi_transmit" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xe35cec35, "snd_rawmidi_receive" },
	{ 0x943487ca, "gameport_set_phys" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-pcm,snd-ac97-codec,snd,snd-rawmidi,gameport");

MODULE_ALIAS("pci:v00001013d00006001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d00006003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d00006004sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "11FF4360F4C97088F132FB1");
