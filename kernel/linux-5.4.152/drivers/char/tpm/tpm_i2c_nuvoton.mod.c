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
	{ 0x2b3da341, "tpm_pm_resume" },
	{ 0x7c53209d, "tpm_pm_suspend" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x146b7fc7, "tpm_chip_register" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe40d3439, "tpmm_chip_alloc" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x660a90ac, "tpm_calc_ordinal_duration" },
	{ 0xbbb14b01, "i2c_smbus_write_i2c_block_data" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x5416f29f, "i2c_smbus_read_i2c_block_data" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xaa37bd45, "tpm_chip_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tpm_i2c_nuvoton");
MODULE_ALIAS("i2c:tpm2_i2c_nuvoton");

MODULE_INFO(srcversion, "069CE1846A92E4E21AD2847");
