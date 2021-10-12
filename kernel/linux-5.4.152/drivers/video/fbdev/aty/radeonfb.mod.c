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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf18898ab, "sysfs_remove_bin_file" },
	{ 0x9b130b11, "pci_release_region" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xe52425b7, "framebuffer_release" },
	{ 0x750492d4, "pci_unmap_rom" },
	{ 0x77baea14, "fb_bl_default_curve" },
	{ 0xab7717bd, "fb_pan_display" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xee58e970, "fb_add_videomode" },
	{ 0x388c8f33, "backlight_device_register" },
	{ 0x4351577a, "fb_parse_edid" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd7885357, "cfb_fillrect" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6db25140, "fb_set_suspend" },
	{ 0xc631580a, "console_unlock" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xb9056bb6, "remove_conflicting_framebuffers" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd56dec52, "cfb_imageblit" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x4793e274, "pci_map_rom" },
	{ 0xdad9000b, "register_framebuffer" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x96c17136, "fb_var_to_videomode" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xc6c115cb, "fb_find_mode" },
	{ 0x12a38747, "usleep_range" },
	{ 0x40d04664, "console_trylock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x50a4698c, "fb_videomode_to_modelist" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd4d8af61, "__pci_complete_power_transition" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc88bae18, "framebuffer_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x715bacf8, "fb_set_cmap" },
	{ 0xedc03953, "iounmap" },
	{ 0xff85df97, "sysfs_create_bin_file" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x38c33bd8, "cfb_copyarea" },
	{ 0x15cf5f8d, "i2c_bit_add_bus" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x92d02b1d, "backlight_device_unregister" },
	{ 0xc67ffbce, "pci_request_region" },
	{ 0x65c5cc34, "fb_ddc_read" },
	{ 0x4755bb62, "fb_validate_mode" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x7aecb9a1, "unregister_framebuffer" },
};

MODULE_INFO(depends, "i2c-algo-bit,fb_ddc");

MODULE_ALIAS("pci:v00001002d00005955sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005975sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C59sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C5Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005159sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000515Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000515Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004336sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004337sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004137sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004437sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004237sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004242sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004243sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005148sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000514Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000514Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C57sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C58sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005157sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005158sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C66sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C67sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004966sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004967sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005A62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005835sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007835sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005834sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007834sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005C61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005C63sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005960sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005961sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005962sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005964sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004144sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004145sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004146sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004147sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E51sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E52sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E56sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004151sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004152sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004153sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004154sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004156sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004148sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004149sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000414Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000414Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E49sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E4Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E4Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00003E50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00003E54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00003150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00003154sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005B60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005B62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005B63sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005B64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005B65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005460sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005464sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A49sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A4Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A4Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A4Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A4Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A4Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005548sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005549sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000554Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000554Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005551sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005552sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005554sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005D57sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005144sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005145sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005146sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005147sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7DFD059704247AACA3641A9");
