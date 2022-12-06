typedef unsigned char byte;
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
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
typedef unsigned long int ulong_;
typedef unsigned short int ushort_;
typedef unsigned int uint_;
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
typedef int bool;
typedef const char *ptr_ord_t;
typedef double floatp;
typedef const char *client_name_t;
typedef ushort bits16;
typedef uint bits32;
typedef float float_t;
typedef double double_t;
extern double acos(double __x) __attribute__ ((__nothrow__));
extern double __acos(double __x) __attribute__ ((__nothrow__));
extern double asin(double __x) __attribute__ ((__nothrow__));
extern double __asin(double __x) __attribute__ ((__nothrow__));
extern double atan(double __x) __attribute__ ((__nothrow__));
extern double __atan(double __x) __attribute__ ((__nothrow__));
extern double atan2(double __y, double __x) __attribute__ ((__nothrow__));
extern double __atan2(double __y, double __x) __attribute__ ((__nothrow__));
extern double cos(double __x) __attribute__ ((__nothrow__));
extern double __cos(double __x) __attribute__ ((__nothrow__));
extern double sin(double __x) __attribute__ ((__nothrow__));
extern double __sin(double __x) __attribute__ ((__nothrow__));
extern double tan(double __x) __attribute__ ((__nothrow__));
extern double __tan(double __x) __attribute__ ((__nothrow__));
extern double cosh(double __x) __attribute__ ((__nothrow__));
extern double __cosh(double __x) __attribute__ ((__nothrow__));
extern double sinh(double __x) __attribute__ ((__nothrow__));
extern double __sinh(double __x) __attribute__ ((__nothrow__));
extern double tanh(double __x) __attribute__ ((__nothrow__));
extern double __tanh(double __x) __attribute__ ((__nothrow__));
extern double acosh(double __x) __attribute__ ((__nothrow__));
extern double __acosh(double __x) __attribute__ ((__nothrow__));
extern double asinh(double __x) __attribute__ ((__nothrow__));
extern double __asinh(double __x) __attribute__ ((__nothrow__));
extern double atanh(double __x) __attribute__ ((__nothrow__));
extern double __atanh(double __x) __attribute__ ((__nothrow__));
extern double exp(double __x) __attribute__ ((__nothrow__));
extern double __exp(double __x) __attribute__ ((__nothrow__));
extern double frexp(double __x, int *__exponent) __attribute__ ((__nothrow__));
extern double __frexp(double __x, int *__exponent) __attribute__ ((__nothrow__));
extern double ldexp(double __x, int __exponent) __attribute__ ((__nothrow__));
extern double __ldexp(double __x, int __exponent) __attribute__ ((__nothrow__));
extern double log(double __x) __attribute__ ((__nothrow__));
extern double __log(double __x) __attribute__ ((__nothrow__));
extern double log10(double __x) __attribute__ ((__nothrow__));
extern double __log10(double __x) __attribute__ ((__nothrow__));
extern double modf(double __x, double *__iptr) __attribute__ ((__nothrow__));
extern double __modf(double __x, double *__iptr) __attribute__ ((__nothrow__));
extern double expm1(double __x) __attribute__ ((__nothrow__));
extern double __expm1(double __x) __attribute__ ((__nothrow__));
extern double log1p(double __x) __attribute__ ((__nothrow__));
extern double __log1p(double __x) __attribute__ ((__nothrow__));
extern double logb(double __x) __attribute__ ((__nothrow__));
extern double __logb(double __x) __attribute__ ((__nothrow__));
extern double exp2(double __x) __attribute__ ((__nothrow__));
extern double __exp2(double __x) __attribute__ ((__nothrow__));
extern double log2(double __x) __attribute__ ((__nothrow__));
extern double __log2(double __x) __attribute__ ((__nothrow__));
extern double pow(double __x, double __y) __attribute__ ((__nothrow__));
extern double __pow(double __x, double __y) __attribute__ ((__nothrow__));
extern double sqrt(double __x) __attribute__ ((__nothrow__));
extern double __sqrt(double __x) __attribute__ ((__nothrow__));
extern double hypot(double __x, double __y) __attribute__ ((__nothrow__));
extern double __hypot(double __x, double __y) __attribute__ ((__nothrow__));
extern double cbrt(double __x) __attribute__ ((__nothrow__));
extern double __cbrt(double __x) __attribute__ ((__nothrow__));
extern double ceil(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __ceil(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double fabs(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __fabs(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double floor(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __floor(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double fmod(double __x, double __y) __attribute__ ((__nothrow__));
extern double __fmod(double __x, double __y) __attribute__ ((__nothrow__));
extern int __isinf(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __finite(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int isinf(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int finite(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double drem(double __x, double __y) __attribute__ ((__nothrow__));
extern double __drem(double __x, double __y) __attribute__ ((__nothrow__));
extern double significand(double __x) __attribute__ ((__nothrow__));
extern double __significand(double __x) __attribute__ ((__nothrow__));
extern double copysign(double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __copysign(double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double nan(__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __nan(__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __isnan(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int isnan(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double j0(double) __attribute__ ((__nothrow__));
extern double __j0(double) __attribute__ ((__nothrow__));
extern double j1(double) __attribute__ ((__nothrow__));
extern double __j1(double) __attribute__ ((__nothrow__));
extern double jn(int, double) __attribute__ ((__nothrow__));
extern double __jn(int, double) __attribute__ ((__nothrow__));
extern double y0(double) __attribute__ ((__nothrow__));
extern double __y0(double) __attribute__ ((__nothrow__));
extern double y1(double) __attribute__ ((__nothrow__));
extern double __y1(double) __attribute__ ((__nothrow__));
extern double yn(int, double) __attribute__ ((__nothrow__));
extern double __yn(int, double) __attribute__ ((__nothrow__));
extern double erf(double) __attribute__ ((__nothrow__));
extern double __erf(double) __attribute__ ((__nothrow__));
extern double erfc(double) __attribute__ ((__nothrow__));
extern double __erfc(double) __attribute__ ((__nothrow__));
extern double lgamma(double) __attribute__ ((__nothrow__));
extern double __lgamma(double) __attribute__ ((__nothrow__));
extern double tgamma(double) __attribute__ ((__nothrow__));
extern double __tgamma(double) __attribute__ ((__nothrow__));
extern double gamma(double) __attribute__ ((__nothrow__));
extern double __gamma(double) __attribute__ ((__nothrow__));
extern double lgamma_r(double, int *__signgamp) __attribute__ ((__nothrow__));
extern double __lgamma_r(double, int *__signgamp) __attribute__ ((__nothrow__));
extern double rint(double __x) __attribute__ ((__nothrow__));
extern double __rint(double __x) __attribute__ ((__nothrow__));
extern double nextafter(double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __nextafter(double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double nexttoward(double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __nexttoward(double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double remainder(double __x, double __y) __attribute__ ((__nothrow__));
extern double __remainder(double __x, double __y) __attribute__ ((__nothrow__));
extern double scalbn(double __x, int __n) __attribute__ ((__nothrow__));
extern double __scalbn(double __x, int __n) __attribute__ ((__nothrow__));
extern int ilogb(double __x) __attribute__ ((__nothrow__));
extern int __ilogb(double __x) __attribute__ ((__nothrow__));
extern double scalbln(double __x, long int __n) __attribute__ ((__nothrow__));
extern double __scalbln(double __x, long int __n) __attribute__ ((__nothrow__));
extern double nearbyint(double __x) __attribute__ ((__nothrow__));
extern double __nearbyint(double __x) __attribute__ ((__nothrow__));
extern double round(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __round(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double trunc(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __trunc(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double remquo(double __x, double __y, int *__quo) __attribute__ ((__nothrow__));
extern double __remquo(double __x, double __y, int *__quo) __attribute__ ((__nothrow__));
extern long int lrint(double __x) __attribute__ ((__nothrow__));
extern long int __lrint(double __x) __attribute__ ((__nothrow__));
extern long long int llrint(double __x) __attribute__ ((__nothrow__));
extern long long int __llrint(double __x) __attribute__ ((__nothrow__));
extern long int lround(double __x) __attribute__ ((__nothrow__));
extern long int __lround(double __x) __attribute__ ((__nothrow__));
extern long long int llround(double __x) __attribute__ ((__nothrow__));
extern long long int __llround(double __x) __attribute__ ((__nothrow__));
extern double fdim(double __x, double __y) __attribute__ ((__nothrow__));
extern double __fdim(double __x, double __y) __attribute__ ((__nothrow__));
extern double fmax(double __x, double __y) __attribute__ ((__nothrow__));
extern double __fmax(double __x, double __y) __attribute__ ((__nothrow__));
extern double fmin(double __x, double __y) __attribute__ ((__nothrow__));
extern double __fmin(double __x, double __y) __attribute__ ((__nothrow__));
extern int __fpclassify(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __signbit(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double fma(double __x, double __y, double __z) __attribute__ ((__nothrow__));
extern double __fma(double __x, double __y, double __z) __attribute__ ((__nothrow__));
extern double scalb(double __x, double __n) __attribute__ ((__nothrow__));
extern double __scalb(double __x, double __n) __attribute__ ((__nothrow__));
extern float acosf(float __x) __attribute__ ((__nothrow__));
extern float __acosf(float __x) __attribute__ ((__nothrow__));
extern float asinf(float __x) __attribute__ ((__nothrow__));
extern float __asinf(float __x) __attribute__ ((__nothrow__));
extern float atanf(float __x) __attribute__ ((__nothrow__));
extern float __atanf(float __x) __attribute__ ((__nothrow__));
extern float atan2f(float __y, float __x) __attribute__ ((__nothrow__));
extern float __atan2f(float __y, float __x) __attribute__ ((__nothrow__));
extern float cosf(float __x) __attribute__ ((__nothrow__));
extern float __cosf(float __x) __attribute__ ((__nothrow__));
extern float sinf(float __x) __attribute__ ((__nothrow__));
extern float __sinf(float __x) __attribute__ ((__nothrow__));
extern float tanf(float __x) __attribute__ ((__nothrow__));
extern float __tanf(float __x) __attribute__ ((__nothrow__));
extern float coshf(float __x) __attribute__ ((__nothrow__));
extern float __coshf(float __x) __attribute__ ((__nothrow__));
extern float sinhf(float __x) __attribute__ ((__nothrow__));
extern float __sinhf(float __x) __attribute__ ((__nothrow__));
extern float tanhf(float __x) __attribute__ ((__nothrow__));
extern float __tanhf(float __x) __attribute__ ((__nothrow__));
extern float acoshf(float __x) __attribute__ ((__nothrow__));
extern float __acoshf(float __x) __attribute__ ((__nothrow__));
extern float asinhf(float __x) __attribute__ ((__nothrow__));
extern float __asinhf(float __x) __attribute__ ((__nothrow__));
extern float atanhf(float __x) __attribute__ ((__nothrow__));
extern float __atanhf(float __x) __attribute__ ((__nothrow__));
extern float expf(float __x) __attribute__ ((__nothrow__));
extern float __expf(float __x) __attribute__ ((__nothrow__));
extern float frexpf(float __x, int *__exponent) __attribute__ ((__nothrow__));
extern float __frexpf(float __x, int *__exponent) __attribute__ ((__nothrow__));
extern float ldexpf(float __x, int __exponent) __attribute__ ((__nothrow__));
extern float __ldexpf(float __x, int __exponent) __attribute__ ((__nothrow__));
extern float logf(float __x) __attribute__ ((__nothrow__));
extern float __logf(float __x) __attribute__ ((__nothrow__));
extern float log10f(float __x) __attribute__ ((__nothrow__));
extern float __log10f(float __x) __attribute__ ((__nothrow__));
extern float modff(float __x, float *__iptr) __attribute__ ((__nothrow__));
extern float __modff(float __x, float *__iptr) __attribute__ ((__nothrow__));
extern float expm1f(float __x) __attribute__ ((__nothrow__));
extern float __expm1f(float __x) __attribute__ ((__nothrow__));
extern float log1pf(float __x) __attribute__ ((__nothrow__));
extern float __log1pf(float __x) __attribute__ ((__nothrow__));
extern float logbf(float __x) __attribute__ ((__nothrow__));
extern float __logbf(float __x) __attribute__ ((__nothrow__));
extern float exp2f(float __x) __attribute__ ((__nothrow__));
extern float __exp2f(float __x) __attribute__ ((__nothrow__));
extern float log2f(float __x) __attribute__ ((__nothrow__));
extern float __log2f(float __x) __attribute__ ((__nothrow__));
extern float powf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __powf(float __x, float __y) __attribute__ ((__nothrow__));
extern float sqrtf(float __x) __attribute__ ((__nothrow__));
extern float __sqrtf(float __x) __attribute__ ((__nothrow__));
extern float hypotf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __hypotf(float __x, float __y) __attribute__ ((__nothrow__));
extern float cbrtf(float __x) __attribute__ ((__nothrow__));
extern float __cbrtf(float __x) __attribute__ ((__nothrow__));
extern float ceilf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __ceilf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float fabsf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __fabsf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float floorf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __floorf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float fmodf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __fmodf(float __x, float __y) __attribute__ ((__nothrow__));
extern int __isinff(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __finitef(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int isinff(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int finitef(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float dremf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __dremf(float __x, float __y) __attribute__ ((__nothrow__));
extern float significandf(float __x) __attribute__ ((__nothrow__));
extern float __significandf(float __x) __attribute__ ((__nothrow__));
extern float copysignf(float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __copysignf(float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float nanf(__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __nanf(__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __isnanf(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int isnanf(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float j0f(float) __attribute__ ((__nothrow__));
extern float __j0f(float) __attribute__ ((__nothrow__));
extern float j1f(float) __attribute__ ((__nothrow__));
extern float __j1f(float) __attribute__ ((__nothrow__));
extern float jnf(int, float) __attribute__ ((__nothrow__));
extern float __jnf(int, float) __attribute__ ((__nothrow__));
extern float y0f(float) __attribute__ ((__nothrow__));
extern float __y0f(float) __attribute__ ((__nothrow__));
extern float y1f(float) __attribute__ ((__nothrow__));
extern float __y1f(float) __attribute__ ((__nothrow__));
extern float ynf(int, float) __attribute__ ((__nothrow__));
extern float __ynf(int, float) __attribute__ ((__nothrow__));
extern float erff(float) __attribute__ ((__nothrow__));
extern float __erff(float) __attribute__ ((__nothrow__));
extern float erfcf(float) __attribute__ ((__nothrow__));
extern float __erfcf(float) __attribute__ ((__nothrow__));
extern float lgammaf(float) __attribute__ ((__nothrow__));
extern float __lgammaf(float) __attribute__ ((__nothrow__));
extern float tgammaf(float) __attribute__ ((__nothrow__));
extern float __tgammaf(float) __attribute__ ((__nothrow__));
extern float gammaf(float) __attribute__ ((__nothrow__));
extern float __gammaf(float) __attribute__ ((__nothrow__));
extern float lgammaf_r(float, int *__signgamp) __attribute__ ((__nothrow__));
extern float __lgammaf_r(float, int *__signgamp) __attribute__ ((__nothrow__));
extern float rintf(float __x) __attribute__ ((__nothrow__));
extern float __rintf(float __x) __attribute__ ((__nothrow__));
extern float nextafterf(float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __nextafterf(float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float nexttowardf(float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __nexttowardf(float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float remainderf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __remainderf(float __x, float __y) __attribute__ ((__nothrow__));
extern float scalbnf(float __x, int __n) __attribute__ ((__nothrow__));
extern float __scalbnf(float __x, int __n) __attribute__ ((__nothrow__));
extern int ilogbf(float __x) __attribute__ ((__nothrow__));
extern int __ilogbf(float __x) __attribute__ ((__nothrow__));
extern float scalblnf(float __x, long int __n) __attribute__ ((__nothrow__));
extern float __scalblnf(float __x, long int __n) __attribute__ ((__nothrow__));
extern float nearbyintf(float __x) __attribute__ ((__nothrow__));
extern float __nearbyintf(float __x) __attribute__ ((__nothrow__));
extern float roundf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __roundf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float truncf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __truncf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float remquof(float __x, float __y, int *__quo) __attribute__ ((__nothrow__));
extern float __remquof(float __x, float __y, int *__quo) __attribute__ ((__nothrow__));
extern long int lrintf(float __x) __attribute__ ((__nothrow__));
extern long int __lrintf(float __x) __attribute__ ((__nothrow__));
extern long long int llrintf(float __x) __attribute__ ((__nothrow__));
extern long long int __llrintf(float __x) __attribute__ ((__nothrow__));
extern long int lroundf(float __x) __attribute__ ((__nothrow__));
extern long int __lroundf(float __x) __attribute__ ((__nothrow__));
extern long long int llroundf(float __x) __attribute__ ((__nothrow__));
extern long long int __llroundf(float __x) __attribute__ ((__nothrow__));
extern float fdimf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __fdimf(float __x, float __y) __attribute__ ((__nothrow__));
extern float fmaxf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __fmaxf(float __x, float __y) __attribute__ ((__nothrow__));
extern float fminf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __fminf(float __x, float __y) __attribute__ ((__nothrow__));
extern int __fpclassifyf(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __signbitf(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float fmaf(float __x, float __y, float __z) __attribute__ ((__nothrow__));
extern float __fmaf(float __x, float __y, float __z) __attribute__ ((__nothrow__));
extern float scalbf(float __x, float __n) __attribute__ ((__nothrow__));
extern float __scalbf(float __x, float __n) __attribute__ ((__nothrow__));
extern long double acosl(long double __x) __attribute__ ((__nothrow__));
extern long double __acosl(long double __x) __attribute__ ((__nothrow__));
extern long double asinl(long double __x) __attribute__ ((__nothrow__));
extern long double __asinl(long double __x) __attribute__ ((__nothrow__));
extern long double atanl(long double __x) __attribute__ ((__nothrow__));
extern long double __atanl(long double __x) __attribute__ ((__nothrow__));
extern long double atan2l(long double __y, long double __x) __attribute__ ((__nothrow__));
extern long double __atan2l(long double __y, long double __x) __attribute__ ((__nothrow__));
extern long double cosl(long double __x) __attribute__ ((__nothrow__));
extern long double __cosl(long double __x) __attribute__ ((__nothrow__));
extern long double sinl(long double __x) __attribute__ ((__nothrow__));
extern long double __sinl(long double __x) __attribute__ ((__nothrow__));
extern long double tanl(long double __x) __attribute__ ((__nothrow__));
extern long double __tanl(long double __x) __attribute__ ((__nothrow__));
extern long double coshl(long double __x) __attribute__ ((__nothrow__));
extern long double __coshl(long double __x) __attribute__ ((__nothrow__));
extern long double sinhl(long double __x) __attribute__ ((__nothrow__));
extern long double __sinhl(long double __x) __attribute__ ((__nothrow__));
extern long double tanhl(long double __x) __attribute__ ((__nothrow__));
extern long double __tanhl(long double __x) __attribute__ ((__nothrow__));
extern long double acoshl(long double __x) __attribute__ ((__nothrow__));
extern long double __acoshl(long double __x) __attribute__ ((__nothrow__));
extern long double asinhl(long double __x) __attribute__ ((__nothrow__));
extern long double __asinhl(long double __x) __attribute__ ((__nothrow__));
extern long double atanhl(long double __x) __attribute__ ((__nothrow__));
extern long double __atanhl(long double __x) __attribute__ ((__nothrow__));
extern long double expl(long double __x) __attribute__ ((__nothrow__));
extern long double __expl(long double __x) __attribute__ ((__nothrow__));
extern long double frexpl(long double __x, int *__exponent) __attribute__ ((__nothrow__));
extern long double __frexpl(long double __x, int *__exponent) __attribute__ ((__nothrow__));
extern long double ldexpl(long double __x, int __exponent) __attribute__ ((__nothrow__));
extern long double __ldexpl(long double __x, int __exponent) __attribute__ ((__nothrow__));
extern long double logl(long double __x) __attribute__ ((__nothrow__));
extern long double __logl(long double __x) __attribute__ ((__nothrow__));
extern long double log10l(long double __x) __attribute__ ((__nothrow__));
extern long double __log10l(long double __x) __attribute__ ((__nothrow__));
extern long double modfl(long double __x, long double *__iptr) __attribute__ ((__nothrow__));
extern long double __modfl(long double __x, long double *__iptr) __attribute__ ((__nothrow__));
extern long double expm1l(long double __x) __attribute__ ((__nothrow__));
extern long double __expm1l(long double __x) __attribute__ ((__nothrow__));
extern long double log1pl(long double __x) __attribute__ ((__nothrow__));
extern long double __log1pl(long double __x) __attribute__ ((__nothrow__));
extern long double logbl(long double __x) __attribute__ ((__nothrow__));
extern long double __logbl(long double __x) __attribute__ ((__nothrow__));
extern long double exp2l(long double __x) __attribute__ ((__nothrow__));
extern long double __exp2l(long double __x) __attribute__ ((__nothrow__));
extern long double log2l(long double __x) __attribute__ ((__nothrow__));
extern long double __log2l(long double __x) __attribute__ ((__nothrow__));
extern long double powl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __powl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double sqrtl(long double __x) __attribute__ ((__nothrow__));
extern long double __sqrtl(long double __x) __attribute__ ((__nothrow__));
extern long double hypotl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __hypotl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double cbrtl(long double __x) __attribute__ ((__nothrow__));
extern long double __cbrtl(long double __x) __attribute__ ((__nothrow__));
extern long double ceill(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __ceill(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double fabsl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __fabsl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double floorl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __floorl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double fmodl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __fmodl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern int __isinfl(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __finitel(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int isinfl(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int finitel(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double dreml(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __dreml(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double significandl(long double __x) __attribute__ ((__nothrow__));
extern long double __significandl(long double __x) __attribute__ ((__nothrow__));
extern long double copysignl(long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __copysignl(long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double nanl(__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __nanl(__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __isnanl(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int isnanl(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double j0l(long double) __attribute__ ((__nothrow__));
extern long double __j0l(long double) __attribute__ ((__nothrow__));
extern long double j1l(long double) __attribute__ ((__nothrow__));
extern long double __j1l(long double) __attribute__ ((__nothrow__));
extern long double jnl(int, long double) __attribute__ ((__nothrow__));
extern long double __jnl(int, long double) __attribute__ ((__nothrow__));
extern long double y0l(long double) __attribute__ ((__nothrow__));
extern long double __y0l(long double) __attribute__ ((__nothrow__));
extern long double y1l(long double) __attribute__ ((__nothrow__));
extern long double __y1l(long double) __attribute__ ((__nothrow__));
extern long double ynl(int, long double) __attribute__ ((__nothrow__));
extern long double __ynl(int, long double) __attribute__ ((__nothrow__));
extern long double erfl(long double) __attribute__ ((__nothrow__));
extern long double __erfl(long double) __attribute__ ((__nothrow__));
extern long double erfcl(long double) __attribute__ ((__nothrow__));
extern long double __erfcl(long double) __attribute__ ((__nothrow__));
extern long double lgammal(long double) __attribute__ ((__nothrow__));
extern long double __lgammal(long double) __attribute__ ((__nothrow__));
extern long double tgammal(long double) __attribute__ ((__nothrow__));
extern long double __tgammal(long double) __attribute__ ((__nothrow__));
extern long double gammal(long double) __attribute__ ((__nothrow__));
extern long double __gammal(long double) __attribute__ ((__nothrow__));
extern long double lgammal_r(long double, int *__signgamp) __attribute__ ((__nothrow__));
extern long double __lgammal_r(long double, int *__signgamp) __attribute__ ((__nothrow__));
extern long double rintl(long double __x) __attribute__ ((__nothrow__));
extern long double __rintl(long double __x) __attribute__ ((__nothrow__));
extern long double nextafterl(long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __nextafterl(long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double nexttowardl(long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __nexttowardl(long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double remainderl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __remainderl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double scalbnl(long double __x, int __n) __attribute__ ((__nothrow__));
extern long double __scalbnl(long double __x, int __n) __attribute__ ((__nothrow__));
extern int ilogbl(long double __x) __attribute__ ((__nothrow__));
extern int __ilogbl(long double __x) __attribute__ ((__nothrow__));
extern long double scalblnl(long double __x, long int __n) __attribute__ ((__nothrow__));
extern long double __scalblnl(long double __x, long int __n) __attribute__ ((__nothrow__));
extern long double nearbyintl(long double __x) __attribute__ ((__nothrow__));
extern long double __nearbyintl(long double __x) __attribute__ ((__nothrow__));
extern long double roundl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __roundl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double truncl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __truncl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double remquol(long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__));
extern long double __remquol(long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__));
extern long int lrintl(long double __x) __attribute__ ((__nothrow__));
extern long int __lrintl(long double __x) __attribute__ ((__nothrow__));
extern long long int llrintl(long double __x) __attribute__ ((__nothrow__));
extern long long int __llrintl(long double __x) __attribute__ ((__nothrow__));
extern long int lroundl(long double __x) __attribute__ ((__nothrow__));
extern long int __lroundl(long double __x) __attribute__ ((__nothrow__));
extern long long int llroundl(long double __x) __attribute__ ((__nothrow__));
extern long long int __llroundl(long double __x) __attribute__ ((__nothrow__));
extern long double fdiml(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __fdiml(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double fmaxl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __fmaxl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double fminl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __fminl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern int __fpclassifyl(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __signbitl(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double fmal(long double __x, long double __y, long double __z) __attribute__ ((__nothrow__));
extern long double __fmal(long double __x, long double __y, long double __z) __attribute__ ((__nothrow__));
extern long double scalbl(long double __x, long double __n) __attribute__ ((__nothrow__));
extern long double __scalbl(long double __x, long double __n) __attribute__ ((__nothrow__));
extern int signgam;
enum { FP_NAN, FP_INFINITE, FP_ZERO, FP_SUBNORMAL, FP_NORMAL };
typedef enum { _IEEE_ = -1, _SVID_, _XOPEN_, _POSIX_, _ISOC_ } _LIB_VERSION_TYPE;
extern _LIB_VERSION_TYPE _LIB_VERSION;
struct exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};
extern int matherr(struct exception *__exc);
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
typedef struct {
    int __count;
    union {
	unsigned int __wch;
	char __wchb[4];
    } __value;
} __mbstate_t;
typedef struct {
    __off_t __pos;
    __mbstate_t __state;
} _G_fpos_t;
typedef struct {
    __off64_t __pos;
    __mbstate_t __state;
} _G_fpos64_t;
typedef int _G_int16_t __attribute__ ((__mode__(__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__(__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__(__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__(__SI__)));
typedef __builtin_va_list va_list;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t;
struct _IO_FILE;
typedef void _IO_lock_t;
struct _IO_marker {
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;
    int _pos;
};
enum __codecvt_result { __codecvt_ok, __codecvt_partial, __codecvt_error, __codecvt_noconv };
struct _IO_FILE {
    int _flags;
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;
    struct _IO_marker *_markers;
    struct _IO_FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    unsigned short _cur_column;
    signed char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t *_lock;
    __off64_t _offset;
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15 * sizeof(int) - 4 * sizeof(void *) - sizeof(size_t)];
};
typedef struct _IO_FILE _IO_FILE;
struct _IO_FILE_plus;
extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);
typedef __ssize_t __io_write_fn(void *__cookie, __const char *__buf, size_t __n);
typedef int __io_seek_fn(void *__cookie, __off64_t * __pos, int __w);
typedef int __io_close_fn(void *__cookie);
extern int __underflow(_IO_FILE *);
extern int __uflow(_IO_FILE *);
extern int __overflow(_IO_FILE *, int);
extern int _IO_getc(_IO_FILE * __fp);
extern int _IO_putc(int __c, _IO_FILE * __fp);
extern int _IO_feof(_IO_FILE * __fp) __attribute__ ((__nothrow__));
extern int _IO_ferror(_IO_FILE * __fp) __attribute__ ((__nothrow__));
extern int _IO_peekc_locked(_IO_FILE * __fp);
extern void _IO_flockfile(_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile(_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile(_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_vfscanf(_IO_FILE * __restrict, const char *__restrict, __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf(_IO_FILE * __restrict, const char *__restrict, __gnuc_va_list);
extern __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn(_IO_FILE *, void *, size_t);
extern __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);
extern void _IO_free_backup_area(_IO_FILE *) __attribute__ ((__nothrow__));
typedef _G_fpos_t fpos_t;
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern int remove(__const char *__filename) __attribute__ ((__nothrow__));
extern int rename(__const char *__old, __const char *__new) __attribute__ ((__nothrow__));
extern int renameat(int __oldfd, __const char *__old, int __newfd, __const char *__new) __attribute__ ((__nothrow__));
extern FILE *tmpfile(void);
extern char *tmpnam(char *__s) __attribute__ ((__nothrow__));
extern char *tmpnam_r(char *__s) __attribute__ ((__nothrow__));
extern char *tempnam(__const char *__dir, __const char *__pfx) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
extern int fclose(FILE * __stream);
extern int fflush(FILE * __stream);
extern int fflush_unlocked(FILE * __stream);
extern FILE *fopen(__const char *__restrict __filename, __const char *__restrict __modes);
extern FILE *freopen(__const char *__restrict __filename, __const char *__restrict __modes, FILE * __restrict __stream);
extern FILE *fdopen(int __fd, __const char *__modes) __attribute__ ((__nothrow__));
extern FILE *fmemopen(void *__s, size_t __len, __const char *__modes) __attribute__ ((__nothrow__));
extern FILE *open_memstream(char **__bufloc, size_t * __sizeloc) __attribute__ ((__nothrow__));
extern void setbuf(FILE * __restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));
extern int setvbuf(FILE * __restrict __stream, char *__restrict __buf, int __modes, size_t __n) __attribute__ ((__nothrow__));
extern void setbuffer(FILE * __restrict __stream, char *__restrict __buf, size_t __size) __attribute__ ((__nothrow__));
extern void setlinebuf(FILE * __stream) __attribute__ ((__nothrow__));
extern int fprintf(FILE * __restrict __stream, __const char *__restrict __format, ...);
extern int printf(__const char *__restrict __format, ...);
extern int sprintf(char *__restrict __s, __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int vfprintf(FILE * __restrict __s, __const char *__restrict __format, __gnuc_va_list __arg);
extern int vprintf(__const char *__restrict __format, __gnuc_va_list __arg);
extern int vsprintf(char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__nothrow__));
extern int snprintf(char *__restrict __s, size_t __maxlen, __const char *__restrict __format, ...) __attribute__ ((__nothrow__)) __attribute__ ((__format__(__printf__, 3, 4)));
extern int vsnprintf(char *__restrict __s, size_t __maxlen, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__nothrow__)) __attribute__ ((__format__(__printf__, 3, 0)));
extern int vdprintf(int __fd, __const char *__restrict __fmt, __gnuc_va_list __arg) __attribute__ ((__format__(__printf__, 2, 0)));
extern int fscanf(FILE * __restrict __stream, __const char *__restrict __format, ...);
extern int scanf(__const char *__restrict __format, ...);
extern int sscanf(__const char *__restrict __s, __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int fscanf(FILE * __restrict __stream, __const char *__restrict __format, ...) __asm__("" "__isoc99_fscanf");
extern int scanf(__const char *__restrict __format, ...) __asm__("" "__isoc99_scanf");
extern int sscanf(__const char *__restrict __s, __const char *__restrict __format, ...) __asm__("" "__isoc99_sscanf") __attribute__ ((__nothrow__));
extern int vfscanf(FILE * __restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__format__(__scanf__, 2, 0)));
extern int vscanf(__const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__format__(__scanf__, 1, 0)));
extern int vsscanf(__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__nothrow__)) __attribute__ ((__format__(__scanf__, 2, 0)));
extern int vfscanf(FILE * __restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__("" "__isoc99_vfscanf") __attribute__ ((__format__(__scanf__, 2, 0)));
extern int vscanf(__const char *__restrict __format, __gnuc_va_list __arg) __asm__("" "__isoc99_vscanf") __attribute__ ((__format__(__scanf__, 1, 0)));
extern int vsscanf(__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__("" "__isoc99_vsscanf") __attribute__ ((__nothrow__)) __attribute__ ((__format__(__scanf__, 2, 0)));
extern int fgetc(FILE * __stream);
extern int getc(FILE * __stream);
extern int getchar(void);
extern int getc_unlocked(FILE * __stream);
extern int getchar_unlocked(void);
extern int fgetc_unlocked(FILE * __stream);
extern int fputc(int __c, FILE * __stream);
extern int putc(int __c, FILE * __stream);
extern int putchar(int __c);
extern int fputc_unlocked(int __c, FILE * __stream);
extern int putc_unlocked(int __c, FILE * __stream);
extern int putchar_unlocked(int __c);
extern int getw(FILE * __stream);
extern int putw(int __w, FILE * __stream);
extern char *fgets(char *__restrict __s, int __n, FILE * __restrict __stream);
extern char *gets(char *__s);
extern __ssize_t __getdelim(char **__restrict __lineptr, size_t * __restrict __n, int __delimiter, FILE * __restrict __stream);
extern __ssize_t getdelim(char **__restrict __lineptr, size_t * __restrict __n, int __delimiter, FILE * __restrict __stream);
extern int fputs(__const char *__restrict __s, FILE * __restrict __stream);
extern int puts(__const char *__s);
extern int ungetc(int __c, FILE * __stream);
extern size_t fread(void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __stream);
extern size_t fwrite(__const void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __s);
extern size_t fread_unlocked(void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __stream);
extern size_t fwrite_unlocked(__const void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __stream);
extern int fseek(FILE * __stream, long int __off, int __whence);
extern long int ftell(FILE * __stream);
extern void rewind(FILE * __stream);
extern int fseeko(FILE * __stream, __off_t __off, int __whence);
extern __off_t ftello(FILE * __stream);
extern int fgetpos(FILE * __restrict __stream, fpos_t * __restrict __pos);
extern int fsetpos(FILE * __stream, __const fpos_t * __pos);
extern void clearerr(FILE * __stream) __attribute__ ((__nothrow__));
extern int feof(FILE * __stream) __attribute__ ((__nothrow__));
extern int ferror(FILE * __stream) __attribute__ ((__nothrow__));
extern void clearerr_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern int feof_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern int ferror_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern void perror(__const char *__s);
extern int sys_nerr;
extern __const char *__const sys_errlist[];
extern int fileno(FILE * __stream) __attribute__ ((__nothrow__));
extern int fileno_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern FILE *popen(__const char *__command, __const char *__modes);
extern int pclose(FILE * __stream);
extern char *ctermid(char *__s) __attribute__ ((__nothrow__));
extern void flockfile(FILE * __stream) __attribute__ ((__nothrow__));
extern int ftrylockfile(FILE * __stream) __attribute__ ((__nothrow__));
extern void funlockfile(FILE * __stream) __attribute__ ((__nothrow__));
int unlink(const char *);
extern FILE *gs_stdin, *gs_stdout, *gs_stderr;
typedef ulong gs_id;
typedef struct gs_string_s {
    byte *data;
    uint size;
} gs_string;
typedef struct gs_const_string_s {
    const byte *data;
    uint size;
} gs_const_string;
typedef struct gs_point_s {
    double x, y;
} gs_point;
typedef struct gs_int_point_s {
    int x, y;
} gs_int_point;
typedef struct gs_log2_scale_point_s {
    int x, y;
} gs_log2_scale_point;
typedef struct gs_rect_s {
    gs_point p, q;
} gs_rect;
typedef struct gs_int_rect_s {
    gs_int_point p, q;
} gs_int_rect;
typedef struct gs_memory_struct_type_s gs_memory_struct_type_t;
typedef const gs_memory_struct_type_t *gs_memory_type_ptr_t;
typedef client_name_t struct_name_t;
uint gs_struct_type_size(gs_memory_type_ptr_t);
struct_name_t gs_struct_type_name(gs_memory_type_ptr_t);
typedef struct gc_state_s gc_state_t;
typedef struct gs_ptr_procs_s {
    void (*unmark) (void *, gc_state_t *);
    bool(*mark) (void *, gc_state_t *);
    void *(*reloc) (const void *, gc_state_t *);
} gs_ptr_procs_t;
typedef const gs_ptr_procs_t *gs_ptr_type_t;
extern const gs_ptr_procs_t ptr_struct_procs;
extern const gs_ptr_procs_t ptr_string_procs;
extern const gs_ptr_procs_t ptr_const_string_procs;
typedef struct gs_gc_root_s gs_gc_root_t;
struct gs_gc_root_s {
    gs_gc_root_t *next;
    gs_ptr_type_t ptype;
    void **p;
};
typedef struct gs_memory_status_s {
    ulong allocated;
    ulong used;
} gs_memory_status_t;
struct gs_memory_s;
typedef struct gs_memory_s gs_memory_t;
typedef struct gs_memory_procs_s {
    byte *(*alloc_bytes) (gs_memory_t * mem, uint nbytes, client_name_t cname);
    byte *(*alloc_bytes_immovable) (gs_memory_t * mem, uint nbytes, client_name_t cname);
    void *(*alloc_struct) (gs_memory_t * mem, gs_memory_type_ptr_t pstype, client_name_t cname);
    void *(*alloc_struct_immovable) (gs_memory_t * mem, gs_memory_type_ptr_t pstype, client_name_t cname);
    byte *(*alloc_byte_array) (gs_memory_t * mem, uint num_elements, uint elt_size, client_name_t cname);
    byte *(*alloc_byte_array_immovable) (gs_memory_t * mem, uint num_elements, uint elt_size, client_name_t cname);
    void *(*alloc_struct_array) (gs_memory_t * mem, uint num_elements, gs_memory_type_ptr_t pstype, client_name_t cname);
    void *(*alloc_struct_array_immovable) (gs_memory_t * mem, uint num_elements, gs_memory_type_ptr_t pstype, client_name_t cname);
    void *(*resize_object) (gs_memory_t * mem, void *obj, uint new_num_elements, client_name_t cname);
    uint(*object_size) (gs_memory_t * mem, const void *obj);
    gs_memory_type_ptr_t(*object_type) (gs_memory_t * mem, const void *obj);
    void (*free_object) (gs_memory_t * mem, void *data, client_name_t cname);
    byte *(*alloc_string) (gs_memory_t * mem, uint nbytes, client_name_t cname);
    byte *(*alloc_string_immovable) (gs_memory_t * mem, uint nbytes, client_name_t cname);
    byte *(*resize_string) (gs_memory_t * mem, byte * data, uint old_num, uint new_num, client_name_t cname);
    void (*free_string) (gs_memory_t * mem, byte * data, uint nbytes, client_name_t cname);
    void (*register_root) (gs_memory_t * mem, gs_gc_root_t * root, gs_ptr_type_t ptype, void **pp, client_name_t cname);
    void (*unregister_root) (gs_memory_t * mem, gs_gc_root_t * root, client_name_t cname);
    void (*status) (gs_memory_t * mem, gs_memory_status_t * status);
    void (*enable_free) (gs_memory_t * mem, bool enable);
} gs_memory_procs_t;
void gs_ignore_free_object(gs_memory_t * mem, void *data, client_name_t cname);
void gs_ignore_free_string(gs_memory_t * mem, byte * data, uint nbytes, client_name_t cname);
struct gs_memory_s {
    gs_memory_procs_t procs;
};
extern gs_memory_t gs_memory_default;
extern char gs_debug[128];
extern FILE *gs_debug_out;
extern void eprintf_program_name(FILE *, const char *);
extern void lprintf_file_and_line(FILE *, const char *, int);
void debug_dump_bytes(const byte * from, const byte * to, const char *msg);
void debug_dump_bitmap(const byte * from, uint raster, uint height, const char *msg);
void debug_print_string(const byte * str, uint len);
typedef struct gs_imager_state_s gs_imager_state;
typedef struct gs_state_s gs_state;
typedef struct obj_header_s obj_header_t;
typedef struct struct_shared_procs_s struct_shared_procs_t;
struct gs_memory_struct_type_s {
    uint ssize;
    struct_name_t sname;
    const struct_shared_procs_t *shared;
    void (*clear_marks) (void *pre, uint size);
    gs_ptr_type_t(*enum_ptrs) (void *ptr, uint size, uint index, const void **pep);
    void (*reloc_ptrs) (void *ptr, uint size, gc_state_t * gcst);
    void (*finalize) (void *ptr);
};
gs_ptr_type_t gs_no_struct_enum_ptrs(void *ptr, uint size, uint index, const void **pep);
void gs_no_struct_reloc_ptrs(void *ptr, uint size, gc_state_t * gcst);
void *gs_reloc_struct_ptr(const void *, gc_state_t *);
void gs_reloc_string(gs_string *, gc_state_t *);
void gs_reloc_const_string(gs_const_string *, gc_state_t *);
extern const gs_memory_struct_type_t st_free;
extern const gs_memory_struct_type_t st_bytes;
typedef long fixed;
typedef ulong ufixed;
typedef struct gs_fixed_point_s {
    fixed x, y;
} gs_fixed_point;
typedef struct gs_fixed_rect_s {
    gs_fixed_point p, q;
} gs_fixed_rect;
typedef struct gs_pattern_instance_s gs_pattern_instance;
typedef struct gs_paint_color_s {
    float values[4];
} gs_paint_color;
typedef struct gs_client_color_s {
    gs_paint_color paint;
    gs_pattern_instance *pattern;
} gs_client_color;
extern const gs_memory_struct_type_t st_client_color;
int imod(int m, int n);
int igcd(int x, int y);
typedef gs_id gx_bitmap_id;
typedef struct gx_bitmap_s {
    byte *data;
    int raster;
    gs_int_point size;
    gx_bitmap_id id;
} gx_bitmap;
typedef struct gx_tile_bitmap_s {
    byte *data;
    int raster;
    gs_int_point size;
    gx_bitmap_id id;
    ushort rep_width, rep_height;
} gx_tile_bitmap;
typedef struct gx_strip_bitmap_s {
    byte *data;
    int raster;
    gs_int_point size;
    gx_bitmap_id id;
    ushort rep_width, rep_height;
    ushort rep_shift;
    ushort shift;
} gx_strip_bitmap;
typedef struct gx_ht_tile_s gx_ht_tile;
struct gx_ht_tile_s {
    gx_strip_bitmap tiles;
    int level;
    uint index;
};
typedef unsigned long gx_color_index;
typedef struct gx_device_color_s gx_device_color;
typedef struct gx_device_halftone_s gx_device_halftone;
typedef struct gx_color_tile_s gx_color_tile;
typedef struct gx_device_color_procs_s gx_device_color_procs;
typedef const gx_device_color_procs *gx_device_color_type;
struct gx_device_color_s {
    gx_device_color_type type;
    union _c {
	gx_color_index pure;
	struct _bin {
	    const gx_device_halftone *b_ht;
	    gx_color_index color[2];
	    uint b_level;
	    gx_ht_tile *b_tile;
	} binary;
	struct _col {
	    const gx_device_halftone *c_ht;
	    byte c_base[4];
	    uint c_level[4];
	    ushort alpha;
	} colored;
	struct _pat {
	    gx_color_tile *p_tile;
	} pattern;
    } colors;
    gs_int_point phase;
    struct _mask {
	gs_client_color ccolor;
	gx_bitmap_id id;
	gx_color_tile *m_tile;
    } mask;
};
extern const gx_device_color_procs *gx_dc_type_none;
extern const gx_device_color_procs *gx_dc_type_null;
extern const gx_device_color_procs *gx_dc_type_pure;
extern const gx_device_color_procs *gx_dc_type_ht_binary;
extern const gx_device_color_procs *gx_dc_type_ht_colored;
struct gs_matrix_s {
    float xx, xy, yx, yy, tx, ty;
};
typedef struct gs_matrix_s gs_matrix;
void gs_make_identity(gs_matrix *);
int gs_make_translation(floatp, floatp, gs_matrix *), gs_make_scaling(floatp, floatp, gs_matrix *), gs_make_rotation(floatp, gs_matrix *);
int gs_matrix_multiply(const gs_matrix *, const gs_matrix *, gs_matrix *), gs_matrix_invert(const gs_matrix *, gs_matrix *), gs_matrix_translate(const gs_matrix *, floatp, floatp, gs_matrix *), gs_matrix_scale(const gs_matrix *, floatp, floatp, gs_matrix *), gs_matrix_rotate(const gs_matrix *, floatp, gs_matrix *);
int gs_point_transform(floatp, floatp, const gs_matrix *, gs_point *), gs_point_transform_inverse(floatp, floatp, const gs_matrix *, gs_point *), gs_distance_transform(floatp, floatp, const gs_matrix *, gs_point *), gs_distance_transform_inverse(floatp, floatp, const gs_matrix *, gs_point *), gs_points_bbox(const gs_point[4], gs_rect *), gs_bbox_transform_only(const gs_rect *, const gs_matrix *, gs_point[4]), gs_bbox_transform(const gs_rect *, const gs_matrix *, gs_rect *), gs_bbox_transform_inverse(const gs_rect *, const gs_matrix *, gs_rect *);
typedef struct gs_color_space_s gs_color_space;
typedef enum { gs_image_format_chunky = 0, gs_image_format_component_planar = 1, gs_image_format_bit_planar = 2 } gs_image_format_t;
typedef struct gs_image_s {
    int Width;
    int Height;
    gs_matrix ImageMatrix;
    int BitsPerComponent;
    const gs_color_space *ColorSpace;
    float Decode[8];
    bool Interpolate;
    bool ImageMask;
    bool adjust;
    bool CombineWithColor;
} gs_image_t;
void gs_image_t_init_gray(gs_image_t * pim), gs_image_t_init_color(gs_image_t * pim), gs_image_t_init_mask(gs_image_t * pim, bool write_1s);
typedef enum { rop2_0 = 0, rop2_S = 0xc, rop2_D = 0xa, rop2_1 = 0xf, rop2_default = rop2_S } gs_rop2_t;
typedef enum { rop3_0 = 0, rop3_T = 0xf0, rop3_S = 0xcc, rop3_D = 0xaa, rop3_1 = 0xff, rop3_default = rop3_T | rop3_S } gs_rop3_t;
typedef uint gs_logical_operation_t;
typedef unsigned rop_operand;
typedef rop_operand(*rop_proc) (rop_operand D, rop_operand S, rop_operand T);
typedef enum { rop_usage_none = 0, rop_usage_D = 1, rop_usage_S = 2, rop_usage_DS = 3, rop_usage_T = 4, rop_usage_DT = 5, rop_usage_ST = 6, rop_usage_DST = 7 } rop_usage_t;
typedef ulong gx_xglyph;
struct gx_xfont_procs_s;
typedef struct gx_xfont_procs_s gx_xfont_procs;
struct gx_xfont_s;
typedef struct gx_xfont_s gx_xfont;
typedef unsigned short gx_color_value;
typedef struct gx_device_s gx_device;
typedef struct gx_path_s gx_path;
typedef struct gx_clip_path_s gx_clip_path;
typedef struct gx_fill_params_s gx_fill_params;
typedef struct gx_stroke_params_s gx_stroke_params;
typedef gx_device_color gx_drawing_color;
typedef enum { go_text, go_graphics } graphics_object_type;
typedef struct gs_fixed_edge_s {
    gs_fixed_point start;
    gs_fixed_point end;
} gs_fixed_edge;
typedef struct gx_device_color_info_s {
    int num_components;
    int depth;
    gx_color_value max_gray;
    gx_color_value max_color;
    gx_color_value dither_grays;
    gx_color_value dither_colors;
} gx_device_color_info;
typedef struct gx_device_procs_s gx_device_procs;
typedef struct gx_page_device_procs_s {
    int (*install) (gx_device * dev, gs_state * pgs);
    int (*begin_page) (gx_device * dev, gs_state * pgs);
    int (*end_page) (gx_device * dev, int reason, gs_state * pgs);
} gx_page_device_procs;
int gx_default_install(gx_device * dev, gs_state * pgs);
int gx_default_begin_page(gx_device * dev, gs_state * pgs);
int gx_default_end_page(gx_device * dev, int reason, gs_state * pgs);
typedef struct gs_param_list_s gs_param_list;
struct gx_device_procs_s {
    int (*open_device) (gx_device * dev);
    void (*get_initial_matrix) (gx_device * dev, gs_matrix * pmat);
    int (*sync_output) (gx_device * dev);
    int (*output_page) (gx_device * dev, int num_copies, int flush);
    int (*close_device) (gx_device * dev);
    gx_color_index(*map_rgb_color) (gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
    int (*map_color_rgb) (gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
    int (*fill_rectangle) (gx_device * dev, int x, int y, int width, int height, gx_color_index color);
    int (*tile_rectangle) (gx_device * dev, const gx_tile_bitmap * tile, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
    int (*copy_mono) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1);
    int (*copy_color) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height);
    int (*draw_line) (gx_device * dev, int x0, int y0, int x1, int y1, gx_color_index color);
    int (*get_bits) (gx_device * dev, int y, byte * data, byte ** actual_data);
    int (*get_params) (gx_device * dev, gs_param_list * plist);
    int (*put_params) (gx_device * dev, gs_param_list * plist);
    gx_color_index(*map_cmyk_color) (gx_device * dev, gx_color_value cyan, gx_color_value magenta, gx_color_value yellow, gx_color_value black);
    gx_xfont_procs *(*get_xfont_procs) (gx_device * dev);
    gx_device *(*get_xfont_device) (gx_device * dev);
    gx_color_index(*map_rgb_alpha_color) (gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue, gx_color_value alpha);
    gx_device *(*get_page_device) (gx_device * dev);
    int (*get_alpha_bits) (gx_device * dev, graphics_object_type type);
    int (*copy_alpha) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth);
    int (*get_band) (gx_device * dev, int y, int *band_start);
    int (*copy_rop) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
    int (*fill_path) (gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_fill_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
    int (*stroke_path) (gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_stroke_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
    int (*fill_mask) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath);
    int (*fill_trapezoid) (gx_device * dev, const gs_fixed_edge * left, const gs_fixed_edge * right, fixed ybot, fixed ytop, bool swap_axes, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
    int (*fill_parallelogram) (gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
    int (*fill_triangle) (gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
    int (*draw_thin_line) (gx_device * dev, fixed fx0, fixed fy0, fixed fx1, fixed fy1, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
    int (*begin_image) (gx_device * dev, const gs_imager_state * pis, const gs_image_t * pim, gs_image_format_t format, const gs_int_rect * prect, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath, gs_memory_t * memory, void **pinfo);
    int (*image_data) (gx_device * dev, void *info, const byte ** planes, int data_x, uint raster, int height);
    int (*end_image) (gx_device * dev, void *info, bool draw_last);
    int (*strip_tile_rectangle) (gx_device * dev, const gx_strip_bitmap * tiles, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
    int (*strip_copy_rop) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
    void (*get_clipping_box) (gx_device * dev, gs_fixed_rect * pbox);
};
typedef struct gx_device_memory_s gx_device_memory;
int gx_default_make_buffer_device(gx_device_memory *, gx_device *, gs_memory_t *, bool);
int gx_copy_mono_unaligned(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1);
int gx_copy_color_unaligned(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height);
int gx_copy_alpha_unaligned(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth);
struct gx_device_s {
    int params_size;
    const gx_device_procs *static_procs;
    const char *dname;
    gs_memory_t *memory;
    gs_memory_type_ptr_t stype;
    bool is_open;
    int max_fill_band;
    gx_device_color_info color_info;
    int width;
    int height;
    float MediaSize[2];
    float ImagingBBox[4];
    bool ImagingBBox_set;
    float HWResolution[2];
    float MarginsHWResolution[2];
    float Margins[2];
    float HWMargins[4];
    long PageCount;
    long ShowpageCount;
    bool IgnoreNumCopies;
    gx_page_device_procs page_procs;
    gx_device_procs std_procs;
};
extern const gs_memory_struct_type_t st_device;
void gx_device_finalize(void *ptr);
gx_device *gx_device_enum_ptr(gx_device *);
gx_device *gx_device_reloc_ptr(gx_device *, gc_state_t *);
typedef gx_color_index(*dev_proc_map_rgb_color_t) (gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
typedef int (*dev_proc_map_color_rgb_t) (gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
typedef struct gx_device_forward_s {
    int params_size;
    const gx_device_procs *static_procs;
    const char *dname;
    gs_memory_t *memory;
    gs_memory_type_ptr_t stype;
    bool is_open;
    int max_fill_band;
    gx_device_color_info color_info;
    int width;
    int height;
    float MediaSize[2];
    float ImagingBBox[4];
    bool ImagingBBox_set;
    float HWResolution[2];
    float MarginsHWResolution[2];
    float Margins[2];
    float HWMargins[4];
    long PageCount;
    long ShowpageCount;
    bool IgnoreNumCopies;
    gx_page_device_procs page_procs;
    gx_device_procs std_procs;
    gx_device *target;
} gx_device_forward;
extern const gs_memory_struct_type_t st_device_forward;
typedef struct gx_device_null_s gx_device_null;
struct gx_device_null_s {
    int params_size;
    const gx_device_procs *static_procs;
    const char *dname;
    gs_memory_t *memory;
    gs_memory_type_ptr_t stype;
    bool is_open;
    int max_fill_band;
    gx_device_color_info color_info;
    int width;
    int height;
    float MediaSize[2];
    float ImagingBBox[4];
    bool ImagingBBox_set;
    float HWResolution[2];
    float MarginsHWResolution[2];
    float Margins[2];
    float HWMargins[4];
    long PageCount;
    long ShowpageCount;
    bool IgnoreNumCopies;
    gx_page_device_procs page_procs;
    gx_device_procs std_procs;
    gx_device *target;
};
extern gx_device_null gs_null_device;
extern const gs_memory_struct_type_t st_device_null;
void gs_make_null_device(gx_device_null *, gs_memory_t *);
uint gx_device_raster(const gx_device * dev, bool pad_to_word);
int gx_device_adjust_resolution(gx_device * dev, int actual_width, int actual_height, int fit);
void gx_device_set_margins(gx_device * dev, const float *margins, bool move_origin);
void gx_device_set_width_height(gx_device * dev, int width, int height);
void gx_device_set_resolution(gx_device * dev, floatp x_dpi, floatp y_dpi);
void gx_device_set_media_size(gx_device * dev, floatp media_width, floatp media_height);
int gx_default_open_device(gx_device * dev);
void gx_default_get_initial_matrix(gx_device * dev, gs_matrix * pmat);
void gx_upright_get_initial_matrix(gx_device * dev, gs_matrix * pmat);
int gx_default_sync_output(gx_device * dev);
int gx_default_output_page(gx_device * dev, int num_copies, int flush);
int gx_default_close_device(gx_device * dev);
gx_color_index gx_default_w_b_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_default_w_b_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
int gx_default_tile_rectangle(gx_device * dev, const gx_tile_bitmap * tile, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
int gx_default_copy_mono(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1);
int gx_default_copy_color(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height);
int gx_default_draw_line(gx_device * dev, int x0, int y0, int x1, int y1, gx_color_index color);
int gx_default_get_bits(gx_device * dev, int y, byte * data, byte ** actual_data);
int gx_default_get_params(gx_device * dev, gs_param_list * plist);
int gx_default_put_params(gx_device * dev, gs_param_list * plist);
gx_color_index gx_default_map_cmyk_color(gx_device * dev, gx_color_value cyan, gx_color_value magenta, gx_color_value yellow, gx_color_value black);
gx_xfont_procs *gx_default_get_xfont_procs(gx_device * dev);
gx_device *gx_default_get_xfont_device(gx_device * dev);
gx_color_index gx_default_map_rgb_alpha_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue, gx_color_value alpha);
gx_device *gx_default_get_page_device(gx_device * dev);
gx_device *gx_page_device_get_page_device(gx_device * dev);
int gx_default_get_alpha_bits(gx_device * dev, graphics_object_type type);
int gx_no_copy_alpha(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth);
int gx_default_copy_alpha(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth);
int gx_default_get_band(gx_device * dev, int y, int *band_start);
int gx_no_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
extern int (*gx_default_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_default_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_default_fill_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_fill_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gx_default_stroke_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_stroke_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gx_default_fill_mask(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath);
int gx_default_fill_trapezoid(gx_device * dev, const gs_fixed_edge * left, const gs_fixed_edge * right, fixed ybot, fixed ytop, bool swap_axes, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_default_fill_parallelogram(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_default_fill_triangle(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_default_draw_thin_line(gx_device * dev, fixed fx0, fixed fy0, fixed fx1, fixed fy1, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_default_begin_image(gx_device * dev, const gs_imager_state * pis, const gs_image_t * pim, gs_image_format_t format, const gs_int_rect * prect, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath, gs_memory_t * memory, void **pinfo);
int gx_default_image_data(gx_device * dev, void *info, const byte ** planes, int data_x, uint raster, int height);
int gx_default_end_image(gx_device * dev, void *info, bool draw_last);
int gx_default_strip_tile_rectangle(gx_device * dev, const gx_strip_bitmap * tiles, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
int gx_no_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
extern int (*gx_default_strip_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_default_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
void gx_default_get_clipping_box(gx_device * dev, gs_fixed_rect * pbox);
void gx_get_largest_clipping_box(gx_device * dev, gs_fixed_rect * pbox);
gx_color_index gx_default_b_w_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_default_b_w_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
gx_color_index gx_default_gray_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_default_gray_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
gx_color_index gx_default_rgb_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_default_rgb_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
gx_color_index gx_default_cmyk_map_cmyk_color(gx_device * dev, gx_color_value cyan, gx_color_value magenta, gx_color_value yellow, gx_color_value black);
void gx_forward_get_initial_matrix(gx_device * dev, gs_matrix * pmat);
int gx_forward_sync_output(gx_device * dev);
int gx_forward_output_page(gx_device * dev, int num_copies, int flush);
gx_color_index gx_forward_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_forward_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
int gx_forward_tile_rectangle(gx_device * dev, const gx_tile_bitmap * tile, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
int gx_forward_get_bits(gx_device * dev, int y, byte * data, byte ** actual_data);
int gx_forward_get_params(gx_device * dev, gs_param_list * plist);
int gx_forward_put_params(gx_device * dev, gs_param_list * plist);
gx_color_index gx_forward_map_cmyk_color(gx_device * dev, gx_color_value cyan, gx_color_value magenta, gx_color_value yellow, gx_color_value black);
gx_xfont_procs *gx_forward_get_xfont_procs(gx_device * dev);
gx_device *gx_forward_get_xfont_device(gx_device * dev);
gx_color_index gx_forward_map_rgb_alpha_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue, gx_color_value alpha);
gx_device *gx_forward_get_page_device(gx_device * dev);
int gx_forward_get_alpha_bits(gx_device * dev, graphics_object_type type);
int gx_forward_get_band(gx_device * dev, int y, int *band_start);
extern int (*gx_forward_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_forward_fill_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_fill_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gx_forward_stroke_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_stroke_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gx_forward_fill_mask(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath);
int gx_forward_fill_trapezoid(gx_device * dev, const gs_fixed_edge * left, const gs_fixed_edge * right, fixed ybot, fixed ytop, bool swap_axes, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_forward_fill_parallelogram(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_forward_fill_triangle(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_forward_draw_thin_line(gx_device * dev, fixed fx0, fixed fy0, fixed fx1, fixed fy1, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_forward_begin_image(gx_device * dev, const gs_imager_state * pis, const gs_image_t * pim, gs_image_format_t format, const gs_int_rect * prect, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath, gs_memory_t * memory, void **pinfo);
int gx_forward_image_data(gx_device * dev, void *info, const byte ** planes, int data_x, uint raster, int height);
int gx_forward_end_image(gx_device * dev, void *info, bool draw_last);
int gx_forward_strip_tile_rectangle(gx_device * dev, const gx_strip_bitmap * tiles, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
extern int (*gx_forward_strip_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
void gx_forward_get_clipping_box(gx_device * dev, gs_fixed_rect * pbox);
void gx_device_set_procs(gx_device *);
void gx_device_fill_in_procs(gx_device *);
void gx_device_forward_fill_in_procs(gx_device_forward *);
void gx_device_forward_color_procs(gx_device_forward *);
void gx_device_no_output(gs_state *);
void gx_set_device_only(gs_state *, gx_device *);
int gs_closedevice(gx_device *);
typedef struct gx_device_type_s {
    gs_memory_type_ptr_t stype;
    int (*initialize) (gx_device *);
} gx_device_type;
int gdev_initialize(gx_device *);
typedef enum { cpm_show, cpm_false_charpath, cpm_true_charpath, cpm_false_charboxpath, cpm_true_charboxpath } gs_char_path_mode;
typedef enum { gs_cap_butt = 0, gs_cap_round = 1, gs_cap_square = 2, gs_cap_triangle = 3 } gs_line_cap;
typedef enum { gs_join_miter = 0, gs_join_round = 1, gs_join_bevel = 2, gs_join_none = 3, gs_join_triangle = 4 } gs_line_join;
typedef struct gs_path_enum_s gs_path_enum;
typedef enum { sn_none = 0, sn_not_first = 1, sn_from_arc = 2 } segment_notes;
gx_path *gx_path_alloc(gs_memory_t *, client_name_t);
void gx_path_init(gx_path *, gs_memory_t *), gx_path_reset(gx_path *), gx_path_release(gx_path *), gx_path_share(gx_path *);
int gx_path_add_point(gx_path *, fixed, fixed), gx_path_add_relative_point(gx_path *, fixed, fixed), gx_path_add_line_notes(gx_path *, fixed, fixed, segment_notes), gx_path_add_lines_notes(gx_path *, const gs_fixed_point *, int, segment_notes), gx_path_add_rectangle(gx_path *, fixed, fixed, fixed, fixed), gx_path_add_char_path(gx_path *, gx_path *, gs_char_path_mode), gx_path_add_curve_notes(gx_path *, fixed, fixed, fixed, fixed, fixed, fixed, segment_notes), gx_path_add_partial_arc_notes(gx_path *, fixed, fixed, fixed, fixed, floatp, segment_notes), gx_path_add_path(gx_path *, gx_path *), gx_path_close_subpath_notes(gx_path *, segment_notes), gx_path_pop_close_notes(gx_path *, segment_notes);
gx_path *gx_current_path(const gs_state *);
void gx_path_assign(gx_path *, const gx_path *);
int gx_path_current_point(const gx_path *, gs_fixed_point *), gx_path_bbox(gx_path *, gs_fixed_rect *);
bool gx_path_has_curves(const gx_path *), gx_path_is_void(const gx_path *), gx_path_is_null(const gx_path *), gx_path_is_rectangle(const gx_path *, gs_fixed_rect *), gx_path_is_monotonic(const gx_path *);
typedef enum { pco_none = 0, pco_init = 1, pco_monotonize = 2, pco_accurate = 4 } gx_path_copy_options;
int gx_path_copy_reducing(const gx_path * ppath_old, gx_path * ppath_new, fixed fixed_flatness, gx_path_copy_options options);
int gx_path_expand_dashes(const gx_path *, gx_path *, const gs_imager_state *), gx_path_copy_reversed(const gx_path *, gx_path *, bool), gx_path_translate(gx_path *, fixed, fixed), gx_path_scale_exp2(gx_path *, int, int);
void gx_point_scale_exp2(gs_fixed_point *, int, int), gx_rect_scale_exp2(gs_fixed_rect *, int, int);
int gx_path_enum_init(gs_path_enum *, const gx_path *);
int gx_path_enum_next(gs_path_enum *, gs_fixed_point[3]);
segment_notes gx_path_enum_notes(const gs_path_enum *);
bool gx_path_enum_backup(gs_path_enum *);
typedef struct gx_clip_list_s gx_clip_list;
int gx_clip_to_rectangle(gs_state *, gs_fixed_rect *), gx_clip_to_path(gs_state *), gx_cpath_init(gx_clip_path *, gs_memory_t *), gx_cpath_from_rectangle(gx_clip_path *, gs_fixed_rect *, gs_memory_t *), gx_cpath_intersect(gs_state *, gx_clip_path *, gx_path *, int), gx_cpath_scale_exp2(gx_clip_path *, int, int);
void gx_cpath_release(gx_clip_path *), gx_cpath_share(gx_clip_path *);
int gx_cpath_path(gx_clip_path *, gx_path *);
bool gx_cpath_inner_box(const gx_clip_path *, gs_fixed_rect *), gx_cpath_outer_box(const gx_clip_path *, gs_fixed_rect *), gx_cpath_includes_rectangle(const gx_clip_path *, fixed, fixed, fixed, fixed);
int gx_cpath_set_outside(gx_clip_path *, bool);
bool gx_cpath_is_outside(const gx_clip_path *);
typedef enum { s_start, s_line, s_line_close, s_curve } segment_type;
typedef struct segment_s segment;
typedef struct subpath_s subpath;
struct segment_s {
    segment *prev;
    segment *next;
    ushort type;
    ushort notes;
    gs_fixed_point pt;
};
typedef struct {
    segment *prev;
    segment *next;
    ushort type;
    ushort notes;
    gs_fixed_point pt;
} line_segment;
typedef struct {
    segment *prev;
    segment *next;
    ushort type;
    ushort notes;
    gs_fixed_point pt;
    subpath *sub;
} line_close_segment;
typedef struct {
    segment *prev;
    segment *next;
    ushort type;
    ushort notes;
    gs_fixed_point pt;
    gs_fixed_point p1, p2;
} curve_segment;
struct subpath_s {
    segment *prev;
    segment *next;
    ushort type;
    ushort notes;
    gs_fixed_point pt;
    segment *last;
    int curve_count;
    line_close_segment closer;
    char is_closed;
};
bool gx_subpath_is_rectangle(const subpath * pstart, gs_fixed_rect * pbox, const subpath ** ppnext);
int gx_curve_log2_samples(fixed, fixed, const curve_segment *, fixed);
int gx_curve_monotonic_points(fixed, fixed, fixed, fixed, double[2]);
void gx_curve_split(fixed, fixed, const curve_segment *, double, curve_segment *, curve_segment *);
int gx_flatten_sample(gx_path *, int, curve_segment *, segment_notes);
typedef struct curve_cursor_s {
    int k;
    gs_fixed_point p0;
    const curve_segment *pc;
    fixed a, b, c;
    double da, db, dc;
    bool double_set;
    int fixed_limit;
    struct ccc_ {
	fixed ky0, ky3;
	fixed xl, xd;
    } cache;
} curve_cursor;
void gx_curve_cursor_init(curve_cursor * prc, fixed x0, fixed y0, const curve_segment * pc, int k);
fixed gx_curve_x_at_y(curve_cursor * prc, fixed y);
typedef enum { psf_position_valid = 1, psf_subpath_open = 2, psf_is_drawing = 4, psf_outside_range = 8, psf_last_newpath = 0, psf_last_moveto = psf_position_valid | psf_subpath_open, psf_last_draw = psf_position_valid | psf_subpath_open | psf_is_drawing, psf_last_closepath = psf_position_valid } gx_path_state_flags;
struct gx_path_s {
    gs_memory_t *memory;
    gs_fixed_rect bbox;
    segment *box_last;
    subpath *first_subpath;
    subpath *current_subpath;
    int subpath_count;
    int curve_count;
    gs_fixed_point position;
    gs_point outside_position;
    gs_point outside_start;
    byte start_flags;
    byte state_flags;
    byte bbox_set;
    byte shares_segments;
};
extern const gs_memory_struct_type_t st_path;
struct gs_path_enum_s {
    const segment *pseg;
    const gs_state *pgs;
    const gx_path *path;
    gx_path *copied_path;
    bool moveto_done;
    segment_notes notes;
};
typedef struct gx_clip_rect_s gx_clip_rect;
struct gx_clip_rect_s {
    gx_clip_rect *next, *prev;
    int ymin, ymax;
    int xmin, xmax;
    byte to_visit;
};
extern const gs_memory_struct_type_t st_clip_rect;
struct gx_clip_list_s {
    gx_clip_rect single;
    gx_clip_rect *head;
    gx_clip_rect *tail;
    int count;
    bool outside;
};
typedef struct gx_device_clip_s {
    int params_size;
    const gx_device_procs *static_procs;
    const char *dname;
    gs_memory_t *memory;
    gs_memory_type_ptr_t stype;
    bool is_open;
    int max_fill_band;
    gx_device_color_info color_info;
    int width;
    int height;
    float MediaSize[2];
    float ImagingBBox[4];
    bool ImagingBBox_set;
    float HWResolution[2];
    float MarginsHWResolution[2];
    float Margins[2];
    float HWMargins[4];
    long PageCount;
    long ShowpageCount;
    bool IgnoreNumCopies;
    gx_page_device_procs page_procs;
    gx_device_procs std_procs;
    gx_device *target;
    gx_clip_list list;
    gx_clip_rect *current;
    gs_int_point translation;
} gx_device_clip;
extern const gs_memory_struct_type_t st_device_clip;
void gx_make_clip_translate_device(gx_device_clip * dev, void *container, const gx_clip_list * list, int tx, int ty);
void gx_make_clip_path_device(gx_device_clip *, const gx_clip_path *);
void gx_clip_list_init(gx_clip_list *);
void gx_clip_list_free(gx_clip_list *, gs_memory_t *);
void gx_cpath_set_outer_box(gx_clip_path *);
struct gx_clip_path_s {
    gx_path path;
    int rule;
    gs_fixed_rect inner_box;
    gs_fixed_rect outer_box;
    gx_clip_list list;
    char segments_valid;
    char shares_list;
    gs_id id;
};
extern const gs_memory_struct_type_t st_clip_path;
typedef enum { gs_color_select_all = -1, gs_color_select_texture = 0, gs_color_select_source = 1 } gs_color_select_t;
typedef struct gx_rop_source_s {
    const byte *sdata;
    int sourcex;
    uint sraster;
    gx_bitmap_id id;
    gx_color_index scolors[2];
    bool use_scolors;
} gx_rop_source_t;
extern const gx_rop_source_t gx_rop_no_source_0;
struct gx_device_color_procs_s {
    int (*load) (gx_device_color * pdevc, const gs_imager_state * pis, gx_device * dev, gs_color_select_t select);
    int (*fill_rectangle) (const gx_device_color * pdevc, int x, int y, int w, int h, gx_device * dev, gs_logical_operation_t lop, const gx_rop_source_t * source);
    int (*fill_masked) (const gx_device_color * pdevc, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int w, int h, gx_device * dev, gs_logical_operation_t lop, bool invert);
    gs_ptr_type_t(*enum_ptrs) (void *ptr, uint size, uint index, const void **pep);
    void (*reloc_ptrs) (void *ptr, uint size, gc_state_t * gcst);
};
int gx_dc_default_fill_masked(const gx_device_color * pdevc, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int w, int h, gx_device * dev, gs_logical_operation_t lop, bool invert);
extern const gs_memory_struct_type_t st_device_color;
extern const gx_device_color_procs gx_dc_procs_none, gx_dc_procs_null, gx_dc_procs_pure, gx_dc_procs_ht_binary, gx_dc_procs_ht_colored;
void gx_set_device_color_1(gs_state * pgs);
int gx_remap_color(gs_state *);
typedef struct gx_dash_params_s {
    float *pattern;
    uint pattern_size;
    float offset;
    bool adapt;
    float pattern_length;
    bool init_ink_on;
    int init_index;
    float init_dist_left;
} gx_dash_params;
typedef struct gx_line_params_s {
    float half_width;
    gs_line_cap cap;
    gs_line_join join;
    float miter_limit;
    float miter_check;
    float dot_length;
    float dot_length_absolute;
    gx_dash_params dash;
} gx_line_params;
int gx_set_miter_limit(gx_line_params *, floatp);
int gx_set_dash(gx_dash_params *, const float *, uint, floatp, gs_memory_t *);
int gx_set_dot_length(gx_line_params *, floatp, bool);
typedef struct gs_matrix_fixed_s {
    float xx, xy, yx, yy, tx, ty;
    fixed tx_fixed, ty_fixed;
    bool txy_fixed_valid;
} gs_matrix_fixed;
int gs_point_transform2fixed(const gs_matrix_fixed *, floatp, floatp, gs_fixed_point *);
int gs_distance_transform2fixed(const gs_matrix_fixed *, floatp, floatp, gs_fixed_point *);
typedef struct {
    long l;
    fixed f;
} coeff1;
typedef struct {
    coeff1 xx, xy, yx, yy;
    int skewed;
    int shift;
    int max_bits;
    fixed round;
} fixed_coeff;
typedef struct gx_transfer_map_s gx_transfer_map;
typedef float (*gs_mapping_proc) (floatp, const gx_transfer_map *);
typedef struct gs_halftone_s gs_halftone;
typedef struct gx_transfer_colored_s {
    gx_transfer_map *red;
    gx_transfer_map *green;
    gx_transfer_map *blue;
    gx_transfer_map *gray;
} gx_transfer_colored;
typedef union gx_transfer_s {
    gx_transfer_map *indexed[4];
    gx_transfer_colored colored;
} gx_transfer;
struct gs_imager_state_s {
    gs_memory_t *memory;
    gx_line_params line_params;
    gs_matrix_fixed ctm;
    gs_logical_operation_t log_op;
    gx_color_value alpha;
    bool overprint;
    float flatness;
    gs_fixed_point fill_adjust;
    bool stroke_adjust;
    bool accurate_curves;
    gs_halftone *halftone;
    gs_int_point screen_phase[2];
    gx_device_halftone *dev_ht;
    struct gx_ht_cache_s *ht_cache;
    struct gs_cie_render_s *cie_render;
    gx_transfer_map *black_generation;
    gx_transfer_map *undercolor_removal;
    gx_transfer set_transfer;
    gx_transfer effective_transfer;
    struct gx_cie_joint_caches_s *cie_joint_caches;
    const struct gx_color_map_procs_s *cmap_procs;
    struct gx_pattern_cache_s *pattern_cache;
};
int gs_imager_state_initialize(gs_imager_state * pis, gs_memory_t * mem);
void gs_imager_state_release(gs_imager_state * pis);
int gx_fill_path(gx_path * ppath, gx_device_color * pdevc, gs_state * pgs, int rule, fixed adjust_x, fixed adjust_y);
int gx_stroke_fill(gx_path * ppath, gs_state * pgs);
int gx_stroke_add(gx_path * ppath, gx_path * to_path, gs_state * pgs);
void gx_adjust_if_empty(const gs_fixed_rect *, gs_fixed_point *);
int gx_stroke_path_expansion(const gs_imager_state *, const gx_path *, gs_fixed_point *);
struct gx_fill_params_s {
    int rule;
    gs_fixed_point adjust;
    float flatness;
    bool fill_zero_width;
};
struct gx_stroke_params_s {
    float flatness;
};
int gx_stroke_path_only(gx_path * ppath, gx_path * to_path, gx_device * dev, const gs_imager_state * pis, const gx_stroke_params * params, const gx_device_color * pdevc, const gx_clip_path * pcpath);
typedef struct active_line_s active_line;
struct active_line_s {
    gs_fixed_point start;
    gs_fixed_point end;
    gs_fixed_point diff;
    fixed y_fast_max;
    fixed x_current;
    fixed x_next;
    const segment *pseg;
    int direction;
    int curve_k;
    curve_cursor cursor;
    active_line *prev, *next;
    active_line *alloc_next;
};
static const gs_memory_struct_type_t st_active_line = { sizeof(active_line), "active_line", 0, 0, 0, 0, 0 };

struct line_list_s {
    gs_memory_t *memory;
    active_line *active_area;
    active_line *next_active;
    active_line *limit;
    int close_count;
    active_line *y_list;
    active_line *y_line;
    active_line x_head;
    active_line local_active[20];
};
typedef struct line_list_s line_list;
typedef line_list *ll_ptr;
static void init_line_list(ll_ptr, gs_memory_t *);
static void unclose_path(gx_path *, int);
static void free_line_list(ll_ptr);
static int add_y_list(gx_path *, ll_ptr, fixed, fixed, const gs_fixed_rect *);
static int add_y_line(const segment *, const segment *, int, ll_ptr);
static void insert_x_new(active_line *, ll_ptr);
static bool end_x_line(active_line *);
static int fill_loop_by_scan_lines(ll_ptr, gx_device *, const gx_fill_params *, const gx_device_color *, gs_logical_operation_t, const gs_fixed_rect *, fixed, fixed, fixed, fixed, fixed);
static int fill_loop_by_trapezoids(ll_ptr, gx_device *, const gx_fill_params *, const gx_device_color *, gs_logical_operation_t, const gs_fixed_rect *, fixed, fixed, fixed, fixed, fixed);
void gx_adjust_if_empty(const gs_fixed_rect * pbox, gs_fixed_point * adjust)
{
    const fixed dx = pbox->q.x - pbox->p.x, dy = pbox->q.y - pbox->p.y;
    if (dx < ((1L << 12) >> 1) && dy >= ((fixed) (2) << 12)) {
	adjust->x = (((1L << 12) + 1L - dx) >> 1);
	do {
	} while (0);
    } else if (dy < ((1L << 12) >> 1) && dx >= ((fixed) (2) << 12)) {
	adjust->y = (((1L << 12) + 1L - dy) >> 1);
	do {
	} while (0);
    }
}

int gx_default_fill_path(gx_device * pdev, const gs_imager_state * pis, gx_path * ppath, const gx_fill_params * params, const gx_device_color * pdevc, const gx_clip_path * pcpath)
{
    gs_fixed_point adjust;
    gs_logical_operation_t lop = pis->log_op;
    gs_fixed_rect ibox, bbox;
    gx_device_clip cdev;
    gx_device *dev = pdev;
    gx_device *save_dev = dev;
    gx_path ffpath;
    gx_path *pfpath;
    int code;
    fixed adjust_left, adjust_right, adjust_below, adjust_above;
    int max_fill_band = dev->max_fill_band;
    bool fill_by_trapezoids;
    line_list lst;
    adjust = params->adjust;
    gx_path_bbox(ppath, &ibox);
    if (params->fill_zero_width)
	gx_adjust_if_empty(&ibox, &adjust);
    do {
    } while (0);
    if (pcpath)
	gx_cpath_inner_box(pcpath, &bbox);
    else
	(*((dev)->std_procs.get_clipping_box)) (dev, &bbox);
    if (!(ibox.q.y <= bbox.q.y && ibox.q.x <= bbox.q.x && ibox.p.y >= bbox.p.y && ibox.p.x >= bbox.p.x)) {
	if (pcpath)
	    gx_cpath_outer_box(pcpath, &bbox);
	do {
	} while (0); {
	    if (bbox.p.x > ibox.p.x)
		ibox.p.x = bbox.p.x;
	    if (bbox.q.x < ibox.q.x)
		ibox.q.x = bbox.q.x;
	    if (bbox.p.y > ibox.p.y)
		ibox.p.y = bbox.p.y;
	    if (bbox.q.y < ibox.q.y)
		ibox.q.y = bbox.q.y;
	};
	if (ibox.p.x - adjust.x >= ibox.q.x + adjust.x || ibox.p.y - adjust.y >= ibox.q.y + adjust.y) {
	    return 0;
	}
	if (pcpath) {
	    dev = (gx_device *) & cdev;
	    gx_make_clip_translate_device(&cdev, &cdev, &pcpath->list, 0, 0);
	    cdev.target = save_dev;
	    cdev.max_fill_band = save_dev->max_fill_band;
	    (*((dev)->std_procs.open_device)) (dev);
	}
    }
    if (adjust.x == ((1L << 12) >> 1))
	adjust_left = ((1L << 12) >> 1) - 1L, adjust_right = ((1L << 12) >> 1) + 1L;
    else
	adjust_left = adjust_right = adjust.x;
    if (adjust.y == ((1L << 12) >> 1))
	adjust_below = ((1L << 12) >> 1) - 1L, adjust_above = ((1L << 12) >> 1) + 1L;
    else
	adjust_below = adjust_above = adjust.y;
    init_line_list(&lst, ppath->memory);
    fill_by_trapezoids = ((adjust_below | adjust_above) != 0 || ppath->curve_count == 0 || params->flatness >= 1.0) && !((lop) & ~((lop) << 1) & rop3_D);
    if (!ppath->curve_count)
	pfpath = ppath;
    else if (fill_by_trapezoids) {
	code = gx_path_copy_reducing(ppath, &ffpath, ((fixed) ((params->flatness) * (float) (1 << 12))), (pis->accurate_curves ? pco_init | pco_accurate : pco_init));
	if (code < 0)
	    return code;
	pfpath = &ffpath;
    } else if (gx_path_is_monotonic(ppath))
	pfpath = ppath;
    else {
	code = gx_path_copy_reducing(ppath, &ffpath, (~(-1L << ((1 << 2) * 8 - 1))), pco_init | pco_monotonize);
	if (code < 0)
	    return code;
	pfpath = &ffpath;
    }
    if ((code = add_y_list(pfpath, &lst, adjust_below, adjust_above, &ibox)) < 0)
	goto nope; {
	int (*fill_loop) (ll_ptr, gx_device *, const gx_fill_params *, const gx_device_color *, gs_logical_operation_t, const gs_fixed_rect *, fixed, fixed, fixed, fixed, fixed);
	if (fill_by_trapezoids)
	    fill_loop = fill_loop_by_trapezoids;
	else
	    fill_loop = fill_loop_by_scan_lines;
	code = (*fill_loop) (&lst, dev, params, pdevc, lop, &ibox, adjust_left, adjust_right, adjust_below, adjust_above, (max_fill_band == 0 ? ((fixed) (-1) << (sizeof(fixed) * 8 - 1)) : ((fixed) (-max_fill_band) << 12)));
	}
      nope:if (lst.close_count != 0)
	    unclose_path(pfpath, lst.close_count);
    free_line_list(&lst);
    if (pfpath != ppath)
	gx_path_release(pfpath);
    return code;
}

static void init_line_list(ll_ptr ll, gs_memory_t * mem)
{
    ll->memory = mem;
    ll->active_area = 0;
    ll->next_active = ll->local_active;
    ll->limit = ll->next_active + 20;
    ll->close_count = 0;
    ll->y_list = 0;
    ll->y_line = 0;
    do {
    } while (0);
}

static void unclose_path(gx_path * ppath, int count)
{
    subpath *psub;
    for (psub = ppath->first_subpath; count != 0; psub = (subpath *) psub->last->next)
	if (psub->last == (segment *) & psub->closer) {
	    segment *prev = psub->closer.prev, *next = psub->closer.next;
	    prev->next = next;
	    if (next)
		next->prev = prev;
	    psub->last = prev;
	    count--;
	}
}

static void free_line_list(ll_ptr ll)
{
    gs_memory_t *mem = ll->memory;
    active_line *alp;
    while ((alp = ll->active_area) != 0) {
	active_line *next = alp->alloc_next;
	(*(mem)->procs.free_object) (mem, alp, "active line");
	ll->active_area = next;
    }
}

static int add_y_list(gx_path * ppath, ll_ptr ll, fixed adjust_below, fixed adjust_above, const gs_fixed_rect * pbox)
{
    register segment *pseg = (segment *) ppath->first_subpath;
    int close_count = 0;
    fixed ymin = pbox->p.y;
    fixed ymax = pbox->q.y;
    int code;
    while (pseg) {
	subpath *psub = (subpath *) pseg;
	segment *plast = psub->last;
	int dir = 2;
	int first_dir, prev_dir;
	segment *prev;
	if (plast->type != s_line_close) {
	    line_close_segment *lp = &psub->closer;
	    segment *next = plast->next;
	    lp->next = next;
	    lp->prev = plast;
	    plast->next = (segment *) lp;
	    if (next)
		next->prev = (segment *) lp;
	    lp->type = s_line_close;
	    lp->pt = psub->pt;
	    lp->sub = psub;
	    psub->last = plast = (segment *) lp;
	    ll->close_count++;
	}
	while ((prev_dir = dir, prev = pseg, (pseg = pseg->next) != 0 && pseg->type != s_start)) {
	    fixed iy = pseg->pt.y;
	    fixed py = prev->pt.y;
	    dir = (iy > py ? (iy <= ymin || py >= ymax ? 0 : 1) : iy < py ? (py <= ymin || iy >= ymax ? 0 : (-1)) : 2);
	    if (dir == 2) {
		if (((int) ((((iy - adjust_below) + (((1 << 12) >> 1) - 1L))) >> (12))) < ((int) ((((iy + adjust_above) + (((1 << 12) >> 1) - 1L))) >> (12)))) {
		    do {
		    } while (0);
		    if ((code = add_y_line(prev, pseg, 0, ll)) < 0)
			return code;
		}
		dir = 0;
	    }
	    if (dir > prev_dir) {
		if (prev_dir) {
		    if ((code = add_y_line(prev->prev, prev, prev_dir, ll)) < 0)
			return code;
		}
		if (dir) {
		    if ((code = add_y_line(prev, pseg, dir, ll)) < 0)
			return code;
		};
	    } else if (prev_dir == 2)
		first_dir = dir;
	    if (pseg == plast) {
		if (first_dir > dir) {
		    if (dir) {
			if ((code = add_y_line(prev, pseg, dir, ll)) < 0)
			    return code;
		    }
		    if (first_dir) {
			if ((code = add_y_line(pseg, psub->next, first_dir, ll)) < 0)
			    return code;
		    };
		}
	    }
	}
    }
    return close_count;
}

static int add_y_line(const segment * prev_lp, const segment * lp, int dir, ll_ptr ll)
{
    gs_fixed_point this, prev;
    register active_line *alp = ll->next_active;
    fixed y_start;
    if (alp == ll->limit) {
	alp = (active_line *) (*(ll->memory)->procs.alloc_struct) (ll->memory, &st_active_line, "active line");
	if (alp == 0)
	    return ((-25));
	alp->alloc_next = ll->active_area;
	ll->active_area = alp;
	do {
	} while (0);
    } else
	ll->next_active++;
    this.x = lp->pt.x;
    this.y = lp->pt.y;
    prev.x = prev_lp->pt.x;
    prev.y = prev_lp->pt.y;
    switch ((alp->direction = dir)) {
    case 1:
	y_start = prev.y;
	(alp)->diff.x = (this).x - (prev).x, (alp)->y_fast_max = (~(-1L << ((1 << 2) * 8 - 1))) / (((alp)->diff.x >= 0 ? (alp)->diff.x : -(alp)->diff.x) | 1) + (prev).y, (alp)->diff.y = (this).y - (prev).y, (alp)->start = prev, (alp)->end = this;
	alp->pseg = lp;
	break;
    case (-1):
	y_start = this.y;
	(alp)->diff.x = (prev).x - (this).x, (alp)->y_fast_max = (~(-1L << ((1 << 2) * 8 - 1))) / (((alp)->diff.x >= 0 ? (alp)->diff.x : -(alp)->diff.x) | 1) + (this).y, (alp)->diff.y = (prev).y - (this).y, (alp)->start = this, (alp)->end = prev;
	alp->pseg = prev_lp;
	break;
    case 0:
	y_start = this.y;
	alp->start = prev;
	alp->end = this;
	alp->pseg = prev_lp;
	break;
    }
    {
	register active_line *yp = ll->y_line;
	register active_line *nyp;
	if (yp == 0) {
	    alp->next = alp->prev = 0;
	    ll->y_list = alp;
	} else if (y_start >= yp->start.y) {
	    while (((void) (0)), ((nyp = yp->next) != ((void *) 0) && y_start > nyp->start.y))
		yp = nyp;
	    alp->next = nyp;
	    alp->prev = yp;
	    yp->next = alp;
	    if (nyp)
		nyp->prev = alp;
	} else {
	    while (((void) (0)), ((nyp = yp->prev) != ((void *) 0) && y_start < nyp->start.y))
		yp = nyp;
	    alp->prev = nyp;
	    alp->next = yp;
	    yp->prev = alp;
	    if (nyp)
		nyp->next = alp;
	    else
		ll->y_list = alp;
	}
    }
    ll->y_line = alp;
    do {
    } while (0);
    return 0;
}

static void insert_x_new(active_line * alp, ll_ptr ll)
{
    register active_line *next;
    register active_line *prev = &ll->x_head;
    register fixed x = alp->start.x;
    alp->x_current = x;
    while (((void) (0)), (next = prev->next) != 0 && (next->x_current < x || (next->x_current == x && (next->start.x > alp->start.x || next->end.x < alp->end.x))))
	prev = next;
    alp->next = next;
    alp->prev = prev;
    if (next != 0)
	next->prev = alp;
    prev->next = alp;
}

static bool end_x_line(active_line * alp)
{
    const segment *pseg = alp->pseg;
    const segment *next = (alp->direction == 1 ? (pseg->type == s_line_close ? ((const line_close_segment *) pseg)->sub->next : pseg->next) : (pseg->type == s_start ? ((const subpath *) pseg)->last->prev : pseg->prev));
    gs_fixed_point npt;
    npt.y = next->pt.y;
    do {
    } while (0);
    if (npt.y <= pseg->pt.y) {
	active_line *nlp = alp->next;
	alp->prev->next = nlp;
	if (nlp)
	    nlp->prev = alp->prev;
	do {
	} while (0);
	return ((bool) 1);
    }
    alp->pseg = next;
    npt.x = next->pt.x;
    (alp)->diff.x = (npt).x - (alp->end).x, (alp)->y_fast_max = (~(-1L << ((1 << 2) * 8 - 1))) / (((alp)->diff.x >= 0 ? (alp)->diff.x : -(alp)->diff.x) | 1) + (alp->end).y, (alp)->diff.y = (npt).y - (alp->end).y, (alp)->start = alp->end, (alp)->end = npt;
    do {
    } while (0);
    return ((bool) 0);
}

static void set_scan_line_points(active_line *, fixed);
static int fill_loop_by_scan_lines(ll_ptr ll, gx_device * dev, const gx_fill_params * params, const gx_device_color * pdevc, gs_logical_operation_t lop, const gs_fixed_rect * pbox, fixed adjust_left, fixed adjust_right, fixed adjust_below, fixed adjust_above, fixed band_mask)
{
    int rule = params->rule;
    fixed fixed_flat = ((fixed) ((params->flatness) * (float) (1 << 12)));
    bool fill_direct = (((pdevc)->type == (&gx_dc_procs_pure)) && (((lop) & (0x200 | (rop3_1 - rop3_S))) == (rop3_T & ~rop3_S)));
    gx_color_index cindex;
    int (*fill_rect) (gx_device * dev, int x, int y, int width, int height, gx_color_index color);
    active_line *yll = ll->y_list;
    fixed y_limit = pbox->q.y;
    fixed y;
    fixed look_below = (adjust_above == 0L ? 0L : adjust_above - 1L);
    fixed look_above = adjust_below + 1L;
    fixed look_height = look_above + look_below;
    bool do_adjust = look_height > 1L;
    if (yll == 0)
	return 0;
    if (fill_direct)
	cindex = pdevc->colors.pure, fill_rect = ((dev)->std_procs.fill_rectangle);
    y = ((((yll->start.y) + (((1 << 12) >> 1) - 1L)) & (-1L << 12)) + ((1L << 12) >> 1)) - look_below;
    ll->x_head.next = 0;
    ll->x_head.x_current = (-1L << ((1 << 2) * 8 - 1));
    while (1) {
	active_line *alp, *nlp;
	fixed x;
	fixed ya = y + look_height;
	do {
	} while (0);
	while (yll != 0 && yll->start.y < ya) {
	    active_line *ynext = yll->next;
	    if (yll->direction == 0) {
	    } else {
		insert_x_new(yll, ll);
		set_scan_line_points(yll, fixed_flat);
	    }
	    yll = ynext;
	}
	if (y >= y_limit)
	    break;
	if (ll->x_head.next == 0) {
	    if (yll == 0)
		break;
	    y = ((((yll->start.y) + (((1 << 12) >> 1) - 1L)) & (-1L << 12)) + ((1L << 12) >> 1)) - look_below;
	    continue;
	}
	x = (-1L << ((1 << 2) * 8 - 1));
	for (alp = ll->x_head.next; alp != 0; alp = nlp) {
	    fixed nx;
	    nlp = alp->next;
	  e:if (alp->end.y <= y) {
		if (end_x_line(alp))
		    continue;
		set_scan_line_points(alp, fixed_flat);
		goto e;
	    }
	    nx = alp->x_current = (alp->start.y >= y ? alp->start.x : alp->curve_k < 0 ? ((y) == (alp)->end.y ? (alp)->end.x : ((y) <= (alp)->y_fast_max ? ((y) - (alp)->start.y) * ((alp)->diff.x) / ((alp)->diff.y) : (((void) (0)), ((fixed) floor((double) (((alp)->diff.x)) * ((y) - (alp)->start.y) / (((alp)->diff.y)))))) + (alp)->start.x) : gx_curve_x_at_y(&alp->cursor, y));
	    if (nx < x) {
		active_line *ilp = alp;
		while (nx < (ilp = ilp->prev)->x_current);
		alp->prev->next = alp->next;
		if (alp->next)
		    alp->next->prev = alp->prev;
		if (ilp->next)
		    ilp->next->prev = alp;
		alp->next = ilp->next;
		ilp->next = alp;
		alp->prev = ilp;
		continue;
	    }
	    x = nx;
	}
	{
	    int inside = 0;
	    int x1_prev = (-1 << ((1 << 2) * 8 - 1));
	    do {
	    } while (0);
	    for (alp = ll->x_head.next; alp != 0; alp = alp->next) {
		int x0 = ((int) ((((alp->x_current - adjust_left) + (((1 << 12) >> 1) - 1L))) >> (12)));
		if (do_adjust && alp->end.x < alp->start.x) {
		    fixed xa = (alp->end.y < ya ? alp->end.x : alp->curve_k < 0 ? ((ya) == (alp)->end.y ? (alp)->end.x : ((ya) <= (alp)->y_fast_max ? ((ya) - (alp)->start.y) * ((alp)->diff.x) / ((alp)->diff.y) : (((void) (0)), ((fixed) floor((double) (((alp)->diff.x)) * ((ya) - (alp)->start.y) / (((alp)->diff.y)))))) + (alp)->start.x) : gx_curve_x_at_y(&alp->cursor, ya));
		    int x0a = ((int) ((((xa - adjust_left) + (((1 << 12) >> 1) - 1L))) >> (12)));
		    if (x0a < x0)
			x0 = x0a;
		}
		for (;;) {
		    do {
		    } while (0);
		    do {
		    } while (0);
		    inside += alp->direction;
		    if (!((inside & rule) != 0))
			break;
		    if ((alp = alp->next) == 0)
			goto out;
		}
		if (x0 < x1_prev)
		    x0 = x1_prev; {
		    int x1 = ((int) (((alp->x_current + adjust_right) + ((1 << 12) >> 1)) >> (12)));
		    if (do_adjust && alp->end.x > alp->start.x) {
			fixed xa = (alp->end.y < ya ? alp->end.x : alp->curve_k < 0 ? ((ya) == (alp)->end.y ? (alp)->end.x : ((ya) <= (alp)->y_fast_max ? ((ya) - (alp)->start.y) * ((alp)->diff.x) / ((alp)->diff.y) : (((void) (0)), ((fixed) floor((double) (((alp)->diff.x)) * ((ya) - (alp)->start.y) / (((alp)->diff.y)))))) + (alp)->start.x) : gx_curve_x_at_y(&alp->cursor, ya));
			int x1a = ((int) (((xa + adjust_right) + ((1 << 12) >> 1)) >> (12)));
			if (x1a > x1)
			    x1 = x1a;
		    }
		    if (x1 > x0) {
			int code = (fill_direct ? (*fill_rect) (dev, x0, ((int) ((y) >> (12))), x1 - x0, 1, cindex) : (*(pdevc)->type->fill_rectangle) (pdevc, x0, ((int) ((y) >> (12))), x1 - x0, 1, dev, lop, ((void *) 0)));
			do {
			} while (0);
			if (code < 0)
			    return code;
			x1_prev = x1;
		    }
		    }
	    }
	  out:;
	}
	y += (1L << 12);
    }
    return 0;
}

static void set_scan_line_points(active_line * alp, fixed fixed_flat)
{
    const segment *pseg = alp->pseg;
    const gs_fixed_point *pp0;
    if (alp->direction < 0) {
	pseg = (pseg->type == s_line_close ? ((const line_close_segment *) pseg)->sub->next : pseg->next);
	if (pseg->type != s_curve) {
	    alp->curve_k = -1;
	    return;
	}
	pp0 = &alp->end;
    } else {
	if (pseg->type != s_curve) {
	    alp->curve_k = -1;
	    return;
	}
	pp0 = &alp->start;
    }
    alp->curve_k = gx_curve_log2_samples(pp0->x, pp0->y, ((const curve_segment *) pseg), fixed_flat);
    gx_curve_cursor_init(&alp->cursor, pp0->x, pp0->y, ((const curve_segment *) pseg), alp->curve_k);
} static int fill_slant_adjust(fixed, fixed, fixed, fixed, fixed, fixed, fixed, fixed, const gs_fixed_rect *, const gx_device_color *, gx_device *, gs_logical_operation_t);

static void resort_x_line(active_line *);
static int loop_fill_trap(gx_device * dev, fixed fx0, fixed fw0, fixed fy0, fixed fx1, fixed fw1, fixed fh, const gs_fixed_rect * pbox, const gx_device_color * pdevc, gs_logical_operation_t lop)
{
    fixed fy1 = fy0 + fh;
    fixed ybot = (((fy0) > (pbox->p.y)) ? (fy0) : (pbox->p.y));
    fixed ytop = (((fy1) < (pbox->q.y)) ? (fy1) : (pbox->q.y));
    gs_fixed_edge left, right;
    if (ybot >= ytop)
	return 0;
    left.start.y = right.start.y = fy0;
    left.end.y = right.end.y = fy1;
    right.start.x = (left.start.x = fx0) + fw0;
    right.end.x = (left.end.x = fx1) + fw1;
    return (*((dev)->std_procs.fill_trapezoid)) (dev, &left, &right, ybot, ytop, ((bool) 0), pdevc, lop);
}

static int fill_loop_by_trapezoids(ll_ptr ll, gx_device * dev, const gx_fill_params * params, const gx_device_color * pdevc, gs_logical_operation_t lop, const gs_fixed_rect * pbox, fixed adjust_left, fixed adjust_right, fixed adjust_below, fixed adjust_above, fixed band_mask)
{
    int rule = params->rule;
    const fixed y_limit = pbox->q.y;
    active_line *yll = ll->y_list;
    fixed y;
    int code;
    bool fill_direct = (((pdevc)->type == (&gx_dc_procs_pure)) && (((lop) & (0x200 | (rop3_1 - rop3_S))) == (rop3_T & ~rop3_S)));
    gx_color_index cindex;
    int (*fill_rect) (gx_device * dev, int x, int y, int width, int height, gx_color_index color);
    int (*fill_trap) (gx_device * dev, const gs_fixed_edge * left, const gs_fixed_edge * right, fixed ybot, fixed ytop, bool swap_axes, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
    fixed half_minus_adjust_y = (1L << 12) - (((1 << 12) >> 1) - 1L) - adjust_below;
    fixed adjust_y2 = adjust_below + adjust_above;
    if (yll == 0)
	return 0;
    if (fill_direct)
	cindex = pdevc->colors.pure, fill_rect = ((dev)->std_procs.fill_rectangle);
    fill_trap = ((dev)->std_procs.fill_trapezoid);
    y = yll->start.y;
    ll->x_head.next = 0;
    ll->x_head.x_current = (-1L << ((1 << 2) * 8 - 1));
    while (1) {
	fixed y1;
	active_line *endp, *alp, *stopx;
	fixed x;
	int draw;
	do {
	} while (0);
	while (yll != 0 && yll->start.y == y) {
	    active_line *ynext = yll->next;
	    if (yll->direction == 0) {
		int yi = ((int) ((((y - adjust_below) + (((1 << 12) >> 1) - 1L))) >> (12)));
		int xi, wi;
		if (yll->start.x <= yll->end.x)
		    xi = ((int) ((((yll->start.x - adjust_left) + (((1 << 12) >> 1) - 1L))) >> (12))), wi = ((int) ((((yll->end.x + adjust_right) + (((1 << 12) >> 1) - 1L))) >> (12))) - xi;
		else
		    xi = ((int) ((((yll->end.x - adjust_left) + (((1 << 12) >> 1) - 1L))) >> (12))), wi = ((int) ((((yll->start.x + adjust_right) + (((1 << 12) >> 1) - 1L))) >> (12))) - xi;
		code = (fill_direct ? (*fill_rect) (dev, xi, yi, wi, 1, cindex) : (*(pdevc)->type->fill_rectangle) (pdevc, xi, yi, wi, 1, dev, lop, ((void *) 0)));
		if (code < 0)
		    return code;
	    } else
		insert_x_new(yll, ll);
	    yll = ynext;
	}
	if (y >= y_limit)
	    break;
	if (ll->x_head.next == 0) {
	    if (yll == 0)
		break;
	    y = yll->start.y;
	    continue;
	}
	y1 = (yll != 0 ? yll->start.y : y_limit); {
	    fixed y_band = y | ~band_mask;
	    if (y1 > y_band)
		y1 = y_band + 1;
	}
	for (alp = ll->x_head.next; alp != 0; alp = alp->next)
	    if (alp->end.y < y1)
		y1 = alp->end.y;
	x = (-1L << ((1 << 2) * 8 - 1));
	draw = (((((y - adjust_below) + (((1 << 12) >> 1) - 1L)) & (-1L << 12)) < (((y1 + adjust_above) + (((1 << 12) >> 1) - 1L)) & (-1L << 12))) ? 1 : -1);
	for (alp = stopx = ll->x_head.next; ((void) (0)), alp != 0; endp = alp, alp = alp->next) {
	    fixed nx = ((y1) == (alp)->end.y ? (alp)->end.x : ((y1) <= (alp)->y_fast_max ? ((y1) - (alp)->start.y) * ((alp)->diff.x) / ((alp)->diff.y) : (((void) (0)), ((fixed) floor((double) (((alp)->diff.x)) * ((y1) - (alp)->start.y) / (((alp)->diff.y)))))) + (alp)->start.x);
	    fixed dx_old, dx_den;
	    if (nx >= x)
		x = nx;
	    else if (draw >= 0 && (dx_old = alp->x_current - endp->x_current) >= 0 && (dx_den = dx_old + endp->x_next - nx) > dx_old) {
		fixed dy = y1 - y, y_new;
		do {
		} while (0);
		y_new = ((dy | dx_old) < 1L << (((int) (sizeof(fixed))) * 4 - 1) ? dy * dx_old / dx_den : ((fixed) floor((double) (dy) * (dx_old) / (dx_den)))) + y;
		do {
		} while (0);
		stopx = alp;
		if (y_new <= y)
		    y_new = y + 1;
		if (y_new < y1) {
		    y1 = y_new;
		    nx = ((y1) == (alp)->end.y ? (alp)->end.x : ((y1) <= (alp)->y_fast_max ? ((y1) - (alp)->start.y) * ((alp)->diff.x) / ((alp)->diff.y) : (((void) (0)), ((fixed) floor((double) (((alp)->diff.x)) * ((y1) - (alp)->start.y) / (((alp)->diff.y)))))) + (alp)->start.x);
		    draw = 0;
		}
		if (nx > x)
		    x = nx;
	    }
	    alp->x_next = nx;
	}
	for (alp = ll->x_head.next; alp != stopx; alp = alp->next)
	    alp->x_next = ((y1) == (alp)->end.y ? (alp)->end.x : ((y1) <= (alp)->y_fast_max ? ((y1) - (alp)->start.y) * ((alp)->diff.x) / ((alp)->diff.y) : (((void) (0)), ((fixed) floor((double) (((alp)->diff.x)) * ((y1) - (alp)->start.y) / (((alp)->diff.y)))))) + (alp)->start.x);
	if (draw > 0 || (draw == 0 && ((((y - adjust_below) + (((1 << 12) >> 1) - 1L)) & (-1L << 12)) < (((y1 + adjust_above) + (((1 << 12) >> 1) - 1L)) & (-1L << 12))))) {
	    fixed height = y1 - y;
	    fixed xlbot, xltop;
	    int inside = 0;
	    active_line *nlp;
	    do {
	    } while (0);
	    for (x = (-1L << ((1 << 2) * 8 - 1)), alp = ll->x_head.next; alp != 0; alp = nlp) {
		fixed xbot = alp->x_current;
		fixed xtop = alp->x_current = alp->x_next;
		fixed wtop;
		int xi, xli;
		int code;
		do {
		} while (0);
		do {
		} while (0);
		nlp = alp->next;
		if (alp->end.y != y1 || !end_x_line(alp)) {
		    if (xtop <= x)
			resort_x_line(alp);
		    else
			x = xtop;
		}
		if (!((inside & rule) != 0)) {
		    inside += alp->direction;
		    if (((inside & rule) != 0))
			xlbot = xbot, xltop = xtop;
		    continue;
		}
		inside += alp->direction;
		if (((inside & rule) != 0))
		    continue;
		wtop = xtop - xltop;
		do {
		} while (0);
		if (wtop < 0) {
		    do {
		    } while (0);
		    xtop = xltop += ((wtop) >> (1));
		    wtop = 0;
		}
		if ((adjust_left | adjust_right) != 0) {
		    xlbot -= adjust_left;
		    xbot += adjust_right;
		    xltop -= adjust_left;
		    xtop += adjust_right;
		    wtop = xtop - xltop;
		}
		if ((xli = ((int) ((((xltop) + (((1 << 12) >> 1) - 1L))) >> (12)))) == ((int) ((((xlbot) + (((1 << 12) >> 1) - 1L))) >> (12))) && (xi = ((int) ((((xtop) + (((1 << 12) >> 1) - 1L))) >> (12)))) == ((int) ((((xbot) + (((1 << 12) >> 1) - 1L))) >> (12)))) {
		    int yi = ((int) ((((y - adjust_below) + (((1 << 12) >> 1) - 1L))) >> (12)));
		    int wi = ((int) ((((y1 + adjust_above) + (((1 << 12) >> 1) - 1L))) >> (12))) - yi;
		    code = (fill_direct ? (*fill_rect) (dev, xli, yi, xi - xli, wi, cindex) : (*(pdevc)->type->fill_rectangle) (pdevc, xli, yi, xi - xli, wi, dev, lop, ((void *) 0)));
		} else if ((adjust_below | adjust_above) != 0) {
		    fixed wbot = xbot - xlbot;
		    if (xltop <= xlbot) {
			if (xtop >= xbot) {
			    code = loop_fill_trap(dev, xlbot, wbot, y - adjust_below, xltop, wtop, height, pbox, pdevc, lop);
			    if (((int) ((y1) - half_minus_adjust_y) & ((1 << 12) - 1)) < adjust_y2) {
				if (code < 0)
				    return code;
				do {
				} while (0);
				code = (fill_direct ? (*fill_rect) (dev, xli, ((int) ((((y1 - adjust_below) + (((1 << 12) >> 1) - 1L))) >> (12))), ((int) ((((xtop) + (((1 << 12) >> 1) - 1L))) >> (12))) - xli, 1, cindex) : (*(pdevc)->type->fill_rectangle) (pdevc, xli, ((int) ((((y1 - adjust_below) + (((1 << 12) >> 1) - 1L))) >> (12))), ((int) ((((xtop) + (((1 << 12) >> 1) - 1L))) >> (12))) - xli, 1, dev, lop, ((void *) 0)));
			    }
			} else {
			    code = fill_slant_adjust(xlbot, xbot, y, xltop, xtop, height, adjust_below, adjust_above, pbox, pdevc, dev, lop);
			}
		    } else {
			if (xtop <= xbot) {
			    if (((int) ((y) - half_minus_adjust_y) & ((1 << 12) - 1)) < adjust_y2) {
				do {
				} while (0);
				xli = ((int) ((((xlbot) + (((1 << 12) >> 1) - 1L))) >> (12)));
				code = (fill_direct ? (*fill_rect) (dev, xli, ((int) ((((y - adjust_below) + (((1 << 12) >> 1) - 1L))) >> (12))), ((int) ((((xbot) + (((1 << 12) >> 1) - 1L))) >> (12))) - xli, 1, cindex) : (*(pdevc)->type->fill_rectangle) (pdevc, xli, ((int) ((((y - adjust_below) + (((1 << 12) >> 1) - 1L))) >> (12))), ((int) ((((xbot) + (((1 << 12) >> 1) - 1L))) >> (12))) - xli, 1, dev, lop, ((void *) 0)));
				if (code < 0)
				    return code;
			    }
			    code = loop_fill_trap(dev, xlbot, wbot, y + adjust_above, xltop, wtop, height, pbox, pdevc, lop);
			} else {
			    code = fill_slant_adjust(xlbot, xbot, y, xltop, xtop, height, adjust_below, adjust_above, pbox, pdevc, dev, lop);
			}
		    }
		} else
		    code = loop_fill_trap(dev, xlbot, xbot - xlbot, y, xltop, wtop, height, pbox, pdevc, lop);
		if (code < 0)
		    return code;
	    }
	} else {
	    active_line *nlp;
	    for (x = (-1L << ((1 << 2) * 8 - 1)), alp = ll->x_head.next; alp != 0; alp = nlp) {
		fixed nx = alp->x_current = alp->x_next;
		nlp = alp->next;
		do {
		} while (0);
		if (alp->end.y == y1) {
		    if (end_x_line(alp))
			continue;
		}
		if (nx <= x)
		    resort_x_line(alp);
		else
		    x = nx;
	    }
	}
	y = y1;
    }
    return 0;
}

static int fill_slant_adjust(fixed xlbot, fixed xbot, fixed y, fixed xltop, fixed xtop, fixed height, fixed adjust_below, fixed adjust_above, const gs_fixed_rect * pbox, const gx_device_color * pdevc, gx_device * dev, gs_logical_operation_t lop)
{
    fixed y1 = y + height;
    int (*fill_trap) (gx_device * dev, const gs_fixed_edge * left, const gs_fixed_edge * right, fixed ybot, fixed ytop, bool swap_axes, const gx_drawing_color * pdcolor, gs_logical_operation_t lop) = ((dev)->std_procs.fill_trapezoid);
    const fixed yb = y - adjust_below;
    const fixed ya = y + adjust_above;
    const fixed y1b = y1 - adjust_below;
    const fixed y1a = y1 + adjust_above;
    const gs_fixed_edge *plbot;
    const gs_fixed_edge *prbot;
    const gs_fixed_edge *pltop;
    const gs_fixed_edge *prtop;
    gs_fixed_edge vert_left, slant_left, vert_right, slant_right;
    int code;
    do {
    } while (0);
    if (xlbot < xltop) {
	vert_left.start.x = vert_left.end.x = xlbot;
	vert_left.start.y = yb, vert_left.end.y = ya;
	vert_right.start.x = vert_right.end.x = xtop;
	vert_right.start.y = y1b, vert_right.end.y = y1a;
	slant_left.start.y = ya, slant_left.end.y = y1a;
	slant_right.start.y = yb, slant_right.end.y = y1b;
	plbot = &vert_left, prbot = &slant_right, pltop = &slant_left, prtop = &vert_right;
    } else {
	vert_left.start.x = vert_left.end.x = xltop;
	vert_left.start.y = y1b, vert_left.end.y = y1a;
	vert_right.start.x = vert_right.end.x = xbot;
	vert_right.start.y = yb, vert_right.end.y = ya;
	slant_left.start.y = yb, slant_left.end.y = y1b;
	slant_right.start.y = ya, slant_right.end.y = y1a;
	plbot = &slant_left, prbot = &vert_right, pltop = &vert_left, prtop = &slant_right;
    }
    slant_left.start.x = xlbot, slant_left.end.x = xltop;
    slant_right.start.x = xbot, slant_right.end.x = xtop;
    if (ya >= y1b) {
	int iyb = ((int) ((((yb) + (((1 << 12) >> 1) - 1L))) >> (12)));
	int iya = ((int) ((((ya) + (((1 << 12) >> 1) - 1L))) >> (12)));
	int iy1b = ((int) ((((y1b) + (((1 << 12) >> 1) - 1L))) >> (12)));
	int iy1a = ((int) ((((y1a) + (((1 << 12) >> 1) - 1L))) >> (12)));
	do {
	} while (0);
	if (iy1b > iyb) {
	    code = (*fill_trap) (dev, plbot, prbot, yb, y1b, ((bool) 0), pdevc, lop);
	    if (code < 0)
		return code;
	}
	if (iya > iy1b) {
	    int ix = ((int) ((((vert_left.start.x) + (((1 << 12) >> 1) - 1L))) >> (12)));
	    int iw = ((int) ((((vert_right.start.x) + (((1 << 12) >> 1) - 1L))) >> (12))) - ix;
	    code = (*(pdevc)->type->fill_rectangle) (pdevc, ix, iy1b, iw, iya - iy1b, dev, lop, ((void *) 0));
	    if (code < 0)
		return code;
	}
	if (iy1a > iya)
	    code = (*fill_trap) (dev, pltop, prtop, ya, y1a, ((bool) 0), pdevc, lop);
	else
	    code = 0;
    } else {
	fixed yac;
	if (pbox->p.y < ya) {
	    code = (*fill_trap) (dev, plbot, prbot, yb, ya, ((bool) 0), pdevc, lop);
	    if (code < 0)
		return code;
	    yac = ya;
	} else
	    yac = pbox->p.y;
	if (pbox->q.y > y1b) {
	    code = (*fill_trap) (dev, &slant_left, &slant_right, yac, y1b, ((bool) 0), pdevc, lop);
	    if (code < 0)
		return code;
	    code = (*fill_trap) (dev, pltop, prtop, y1b, y1a, ((bool) 0), pdevc, lop);
	} else
	    code = (*fill_trap) (dev, &slant_left, &slant_right, yac, pbox->q.y, ((bool) 0), pdevc, lop);
    }
    return code;
}

static void resort_x_line(active_line * alp)
{
    active_line *prev = alp->prev;
    active_line *next = alp->next;
    fixed nx = alp->x_current;
    prev->next = next;
    if (next)
	next->prev = prev;
    while (!(prev->x_current < nx || (prev->x_current == nx && (prev->start.x > alp->start.x || prev->end.x < alp->end.x)))) {
	do {
	} while (0);
	next = prev, prev = prev->prev;
    }
    alp->next = next;
    alp->prev = prev;
    if (next)
	next->prev = alp;
    prev->next = alp;
}
