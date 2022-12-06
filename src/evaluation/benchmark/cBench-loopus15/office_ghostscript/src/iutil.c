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
extern void *memcpy(void *__restrict __dest, __const void *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memmove(void *__dest, __const void *__src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memccpy(void *__restrict __dest, __const void *__restrict __src, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memset(void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int memcmp(__const void *__s1, __const void *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memchr(__const void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *strcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strncpy(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strcat(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strncat(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int strcmp(__const char *__s1, __const char *__s2) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern int strncmp(__const char *__s1, __const char *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern int strcoll(__const char *__s1, __const char *__s2) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern size_t strxfrm(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
typedef struct __locale_struct {
    struct locale_data *__locales[13];
    const unsigned short int *__ctype_b;
    const int *__ctype_tolower;
    const int *__ctype_toupper;
    const char *__names[13];
} *__locale_t;
typedef __locale_t locale_t;
extern int strcoll_l(__const char *__s1, __const char *__s2, __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2, 3)));
extern size_t strxfrm_l(char *__dest, __const char *__src, size_t __n, __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 4)));
extern char *strdup(__const char *__s) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__(1)));
extern char *strndup(__const char *__string, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__(1)));
extern char *strchr(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *strrchr(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern size_t strcspn(__const char *__s, __const char *__reject) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern size_t strspn(__const char *__s, __const char *__accept) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strpbrk(__const char *__s, __const char *__accept) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strstr(__const char *__haystack, __const char *__needle) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strtok(char *__restrict __s, __const char *__restrict __delim) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern char *__strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern char *strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern size_t strlen(__const char *__s) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern size_t strnlen(__const char *__string, size_t __maxlen) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *strerror(int __errnum) __attribute__ ((__nothrow__));
extern int strerror_r(int __errnum, char *__buf, size_t __buflen) __asm__("" "__xpg_strerror_r") __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern char *strerror_l(int __errnum, __locale_t __l) __attribute__ ((__nothrow__));
extern void __bzero(void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void bcopy(__const void *__src, void *__dest, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void bzero(void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int bcmp(__const void *__s1, __const void *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *index(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *rindex(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern int ffs(int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int strcasecmp(__const char *__s1, __const char *__s2) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern int strncasecmp(__const char *__s1, __const char *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strsep(char **__restrict __stringp, __const char *__restrict __delim) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strsignal(int __sig) __attribute__ ((__nothrow__));
extern char *__stpcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *stpcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *__stpncpy(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *stpncpy(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
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
typedef struct ref_s ref;
typedef ushort ref_packed;
typedef enum { t__invalid, t_boolean, t_dictionary, t_file, t_array, t_mixedarray, t_shortarray, t_unused_array_, t_struct, t_astruct, t_fontID, t_integer, t_mark, t_name, t_null, t_operator, t_real, t_save, t_string, t_device, t_oparray, t_next_index } ref_type;
typedef struct attr_print_mask_s {
    ushort mask;
    ushort value;
    char print;
} attr_print_mask;
typedef struct dict_s dict;
typedef struct name_s name;
typedef struct stream_s stream;
typedef struct gx_device_s gx_device;
typedef struct obj_header_s obj_header_t;
typedef int (*op_proc_p) (ref *);
struct tas_s {
    ushort type_attrs;
    ushort rsize;
};
struct ref_s {
    struct tas_s tas;
    union v {
	long intval;
	ushort boolval;
	float realval;
	ulong saveid;
	byte *bytes;
	const byte *const_bytes;
	ref *refs;
	const ref *const_refs;
	name *pname;
	const name *const_pname;
	dict *pdict;
	const dict *const_pdict;
	const ref_packed *packed;
	op_proc_p opproc;
	struct stream_s *pfile;
	struct gx_device_s *pdevice;
	obj_header_t *pstruct;
    } value;
};
extern const char *gs_error_names[];
struct dict_s {
    ref values;
    ref keys;
    ref count;
    ref maxlength;
};
extern const uint dict_max_size;
extern bool dict_auto_expand;
int dict_create(uint maxlength, ref * pdref);
int dict_find(const ref * pdref, const ref * key, ref ** ppvalue);
int dict_find_string(const ref * pdref, const char *kstr, ref ** ppvalue);
int dict_put(ref * pdref, const ref * key, const ref * pvalue);
int dict_put_string(ref * pdref, const char *kstr, const ref * pvalue);
int dict_undef(ref * pdref, const ref * key);
uint dict_length(const ref * pdref);
uint dict_maxlength(const ref * pdref);
uint dict_max_index(const ref * pdref);
int dict_copy_entries(const ref * dfrom, ref * dto, bool new_only);
int dict_resize(ref * pdref, uint newmaxlength);
int dict_grow(ref * pdref);
int dict_unpack(ref * pdref);
int dict_first(const ref * pdref);
int dict_next(const ref * pdref, int index, ref * eltp);
int dict_value_index(const ref * pdref, const ref * pvalue);
int dict_index_entry(const ref * pdref, int index, ref * eltp);
uint dict_round_size_small(uint rsize);
uint dict_round_size_large(uint rsize);
typedef enum { i_vm_foreign = 0, i_vm_system, i_vm_global, i_vm_local, i_vm_max = i_vm_local } i_vm_space;
typedef struct gs_ref_memory_s gs_ref_memory_t;
typedef union vm_spaces_s {
    gs_ref_memory_t *indexed[4];
    struct _ssn {
	gs_ref_memory_t *foreign;
	gs_ref_memory_t *system;
	gs_ref_memory_t *global;
	gs_ref_memory_t *local;
    } named;
} vm_spaces;
void gs_reclaim(vm_spaces * pspaces, bool global);
typedef enum { avm_foreign = (i_vm_foreign << 2), avm_system = (i_vm_system << 2), avm_global = (i_vm_global << 2), avm_local = (i_vm_local << 2), avm_max = avm_local } avm_space;
typedef struct gs_memory_gc_status_s {
    long vm_threshold;
    long max_vm;
    int *psignal;
    int signal_value;
    bool enabled;
    long requested;
} gs_memory_gc_status_t;
void gs_memory_gc_status(const gs_ref_memory_t *, gs_memory_gc_status_t *);
void gs_memory_set_gc_status(gs_ref_memory_t *, const gs_memory_gc_status_t *);
void ialloc_reset(gs_ref_memory_t *);
void ialloc_reset_free(gs_ref_memory_t *);
void ialloc_set_limit(gs_ref_memory_t *);
int gs_alloc_ref_array(gs_ref_memory_t * mem, ref * paref, uint attrs, uint num_refs, client_name_t cname);
int gs_resize_ref_array(gs_ref_memory_t * mem, ref * paref, uint new_num_refs, client_name_t cname);
void gs_free_ref_array(gs_ref_memory_t * mem, ref * paref, client_name_t cname);
int gs_alloc_string_ref(gs_ref_memory_t * mem, ref * psref, uint attrs, uint nbytes, client_name_t cname);
extern const gs_ptr_procs_t ptr_ref_procs;
typedef struct gs_dual_memory_s gs_dual_memory_t;
struct gs_dual_memory_s {
    gs_ref_memory_t *current;
    vm_spaces spaces;
    uint current_space;
    int save_level;
    int (*reclaim) (gs_dual_memory_t *, int);
    uint test_mask;
    uint new_mask;
};
typedef struct name_table_s name_table;
extern const uint name_max_string;
name_table *name_init(ulong, gs_memory_t *);
const name_table *the_name_table(void);
gs_memory_t *name_memory(void);
int name_ref(const byte * ptr, uint size, ref * pnref, int enterflag);
void name_string_ref(const ref * pnref, ref * psref);
int name_enter_string(const char *str, ref * pnref);
int name_from_string(const ref * psref, ref * pnref);
void name_invalidate_value_cache(const ref *);
uint name_index(const ref *);
name *name_index_ptr(uint nidx);
void name_index_ref(uint nidx, ref * pnref);
uint name_next_valid_index(uint);
bool name_mark_index(uint);
void *name_ref_sub_table(const ref *);
void *name_index_ptr_sub_table(uint, name *);
typedef enum { pt_full_ref = 0, pt_executable_operator = 2, pt_integer = 3, pt_unused1 = 4, pt_unused2 = 5, pt_literal_name = 6, pt_executable_name = 7 } packed_type;
void refcpy_to_new(ref * to, const ref * from, uint size);
int refcpy_to_old(ref * aref, uint index, const ref * from, uint size, client_name_t cname);
void refset_null(ref * to, uint size);
bool obj_eq(const ref *, const ref *);
bool obj_ident_eq(const ref *, const ref *);
int obj_cvp(const ref * op, byte * str, uint len, uint * prlen, const byte ** pchars, bool full_print);
int array_get(const ref *, long, ref *);
void packed_get(const ref_packed *, ref *);
int refs_check_space(const ref * refs, uint size, uint space);
int string_to_ref(const char *, ref *, gs_ref_memory_t *, client_name_t);
char *ref_to_string(const ref *, gs_memory_t *, client_name_t);
int num_params(const ref *, int, float *);
int real_param(const ref *, float *);
int int_param(const ref *, int, int *);
void make_reals(ref *, const float *, int);
typedef struct gs_matrix_s gs_matrix;
int read_matrix(const ref *, gs_matrix *);
int write_matrix(ref *, const gs_matrix *);
typedef ref *s_ptr;
typedef const ref *const_s_ptr;
typedef struct ref_stack_block_s {
    ref next;
    ref used;
} ref_stack_block;
typedef struct ref_stack_s ref_stack;
struct ref_stack_s {
    s_ptr p;
    s_ptr bot;
    s_ptr top;
    ref current;
    uint extension_size;
    uint extension_used;
    ref max_stack;
    uint requested;
    uint bot_guard;
    uint top_guard;
    uint block_size;
    uint body_size;
    ref guard_value;
    int underflow_error;
    int overflow_error;
    bool allow_expansion;
    gs_ref_memory_t *memory;
};
void ref_stack_init(ref_stack *, ref *, uint, uint, ref *, gs_ref_memory_t *);
int ref_stack_set_max_count(ref_stack *, long);
uint ref_stack_count(const ref_stack *);
ref *ref_stack_index(const ref_stack *, long);
uint ref_stack_counttomark(const ref_stack *);
int ref_stack_store(const ref_stack *, ref *, uint, uint, int, bool, client_name_t);
void ref_stack_pop(ref_stack *, uint);
int ref_stack_pop_block(ref_stack *);
int ref_stack_extend(ref_stack *, uint);
int ref_stack_push(ref_stack *, uint);
void ref_stack_cleanup(ref_stack *);
typedef s_ptr os_ptr;
typedef const_s_ptr const_os_ptr;
extern ref_stack o_stack;
typedef struct {
    const char *oname;
    op_proc_p proc;
} op_def;
typedef const op_def *op_def_ptr;
ushort op_find_index(const ref *);
extern const op_def **op_def_table;
extern uint op_def_count;
typedef struct op_array_table_s {
    ref table;
    ushort *nx_table;
    uint count;
    uint base_index;
    uint attrs;
    ref *root_p;
} op_array_table;
extern op_array_table op_array_table_global, op_array_table_local;
void op_index_ref(uint, ref *);
int zadd(os_ptr);
int zdef(os_ptr);
int zdup(os_ptr);
int zexch(os_ptr);
int zif(os_ptr);
int zifelse(os_ptr);
int zindex(os_ptr);
int zpop(os_ptr);
int zroll(os_ptr);
int zsub(os_ptr);
int zflush(os_ptr);
int zflushpage(os_ptr);
int zsave(os_ptr);
int zrestore(os_ptr);
int zgsave(os_ptr);
int zgrestore(os_ptr);
int zcopy_gstate(os_ptr);
int zcurrentgstate(os_ptr);
int zgrestoreall(os_ptr);
int zgstate(os_ptr);
int zreadonly(os_ptr);
int zsetdevice(os_ptr);
int zsetgstate(os_ptr);
int zimage(os_ptr);
int zimagemask(os_ptr);
int zwhere(os_ptr);
int zarray(os_ptr);
int zdict(os_ptr);
int zpackedarray(os_ptr);
int zstring(os_ptr);
int zclosepath(os_ptr);
int zcurveto(os_ptr);
int zlineto(os_ptr);
int zmoveto(os_ptr);
int zrcurveto(os_ptr);
int zrlineto(os_ptr);
int zrmoveto(os_ptr);
int zcvx(os_ptr);
int zexec(os_ptr);
int zfor(os_ptr);
int zbegin(os_ptr);
int zcleartomark(os_ptr);
int zend(os_ptr);
int zclosefile(os_ptr);
int zsetfont(os_ptr);
int zcurrentdevice(os_ptr);
int ztoken(os_ptr);
int ztokenexec(os_ptr);
int zwrite(os_ptr);
int check_proc_failed(const ref *);
void refcpy_to_new(ref * to, const ref * from, uint size);
int refcpy_to_old(ref * aref, uint index, const ref * from, uint size, client_name_t cname);
void refset_null(ref * to, uint size);
bool obj_eq(const ref *, const ref *);
bool obj_ident_eq(const ref *, const ref *);
int obj_cvp(const ref * op, byte * str, uint len, uint * prlen, const byte ** pchars, bool full_print);
int array_get(const ref *, long, ref *);
void packed_get(const ref_packed *, ref *);
int refs_check_space(const ref * refs, uint size, uint space);
int string_to_ref(const char *, ref *, gs_ref_memory_t *, client_name_t);
char *ref_to_string(const ref *, gs_memory_t *, client_name_t);
int num_params(const ref *, int, float *);
int real_param(const ref *, float *);
int int_param(const ref *, int, int *);
void make_reals(ref *, const float *, int);
int read_matrix(const ref *, gs_matrix *);
int write_matrix(ref *, const gs_matrix *);
int check_type_failed(const ref *);
extern gs_dual_memory_t gs_imemory;
void ialloc_init(gs_memory_t *, uint, bool);
void ialloc_reset_requested(gs_dual_memory_t *);
void ialloc_validate_spaces(const gs_dual_memory_t *);
extern uint imemory_space(gs_ref_memory_t *);
void ialloc_set_space(gs_dual_memory_t *, uint);
int alloc_save_change(gs_dual_memory_t *, const ref * pcont, ref_packed * ptr, client_name_t cname);
int alloc_save_level(const gs_dual_memory_t *);
typedef ulong gs_char;
typedef ulong gs_glyph;
typedef bool(*gs_glyph_mark_proc_t) (gs_glyph glyph, void *proc_data);
typedef const char *(*gs_proc_glyph_name_t) (gs_glyph, uint *);
typedef gs_glyph(*gs_proc_known_encode_t) (gs_char, int);
typedef struct gx_xfont_callbacks_s {
    const char *(*glyph_name) (gs_glyph, uint *);
    gs_glyph(*known_encode) (gs_char, int);
} gx_xfont_callbacks;
struct gs_matrix_s {
    float xx, xy, yx, yy, tx, ty;
};
void gs_make_identity(gs_matrix *);
int gs_make_translation(floatp, floatp, gs_matrix *), gs_make_scaling(floatp, floatp, gs_matrix *), gs_make_rotation(floatp, gs_matrix *);
int gs_matrix_multiply(const gs_matrix *, const gs_matrix *, gs_matrix *), gs_matrix_invert(const gs_matrix *, gs_matrix *), gs_matrix_translate(const gs_matrix *, floatp, floatp, gs_matrix *), gs_matrix_scale(const gs_matrix *, floatp, floatp, gs_matrix *), gs_matrix_rotate(const gs_matrix *, floatp, gs_matrix *);
int gs_point_transform(floatp, floatp, const gs_matrix *, gs_point *), gs_point_transform_inverse(floatp, floatp, const gs_matrix *, gs_point *), gs_distance_transform(floatp, floatp, const gs_matrix *, gs_point *), gs_distance_transform_inverse(floatp, floatp, const gs_matrix *, gs_point *), gs_points_bbox(const gs_point[4], gs_rect *), gs_bbox_transform_only(const gs_rect *, const gs_matrix *, gs_point[4]), gs_bbox_transform(const gs_rect *, const gs_matrix *, gs_rect *), gs_bbox_transform_inverse(const gs_rect *, const gs_matrix *, gs_rect *);
gs_id gs_next_ids(uint count);
void memflip8x8(const byte * inp, int line_size, byte * outp, int dist);
int bytes_compare(const byte * str1, uint len1, const byte * str2, uint len2);
typedef struct string_match_params_s {
    int any_substring;
    int any_char;
    int quote_next;
    bool ignore_case;
} string_match_params;
bool string_match(const byte * str, uint len, const byte * pstr, uint plen, const string_match_params * psmp);
typedef struct gs_font_dir_s gs_font_dir;
typedef struct gs_font_s gs_font;
gs_font_dir *gs_font_dir_alloc(gs_memory_t *);
gs_font_dir *gs_font_dir_alloc_limits(gs_memory_t *, uint, uint, uint, uint, uint);
int gs_definefont(gs_font_dir *, gs_font *);
int gs_scalefont(gs_font_dir *, const gs_font *, floatp, gs_font **);
int gs_makefont(gs_font_dir *, const gs_font *, const gs_matrix *, gs_font **);
int gs_setfont(gs_state *, gs_font *);
gs_font *gs_currentfont(const gs_state *);
gs_font *gs_rootfont(const gs_state *);
void gs_purge_font(gs_font *);
void gs_cachestatus(const gs_font_dir *, uint[7]);
uint gs_currentcachesize(const gs_font_dir *);
int gs_setcachesize(gs_font_dir *, uint);
uint gs_currentcachelower(const gs_font_dir *);
int gs_setcachelower(gs_font_dir *, uint);
uint gs_currentcacheupper(const gs_font_dir *);
int gs_setcacheupper(gs_font_dir *, uint);
typedef struct gs_uid_s gs_uid;
struct gs_uid_s {
    long id;
    long *xvalues;
};
bool uid_equal(const gs_uid *, const gs_uid *);
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
typedef struct gs_show_enum_s gs_show_enum;
typedef struct gs_font_procs_s {
    int (*init_fstack) (gs_show_enum *, gs_font *);
    int (*next_char) (gs_show_enum *, gs_char *);
    gs_glyph(*encode_char) (gs_show_enum *, gs_font *, gs_char *);
    int (*build_char) (gs_show_enum *, gs_state *, gs_font *, gs_char, gs_glyph);
    gx_xfont_callbacks callbacks;
    int (*define_font) (gs_font_dir *, gs_font *);
    int (*make_font) (gs_font_dir *, const gs_font *, const gs_matrix *, gs_font **);
    int (*next_glyph) (gs_show_enum *, gs_char *, gs_glyph *);
} gs_font_procs;
int gs_default_init_fstack(gs_show_enum *, gs_font *);
int gs_default_next_char(gs_show_enum *, gs_char *);
gs_glyph gs_no_encode_char(gs_show_enum *, gs_font *, gs_char *);
int gs_no_build_char(gs_show_enum *, gs_state *, gs_font *, gs_char, gs_glyph);
int gs_no_define_font(gs_font_dir *, gs_font *);
int gs_no_make_font(gs_font_dir *, const gs_font *, const gs_matrix *, gs_font **);
int gs_base_make_font(gs_font_dir *, const gs_font *, const gs_matrix *, gs_font **);
int gs_default_next_glyph(gs_show_enum *, gs_char *, gs_glyph *);
typedef enum { ft_composite = 0, ft_encrypted = 1, ft_user_defined = 3, ft_disk_based = 4, ft_CID_encrypted = 9, ft_CID_user_defined = 10, ft_CID_TrueType = 11, ft_TrueType = 42 } font_type;
typedef enum { fbit_use_outlines = 0, fbit_use_bitmaps = 1, fbit_transform_bitmaps = 2 } fbit_type;
typedef struct gs_font_name_s {
    byte chars[47 + 1];
    uint size;
} gs_font_name;
struct gs_font_s {
    gs_font *next, *prev;
    gs_memory_t *memory;
    gs_font_dir *dir;
    gs_font *base;
    void *client_data;
    gs_matrix FontMatrix;
    font_type FontType;
    bool BitmapWidths;
    fbit_type ExactSize, InBetweenSize, TransformedChar;
    int WMode;
    int PaintType;
    float StrokeWidth;
    gs_font_procs procs;
    gs_font_name key_name, font_name;
};
extern const gs_memory_struct_type_t st_gs_font;
void gs_font_finalize(void *ptr);
extern const gs_memory_struct_type_t st_gs_font_ptr_element;
typedef struct gs_font_base_s gs_font_base;
struct gs_font_base_s {
    gs_font *next, *prev;
    gs_memory_t *memory;
    gs_font_dir *dir;
    gs_font *base;
    void *client_data;
    gs_matrix FontMatrix;
    font_type FontType;
    bool BitmapWidths;
    fbit_type ExactSize, InBetweenSize, TransformedChar;
    int WMode;
    int PaintType;
    float StrokeWidth;
    gs_font_procs procs;
    gs_font_name key_name, font_name;
    gs_rect FontBBox;
    gs_uid UID;
    int encoding_index;
    int nearest_encoding_index;
};
extern const gs_memory_struct_type_t st_gs_font_base;
int refcpy_to_old(ref * aref, uint index, register const ref * from, register uint size, client_name_t cname)
{
    register ref *to = aref->value.refs + index;
    int code = refs_check_space(from, size, (avm_space) (((aref)->tas.type_attrs) & (((1 << 2) - 1) << 2)));
    if (code < 0)
	return code;
    if (to <= from || from + size <= to)
	while (size--)
	    (((void) ((((((to)->tas.type_attrs) & ((&gs_imemory)->test_mask)) == 0) ? alloc_save_change((&gs_imemory), aref, (ref_packed *) (to), cname) : 0))), ((void) (((*(to) = *(from)), ((to)->tas.type_attrs |= ((&gs_imemory)->new_mask)))))), to++, from++;
    else
	for (from += size, to += size; size--;)
	    from--, to--, (((void) ((((((to)->tas.type_attrs) & ((&gs_imemory)->test_mask)) == 0) ? alloc_save_change((&gs_imemory), aref, (ref_packed *) (to), cname) : 0))), ((void) (((*(to) = *(from)), ((to)->tas.type_attrs |= ((&gs_imemory)->new_mask))))));
    return 0;
}

void refcpy_to_new(register ref * to, register const ref * from, register uint size)
{
    while (size--)
	((void) (((*(to) = *(from)), ((to)->tas.type_attrs |= ((&gs_imemory)->new_mask))))), to++, from++;
} void refset_null(register ref * to, register uint size)
{
    while (size--)
	(((to)->tas.type_attrs = ((t_null) << 8) + (((&gs_imemory)->new_mask)))), to++;
}

bool obj_eq(register const ref * pref1, register const ref * pref2)
{
    ref nref;
    if ((((const byte *) &((pref1)->tas.type_attrs))[1]) != (((const byte *) &((pref2)->tas.type_attrs))[1])) {
	switch ((((const byte *) &((pref1)->tas.type_attrs))[1])) {
	case t_integer:
	    return (((((const byte *) &((pref2)->tas.type_attrs))[1]) == (t_real)) && pref2->value.realval == pref1->value.intval);
	case t_real:
	    return (((((const byte *) &((pref2)->tas.type_attrs))[1]) == (t_integer)) && pref2->value.intval == pref1->value.realval);
	case t_name:
	    if (!((((const byte *) &((pref2)->tas.type_attrs))[1]) == (t_string)))
		return ((bool) 0);
	    name_string_ref(pref1, &nref);
	    pref1 = &nref;
	    break;
	case t_save:
	    return (((((const byte *) &((pref2)->tas.type_attrs))[1]) == (t_save)) && pref2->value.saveid == pref1->value.saveid);
	case t_string:
	    if (!((((const byte *) &((pref2)->tas.type_attrs))[1]) == (t_name)))
		return ((bool) 0);
	    name_string_ref(pref2, &nref);
	    pref2 = &nref;
	    break;
	default:
	    if (((pref1)->tas.type_attrs >= (t_next_index << 8) ? t_operator : (((const byte *) &((pref1)->tas.type_attrs))[1])) != ((pref2)->tas.type_attrs >= (t_next_index << 8) ? t_operator : (((const byte *) &((pref2)->tas.type_attrs))[1])))
		return ((bool) 0);
	}
    }
    switch (((pref1)->tas.type_attrs >= (t_next_index << 8) ? t_operator : (((const byte *) &((pref1)->tas.type_attrs))[1]))) {
    case t_array:
	return (pref1->value.refs == pref2->value.refs && ((pref1)->tas.rsize) == ((pref2)->tas.rsize));
    case t_mixedarray:
    case t_shortarray:
	return (pref1->value.packed == pref2->value.packed && ((pref1)->tas.rsize) == ((pref2)->tas.rsize));
    case t_boolean:
	return (pref1->value.boolval == pref2->value.boolval);
    case t_dictionary:
	return (pref1->value.pdict == pref2->value.pdict);
    case t_file:
	return (pref1->value.pfile == pref2->value.pfile && ((pref1)->tas.rsize) == ((pref2)->tas.rsize));
    case t_integer:
	return (pref1->value.intval == pref2->value.intval);
    case t_mark:
    case t_null:
	return ((bool) 1);
    case t_name:
	return (pref1->value.pname == pref2->value.pname);
    case t_oparray:
    case t_operator:
	return ((((pref1)->tas.rsize) == 0 ? op_find_index(pref1) : ((pref1)->tas.rsize)) == (((pref2)->tas.rsize) == 0 ? op_find_index(pref2) : ((pref2)->tas.rsize)));
    case t_real:
	return (pref1->value.realval == pref2->value.realval);
    case t_string:
	return (!bytes_compare(pref1->value.bytes, ((pref1)->tas.rsize), pref2->value.bytes, ((pref2)->tas.rsize)));
    case t_device:
	return (pref1->value.pdevice == pref2->value.pdevice);
    case t_struct:
    case t_astruct:
	return (pref1->value.pstruct == pref2->value.pstruct);
    case t_fontID:{
	    const gs_font *pfont1 = ((gs_font *) ((pref1)->value.pstruct));
	    const gs_font *pfont2 = ((gs_font *) ((pref2)->value.pstruct));
	    while (pfont1->base != pfont1)
		pfont1 = pfont1->base;
	    while (pfont2->base != pfont2)
		pfont2 = pfont2->base;
	    return (pfont1 == pfont2);
	}
    }
    return ((bool) 0);
}

bool obj_ident_eq(register const ref * pref1, register const ref * pref2)
{
    if ((((const byte *) &((pref1)->tas.type_attrs))[1]) != (((const byte *) &((pref2)->tas.type_attrs))[1]))
	return ((bool) 0);
    if (((((const byte *) &((pref1)->tas.type_attrs))[1]) == (t_string)))
	return (pref1->value.bytes == pref2->value.bytes && ((pref1)->tas.rsize) == ((pref2)->tas.rsize));
    return obj_eq(pref1, pref2);
}

int obj_cvp(const ref * op, byte * str, uint len, uint * prlen, const byte ** pchars, bool full_print)
{
    char buf[30];
    const byte *pstr = (const byte *) buf;
    uint plen;
    ref nref;
    if (full_print)
	switch (((op)->tas.type_attrs >= (t_next_index << 8) ? t_operator : (((const byte *) &((op)->tas.type_attrs))[1]))) {
	case t_boolean:
	case t_integer:
	case t_real:
	    break;
	default:
	    return ((-20));
	}
    switch (((op)->tas.type_attrs >= (t_next_index << 8) ? t_operator : (((const byte *) &((op)->tas.type_attrs))[1]))) {
    case t_boolean:
	pstr = (const byte *) (op->value.boolval ? "true" : "false");
	break;
    case t_integer:
	sprintf(buf, "%ld", op->value.intval);
	break;
    case t_name:
	name_string_ref(op, &nref);
      cvname:pstr = nref.value.bytes;
	plen = ((&nref)->tas.rsize);
	if (pchars != 0)
	    *pchars = pstr;
	goto nl;
    case t_oparray:{
	    uint index = (((op)->tas.rsize) == 0 ? op_find_index(op) : ((op)->tas.rsize));
	    const op_array_table *opt = ((index) < op_array_table_local.base_index ? &op_array_table_global : &op_array_table_local);
	    name_index_ref(opt->nx_table[index - opt->base_index], &nref);
	} name_string_ref(&nref, &nref);
	goto cvname;
    case t_operator:{
	    uint index = (((op)->tas.rsize) == 0 ? op_find_index(op) : ((op)->tas.rsize));
	    if (index > 0 && index < op_def_count) {
		pstr = (const byte *) (op_def_table[index]->oname + 1);
		break;
	    }
	}
	sprintf(buf, "@0x%lx", (ulong) op->value.opproc);
	break;
    case t_real:{
	    float value = op->value.realval;
	    sprintf(buf, "%g", value);
	    if (full_print) {
		float scanned;
		sscanf(buf, "%f", &scanned);
		if (scanned != value)
		    sprintf(buf, "%.9g", value);
	    }
	}
	if (strchr(buf, '.') != ((void *) 0))
	    break; {
	    char *ept = strchr(buf, 'e');
	    if (ept == ((void *) 0))
		strcat(buf, ".0");
	    else {
		char buf1[30];
		strcpy(buf1, ept);
		strcpy(ept, ".0");
		strcat(buf, buf1);
	    }} break;
    case t_string:
	    if (!(((&*op)->tas.type_attrs) & (0x20)))
		return ((-7));
	pstr = op->value.bytes;
	    plen = ((op)->tas.rsize);
	    if (pchars != 0)
		*pchars = pstr;
	goto nl;
    default:
	pstr = (const byte *) "--nostringval--";
    } plen = strlen((const char *) pstr);
  nl:*prlen = plen;
    if (plen > len)
	return ((-15));
    memcpy(str, pstr, plen);
    return 0;
}

ushort op_find_index(const ref * pref)
{
    op_proc_p proc = ((pref)->value.opproc);
    register const op_def_ptr *opp = op_def_table;
    register const op_def_ptr *opend = opp + op_def_count;
    for (; ++opp < opend;) {
	if ((*opp)->proc == proc)
	    return opp - op_def_table;
    }
    return 0;
}

void op_index_ref(uint index, ref * pref)
{
    const op_array_table *opt;
    if (((index) < op_def_count)) {
	((pref)->value.opproc = ((op_def_table[index]->proc)), ((pref)->tas.type_attrs = ((t_operator) << 8) + (0x80)), ((pref)->tas.rsize = (index)));
	return;
    }
    opt = ((index) < op_array_table_local.base_index ? &op_array_table_global : &op_array_table_local);
    ((pref)->value.const_refs = ((opt->table.value.const_refs + index - opt->base_index)), ((pref)->tas.type_attrs = ((t_oparray) << 8) + (opt->attrs)), ((pref)->tas.rsize = (index)));
}

int array_get(const ref * aref, long index_long, ref * pref)
{
    if ((ulong) index_long >= ((aref)->tas.rsize))
	return ((-15));
    switch ((((const byte *) &((aref)->tas.type_attrs))[1])) {
    case t_array:{
	    const ref *pvalue = aref->value.refs + (uint) index_long;
	    (*(pref) = *(pvalue));
	} return 0;
    case t_mixedarray:{
	    const ref_packed *packed = aref->value.packed;
	    uint index = (uint) index_long;
	    for (; index--;)
		packed = ((*(const ref_packed *) (packed) >= ((ref_packed) (2) << 13)) ? packed + 1 : packed + (sizeof(ref) / sizeof(ref_packed)));
	    packed_get(packed, pref);
	}
	return 0;
    case t_shortarray:{
	    const ref_packed *packed = aref->value.packed + (uint) index_long;
	    packed_get(packed, pref);
	} return 0;
    default:
	return ((-20));
    }
}

void packed_get(const ref_packed * packed, ref * pref)
{
    const ref_packed elt = *packed;
    uint value = elt & ((1 << 12) - 1);
    switch (elt >> 13) {
    default:
	(((pref)->tas.type_attrs = ((t_null) << 8) + (0)));
	break;
    case pt_executable_operator:
	op_index_ref(value, pref);
	break;
    case pt_integer:
	((pref)->value.intval = ((int) value + (-(1 << (12 - 1)))), ((pref)->tas.type_attrs = ((t_integer) << 8) + (0)));
	break;
    case pt_literal_name:
	name_index_ref(value, pref);
	break;
    case pt_executable_name:
	name_index_ref(value, pref);
	((pref)->tas.type_attrs |= (0x80));
	break;
    case pt_full_ref:
    case pt_full_ref + 1:
	(*(pref) = *((const ref *) packed));
}} int refs_check_space(register const ref * bot, register uint size, uint space)
{
    for (; size--; bot++)
	if ((avm_space) (((bot)->tas.type_attrs) & (((1 << 2) - 1) << 2)) > (space))
	    return ((-7));
    return 0;
}

int string_to_ref(const char *cstr, ref * pref, gs_ref_memory_t * mem, client_name_t cname)
{
    uint size = strlen(cstr);
    int code = gs_alloc_string_ref(mem, pref, (0x10 + 0x20 + 0x40), size, cname);
    if (code < 0)
	return code;
    memcpy(pref->value.bytes, cstr, size);
    return 0;
}

char *ref_to_string(const ref * pref, gs_memory_t * mem, client_name_t cname)
{
    uint size = ((pref)->tas.rsize);
    char *str = (char *) (*(mem)->procs.alloc_string) (mem, size + 1, cname);
    if (str == 0)
	return 0;
    memcpy(str, (const char *) pref->value.bytes, size);
    str[size] = 0;
    return str;
}

int num_params(const ref * op, int count, float *pval)
{
    int mask = 0;
    pval += count;
    while (--count >= 0) {
	mask <<= 1;
	switch ((((const byte *) &((op)->tas.type_attrs))[1])) {
	case t_real:
	    *--pval = op->value.realval;
	    break;
	case t_integer:
	    *--pval = op->value.intval;
	    mask++;
	    break;
	case t__invalid:
	    return ((-17));
	default:
	    return ((-20));
	}
	op--;
    }
    return (mask < 0 ? 0 : mask);
}

int real_param(const ref * op, float *pparam)
{
    switch ((((const byte *) &((op)->tas.type_attrs))[1])) {
    case t_integer:
	*pparam = op->value.intval;
	break;
    case t_real:
	*pparam = op->value.realval;
	break;
    default:
	return ((-20));
    }
    return 0;
}

int int_param(const ref * op, int max_value, int *pparam)
{
    if (!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_integer)))
	return (check_type_failed(&*op));
    if ((ulong) (*op).value.intval > (max_value))
	return ((-15));
    *pparam = (int) op->value.intval;
    return 0;
}

void make_reals(ref * op, const float *pval, int count)
{
    for (; count--; op++, pval++)
	((op)->value.realval = (*pval), ((op)->tas.type_attrs = ((t_real) << 8) + (0)));
}

int check_proc_failed(const ref * pref)
{
    return ((((pref)->tas.type_attrs & ((((1 << 6) - (4)) << 8) + (0))) == (((t_array) << 8) + (0))) ? (-7) : ((((const byte *) &((pref)->tas.type_attrs))[1]) == (t__invalid)) ? (-17) : (-20));
} int check_type_failed(const ref * op)
{
    return (((((const byte *) &((op)->tas.type_attrs))[1]) == (t__invalid)) ? (-17) : (-20));
} int read_matrix(const ref * op, gs_matrix * pmat)
{
    int code;
    if (!(((&*op)->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x20))) == (((t_array) << 8) + (0x20))))
	return ((!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_array)) ? check_type_failed(&*op) : (-7)));
    if (((op)->tas.rsize) != 6)
	return ((-15));
    code = num_params(op->value.refs + 5, 6, (float *) pmat);
    return (code < 0 ? code : 0);
}

int write_matrix(register ref * op, const gs_matrix * pmat)
{
    ref *aptr;
    const float *pel;
    int i;
    if (!(((&*op)->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x10))) == (((t_array) << 8) + (0x10))))
	return ((!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_array)) ? check_type_failed(&*op) : (-7)));
    if (((op)->tas.rsize) != 6)
	return ((-15));
    aptr = op->value.refs;
    pel = (const float *) pmat;
    for (i = 5; i >= 0; i--, aptr++, pel++) {
	((void) ((((((aptr)->tas.type_attrs) & ((&gs_imemory)->test_mask)) == 0) ? alloc_save_change((&gs_imemory), op, (ref_packed *) (aptr), "write_matrix") : 0)));
	((aptr)->value.realval = (*pel), ((aptr)->tas.type_attrs = ((t_real) << 8) + ((0) | ((&gs_imemory)->new_mask))));
    } return 0;
}
