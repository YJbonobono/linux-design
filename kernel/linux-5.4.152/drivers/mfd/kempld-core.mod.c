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
	{ 0x8605a977, "mfd_remove_devices" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x66d230ae, "param_ops_string" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf10de535, "ioread8" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0xfd5c2022, "mfd_add_devices" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x45f8dd9e, "platform_device_add_resources" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x78fb0a28, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x96848186, "scnprintf" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe6852960, "platform_device_put" },
	{ 0x1693b589, "devm_ioport_map" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bBD*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bBL6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bHL6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bKL6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bSL6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cAL*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cBL6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cBW6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bIP2*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bIP6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cHL6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*ETXexpress-SCT2*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*ETXe-SCT2*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bSC2*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*ETXexpress-SCT6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*ETXe-SCT6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bSC6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cKL6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*ETXexpress-PC*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bPC2*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*PXT*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cSL6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cBT*:");
MODULE_ALIAS("dmi*:bvr*FRI2*:rvn*Kontron*:");
MODULE_ALIAS("dmi*:pn*FishRiverIslandII*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-mAL10*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*ETX-OH*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-mBT*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*nanoETXexpress-TT*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*nETXe-TT*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-mTT*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-mCT*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*microETXexpress-DC*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cDC2*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*microETXexpress-PC*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cPC2*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cCT6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cTH6*:");

MODULE_INFO(srcversion, "3976199FDD8C5B634DD5792");
