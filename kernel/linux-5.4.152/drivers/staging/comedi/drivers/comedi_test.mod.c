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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xf0a4b117, "comedi_driver_unregister" },
	{ 0xc03869f4, "comedi_auto_unconfig" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x361fe89f, "device_destroy" },
	{ 0x208a10d3, "comedi_auto_config" },
	{ 0x9a9cd14e, "device_create" },
	{ 0x52977a3a, "__class_create" },
	{ 0xc5850110, "printk" },
	{ 0x8d87ef08, "comedi_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x24d273d1, "add_timer" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x90c7fcde, "comedi_buf_write_samples" },
	{ 0x3641d3c6, "comedi_nsamples_left" },
	{ 0x83f5fe41, "comedi_buf_read_samples" },
	{ 0x36e5d95, "comedi_inc_scan_progress" },
	{ 0xa08e1eb2, "comedi_buf_read_free" },
	{ 0xec919e12, "comedi_buf_read_alloc" },
	{ 0x6a8d9845, "comedi_nscans_left" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x1723b365, "comedi_handle_events" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi");


MODULE_INFO(srcversion, "3A560140ACD5E842FDC4574");
