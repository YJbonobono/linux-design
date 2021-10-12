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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x563ff186, "fb_sys_read" },
	{ 0xc8c04f7c, "xenbus_unregister_driver" },
	{ 0x25654cac, "__xenbus_register_frontend" },
	{ 0x85cb2c45, "xen_has_pv_devices" },
	{ 0x54ea6dfe, "xen_start_flags" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xc5850110, "printk" },
	{ 0xdca121b6, "register_console" },
	{ 0x552748e0, "unregister_console" },
	{ 0xc631580a, "console_unlock" },
	{ 0x69c45e3d, "console_drivers" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x2459bbcc, "console_set_on_cmdline" },
	{ 0xdad9000b, "register_framebuffer" },
	{ 0xc01232b9, "fb_deferred_io_init" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xc88bae18, "framebuffer_alloc" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x220493ec, "vmalloc_to_page" },
	{ 0xb8449468, "fb_sys_write" },
	{ 0x4313e3f3, "sys_fillrect" },
	{ 0xac588b7c, "sys_copyarea" },
	{ 0x5127158b, "sys_imageblit" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x55131c2a, "xenbus_free_evtchn" },
	{ 0x729c00d0, "xenbus_dev_fatal" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0x4b931968, "xen_features" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x34eab46d, "bind_evtchn_to_irqhandler" },
	{ 0x3a507339, "xenbus_alloc_evtchn" },
	{ 0xa803cda9, "xenbus_switch_state" },
	{ 0x35fbc2ec, "xenbus_frontend_closed" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xe52425b7, "framebuffer_release" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x7aecb9a1, "unregister_framebuffer" },
	{ 0x38b008a8, "fb_deferred_io_cleanup" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fb_sys_fops,sysfillrect,syscopyarea,sysimgblt");


MODULE_INFO(srcversion, "AF5C953549AA2A7607061B2");
