#include <linux/init.h>
#include <linux/module.h>
#include <linux/kthread.h>
#include <linux/delay.h>
#include <linux/time.h>

MODULE_LICENSE("GPL");

#ifndef SLEEP_MILLI_SEC
#define SLEEP_MILLI_SEC(nMilliSec)\
do { \
long timeout = (nMilliSec) * HZ / 1000; \
while(timeout > 0) \
{ \
timeout = schedule_timeout(timeout); \
} \
}while(0);
#endif

struct task_struct *hello_thread = NULL;

static int execute_thread(void* args)
{

    printk(KERN_NOTICE "start thread\n");
    
    while( !kthread_should_stop() )
    {
        SLEEP_MILLI_SEC(1000);
        printk(KERN_NOTICE "run thread\n");
    }

    return 0;
}

static int hello_init(void)
{
    printk(KERN_NOTICE "Hello\n");

    hello_thread = kthread_run( execute_thread, NULL, "execute_thread");
    
    if(IS_ERR(hello_thread))
    {
        printk(KERN_NOTICE "thread error\n");
        return -EINVAL;
    }

    return  0;
}
    
static void hello_exit(void)
{
    printk(KERN_NOTICE "Bye\n");
    if( !IS_ERR(hello_thread) )
    {
        kthread_stop(hello_thread);
    }
    
    return;
}
    
module_init(hello_init);
module_exit(hello_exit);
