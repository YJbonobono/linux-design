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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x25c5676f, "drm_property_create_range" },
	{ 0x207721c7, "drm_helper_probe_single_connector_modes" },
	{ 0xced6311e, "drm_object_property_set_value" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x265967f8, "drm_object_attach_property" },
	{ 0xc81d0560, "drm_mode_duplicate" },
	{ 0x347e5aec, "drm_mode_create_tv_properties" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcef10357, "drm_crtc_helper_set_mode" },
	{ 0xd74914f3, "drm_i2c_encoder_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0xa4f5e904, "drm_property_destroy" },
	{ 0xb86d02c7, "drm_mode_probed_add" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("i2c:ch7006");

MODULE_INFO(srcversion, "2E136D47188C67686B2B9F3");
