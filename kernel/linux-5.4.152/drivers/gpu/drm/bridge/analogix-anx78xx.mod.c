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
	{ 0x953c7065, "drm_atomic_helper_connector_destroy_state" },
	{ 0x1ce1f27a, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xdc95d890, "drm_connector_cleanup" },
	{ 0x207721c7, "drm_helper_probe_single_connector_modes" },
	{ 0x9d279d71, "drm_atomic_helper_connector_reset" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xf96fbbdd, "regmap_multi_reg_write" },
	{ 0x8c958dda, "drm_bridge_add" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xc5850110, "printk" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xba14b2d3, "i2c_new_dummy" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x809712ff, "hdmi_avi_infoframe_pack" },
	{ 0xe579495a, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7775d5ed, "regmap_bulk_write" },
	{ 0x96b7db1b, "drm_dp_link_configure" },
	{ 0x26815dbc, "drm_dp_link_rate_to_bw_code" },
	{ 0xcc4c85f, "drm_dp_dpcd_write" },
	{ 0x455b25fc, "drm_dp_link_power_up" },
	{ 0xfeb973a9, "drm_dp_link_probe" },
	{ 0xe8968291, "drm_helper_hpd_irq_event" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x349c4501, "drm_connector_update_edid_property" },
	{ 0xed335d4f, "drm_get_edid" },
	{ 0x64b470fa, "drm_dp_dpcd_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x14fecead, "drm_add_edid_modes" },
	{ 0xcd8b879a, "drm_err" },
	{ 0xa03ed16, "drm_connector_attach_encoder" },
	{ 0x47b00ac0, "drm_connector_register" },
	{ 0xa60fc19c, "drm_connector_init" },
	{ 0x100bc016, "drm_dp_aux_register" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xd72694ff, "gpiod_get_value" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cc071a6, "i2c_unregister_device" },
	{ 0xc6adc3de, "drm_bridge_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");

MODULE_ALIAS("i2c:anx7814");

MODULE_INFO(srcversion, "C39C7C0125D2BF53A883673");
