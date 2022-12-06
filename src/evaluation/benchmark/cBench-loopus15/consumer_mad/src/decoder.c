typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;
__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct {
    int __val[2];
} __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;
__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;
__extension__ typedef int __clockid_t;
__extension__ typedef void *__timer_t;
__extension__ typedef long int __blksize_t;
__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;
__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;
__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;
__extension__ typedef int __ssize_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
__extension__ typedef int __intptr_t;
__extension__ typedef unsigned int __socklen_t;
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef int int8_t __attribute__ ((__mode__(__QI__)));
typedef int int16_t __attribute__ ((__mode__(__HI__)));
typedef int int32_t __attribute__ ((__mode__(__SI__)));
typedef int int64_t __attribute__ ((__mode__(__DI__)));
typedef unsigned int u_int8_t __attribute__ ((__mode__(__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__(__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__(__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__(__DI__)));
typedef int register_t __attribute__ ((__mode__(__word__)));
typedef int __sig_atomic_t;
typedef struct {
    unsigned long int __val[(1024 / (8 * sizeof(unsigned long int)))];
} __sigset_t;
typedef __sigset_t sigset_t;
struct timespec {
    __time_t tv_sec;
    long int tv_nsec;
};
struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};
typedef __suseconds_t suseconds_t;
typedef long int __fd_mask;
typedef struct {
    __fd_mask __fds_bits[1024 / (8 * (int) sizeof(__fd_mask))];
}
fd_set;
typedef __fd_mask fd_mask;
extern int select(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, struct timeval *__restrict __timeout);
extern int pselect(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, const struct timespec *__restrict __timeout, const __sigset_t * __restrict __sigmask);
__extension__ extern unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__ ((__nothrow__));
__extension__ extern unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__ ((__nothrow__));
__extension__ extern unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__ ((__nothrow__));
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
typedef unsigned long int pthread_t;
typedef union {
    char __size[36];
    long int __align;
} pthread_attr_t;
typedef struct __pthread_internal_slist {
    struct __pthread_internal_slist *__next;
} __pthread_slist_t;
typedef union {
    struct __pthread_mutex_s {
	int __lock;
	unsigned int __count;
	int __owner;
	int __kind;
	unsigned int __nusers;
	__extension__ union {
	    int __spins;
	    __pthread_slist_t __list;
	};
    } __data;
    char __size[24];
    long int __align;
} pthread_mutex_t;
typedef union {
    char __size[4];
    long int __align;
} pthread_mutexattr_t;
typedef union {
    struct {
	int __lock;
	unsigned int __futex;
	__extension__ unsigned long long int __total_seq;
	__extension__ unsigned long long int __wakeup_seq;
	__extension__ unsigned long long int __woken_seq;
	void *__mutex;
	unsigned int __nwaiters;
	unsigned int __broadcast_seq;
    } __data;
    char __size[48];
    __extension__ long long int __align;
} pthread_cond_t;
typedef union {
    char __size[4];
    long int __align;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
typedef union {
    struct {
	int __lock;
	unsigned int __nr_readers;
	unsigned int __readers_wakeup;
	unsigned int __writer_wakeup;
	unsigned int __nr_readers_queued;
	unsigned int __nr_writers_queued;
	unsigned char __flags;
	unsigned char __shared;
	unsigned char __pad1;
	unsigned char __pad2;
	int __writer;
    } __data;
    char __size[32];
    long int __align;
} pthread_rwlock_t;
typedef union {
    char __size[8];
    long int __align;
} pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union {
    char __size[20];
    long int __align;
} pthread_barrier_t;
typedef union {
    char __size[4];
    int __align;
} pthread_barrierattr_t;
extern int __sigismember(__const __sigset_t *, int);
extern int __sigaddset(__sigset_t *, int);
extern int __sigdelset(__sigset_t *, int);
typedef __sig_atomic_t sig_atomic_t;
typedef union sigval {
    int sival_int;
    void *sival_ptr;
} sigval_t;
typedef struct siginfo {
    int si_signo;
    int si_errno;
    int si_code;
    union {
	int _pad[((128 / sizeof(int)) - 3)];
	struct {
	    __pid_t si_pid;
	    __uid_t si_uid;
	} _kill;
	struct {
	    int si_tid;
	    int si_overrun;
	    sigval_t si_sigval;
	} _timer;
	struct {
	    __pid_t si_pid;
	    __uid_t si_uid;
	    sigval_t si_sigval;
	} _rt;
	struct {
	    __pid_t si_pid;
	    __uid_t si_uid;
	    int si_status;
	    __clock_t si_utime;
	    __clock_t si_stime;
	} _sigchld;
	struct {
	    void *si_addr;
	} _sigfault;
	struct {
	    long int si_band;
	    int si_fd;
	} _sigpoll;
    } _sifields;
} siginfo_t;
enum { SI_ASYNCNL = -60, SI_TKILL = -6, SI_SIGIO, SI_ASYNCIO, SI_MESGQ, SI_TIMER, SI_QUEUE, SI_USER, SI_KERNEL = 0x80 };
enum { ILL_ILLOPC = 1, ILL_ILLOPN, ILL_ILLADR, ILL_ILLTRP, ILL_PRVOPC, ILL_PRVREG, ILL_COPROC, ILL_BADSTK };
enum { FPE_INTDIV = 1, FPE_INTOVF, FPE_FLTDIV, FPE_FLTOVF, FPE_FLTUND, FPE_FLTRES, FPE_FLTINV, FPE_FLTSUB };
enum { SEGV_MAPERR = 1, SEGV_ACCERR };
enum { BUS_ADRALN = 1, BUS_ADRERR, BUS_OBJERR };
enum { TRAP_BRKPT = 1, TRAP_TRACE };
enum { CLD_EXITED = 1, CLD_KILLED, CLD_DUMPED, CLD_TRAPPED, CLD_STOPPED, CLD_CONTINUED };
enum { POLL_IN = 1, POLL_OUT, POLL_MSG, POLL_ERR, POLL_PRI, POLL_HUP };
typedef struct sigevent {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;
    union {
	int _pad[((64 / sizeof(int)) - 3)];
	__pid_t _tid;
	struct {
	    void (*_function) (sigval_t);
	    void *_attribute;
	} _sigev_thread;
    } _sigev_un;
} sigevent_t;
enum { SIGEV_SIGNAL = 0, SIGEV_NONE, SIGEV_THREAD, SIGEV_THREAD_ID = 4 };
typedef void (*__sighandler_t) (int);
extern __sighandler_t __sysv_signal(int __sig, __sighandler_t __handler) __attribute__ ((__nothrow__));
extern __sighandler_t signal(int __sig, __sighandler_t __handler) __attribute__ ((__nothrow__));
extern int kill(__pid_t __pid, int __sig) __attribute__ ((__nothrow__));
extern int killpg(__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__));
extern int raise(int __sig) __attribute__ ((__nothrow__));
extern __sighandler_t ssignal(int __sig, __sighandler_t __handler) __attribute__ ((__nothrow__));
extern int gsignal(int __sig) __attribute__ ((__nothrow__));
extern void psignal(int __sig, __const char *__s);
extern void psiginfo(__const siginfo_t * __pinfo, __const char *__s);
extern int __sigpause(int __sig_or_mask, int __is_sig);
extern int sigblock(int __mask) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));
extern int sigsetmask(int __mask) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));
extern int siggetmask(void) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));
typedef __sighandler_t sig_t;
extern int sigemptyset(sigset_t * __set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sigfillset(sigset_t * __set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sigaddset(sigset_t * __set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sigdelset(sigset_t * __set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sigismember(__const sigset_t * __set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
struct sigaction {
    union {
	__sighandler_t sa_handler;
	void (*sa_sigaction) (int, siginfo_t *, void *);
    } __sigaction_handler;
    __sigset_t sa_mask;
    int sa_flags;
    void (*sa_restorer) (void);
};
extern int sigprocmask(int __how, __const sigset_t * __restrict __set, sigset_t * __restrict __oset) __attribute__ ((__nothrow__));
extern int sigsuspend(__const sigset_t * __set) __attribute__ ((__nonnull__(1)));
extern int sigaction(int __sig, __const struct sigaction *__restrict __act, struct sigaction *__restrict __oact) __attribute__ ((__nothrow__));
extern int sigpending(sigset_t * __set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sigwait(__const sigset_t * __restrict __set, int *__restrict __sig) __attribute__ ((__nonnull__(1, 2)));
extern int sigwaitinfo(__const sigset_t * __restrict __set, siginfo_t * __restrict __info) __attribute__ ((__nonnull__(1)));
extern int sigtimedwait(__const sigset_t * __restrict __set, siginfo_t * __restrict __info, __const struct timespec *__restrict __timeout) __attribute__ ((__nonnull__(1)));
extern int sigqueue(__pid_t __pid, int __sig, __const union sigval __val) __attribute__ ((__nothrow__));
extern __const char *__const _sys_siglist[65];
extern __const char *__const sys_siglist[65];
struct sigvec {
    __sighandler_t sv_handler;
    int sv_mask;
    int sv_flags;
};
extern int sigvec(int __sig, __const struct sigvec *__vec, struct sigvec *__ovec) __attribute__ ((__nothrow__));
typedef __signed__ char __s8;
typedef unsigned char __u8;
typedef __signed__ short __s16;
typedef unsigned short __u16;
typedef __signed__ int __s32;
typedef unsigned int __u32;
__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
typedef unsigned short umode_t;
typedef struct {
    unsigned long fds_bits[(1024 / (8 * sizeof(unsigned long)))];
} __kernel_fd_set;
typedef void (*__kernel_sighandler_t) (int);
typedef int __kernel_key_t;
typedef int __kernel_mqd_t;
typedef unsigned long __kernel_ino_t;
typedef unsigned short __kernel_mode_t;
typedef unsigned short __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef unsigned short __kernel_ipc_pid_t;
typedef unsigned short __kernel_uid_t;
typedef unsigned short __kernel_gid_t;
typedef unsigned int __kernel_size_t;
typedef int __kernel_ssize_t;
typedef int __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef int __kernel_daddr_t;
typedef char *__kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned short __kernel_old_dev_t;
typedef long long __kernel_loff_t;
typedef struct {
    int val[2];
} __kernel_fsid_t;
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;
typedef __u16 __sum16;
typedef __u32 __wsum;
struct _fpx_sw_bytes {
    __u32 magic1;
    __u32 extended_size;
    __u64 xstate_bv;
    __u32 xstate_size;
    __u32 padding[7];
};
struct _fpreg {
    unsigned short significand[4];
    unsigned short exponent;
};
struct _fpxreg {
    unsigned short significand[4];
    unsigned short exponent;
    unsigned short padding[3];
};
struct _xmmreg {
    unsigned long element[4];
};
struct _fpstate {
    unsigned long cw;
    unsigned long sw;
    unsigned long tag;
    unsigned long ipoff;
    unsigned long cssel;
    unsigned long dataoff;
    unsigned long datasel;
    struct _fpreg _st[8];
    unsigned short status;
    unsigned short magic;
    unsigned long _fxsr_env[6];
    unsigned long mxcsr;
    unsigned long reserved;
    struct _fpxreg _fxsr_st[8];
    struct _xmmreg _xmm[8];
    unsigned long padding1[44];
    union {
	unsigned long padding2[12];
	struct _fpx_sw_bytes sw_reserved;
    };
};
struct sigcontext {
    unsigned short gs, __gsh;
    unsigned short fs, __fsh;
    unsigned short es, __esh;
    unsigned short ds, __dsh;
    unsigned long edi;
    unsigned long esi;
    unsigned long ebp;
    unsigned long esp;
    unsigned long ebx;
    unsigned long edx;
    unsigned long ecx;
    unsigned long eax;
    unsigned long trapno;
    unsigned long err;
    unsigned long eip;
    unsigned short cs, __csh;
    unsigned long eflags;
    unsigned long esp_at_signal;
    unsigned short ss, __ssh;
    struct _fpstate *fpstate;
    unsigned long oldmask;
    unsigned long cr2;
};
struct _xsave_hdr {
    __u64 xstate_bv;
    __u64 reserved1[2];
    __u64 reserved2[5];
};
struct _ymmh_state {
    __u32 ymmh_space[64];
};
struct _xstate {
    struct _fpstate fpstate;
    struct _xsave_hdr xstate_hdr;
    struct _ymmh_state ymmh;
};
extern int sigreturn(struct sigcontext *__scp) __attribute__ ((__nothrow__));
extern int siginterrupt(int __sig, int __interrupt) __attribute__ ((__nothrow__));
struct sigstack {
    void *ss_sp;
    int ss_onstack;
};
enum { SS_ONSTACK = 1, SS_DISABLE };
typedef struct sigaltstack {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
} stack_t;
extern int sigstack(struct sigstack *__ss, struct sigstack *__oss) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));
extern int sigaltstack(__const struct sigaltstack *__restrict __ss, struct sigaltstack *__restrict __oss) __attribute__ ((__nothrow__));
extern int pthread_sigmask(int __how, __const __sigset_t * __restrict __newmask, __sigset_t * __restrict __oldmask) __attribute__ ((__nothrow__));
extern int pthread_kill(pthread_t __threadid, int __signo) __attribute__ ((__nothrow__));
extern int __libc_current_sigrtmin(void) __attribute__ ((__nothrow__));
extern int __libc_current_sigrtmax(void) __attribute__ ((__nothrow__));
enum __rlimit_resource { RLIMIT_CPU = 0, RLIMIT_FSIZE = 1, RLIMIT_DATA = 2, RLIMIT_STACK = 3, RLIMIT_CORE = 4, __RLIMIT_RSS = 5, RLIMIT_NOFILE = 7, __RLIMIT_OFILE = RLIMIT_NOFILE, RLIMIT_AS = 9, __RLIMIT_NPROC = 6, __RLIMIT_MEMLOCK = 8, __RLIMIT_LOCKS = 10, __RLIMIT_SIGPENDING = 11, __RLIMIT_MSGQUEUE = 12, __RLIMIT_NICE = 13, __RLIMIT_RTPRIO = 14, __RLIMIT_NLIMITS = 15, __RLIM_NLIMITS = __RLIMIT_NLIMITS };
typedef __rlim_t rlim_t;
struct rlimit {
    rlim_t rlim_cur;
    rlim_t rlim_max;
};
enum __rusage_who { RUSAGE_SELF = 0, RUSAGE_CHILDREN = -1 };
struct rusage {
    struct timeval ru_utime;
    struct timeval ru_stime;
    long int ru_maxrss;
    long int ru_ixrss;
    long int ru_idrss;
    long int ru_isrss;
    long int ru_minflt;
    long int ru_majflt;
    long int ru_nswap;
    long int ru_inblock;
    long int ru_oublock;
    long int ru_msgsnd;
    long int ru_msgrcv;
    long int ru_nsignals;
    long int ru_nvcsw;
    long int ru_nivcsw;
};
enum __priority_which { PRIO_PROCESS = 0, PRIO_PGRP = 1, PRIO_USER = 2 };
typedef int __rlimit_resource_t;
typedef int __rusage_who_t;
typedef int __priority_which_t;
extern int getrlimit(__rlimit_resource_t __resource, struct rlimit *__rlimits) __attribute__ ((__nothrow__));
extern int setrlimit(__rlimit_resource_t __resource, __const struct rlimit *__rlimits) __attribute__ ((__nothrow__));
extern int getrusage(__rusage_who_t __who, struct rusage *__usage) __attribute__ ((__nothrow__));
extern int getpriority(__priority_which_t __which, id_t __who) __attribute__ ((__nothrow__));
extern int setpriority(__priority_which_t __which, id_t __who, int __prio) __attribute__ ((__nothrow__));
typedef union {
    union wait *__uptr;
    int *__iptr;
} __WAIT_STATUS __attribute__ ((__transparent_union__));
union wait {
    int w_status;
    struct {
	unsigned int __w_termsig:7;
	unsigned int __w_coredump:1;
	unsigned int __w_retcode:8;
	unsigned int:16;
    } __wait_terminated;
    struct {
	unsigned int __w_stopval:8;
	unsigned int __w_stopsig:8;
	unsigned int:16;
    } __wait_stopped;
};
typedef enum { P_ALL, P_PID, P_PGID } idtype_t;
extern __pid_t wait(__WAIT_STATUS __stat_loc);
extern __pid_t waitpid(__pid_t __pid, int *__stat_loc, int __options);
extern int waitid(idtype_t __idtype, __id_t __id, siginfo_t * __infop, int __options);
struct rusage;
extern __pid_t wait3(__WAIT_STATUS __stat_loc, int __options, struct rusage *__usage) __attribute__ ((__nothrow__));
extern __pid_t wait4(__pid_t __pid, __WAIT_STATUS __stat_loc, int __options, struct rusage *__usage) __attribute__ ((__nothrow__));
typedef __useconds_t useconds_t;
typedef __intptr_t intptr_t;
typedef __socklen_t socklen_t;
extern int access(__const char *__name, int __type) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int faccessat(int __fd, __const char *__file, int __type, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern __off_t lseek(int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__));
extern int close(int __fd);
extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
extern ssize_t write(int __fd, __const void *__buf, size_t __n);
extern int pipe(int __pipedes[2]) __attribute__ ((__nothrow__));
extern unsigned int alarm(unsigned int __seconds) __attribute__ ((__nothrow__));
extern unsigned int sleep(unsigned int __seconds);
extern __useconds_t ualarm(__useconds_t __value, __useconds_t __interval) __attribute__ ((__nothrow__));
extern int usleep(__useconds_t __useconds);
extern int pause(void);
extern int chown(__const char *__file, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fchown(int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__));
extern int lchown(__const char *__file, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fchownat(int __fd, __const char *__file, __uid_t __owner, __gid_t __group, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int chdir(__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fchdir(int __fd) __attribute__ ((__nothrow__));
extern char *getcwd(char *__buf, size_t __size) __attribute__ ((__nothrow__));
extern char *getwd(char *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1))) __attribute__ ((__deprecated__));
extern int dup(int __fd) __attribute__ ((__nothrow__));
extern int dup2(int __fd, int __fd2) __attribute__ ((__nothrow__));
extern char **__environ;
extern int execve(__const char *__path, char *__const __argv[], char *__const __envp[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fexecve(int __fd, char *__const __argv[], char *__const __envp[]) __attribute__ ((__nothrow__));
extern int execv(__const char *__path, char *__const __argv[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int execle(__const char *__path, __const char *__arg, ...) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int execl(__const char *__path, __const char *__arg, ...) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int execvp(__const char *__file, char *__const __argv[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int execlp(__const char *__file, __const char *__arg, ...) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int nice(int __inc) __attribute__ ((__nothrow__));
extern void _exit(int __status) __attribute__ ((__noreturn__));
enum { _PC_LINK_MAX, _PC_MAX_CANON, _PC_MAX_INPUT, _PC_NAME_MAX, _PC_PATH_MAX, _PC_PIPE_BUF, _PC_CHOWN_RESTRICTED, _PC_NO_TRUNC, _PC_VDISABLE, _PC_SYNC_IO, _PC_ASYNC_IO, _PC_PRIO_IO, _PC_SOCK_MAXBUF, _PC_FILESIZEBITS, _PC_REC_INCR_XFER_SIZE, _PC_REC_MAX_XFER_SIZE, _PC_REC_MIN_XFER_SIZE, _PC_REC_XFER_ALIGN, _PC_ALLOC_SIZE_MIN, _PC_SYMLINK_MAX, _PC_2_SYMLINKS };
enum { _SC_ARG_MAX, _SC_CHILD_MAX, _SC_CLK_TCK, _SC_NGROUPS_MAX, _SC_OPEN_MAX, _SC_STREAM_MAX, _SC_TZNAME_MAX, _SC_JOB_CONTROL, _SC_SAVED_IDS, _SC_REALTIME_SIGNALS, _SC_PRIORITY_SCHEDULING, _SC_TIMERS, _SC_ASYNCHRONOUS_IO, _SC_PRIORITIZED_IO, _SC_SYNCHRONIZED_IO, _SC_FSYNC, _SC_MAPPED_FILES, _SC_MEMLOCK, _SC_MEMLOCK_RANGE, _SC_MEMORY_PROTECTION, _SC_MESSAGE_PASSING, _SC_SEMAPHORES, _SC_SHARED_MEMORY_OBJECTS, _SC_AIO_LISTIO_MAX, _SC_AIO_MAX, _SC_AIO_PRIO_DELTA_MAX, _SC_DELAYTIMER_MAX, _SC_MQ_OPEN_MAX, _SC_MQ_PRIO_MAX, _SC_VERSION, _SC_PAGESIZE, _SC_RTSIG_MAX, _SC_SEM_NSEMS_MAX, _SC_SEM_VALUE_MAX, _SC_SIGQUEUE_MAX, _SC_TIMER_MAX, _SC_BC_BASE_MAX, _SC_BC_DIM_MAX, _SC_BC_SCALE_MAX, _SC_BC_STRING_MAX, _SC_COLL_WEIGHTS_MAX, _SC_EQUIV_CLASS_MAX, _SC_EXPR_NEST_MAX, _SC_LINE_MAX, _SC_RE_DUP_MAX, _SC_CHARCLASS_NAME_MAX, _SC_2_VERSION, _SC_2_C_BIND, _SC_2_C_DEV, _SC_2_FORT_DEV, _SC_2_FORT_RUN, _SC_2_SW_DEV, _SC_2_LOCALEDEF, _SC_PII, _SC_PII_XTI, _SC_PII_SOCKET, _SC_PII_INTERNET, _SC_PII_OSI, _SC_POLL, _SC_SELECT, _SC_UIO_MAXIOV, _SC_IOV_MAX = _SC_UIO_MAXIOV, _SC_PII_INTERNET_STREAM, _SC_PII_INTERNET_DGRAM, _SC_PII_OSI_COTS, _SC_PII_OSI_CLTS, _SC_PII_OSI_M, _SC_T_IOV_MAX, _SC_THREADS, _SC_THREAD_SAFE_FUNCTIONS, _SC_GETGR_R_SIZE_MAX, _SC_GETPW_R_SIZE_MAX, _SC_LOGIN_NAME_MAX, _SC_TTY_NAME_MAX, _SC_THREAD_DESTRUCTOR_ITERATIONS, _SC_THREAD_KEYS_MAX, _SC_THREAD_STACK_MIN, _SC_THREAD_THREADS_MAX, _SC_THREAD_ATTR_STACKADDR, _SC_THREAD_ATTR_STACKSIZE, _SC_THREAD_PRIORITY_SCHEDULING, _SC_THREAD_PRIO_INHERIT, _SC_THREAD_PRIO_PROTECT, _SC_THREAD_PROCESS_SHARED, _SC_NPROCESSORS_CONF, _SC_NPROCESSORS_ONLN, _SC_PHYS_PAGES, _SC_AVPHYS_PAGES, _SC_ATEXIT_MAX, _SC_PASS_MAX, _SC_XOPEN_VERSION, _SC_XOPEN_XCU_VERSION, _SC_XOPEN_UNIX, _SC_XOPEN_CRYPT, _SC_XOPEN_ENH_I18N, _SC_XOPEN_SHM, _SC_2_CHAR_TERM, _SC_2_C_VERSION, _SC_2_UPE, _SC_XOPEN_XPG2, _SC_XOPEN_XPG3, _SC_XOPEN_XPG4, _SC_CHAR_BIT, _SC_CHAR_MAX, _SC_CHAR_MIN, _SC_INT_MAX, _SC_INT_MIN, _SC_LONG_BIT, _SC_WORD_BIT, _SC_MB_LEN_MAX, _SC_NZERO, _SC_SSIZE_MAX, _SC_SCHAR_MAX, _SC_SCHAR_MIN, _SC_SHRT_MAX, _SC_SHRT_MIN, _SC_UCHAR_MAX, _SC_UINT_MAX, _SC_ULONG_MAX, _SC_USHRT_MAX, _SC_NL_ARGMAX, _SC_NL_LANGMAX, _SC_NL_MSGMAX, _SC_NL_NMAX, _SC_NL_SETMAX, _SC_NL_TEXTMAX, _SC_XBS5_ILP32_OFF32, _SC_XBS5_ILP32_OFFBIG, _SC_XBS5_LP64_OFF64, _SC_XBS5_LPBIG_OFFBIG, _SC_XOPEN_LEGACY, _SC_XOPEN_REALTIME, _SC_XOPEN_REALTIME_THREADS, _SC_ADVISORY_INFO, _SC_BARRIERS, _SC_BASE, _SC_C_LANG_SUPPORT, _SC_C_LANG_SUPPORT_R, _SC_CLOCK_SELECTION, _SC_CPUTIME, _SC_THREAD_CPUTIME, _SC_DEVICE_IO, _SC_DEVICE_SPECIFIC, _SC_DEVICE_SPECIFIC_R, _SC_FD_MGMT, _SC_FIFO, _SC_PIPE, _SC_FILE_ATTRIBUTES, _SC_FILE_LOCKING, _SC_FILE_SYSTEM, _SC_MONOTONIC_CLOCK, _SC_MULTI_PROCESS, _SC_SINGLE_PROCESS, _SC_NETWORKING, _SC_READER_WRITER_LOCKS, _SC_SPIN_LOCKS, _SC_REGEXP, _SC_REGEX_VERSION, _SC_SHELL, _SC_SIGNALS, _SC_SPAWN, _SC_SPORADIC_SERVER, _SC_THREAD_SPORADIC_SERVER, _SC_SYSTEM_DATABASE, _SC_SYSTEM_DATABASE_R, _SC_TIMEOUTS, _SC_TYPED_MEMORY_OBJECTS, _SC_USER_GROUPS, _SC_USER_GROUPS_R, _SC_2_PBS, _SC_2_PBS_ACCOUNTING, _SC_2_PBS_LOCATE, _SC_2_PBS_MESSAGE, _SC_2_PBS_TRACK, _SC_SYMLOOP_MAX, _SC_STREAMS, _SC_2_PBS_CHECKPOINT, _SC_V6_ILP32_OFF32, _SC_V6_ILP32_OFFBIG, _SC_V6_LP64_OFF64, _SC_V6_LPBIG_OFFBIG, _SC_HOST_NAME_MAX, _SC_TRACE, _SC_TRACE_EVENT_FILTER, _SC_TRACE_INHERIT, _SC_TRACE_LOG, _SC_LEVEL1_ICACHE_SIZE, _SC_LEVEL1_ICACHE_ASSOC, _SC_LEVEL1_ICACHE_LINESIZE, _SC_LEVEL1_DCACHE_SIZE, _SC_LEVEL1_DCACHE_ASSOC, _SC_LEVEL1_DCACHE_LINESIZE, _SC_LEVEL2_CACHE_SIZE, _SC_LEVEL2_CACHE_ASSOC, _SC_LEVEL2_CACHE_LINESIZE, _SC_LEVEL3_CACHE_SIZE, _SC_LEVEL3_CACHE_ASSOC, _SC_LEVEL3_CACHE_LINESIZE, _SC_LEVEL4_CACHE_SIZE, _SC_LEVEL4_CACHE_ASSOC, _SC_LEVEL4_CACHE_LINESIZE, _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50, _SC_RAW_SOCKETS, _SC_V7_ILP32_OFF32, _SC_V7_ILP32_OFFBIG, _SC_V7_LP64_OFF64, _SC_V7_LPBIG_OFFBIG, _SC_SS_REPL_MAX, _SC_TRACE_EVENT_NAME_MAX, _SC_TRACE_NAME_MAX, _SC_TRACE_SYS_MAX, _SC_TRACE_USER_EVENT_MAX, _SC_XOPEN_STREAMS, _SC_THREAD_ROBUST_PRIO_INHERIT, _SC_THREAD_ROBUST_PRIO_PROTECT };
enum { _CS_PATH, _CS_V6_WIDTH_RESTRICTED_ENVS, _CS_GNU_LIBC_VERSION, _CS_GNU_LIBPTHREAD_VERSION, _CS_V5_WIDTH_RESTRICTED_ENVS, _CS_V7_WIDTH_RESTRICTED_ENVS, _CS_LFS_CFLAGS = 1000, _CS_LFS_LDFLAGS, _CS_LFS_LIBS, _CS_LFS_LINTFLAGS, _CS_LFS64_CFLAGS, _CS_LFS64_LDFLAGS, _CS_LFS64_LIBS, _CS_LFS64_LINTFLAGS, _CS_XBS5_ILP32_OFF32_CFLAGS = 1100, _CS_XBS5_ILP32_OFF32_LDFLAGS, _CS_XBS5_ILP32_OFF32_LIBS, _CS_XBS5_ILP32_OFF32_LINTFLAGS, _CS_XBS5_ILP32_OFFBIG_CFLAGS, _CS_XBS5_ILP32_OFFBIG_LDFLAGS, _CS_XBS5_ILP32_OFFBIG_LIBS, _CS_XBS5_ILP32_OFFBIG_LINTFLAGS, _CS_XBS5_LP64_OFF64_CFLAGS, _CS_XBS5_LP64_OFF64_LDFLAGS, _CS_XBS5_LP64_OFF64_LIBS, _CS_XBS5_LP64_OFF64_LINTFLAGS, _CS_XBS5_LPBIG_OFFBIG_CFLAGS, _CS_XBS5_LPBIG_OFFBIG_LDFLAGS, _CS_XBS5_LPBIG_OFFBIG_LIBS, _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS, _CS_POSIX_V6_ILP32_OFF32_CFLAGS, _CS_POSIX_V6_ILP32_OFF32_LDFLAGS, _CS_POSIX_V6_ILP32_OFF32_LIBS, _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS, _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS, _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS, _CS_POSIX_V6_ILP32_OFFBIG_LIBS, _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS, _CS_POSIX_V6_LP64_OFF64_CFLAGS, _CS_POSIX_V6_LP64_OFF64_LDFLAGS, _CS_POSIX_V6_LP64_OFF64_LIBS, _CS_POSIX_V6_LP64_OFF64_LINTFLAGS, _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS, _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS, _CS_POSIX_V6_LPBIG_OFFBIG_LIBS, _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS, _CS_POSIX_V7_ILP32_OFF32_CFLAGS, _CS_POSIX_V7_ILP32_OFF32_LDFLAGS, _CS_POSIX_V7_ILP32_OFF32_LIBS, _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS, _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS, _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS, _CS_POSIX_V7_ILP32_OFFBIG_LIBS, _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS, _CS_POSIX_V7_LP64_OFF64_CFLAGS, _CS_POSIX_V7_LP64_OFF64_LDFLAGS, _CS_POSIX_V7_LP64_OFF64_LIBS, _CS_POSIX_V7_LP64_OFF64_LINTFLAGS, _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS, _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS, _CS_POSIX_V7_LPBIG_OFFBIG_LIBS, _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS };
extern long int pathconf(__const char *__path, int __name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long int fpathconf(int __fd, int __name) __attribute__ ((__nothrow__));
extern long int sysconf(int __name) __attribute__ ((__nothrow__));
extern size_t confstr(int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__));
extern __pid_t getpid(void) __attribute__ ((__nothrow__));
extern __pid_t getppid(void) __attribute__ ((__nothrow__));
extern __pid_t getpgrp(void) __attribute__ ((__nothrow__));
extern __pid_t __getpgid(__pid_t __pid) __attribute__ ((__nothrow__));
extern int setpgid(__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__));
extern int setpgrp(void) __attribute__ ((__nothrow__));
extern __pid_t setsid(void) __attribute__ ((__nothrow__));
extern __uid_t getuid(void) __attribute__ ((__nothrow__));
extern __uid_t geteuid(void) __attribute__ ((__nothrow__));
extern __gid_t getgid(void) __attribute__ ((__nothrow__));
extern __gid_t getegid(void) __attribute__ ((__nothrow__));
extern int getgroups(int __size, __gid_t __list[]) __attribute__ ((__nothrow__));
extern int setuid(__uid_t __uid) __attribute__ ((__nothrow__));
extern int setreuid(__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__));
extern int seteuid(__uid_t __uid) __attribute__ ((__nothrow__));
extern int setgid(__gid_t __gid) __attribute__ ((__nothrow__));
extern int setregid(__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__));
extern int setegid(__gid_t __gid) __attribute__ ((__nothrow__));
extern __pid_t fork(void) __attribute__ ((__nothrow__));
extern __pid_t vfork(void) __attribute__ ((__nothrow__));
extern char *ttyname(int __fd) __attribute__ ((__nothrow__));
extern int ttyname_r(int __fd, char *__buf, size_t __buflen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int isatty(int __fd) __attribute__ ((__nothrow__));
extern int ttyslot(void) __attribute__ ((__nothrow__));
extern int link(__const char *__from, __const char *__to) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int linkat(int __fromfd, __const char *__from, int __tofd, __const char *__to, int __flags) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 4)));
extern int symlink(__const char *__from, __const char *__to) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern ssize_t readlink(__const char *__restrict __path, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int symlinkat(__const char *__from, int __tofd, __const char *__to) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 3)));
extern ssize_t readlinkat(int __fd, __const char *__restrict __path, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern int unlink(__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int unlinkat(int __fd, __const char *__name, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int rmdir(__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern __pid_t tcgetpgrp(int __fd) __attribute__ ((__nothrow__));
extern int tcsetpgrp(int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__));
extern char *getlogin(void);
extern int getlogin_r(char *__name, size_t __name_len) __attribute__ ((__nonnull__(1)));
extern int setlogin(__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern char *optarg;
extern int optind;
extern int opterr;
extern int optopt;
struct option {
    const char *name;
    int has_arg;
    int *flag;
    int val;
};
extern int getopt(int argc, char *const *argv, const char *shortopts);
extern int getopt_long(int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *longind);
extern int getopt_long_only(int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *longind);
extern int _getopt_internal(int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *longind, int long_only);
extern int gethostname(char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sethostname(__const char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sethostid(long int __id) __attribute__ ((__nothrow__));
extern int getdomainname(char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int setdomainname(__const char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int vhangup(void) __attribute__ ((__nothrow__));
extern int revoke(__const char *__file) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int profil(unsigned short int *__sample_buffer, size_t __size, size_t __offset, unsigned int __scale) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int acct(__const char *__name) __attribute__ ((__nothrow__));
extern char *getusershell(void) __attribute__ ((__nothrow__));
extern void endusershell(void) __attribute__ ((__nothrow__));
extern void setusershell(void) __attribute__ ((__nothrow__));
extern int daemon(int __nochdir, int __noclose) __attribute__ ((__nothrow__));
extern int chroot(__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern char *getpass(__const char *__prompt) __attribute__ ((__nonnull__(1)));
extern int fsync(int __fd);
extern long int gethostid(void);
extern void sync(void) __attribute__ ((__nothrow__));
extern int getpagesize(void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int getdtablesize(void) __attribute__ ((__nothrow__));
extern int truncate(__const char *__file, __off_t __length) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int ftruncate(int __fd, __off_t __length) __attribute__ ((__nothrow__));
extern int brk(void *__addr) __attribute__ ((__nothrow__));
extern void *sbrk(intptr_t __delta) __attribute__ ((__nothrow__));
extern long int syscall(long int __sysno, ...) __attribute__ ((__nothrow__));
extern int lockf(int __fd, int __cmd, __off_t __len);
extern int fdatasync(int __fildes);
struct flock {
    short int l_type;
    short int l_whence;
    __off_t l_start;
    __off_t l_len;
    __pid_t l_pid;
};
extern int fcntl(int __fd, int __cmd, ...);
extern int open(__const char *__file, int __oflag, ...) __attribute__ ((__nonnull__(1)));
extern int openat(int __fd, __const char *__file, int __oflag, ...) __attribute__ ((__nonnull__(2)));
extern int openat64(int __fd, __const char *__file, int __oflag, ...) __attribute__ ((__nonnull__(2)));
extern int creat(__const char *__file, __mode_t __mode) __attribute__ ((__nonnull__(1)));
extern int posix_fadvise(int __fd, __off_t __offset, __off_t __len, int __advise) __attribute__ ((__nothrow__));
extern int posix_fallocate(int __fd, __off_t __offset, __off_t __len);
typedef struct {
    int quot;
    int rem;
} div_t;
typedef struct {
    long int quot;
    long int rem;
} ldiv_t;
__extension__ typedef struct {
    long long int quot;
    long long int rem;
} lldiv_t;
extern size_t __ctype_get_mb_cur_max(void) __attribute__ ((__nothrow__));
extern double atof(__const char *__nptr) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern int atoi(__const char *__nptr) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern long int atol(__const char *__nptr) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
__extension__ extern long long int atoll(__const char *__nptr) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern double strtod(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern float strtof(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long double strtold(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long int strtol(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern unsigned long int strtoul(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
__extension__ extern long long int strtoq(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
__extension__ extern unsigned long long int strtouq(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
__extension__ extern long long int strtoll(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
__extension__ extern unsigned long long int strtoull(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern char *l64a(long int __n) __attribute__ ((__nothrow__));
extern long int a64l(__const char *__s) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern long int random(void) __attribute__ ((__nothrow__));
extern void srandom(unsigned int __seed) __attribute__ ((__nothrow__));
extern char *initstate(unsigned int __seed, char *__statebuf, size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern char *setstate(char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
struct random_data {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
};
extern int random_r(struct random_data *__restrict __buf, int32_t * __restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int srandom_r(unsigned int __seed, struct random_data *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int initstate_r(unsigned int __seed, char *__restrict __statebuf, size_t __statelen, struct random_data *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 4)));
extern int setstate_r(char *__restrict __statebuf, struct random_data *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int rand(void) __attribute__ ((__nothrow__));
extern void srand(unsigned int __seed) __attribute__ ((__nothrow__));
extern int rand_r(unsigned int *__seed) __attribute__ ((__nothrow__));
extern double drand48(void) __attribute__ ((__nothrow__));
extern double erand48(unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long int lrand48(void) __attribute__ ((__nothrow__));
extern long int nrand48(unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long int mrand48(void) __attribute__ ((__nothrow__));
extern long int jrand48(unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void srand48(long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48(unsigned short int __seed16v[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void lcong48(unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
struct drand48_data {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
};
extern int drand48_r(struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int erand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int lrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int nrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int mrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int jrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int srand48_r(long int __seedval, struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int seed48_r(unsigned short int __seed16v[3], struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int lcong48_r(unsigned short int __param[7], struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void *malloc(size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
extern void *calloc(size_t __nmemb, size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
extern void *realloc(void *__ptr, size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));
extern void free(void *__ptr) __attribute__ ((__nothrow__));
extern void cfree(void *__ptr) __attribute__ ((__nothrow__));
extern void *alloca(size_t __size) __attribute__ ((__nothrow__));
extern void *valloc(size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
extern int posix_memalign(void **__memptr, size_t __alignment, size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void abort(void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern int atexit(void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int on_exit(void (*__func) (int __status, void *__arg), void *__arg) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void exit(int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void _Exit(int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern char *getenv(__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern char *__secure_getenv(__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int putenv(char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int setenv(__const char *__name, __const char *__value, int __replace) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int unsetenv(__const char *__name) __attribute__ ((__nothrow__));
extern int clearenv(void) __attribute__ ((__nothrow__));
extern char *mktemp(char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int mkstemp(char *__template) __attribute__ ((__nonnull__(1)));
extern int mkstemps(char *__template, int __suffixlen) __attribute__ ((__nonnull__(1)));
extern char *mkdtemp(char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int system(__const char *__command);
extern char *realpath(__const char *__restrict __name, char *__restrict __resolved) __attribute__ ((__nothrow__));
typedef int (*__compar_fn_t) (__const void *, __const void *);
extern void *bsearch(__const void *__key, __const void *__base, size_t __nmemb, size_t __size, __compar_fn_t __compar) __attribute__ ((__nonnull__(1, 2, 5)));
extern void qsort(void *__base, size_t __nmemb, size_t __size, __compar_fn_t __compar) __attribute__ ((__nonnull__(1, 4)));
extern int abs(int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long int labs(long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
__extension__ extern long long int llabs(long long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern div_t div(int __numer, int __denom) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern ldiv_t ldiv(long int __numer, long int __denom) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
__extension__ extern lldiv_t lldiv(long long int __numer, long long int __denom) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern char *gcvt(double __value, int __ndigit, char *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3)));
extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern char *qgcvt(long double __value, int __ndigit, char *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3)));
extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4, 5)));
extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4, 5)));
extern int qecvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4, 5)));
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4, 5)));
extern int mblen(__const char *__s, size_t __n) __attribute__ ((__nothrow__));
extern int mbtowc(wchar_t * __restrict __pwc, __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));
extern int wctomb(char *__s, wchar_t __wchar) __attribute__ ((__nothrow__));
extern size_t mbstowcs(wchar_t * __restrict __pwcs, __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));
extern size_t wcstombs(char *__restrict __s, __const wchar_t * __restrict __pwcs, size_t __n) __attribute__ ((__nothrow__));
extern int rpmatch(__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int posix_openpt(int __oflag);
extern int getloadavg(double __loadavg[], int __nelem) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int *__errno_location(void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
struct mad_bitptr {
    unsigned char const *byte;
    unsigned short cache;
    unsigned short left;
};
void mad_bit_init(struct mad_bitptr *, unsigned char const *);
unsigned int mad_bit_length(struct mad_bitptr const *, struct mad_bitptr const *);
unsigned char const *mad_bit_nextbyte(struct mad_bitptr const *);
void mad_bit_skip(struct mad_bitptr *, unsigned int);
unsigned long mad_bit_read(struct mad_bitptr *, unsigned int);
void mad_bit_write(struct mad_bitptr *, unsigned int, unsigned long);
unsigned short mad_bit_crc(struct mad_bitptr, unsigned int, unsigned short);
enum mad_error { MAD_ERROR_NONE = 0x0000, MAD_ERROR_BUFLEN = 0x0001, MAD_ERROR_BUFPTR = 0x0002, MAD_ERROR_NOMEM = 0x0031, MAD_ERROR_LOSTSYNC = 0x0101, MAD_ERROR_BADLAYER = 0x0102, MAD_ERROR_BADBITRATE = 0x0103, MAD_ERROR_BADSAMPLERATE = 0x0104, MAD_ERROR_BADEMPHASIS = 0x0105, MAD_ERROR_BADCRC = 0x0201, MAD_ERROR_BADBITALLOC = 0x0211, MAD_ERROR_BADSCALEFACTOR = 0x0221, MAD_ERROR_BADFRAMELEN = 0x0231, MAD_ERROR_BADBIGVALUES = 0x0232, MAD_ERROR_BADBLOCKTYPE = 0x0233, MAD_ERROR_BADSCFSI = 0x0234, MAD_ERROR_BADDATAPTR = 0x0235, MAD_ERROR_BADPART3LEN = 0x0236, MAD_ERROR_BADHUFFTABLE = 0x0237, MAD_ERROR_BADHUFFDATA = 0x0238, MAD_ERROR_BADSTEREO = 0x0239 };
struct mad_stream {
    unsigned char const *buffer;
    unsigned char const *bufend;
    unsigned long skiplen;
    int sync;
    unsigned long freerate;
    unsigned char const *this_frame;
    unsigned char const *next_frame;
    struct mad_bitptr ptr;
    struct mad_bitptr anc_ptr;
    unsigned int anc_bitlen;
    unsigned char (*main_data)[(511 + 2048 + 8)];
    unsigned int md_len;
    int options;
    enum mad_error error;
};
enum { MAD_OPTION_IGNORECRC = 0x0001, MAD_OPTION_HALFSAMPLERATE = 0x0002 };
void mad_stream_init(struct mad_stream *);
void mad_stream_finish(struct mad_stream *);
void mad_stream_buffer(struct mad_stream *, unsigned char const *, unsigned long);
void mad_stream_skip(struct mad_stream *, unsigned long);
int mad_stream_sync(struct mad_stream *);
char const *mad_stream_errorstr(struct mad_stream const *);
typedef signed int mad_fixed_t;
typedef signed int mad_fixed64hi_t;
typedef unsigned int mad_fixed64lo_t;
typedef mad_fixed_t mad_sample_t;
mad_fixed_t mad_f_abs(mad_fixed_t);
typedef struct {
    signed long seconds;
    unsigned long fraction;
} mad_timer_t;
extern mad_timer_t const mad_timer_zero;
enum mad_units { MAD_UNITS_HOURS = -2, MAD_UNITS_MINUTES = -1, MAD_UNITS_SECONDS = 0, MAD_UNITS_DECISECONDS = 10, MAD_UNITS_CENTISECONDS = 100, MAD_UNITS_MILLISECONDS = 1000, MAD_UNITS_8000_HZ = 8000, MAD_UNITS_11025_HZ = 11025, MAD_UNITS_12000_HZ = 12000, MAD_UNITS_16000_HZ = 16000, MAD_UNITS_22050_HZ = 22050, MAD_UNITS_24000_HZ = 24000, MAD_UNITS_32000_HZ = 32000, MAD_UNITS_44100_HZ = 44100, MAD_UNITS_48000_HZ = 48000, MAD_UNITS_24_FPS = 24, MAD_UNITS_25_FPS = 25, MAD_UNITS_30_FPS = 30, MAD_UNITS_48_FPS = 48, MAD_UNITS_50_FPS = 50, MAD_UNITS_60_FPS = 60, MAD_UNITS_75_FPS = 75, MAD_UNITS_23_976_FPS = -24, MAD_UNITS_24_975_FPS = -25, MAD_UNITS_29_97_FPS = -30, MAD_UNITS_47_952_FPS = -48, MAD_UNITS_49_95_FPS = -50, MAD_UNITS_59_94_FPS = -60 };
int mad_timer_compare(mad_timer_t, mad_timer_t);
void mad_timer_negate(mad_timer_t *);
mad_timer_t mad_timer_abs(mad_timer_t);
void mad_timer_set(mad_timer_t *, unsigned long, unsigned long, unsigned long);
void mad_timer_add(mad_timer_t *, mad_timer_t);
void mad_timer_multiply(mad_timer_t *, signed long);
signed long mad_timer_count(mad_timer_t, enum mad_units);
unsigned long mad_timer_fraction(mad_timer_t, unsigned long);
void mad_timer_string(mad_timer_t, char *, char const *, enum mad_units, enum mad_units, unsigned long);
enum mad_layer { MAD_LAYER_I = 1, MAD_LAYER_II = 2, MAD_LAYER_III = 3 };
enum mad_mode { MAD_MODE_SINGLE_CHANNEL = 0, MAD_MODE_DUAL_CHANNEL = 1, MAD_MODE_JOINT_STEREO = 2, MAD_MODE_STEREO = 3 };
enum mad_emphasis { MAD_EMPHASIS_NONE = 0, MAD_EMPHASIS_50_15_US = 1, MAD_EMPHASIS_CCITT_J_17 = 3 };
struct mad_header {
    enum mad_layer layer;
    enum mad_mode mode;
    int mode_extension;
    enum mad_emphasis emphasis;
    unsigned long bitrate;
    unsigned int samplerate;
    unsigned short crc_check;
    unsigned short crc_target;
    int flags;
    int private_bits;
    mad_timer_t duration;
};
struct mad_frame {
    struct mad_header header;
    int options;
    mad_fixed_t sbsample[2][36][32];
    mad_fixed_t(*overlap)[2][32][18];
};
enum { MAD_FLAG_NPRIVATE_III = 0x0007, MAD_FLAG_INCOMPLETE = 0x0008, MAD_FLAG_PROTECTION = 0x0010, MAD_FLAG_COPYRIGHT = 0x0020, MAD_FLAG_ORIGINAL = 0x0040, MAD_FLAG_PADDING = 0x0080, MAD_FLAG_I_STEREO = 0x0100, MAD_FLAG_MS_STEREO = 0x0200, MAD_FLAG_FREEFORMAT = 0x0400, MAD_FLAG_LSF_EXT = 0x1000, MAD_FLAG_MC_EXT = 0x2000, MAD_FLAG_MPEG_2_5_EXT = 0x4000 };
enum { MAD_PRIVATE_HEADER = 0x0100, MAD_PRIVATE_III = 0x001f };
void mad_header_init(struct mad_header *);
int mad_header_decode(struct mad_header *, struct mad_stream *);
void mad_frame_init(struct mad_frame *);
void mad_frame_finish(struct mad_frame *);
int mad_frame_decode(struct mad_frame *, struct mad_stream *);
void mad_frame_mute(struct mad_frame *);
struct id3_tag {
    unsigned int refcount;
    unsigned int version;
    int flags;
    int extendedflags;
    int restrictions;
    int options;
    unsigned int nframes;
    struct id3_frame **frames;
    unsigned long paddedsize;
};
enum { ID3_TAG_FLAG_UNSYNCHRONISATION = 0x80, ID3_TAG_FLAG_EXTENDEDHEADER = 0x40, ID3_TAG_FLAG_EXPERIMENTALINDICATOR = 0x20, ID3_TAG_FLAG_FOOTERPRESENT = 0x10, ID3_TAG_FLAG_KNOWNFLAGS = 0xf0 };
enum { ID3_TAG_EXTENDEDFLAG_TAGISANUPDATE = 0x40, ID3_TAG_EXTENDEDFLAG_CRCDATAPRESENT = 0x20, ID3_TAG_EXTENDEDFLAG_TAGRESTRICTIONS = 0x10, ID3_TAG_EXTENDEDFLAG_KNOWNFLAGS = 0x70 };
enum { ID3_TAG_RESTRICTION_TAGSIZE_MASK = 0xc0, ID3_TAG_RESTRICTION_TAGSIZE_128_FRAMES_1_MB = 0x00, ID3_TAG_RESTRICTION_TAGSIZE_64_FRAMES_128_KB = 0x40, ID3_TAG_RESTRICTION_TAGSIZE_32_FRAMES_40_KB = 0x80, ID3_TAG_RESTRICTION_TAGSIZE_32_FRAMES_4_KB = 0xc0 };
enum { ID3_TAG_RESTRICTION_TEXTENCODING_MASK = 0x20, ID3_TAG_RESTRICTION_TEXTENCODING_NONE = 0x00, ID3_TAG_RESTRICTION_TEXTENCODING_LATIN1_UTF8 = 0x20 };
enum { ID3_TAG_RESTRICTION_TEXTSIZE_MASK = 0x18, ID3_TAG_RESTRICTION_TEXTSIZE_NONE = 0x00, ID3_TAG_RESTRICTION_TEXTSIZE_1024_CHARS = 0x08, ID3_TAG_RESTRICTION_TEXTSIZE_128_CHARS = 0x10, ID3_TAG_RESTRICTION_TEXTSIZE_30_CHARS = 0x18 };
enum { ID3_TAG_RESTRICTION_IMAGEENCODING_MASK = 0x04, ID3_TAG_RESTRICTION_IMAGEENCODING_NONE = 0x00, ID3_TAG_RESTRICTION_IMAGEENCODING_PNG_JPEG = 0x04 };
enum { ID3_TAG_RESTRICTION_IMAGESIZE_MASK = 0x03, ID3_TAG_RESTRICTION_IMAGESIZE_NONE = 0x00, ID3_TAG_RESTRICTION_IMAGESIZE_256_256 = 0x01, ID3_TAG_RESTRICTION_IMAGESIZE_64_64 = 0x02, ID3_TAG_RESTRICTION_IMAGESIZE_64_64_EXACT = 0x03 };
enum { ID3_TAG_OPTION_UNSYNCHRONISATION = 0x0001, ID3_TAG_OPTION_COMPRESSION = 0x0002, ID3_TAG_OPTION_CRC = 0x0004, ID3_TAG_OPTION_APPENDEDTAG = 0x0010, ID3_TAG_OPTION_FILEALTERED = 0x0020, ID3_TAG_OPTION_ID3V1 = 0x0100 };
typedef unsigned char id3_byte_t;
typedef unsigned long id3_length_t;
typedef unsigned long id3_ucs4_t;
typedef unsigned char id3_latin1_t;
typedef unsigned short id3_utf16_t;
typedef signed char id3_utf8_t;
struct id3_frame {
    char id[5];
    char const *description;
    unsigned int refcount;
    int flags;
    int group_id;
    int encryption_method;
    id3_byte_t *encoded;
    id3_length_t encoded_length;
    id3_length_t decoded_length;
    unsigned int nfields;
    union id3_field *fields;
};
enum { ID3_FRAME_FLAG_TAGALTERPRESERVATION = 0x4000, ID3_FRAME_FLAG_FILEALTERPRESERVATION = 0x2000, ID3_FRAME_FLAG_READONLY = 0x1000, ID3_FRAME_FLAG_STATUSFLAGS = 0xff00, ID3_FRAME_FLAG_GROUPINGIDENTITY = 0x0040, ID3_FRAME_FLAG_COMPRESSION = 0x0008, ID3_FRAME_FLAG_ENCRYPTION = 0x0004, ID3_FRAME_FLAG_UNSYNCHRONISATION = 0x0002, ID3_FRAME_FLAG_DATALENGTHINDICATOR = 0x0001, ID3_FRAME_FLAG_FORMATFLAGS = 0x00ff, ID3_FRAME_FLAG_KNOWNFLAGS = 0x704f };
enum id3_field_type { ID3_FIELD_TYPE_TEXTENCODING, ID3_FIELD_TYPE_LATIN1, ID3_FIELD_TYPE_LATIN1FULL, ID3_FIELD_TYPE_LATIN1LIST, ID3_FIELD_TYPE_STRING, ID3_FIELD_TYPE_STRINGFULL, ID3_FIELD_TYPE_STRINGLIST, ID3_FIELD_TYPE_LANGUAGE, ID3_FIELD_TYPE_FRAMEID, ID3_FIELD_TYPE_DATE, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_INT16, ID3_FIELD_TYPE_INT24, ID3_FIELD_TYPE_INT32, ID3_FIELD_TYPE_INT32PLUS, ID3_FIELD_TYPE_BINARYDATA };
enum id3_field_textencoding { ID3_FIELD_TEXTENCODING_ISO_8859_1 = 0x00, ID3_FIELD_TEXTENCODING_UTF_16 = 0x01, ID3_FIELD_TEXTENCODING_UTF_16BE = 0x02, ID3_FIELD_TEXTENCODING_UTF_8 = 0x03 };
union id3_field {
    enum id3_field_type type;
    struct {
	enum id3_field_type type;
	signed long value;
    } number;
    struct {
	enum id3_field_type type;
	id3_latin1_t *ptr;
    } latin1;
    struct {
	enum id3_field_type type;
	unsigned int nstrings;
	id3_latin1_t **strings;
    } latin1list;
    struct {
	enum id3_field_type type;
	id3_ucs4_t *ptr;
    } string;
    struct {
	enum id3_field_type type;
	unsigned int nstrings;
	id3_ucs4_t **strings;
    } stringlist;
    struct {
	enum id3_field_type type;
	char value[9];
    } immediate;
    struct {
	enum id3_field_type type;
	id3_byte_t *data;
	id3_length_t length;
    } binary;
};
struct id3_tag *id3_tag_new(void);
void id3_tag_delete(struct id3_tag *);
void id3_tag_clearframes(struct id3_tag *);
int id3_tag_attachframe(struct id3_tag *, struct id3_frame *);
int id3_tag_detachframe(struct id3_tag *, struct id3_frame *);
struct id3_frame *id3_tag_findframe(struct id3_tag const *, char const *, unsigned int);
signed long id3_tag_query(id3_byte_t const *, id3_length_t);
struct id3_tag *id3_tag_parse(id3_byte_t const *, id3_length_t);
id3_length_t id3_tag_render(struct id3_tag const *, id3_byte_t *);
enum id3_file_mode { ID3_FILE_MODE_READONLY = 0, ID3_FILE_MODE_READWRITE };
struct id3_file *id3_file_open(char const *, enum id3_file_mode);
struct id3_file *id3_file_fdopen(int, enum id3_file_mode);
void id3_file_close(struct id3_file *);
struct id3_tag *id3_file_tag(struct id3_file const *);
int id3_file_update(struct id3_file *);
id3_latin1_t *id3_ucs4_latin1duplicate(id3_ucs4_t const *);
id3_utf16_t *id3_ucs4_utf16duplicate(id3_ucs4_t const *);
id3_utf8_t *id3_ucs4_utf8duplicate(id3_ucs4_t const *);
void id3_ucs4_putnumber(id3_ucs4_t *, unsigned long);
unsigned long id3_ucs4_getnumber(id3_ucs4_t const *);
id3_ucs4_t const *id3_genre_name(id3_ucs4_t const *);
int id3_field_setint(union id3_field *, signed long);
int id3_field_settextencoding(union id3_field *, enum id3_field_textencoding);
int id3_field_setstrings(union id3_field *, unsigned int, id3_ucs4_t **);
int id3_field_addstring(union id3_field *, id3_ucs4_t const *);
int id3_field_setlanguage(union id3_field *, char const *);
int id3_field_setlatin1(union id3_field *, id3_latin1_t const *);
int id3_field_setfulllatin1(union id3_field *, id3_latin1_t const *);
int id3_field_setstring(union id3_field *, id3_ucs4_t const *);
int id3_field_setfullstring(union id3_field *, id3_ucs4_t const *);
int id3_field_setframeid(union id3_field *, char const *);
int id3_field_setbinarydata(union id3_field *, id3_byte_t const *, id3_length_t);
signed long id3_field_getint(union id3_field const *);
id3_ucs4_t const *id3_field_getstring(union id3_field const *);
id3_ucs4_t const *id3_field_getfullstring(union id3_field const *);
unsigned int id3_field_getnstrings(union id3_field const *);
id3_ucs4_t const *id3_field_getstrings(union id3_field const *, unsigned int index);
char const *id3_field_getframeid(union id3_field const *);
id3_byte_t const *id3_field_getbinarydata(union id3_field const *, id3_length_t *);
extern char const id3_version[];
extern char const id3_copyright[];
extern char const id3_author[];
extern char const id3_build[];
int id3_frame_validid(char const *);
struct id3_frame *id3_frame_new(char const *);
void id3_frame_delete(struct id3_frame *);
void id3_frame_addref(struct id3_frame *);
void id3_frame_delref(struct id3_frame *);
struct id3_frame *id3_frame_parse(id3_byte_t const **, id3_length_t, unsigned int);
id3_length_t id3_frame_render(struct id3_frame const *, id3_byte_t **, int);
struct mad_pcm {
    unsigned int samplerate;
    unsigned short channels;
    unsigned short length;
    mad_fixed_t samples[2][1152];
};
struct mad_synth {
    mad_fixed_t filter[2][2][2][16][8];
    unsigned int phase;
    struct mad_pcm pcm;
};
enum { MAD_PCM_CHANNEL_SINGLE = 0 };
enum { MAD_PCM_CHANNEL_DUAL_1 = 0, MAD_PCM_CHANNEL_DUAL_2 = 1 };
enum { MAD_PCM_CHANNEL_STEREO_LEFT = 0, MAD_PCM_CHANNEL_STEREO_RIGHT = 1 };
void mad_synth_init(struct mad_synth *);
void mad_synth_mute(struct mad_synth *);
void mad_synth_frame(struct mad_synth *, struct mad_frame const *);
enum mad_decoder_mode { MAD_DECODER_MODE_SYNC = 0, MAD_DECODER_MODE_ASYNC };
enum mad_flow { MAD_FLOW_CONTINUE = 0x0000, MAD_FLOW_STOP = 0x0010, MAD_FLOW_BREAK = 0x0011, MAD_FLOW_IGNORE = 0x0020 };
struct mad_decoder {
    enum mad_decoder_mode mode;
    int options;
    struct {
	long pid;
	int in;
	int out;
    } async;
    struct {
	struct mad_stream stream;
	struct mad_frame frame;
	struct mad_synth synth;
    } *sync;
    void *cb_data;
    enum mad_flow (*input_func) (void *, struct mad_stream *);
    enum mad_flow (*header_func) (void *, struct mad_header const *);
    enum mad_flow (*filter_func) (void *, struct mad_stream const *, struct mad_frame *);
    enum mad_flow (*output_func) (void *, struct mad_header const *, struct mad_pcm *);
    enum mad_flow (*error_func) (void *, struct mad_stream *, struct mad_frame *);
    enum mad_flow (*message_func) (void *, void *, unsigned int *);
};
void mad_decoder_init(struct mad_decoder *, void *, enum mad_flow (*)(void *, struct mad_stream *), enum mad_flow (*)(void *, struct mad_header const *), enum mad_flow (*)(void *, struct mad_stream const *, struct mad_frame *), enum mad_flow (*)(void *, struct mad_header const *, struct mad_pcm *), enum mad_flow (*)(void *, struct mad_stream *, struct mad_frame *), enum mad_flow (*)(void *, void *, unsigned int *));
int mad_decoder_finish(struct mad_decoder *);
int mad_decoder_run(struct mad_decoder *, enum mad_decoder_mode);
int mad_decoder_message(struct mad_decoder *, void *, unsigned int *);
void mad_decoder_init(struct mad_decoder *decoder, void *data, enum mad_flow (*input_func) (void *, struct mad_stream *), enum mad_flow (*header_func) (void *, struct mad_header const *), enum mad_flow (*filter_func) (void *, struct mad_stream const *, struct mad_frame *), enum mad_flow (*output_func) (void *, struct mad_header const *, struct mad_pcm *), enum mad_flow (*error_func) (void *, struct mad_stream *, struct mad_frame *), enum mad_flow (*message_func) (void *, void *, unsigned int *))
{
    decoder->mode = -1;
    decoder->options = 0;
    decoder->async.pid = 0;
    decoder->async.in = -1;
    decoder->async.out = -1;
    decoder->sync = 0;
    decoder->cb_data = data;
    decoder->input_func = input_func;
    decoder->header_func = header_func;
    decoder->filter_func = filter_func;
    decoder->output_func = output_func;
    decoder->error_func = error_func;
    decoder->message_func = message_func;
} int mad_decoder_finish(struct mad_decoder *decoder)
{
    if (decoder->mode == MAD_DECODER_MODE_ASYNC && decoder->async.pid) {
	pid_t pid;
	int status;
	close(decoder->async.in);
	do
	    pid = waitpid(decoder->async.pid, &status, 0);
	while (pid == -1 && (*__errno_location()) == 4);
	decoder->mode = -1;
	close(decoder->async.out);
	decoder->async.pid = 0;
	decoder->async.in = -1;
	decoder->async.out = -1;
	if (pid == -1)
	    return -1;
	return (!((((__extension__(((union {
				     __typeof(status) __in;
				     int __i;
				     }) {
				    .__in = (status)}).__i))) & 0x7f) == 0) || ((((__extension__(((union {
												   __typeof(status) __in;
												   int __i;
												   }) {
												  .__in = (status)}).__i))) & 0xff00) >> 8)) ? -1 : 0;
    }
    return 0;
}

static enum mad_flow send_io(int fd, void const *data, size_t len)
{
    char const *ptr = data;
    ssize_t count;
    while (len) {
	do
	    count = write(fd, ptr, len);
	while (count == -1 && (*__errno_location()) == 4);
	if (count == -1)
	    return MAD_FLOW_BREAK;
	len -= count;
	ptr += count;
    }
    return MAD_FLOW_CONTINUE;
}

static enum mad_flow receive_io(int fd, void *buffer, size_t len)
{
    char *ptr = buffer;
    ssize_t count;
    while (len) {
	do
	    count = read(fd, ptr, len);
	while (count == -1 && (*__errno_location()) == 4);
	if (count == -1)
	    return ((*__errno_location()) == 11) ? MAD_FLOW_IGNORE : MAD_FLOW_BREAK;
	else if (count == 0)
	    return MAD_FLOW_STOP;
	len -= count;
	ptr += count;
    }
    return MAD_FLOW_CONTINUE;
}

static enum mad_flow receive_io_blocking(int fd, void *buffer, size_t len)
{
    int flags, blocking;
    enum mad_flow result;
    flags = fcntl(fd, 3);
    if (flags == -1)
	return MAD_FLOW_BREAK;
    blocking = flags & ~04000;
    if (blocking != flags && fcntl(fd, 4, blocking) == -1)
	return MAD_FLOW_BREAK;
    result = receive_io(fd, buffer, len);
    if (flags != blocking && fcntl(fd, 4, flags) == -1)
	return MAD_FLOW_BREAK;
    return result;
}

static enum mad_flow send(int fd, void const *message, unsigned int size)
{
    enum mad_flow result;
    result = send_io(fd, &size, sizeof(size));
    if (result == MAD_FLOW_CONTINUE)
	result = send_io(fd, message, size);
    return result;
}

static enum mad_flow receive(int fd, void **message, unsigned int *size)
{
    enum mad_flow result;
    unsigned int actual;
    if (*message == 0)
	*size = 0;
    result = receive_io(fd, &actual, sizeof(actual));
    if (result == MAD_FLOW_CONTINUE) {
	if (actual > *size)
	    actual -= *size;
	else {
	    *size = actual;
	    actual = 0;
	}
	if (*size > 0) {
	    if (*message == 0) {
		*message = malloc(*size);
		if (*message == 0)
		    return MAD_FLOW_BREAK;
	    }
	    result = receive_io_blocking(fd, *message, *size);
	}
	while (actual && result == MAD_FLOW_CONTINUE) {
	    char sink[256];
	    unsigned int len;
	    len = actual > sizeof(sink) ? sizeof(sink) : actual;
	    result = receive_io_blocking(fd, sink, len);
	    actual -= len;
	}
    }
    return result;
}

static enum mad_flow check_message(struct mad_decoder *decoder)
{
    enum mad_flow result;
    void *message = 0;
    unsigned int size;
    result = receive(decoder->async.in, &message, &size);
    if (result == MAD_FLOW_CONTINUE) {
	if (decoder->message_func == 0)
	    size = 0;
	else {
	    result = decoder->message_func(decoder->cb_data, message, &size);
	    if (result == MAD_FLOW_IGNORE || result == MAD_FLOW_BREAK)
		size = 0;
	}
	if (send(decoder->async.out, message, size) != MAD_FLOW_CONTINUE)
	    result = MAD_FLOW_BREAK;
    }
    if (message)
	free(message);
    return result;
}

static enum mad_flow error_default(void *data, struct mad_stream *stream, struct mad_frame *frame)
{
    int *bad_last_frame = data;
    switch (stream->error) {
    case MAD_ERROR_BADCRC:
	if (*bad_last_frame)
	    mad_frame_mute(frame);
	else
	    *bad_last_frame = 1;
	return MAD_FLOW_IGNORE;
    default:
	return MAD_FLOW_CONTINUE;
    }
}

static int run_sync(struct mad_decoder *decoder)
{
    enum mad_flow (*error_func) (void *, struct mad_stream *, struct mad_frame *);
    void *error_data;
    int bad_last_frame = 0;
    struct mad_stream *stream;
    struct mad_frame *frame;
    struct mad_synth *synth;
    int result = 0;
    if (decoder->input_func == 0)
	return 0;
    if (decoder->error_func) {
	error_func = decoder->error_func;
	error_data = decoder->cb_data;
    } else {
	error_func = error_default;
	error_data = &bad_last_frame;
    }
    stream = &decoder->sync->stream;
    frame = &decoder->sync->frame;
    synth = &decoder->sync->synth;
    mad_stream_init(stream);
    mad_frame_init(frame);
    mad_synth_init(synth);
    ((void) ((stream)->options = (decoder->options)));
    do {
	switch (decoder->input_func(decoder->cb_data, stream)) {
	case MAD_FLOW_STOP:
	    goto done;
	case MAD_FLOW_BREAK:
	    goto fail;
	case MAD_FLOW_IGNORE:
	    continue;
	case MAD_FLOW_CONTINUE:
	    break;
	}
	while (1) {
	    if (decoder->mode == MAD_DECODER_MODE_ASYNC) {
		switch (check_message(decoder)) {
		case MAD_FLOW_IGNORE:
		case MAD_FLOW_CONTINUE:
		    break;
		case MAD_FLOW_BREAK:
		    goto fail;
		case MAD_FLOW_STOP:
		    goto done;
		}
	    }
	    if (decoder->header_func) {
		if (mad_header_decode(&frame->header, stream) == -1) {
		    if (!((stream->error) & 0xff00))
			break;
		    switch (error_func(error_data, stream, frame)) {
		    case MAD_FLOW_STOP:
			goto done;
		    case MAD_FLOW_BREAK:
			goto fail;
		    case MAD_FLOW_IGNORE:
		    case MAD_FLOW_CONTINUE:
		    default:
			continue;
		    }
		}
		switch (decoder->header_func(decoder->cb_data, &frame->header)) {
		case MAD_FLOW_STOP:
		    goto done;
		case MAD_FLOW_BREAK:
		    goto fail;
		case MAD_FLOW_IGNORE:
		    continue;
		case MAD_FLOW_CONTINUE:
		    break;
		}
	    }
	    if (mad_frame_decode(frame, stream) == -1) {
		if (!((stream->error) & 0xff00))
		    break;
		switch (error_func(error_data, stream, frame)) {
		case MAD_FLOW_STOP:
		    goto done;
		case MAD_FLOW_BREAK:
		    goto fail;
		case MAD_FLOW_IGNORE:
		    break;
		case MAD_FLOW_CONTINUE:
		default:
		    continue;
		}
	    } else
		bad_last_frame = 0;
	    if (decoder->filter_func) {
		switch (decoder->filter_func(decoder->cb_data, stream, frame)) {
		case MAD_FLOW_STOP:
		    goto done;
		case MAD_FLOW_BREAK:
		    goto fail;
		case MAD_FLOW_IGNORE:
		    continue;
		case MAD_FLOW_CONTINUE:
		    break;
		}
	    }
	    mad_synth_frame(synth, frame);
	    if (decoder->output_func) {
		switch (decoder->output_func(decoder->cb_data, &frame->header, &synth->pcm)) {
		case MAD_FLOW_STOP:
		    goto done;
		case MAD_FLOW_BREAK:
		    goto fail;
		case MAD_FLOW_IGNORE:
		case MAD_FLOW_CONTINUE:
		    break;
		}
	    }
	}
    } while (stream->error == MAD_ERROR_BUFLEN);
  fail:result = -1;
  done:;
    mad_frame_finish(frame);
    mad_stream_finish(stream);
    return result;
}

static int run_async(struct mad_decoder *decoder)
{
    pid_t pid;
    int ptoc[2], ctop[2], flags;
    if (pipe(ptoc) == -1)
	return -1;
    if (pipe(ctop) == -1) {
	close(ptoc[0]);
	close(ptoc[1]);
	return -1;
    }
    flags = fcntl(ptoc[0], 3);
    if (flags == -1 || fcntl(ptoc[0], 4, flags | 04000) == -1) {
	close(ctop[0]);
	close(ctop[1]);
	close(ptoc[0]);
	close(ptoc[1]);
	return -1;
    }
    pid = fork();
    if (pid == -1) {
	close(ctop[0]);
	close(ctop[1]);
	close(ptoc[0]);
	close(ptoc[1]);
	return -1;
    }
    decoder->async.pid = pid;
    if (pid) {
	close(ptoc[0]);
	close(ctop[1]);
	decoder->async.in = ctop[0];
	decoder->async.out = ptoc[1];
	return 0;
    }
    close(ptoc[1]);
    close(ctop[0]);
    decoder->async.in = ptoc[0];
    decoder->async.out = ctop[1];
    _exit(run_sync(decoder));
    return -1;
}

int mad_decoder_run(struct mad_decoder *decoder, enum mad_decoder_mode mode)
{
    int result;
    int (*run) (struct mad_decoder *) = 0;
    switch (decoder->mode = mode) {
    case MAD_DECODER_MODE_SYNC:
	run = run_sync;
	break;
    case MAD_DECODER_MODE_ASYNC:
	run = run_async;
	break;
    }
    if (run == 0)
	return -1;
    decoder->sync = malloc(sizeof(*decoder->sync));
    if (decoder->sync == 0)
	return -1;
    result = run(decoder);
    free(decoder->sync);
    decoder->sync = 0;
    return result;
}

int mad_decoder_message(struct mad_decoder *decoder, void *message, unsigned int *len)
{
    if (decoder->mode != MAD_DECODER_MODE_ASYNC || send(decoder->async.out, message, *len) != MAD_FLOW_CONTINUE || receive(decoder->async.in, &message, len) != MAD_FLOW_CONTINUE)
	return -1;
    return 0;
}
