#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf6628fc9, "module_layout" },
	{ 0x194a7742, "skb_queue_head" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x53822150, "kmalloc_caches" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5aeb145f, "complete_and_exit" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0x349cba85, "strchr" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x25ec1b28, "strlen" },
	{ 0x3fa913da, "strspn" },
	{ 0xdb97fba0, "dev_set_drvdata" },
	{ 0xb5dcab5b, "remove_wait_queue" },
	{ 0x546fa66c, "netif_carrier_on" },
	{ 0xd74ee220, "dev_get_by_name" },
	{ 0xf22449ae, "down_interruptible" },
	{ 0x327207e3, "netif_carrier_off" },
	{ 0x6efb6547, "usb_kill_urb" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x91715312, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5c6048e6, "netif_rx" },
	{ 0x6395be94, "__init_waitqueue_head" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x6d0aba34, "wait_for_completion" },
	{ 0x72aa82c6, "param_ops_charp" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xa964ded7, "skb_queue_purge" },
	{ 0xde0bdcff, "memset" },
	{ 0x91ff2d9f, "dev_alloc_skb" },
	{ 0x11089ac7, "_ctype" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0xf5d0b8cb, "current_task" },
	{ 0x3ac8c215, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x3032758b, "__tracepoint_module_get" },
	{ 0x2fa5a500, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0x343f725f, "register_netdev" },
	{ 0xb4390f9a, "mcount" },
	{ 0x31ef6253, "wireless_send_event" },
	{ 0xd6dbe3b3, "usb_control_msg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xac9ad832, "skb_push" },
	{ 0x698f2512, "kill_pid" },
	{ 0xbe2c0274, "add_timer" },
	{ 0xffda7cfd, "init_net" },
	{ 0xffc49657, "dev_kfree_skb_any" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x46c8ecbb, "module_put" },
	{ 0xb80c7b41, "skb_queue_tail" },
	{ 0xb2068ac2, "netif_device_attach" },
	{ 0xdc9f2ef7, "usb_submit_urb" },
	{ 0x2e0310d0, "netif_device_detach" },
	{ 0x77782dca, "__alloc_skb" },
	{ 0x2776c39f, "usb_get_dev" },
	{ 0xcc07af75, "strnlen" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xed6547af, "usb_put_dev" },
	{ 0x141a7b07, "eth_type_trans" },
	{ 0x5e85b764, "pskb_expand_head" },
	{ 0xa9484e97, "ether_setup" },
	{ 0x4a21112a, "kmem_cache_alloc_trace" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0xf605435c, "init_pid_ns" },
	{ 0x5860aad4, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x236c8c64, "memcpy" },
	{ 0x71e3cecb, "up" },
	{ 0x63afefa5, "usb_register_driver" },
	{ 0xef7c6172, "request_firmware" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0xa34e14bc, "skb_dequeue" },
	{ 0x28166ed8, "unregister_netdev" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xe7683d3, "__netif_schedule" },
	{ 0x5caf4af1, "skb_put" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0x80758689, "find_pid_ns" },
	{ 0xb2798ef9, "dev_get_drvdata" },
	{ 0x459459ad, "usb_free_urb" },
	{ 0x8e2ea7f4, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0x76e9dff4, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8dffc625, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v07B8pB21Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1690p0722d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p1723d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p1724d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p00D8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p00F4d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp705Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp905Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp905Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1631pC019d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1371p9022d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1371p9032d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v14B2p3C22d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp002Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C03d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C04d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C06d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C07d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v15A9p0004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1044p8008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1044p800Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1472p0009d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06F8pE010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06F8pE020d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13B1p0020d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13B1p0023d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p6877d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p6874d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0pA861d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0pA874d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp093Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v148Fp2573d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v148Fp2671d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v18E8p6196d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v18E8p6229d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v18E8p6238d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p9712d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p90ACd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0769p31F3d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pAB01d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pAB50d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1740p7100d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "569F33A981602CEFC57C30F");
