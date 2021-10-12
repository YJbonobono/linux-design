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
	{ 0xe1170c67, "drm_gem_fb_simple_display_pipe_prepare_fb" },
	{ 0x5dd4bdc6, "mipi_dbi_pipe_update" },
	{ 0xc8ff15db, "mipi_dbi_pipe_disable" },
	{ 0x440fd18, "drm_release" },
	{ 0x52e0a149, "drm_open" },
	{ 0xd025eede, "drm_gem_cma_mmap" },
	{ 0x4cc8dbe6, "drm_compat_ioctl" },
	{ 0x7e79e64e, "drm_ioctl" },
	{ 0xde5bb39c, "drm_poll" },
	{ 0xc06abf4a, "drm_read" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x8ac84381, "drm_gem_cma_dumb_create" },
	{ 0xf9e54f62, "drm_gem_prime_mmap" },
	{ 0x421a2739, "drm_gem_cma_prime_import_sg_table_vmap" },
	{ 0x537d7129, "drm_gem_prime_fd_to_handle" },
	{ 0x8a69ced4, "drm_gem_prime_handle_to_fd" },
	{ 0xe0d0f815, "drm_cma_gem_create_object_default_funcs" },
	{ 0x19825c72, "mipi_dbi_debugfs_init" },
	{ 0x2b08a749, "mipi_dbi_release" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x6d09f017, "drm_dev_printk" },
	{ 0xaa351017, "drm_fbdev_generic_setup" },
	{ 0x316d896, "drm_dev_register" },
	{ 0xa254e439, "drm_mode_config_reset" },
	{ 0x37a0cba, "kfree" },
	{ 0xd590ac90, "mipi_dbi_dev_init" },
	{ 0x68e39785, "mipi_dbi_spi_init" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0x3cd5e5e4, "devm_of_find_backlight" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xc57f4b89, "drm_mode_config_init" },
	{ 0xec4a32ae, "devm_drm_dev_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xc6be8a28, "mipi_dbi_enable_flush" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5bcf9760, "mipi_dbi_command_stackbuf" },
	{ 0x579fa8f6, "mipi_dbi_poweron_conditional_reset" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x468b3bc7, "drm_dev_enter" },
	{ 0x407e8a8a, "drm_dev_unplug" },
	{ 0xd859ece7, "drm_atomic_helper_shutdown" },
	{ 0xd8e2fda8, "drm_mode_config_helper_suspend" },
	{ 0x75970d9, "drm_mode_config_helper_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm_mipi_dbi,drm");

MODULE_ALIAS("spi:mi0283qt");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0283qt");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0283qtC*");

MODULE_INFO(srcversion, "C116DA682C3C37E55E727EB");
