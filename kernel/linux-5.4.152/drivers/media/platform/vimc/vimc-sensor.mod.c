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
	{ 0x6f45a7e6, "v4l2_event_subdev_unsubscribe" },
	{ 0xdfabd004, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x4d698879, "v4l2_ctrl_subdev_log_status" },
	{ 0xce8159bb, "tpg_pattern_strings" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3005a48, "tpg_alloc" },
	{ 0x4d1d285c, "tpg_init" },
	{ 0x80d66234, "vimc_ent_sd_register" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0x2b61baf1, "v4l2_ctrl_new_custom" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x999e8297, "vfree" },
	{ 0x756516e7, "tpg_s_fourcc" },
	{ 0x86b4ddf7, "tpg_reset_source" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x5c0ba327, "component_add" },
	{ 0x7a5d8c0b, "tpg_update_mv_step" },
	{ 0x37a0cba, "kfree" },
	{ 0xc6110b6e, "tpg_free" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0xcfe2c150, "vimc_pix_map_by_index" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf541e79b, "vimc_pix_map_by_code" },
	{ 0x517e7ccd, "tpg_fill_plane_buffer" },
	{ 0x113b5219, "vimc_ent_sd_unregister" },
	{ 0xf97ada41, "component_del" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,v4l2-tpg,vimc");

MODULE_ALIAS("platform:vimc-sensor");

MODULE_INFO(srcversion, "640D272496CC9407F853703");
