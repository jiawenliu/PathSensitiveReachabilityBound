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
enum { _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)), _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)), _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)), _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)), _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)), _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)), _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)), _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)), _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)), _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)), _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)), _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8)) };
extern __const unsigned short int **__ctype_b_loc(void) __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc(void) __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc(void) __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern int isalnum(int) __attribute__ ((__nothrow__));
extern int isalpha(int) __attribute__ ((__nothrow__));
extern int iscntrl(int) __attribute__ ((__nothrow__));
extern int isdigit(int) __attribute__ ((__nothrow__));
extern int islower(int) __attribute__ ((__nothrow__));
extern int isgraph(int) __attribute__ ((__nothrow__));
extern int isprint(int) __attribute__ ((__nothrow__));
extern int ispunct(int) __attribute__ ((__nothrow__));
extern int isspace(int) __attribute__ ((__nothrow__));
extern int isupper(int) __attribute__ ((__nothrow__));
extern int isxdigit(int) __attribute__ ((__nothrow__));
extern int tolower(int __c) __attribute__ ((__nothrow__));
extern int toupper(int __c) __attribute__ ((__nothrow__));
extern int isblank(int) __attribute__ ((__nothrow__));
extern int isascii(int __c) __attribute__ ((__nothrow__));
extern int toascii(int __c) __attribute__ ((__nothrow__));
extern int _toupper(int) __attribute__ ((__nothrow__));
extern int _tolower(int) __attribute__ ((__nothrow__));
typedef struct __locale_struct {
    struct locale_data *__locales[13];
    const unsigned short int *__ctype_b;
    const int *__ctype_tolower;
    const int *__ctype_toupper;
    const char *__names[13];
} *__locale_t;
typedef __locale_t locale_t;
extern int isalnum_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isalpha_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int iscntrl_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isdigit_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int islower_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isgraph_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isprint_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int ispunct_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isspace_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isupper_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isxdigit_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isblank_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int __tolower_l(int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int tolower_l(int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int __toupper_l(int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int toupper_l(int __c, __locale_t __l) __attribute__ ((__nothrow__));
typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
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
typedef __clock_t clock_t;
struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long int tm_gmtoff;
    __const char *tm_zone;
};
struct itimerspec {
    struct timespec it_interval;
    struct timespec it_value;
};
struct sigevent;
extern clock_t clock(void) __attribute__ ((__nothrow__));
extern time_t time(time_t * __timer) __attribute__ ((__nothrow__));
extern double difftime(time_t __time1, time_t __time0) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern time_t mktime(struct tm *__tp) __attribute__ ((__nothrow__));
extern size_t strftime(char *__restrict __s, size_t __maxsize, __const char *__restrict __format, __const struct tm *__restrict __tp) __attribute__ ((__nothrow__));
extern size_t strftime_l(char *__restrict __s, size_t __maxsize, __const char *__restrict __format, __const struct tm *__restrict __tp, __locale_t __loc) __attribute__ ((__nothrow__));
extern struct tm *gmtime(__const time_t * __timer) __attribute__ ((__nothrow__));
extern struct tm *localtime(__const time_t * __timer) __attribute__ ((__nothrow__));
extern struct tm *gmtime_r(__const time_t * __restrict __timer, struct tm *__restrict __tp) __attribute__ ((__nothrow__));
extern struct tm *localtime_r(__const time_t * __restrict __timer, struct tm *__restrict __tp) __attribute__ ((__nothrow__));
extern char *asctime(__const struct tm *__tp) __attribute__ ((__nothrow__));
extern char *ctime(__const time_t * __timer) __attribute__ ((__nothrow__));
extern char *asctime_r(__const struct tm *__restrict __tp, char *__restrict __buf) __attribute__ ((__nothrow__));
extern char *ctime_r(__const time_t * __restrict __timer, char *__restrict __buf) __attribute__ ((__nothrow__));
extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;
extern char *tzname[2];
extern void tzset(void) __attribute__ ((__nothrow__));
extern int daylight;
extern long int timezone;
extern int stime(__const time_t * __when) __attribute__ ((__nothrow__));
extern time_t timegm(struct tm *__tp) __attribute__ ((__nothrow__));
extern time_t timelocal(struct tm *__tp) __attribute__ ((__nothrow__));
extern int dysize(int __year) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int nanosleep(__const struct timespec *__requested_time, struct timespec *__remaining);
extern int clock_getres(clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__));
extern int clock_gettime(clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__));
extern int clock_settime(clockid_t __clock_id, __const struct timespec *__tp) __attribute__ ((__nothrow__));
extern int clock_nanosleep(clockid_t __clock_id, int __flags, __const struct timespec *__req, struct timespec *__rem);
extern int clock_getcpuclockid(pid_t __pid, clockid_t * __clock_id) __attribute__ ((__nothrow__));
extern int timer_create(clockid_t __clock_id, struct sigevent *__restrict __evp, timer_t * __restrict __timerid) __attribute__ ((__nothrow__));
extern int timer_delete(timer_t __timerid) __attribute__ ((__nothrow__));
extern int timer_settime(timer_t __timerid, int __flags, __const struct itimerspec *__restrict __value, struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__));
extern int timer_gettime(timer_t __timerid, struct itimerspec *__value) __attribute__ ((__nothrow__));
extern int timer_getoverrun(timer_t __timerid) __attribute__ ((__nothrow__));
typedef unsigned char boolean;
typedef unsigned char byte;
typedef byte *byteptr;
typedef char *string;
typedef unsigned short word16;
typedef unsigned long word32;
typedef word16 unit;
typedef short signedunit;
typedef unit *unitptr;
extern short global_precision;
boolean mp_addc(register unitptr r1, register unitptr r2, register boolean carry);
boolean mp_subb(register unitptr r1, register unitptr r2, register boolean borrow);
boolean mp_rotate_left(register unitptr r1, register boolean carry);
void mp_shift_right_bits(register unitptr r1, register short bits);
short mp_compare(register unitptr r1, register unitptr r2);
boolean mp_inc(register unitptr r);
boolean mp_dec(register unitptr r);
void mp_neg(register unitptr r);
void mp_init(register unitptr r, word16 value);
short significance(register unitptr r);
int mp_udiv(register unitptr remainder, register unitptr quotient, register unitptr dividend, register unitptr divisor);
int mp_recip(register unitptr quotient, register unitptr divisor);
int mp_div(register unitptr remainder, register unitptr quotient, register unitptr dividend, register unitptr divisor);
word16 mp_shortdiv(register unitptr quotient, register unitptr dividend, register word16 divisor);
int mp_mod(register unitptr remainder, register unitptr dividend, register unitptr divisor);
word16 mp_shortmod(register unitptr dividend, register word16 divisor);
int mp_mult(register unitptr prod, register unitptr multiplicand, register unitptr multiplier);
int countbits(unitptr r);
int stage_peasant_modulus(unitptr n);
int stage_merritt_modulus(unitptr n);
int stage_upton_modulus(unitptr n);
int stage_smith_modulus(unitptr n);
int peasant_modmult(register unitptr prod, unitptr multiplicand, register unitptr multiplier);
int merritt_modmult(register unitptr prod, unitptr multiplicand, register unitptr multiplier);
int upton_modmult(register unitptr prod, unitptr multiplicand, register unitptr multiplier);
int smith_modmult(register unitptr prod, unitptr multiplicand, register unitptr multiplier);
int mp_modexp(register unitptr expout, register unitptr expin, register unitptr exponent, register unitptr modulus);
int mp_modexp_crt(unitptr expout, unitptr expin, unitptr p, unitptr q, unitptr ep, unitptr eq, unitptr u);
word16 fetch_word16(byte * buf);
byte *put_word16(word16 w, byte * buf);
word32 fetch_word32(byte * buf);
byte *put_word32(word32 w, byte * buf);
int string_length(char *s);
int str2reg(unitptr reg, string digitstr);
int display_in_base(string s, unitptr n, short radix);
void mp_display(string s, unitptr r);
word16 checksum(register byteptr buf, register word16 count);
void cbc_xor(register unitptr dst, register unitptr src, word16 bytecount);
void hiloswap(byteptr r1, short numbytes);
short mpi2reg(register unitptr r, register byteptr buf);
short reg2mpi(register byteptr buf, register unitptr r);
struct IdeaCfbContext {
    byte oldcipher[8];
    byte iv[8];
    word16 key[(6 * 8 + 4)];
    int bufleft;
};
struct IdeaRandContext {
    byte outbuf[8];
    word16 key[(6 * 8 + 4)];
    int bufleft;
    byte internalbuf[8];
};
void ideaCfbReinit(struct IdeaCfbContext *context, byte const *iv);
void ideaCfbInit(struct IdeaCfbContext *context, byte const (key[16]));
void ideaCfbSync(struct IdeaCfbContext *context);
void ideaCfbDestroy(struct IdeaCfbContext *context);
void ideaCfbEncrypt(struct IdeaCfbContext *context, byte const *src, byte * dest, int count);
void ideaCfbDecrypt(struct IdeaCfbContext *context, byte const *src, byte * dest, int count);
void ideaRandInit(struct IdeaRandContext *context, byte const (key[16]), byte const (seed[8]));
byte ideaRandByte(struct IdeaRandContext *c);
void ideaRandWash(struct IdeaRandContext *c, struct IdeaCfbContext *cfb);
void ideaRandState(struct IdeaRandContext *c, byte key[16], byte seed[8]);
int cryptRandOpen(struct IdeaCfbContext *);
byte cryptRandByte(void);
void cryptRandInit(struct IdeaCfbContext *);
int cryptRandWriteFile(char const *, struct IdeaCfbContext *, unsigned);
void cryptRandSave(struct IdeaCfbContext *);
unsigned trueRandEvent(int event);
void trueRandFlush(void);
void trueRandConsume(unsigned count);
void trueRandAccumLater(unsigned bitcount);
void trueRandAccum(unsigned count);
int trueRandByte(void);
int getstring(char *strbuf, unsigned maxlen, int echo);
boolean legal_ctb(byte ctb);
int signfile(boolean nested, boolean separate_signature, char *mcguffin, char *infile, char *outfile, char lit_mode, char *literalfile);
int get_header_info_from_file(char *infile, byte * header, int count);
int encryptfile(char **mcguffin, char *infile, char *outfile, boolean attempt_compression);
int idea_encryptfile(char *infile, char *outfile, boolean attempt_compression);
int make_literal(char *infile, char *outfile, char lit_mode, char *literalfile);
int decryptfile(char *infile, char *outfile);
int check_signaturefile(char *infile, char *outfile, boolean strip_signature, char *preserved_name);
int idea_decryptfile(char *infile, char *outfile);
int decompress_file(char *infile, char *outfile);
int strip_literal(char *infile, char *outfile, char *preserved_name, char *lit_mode);
void write_mpi(unitptr n, FILE * f, struct IdeaCfbContext *cfb);
int read_mpi(unitptr r, FILE * f, boolean adjust_precision, struct IdeaCfbContext *cfb);
void CToPascal(char *s);
void PascalToC(char *s);
int seedfile_exists(void);
void create_seedfile(void);
char *cdate(word32 * tstamp);
char *ctdate(word32 * tstamp);
word32 get_timestamp(byte * timestamp);
word32 getpastlength(byte ctb, FILE * f);
void write_ctb_len(FILE * f, byte ctb_type, word32 length, boolean big);
int version_error(int val, int checkval);
int version_byte_error(int val);
int check_key_sig(FILE * fkey, long fpkey, int keypktlen, char *keyuserid, FILE * fsig, long fpsig, char *keyfile, char *siguserid, byte * xtimestamp, byte * sigclass);
int squish_file(char *infile, char *outfile);
int do_sign(char *keyfile, long fp, int pktlen, byte * userid, byte * keyID, char *sigguffin, boolean batchmode);
int signkey(char *keyguffin, char *sigguffin, char *keyfile);
extern int compromise(byte * keyID, char *keyfile);
void showKeyHash(unitptr n, unitptr e);
int GetHashedPassPhrase(char *hash, boolean noecho);
char *keyIDstring(byte * keyID);
char *key2IDstring(unitptr n);
extern char const blankkeyID[];
int dokeygen(char *numstr, char *numstr2, char *username);
int dokeyedit(char *mcguffin, char *ringfile);
int extract_from_keyring(char *mcguffin, char *keyfile, char *ringfile, boolean transflag);
int view_keyring(char *mcguffin, char *ringfile, boolean show_signatures, boolean show_hashes);
int dokeycheck(char *mcguffin, char *ringfile, int options);
int remove_sigs(char *mcguffin, char *ringfile);
int remove_from_keyring(byte * keyID, char *mcguffin, char *ringfile, boolean secring_too);
void extract_keyID(byteptr keyID, unitptr n);
void writekeyID(unitptr n, FILE * f);
int getpublickey(int flags, char *keyfile, long *file_position, int *pktlen, byte * keyID, byte * timestamp, byte * userid, unitptr n, unitptr e);
int getsecretkey(int flags, char *keyfile, byte * keyID, byte * timestamp, byte * hpass, boolean * hkey, byte * userid, unitptr n, unitptr e, unitptr d, unitptr p, unitptr q, unitptr u);
int is_key_ctb(byte ctb);
short nextkeypacket(FILE * f, byte * pctb);
short readkeypacket(FILE * f, struct IdeaCfbContext *cfb, byte * pctb, byte * timestamp, char *userid, unitptr n, unitptr e, unitptr d, unitptr p, unitptr q, unitptr u, byte * sigkeyID, byte * keyctrl);
int getpubuserid(char *keyfile, long key_position, byte * userid, long *userid_position, int *userid_len, boolean exact_match);
int getpubusersig(char *keyfile, long user_position, byte * sigkeyID, byte * timestamp, long *sig_position, int *sig_len);
void getKeyHash(byte * hash, unitptr n, unitptr e);
void printKeyHash(byteptr hash, boolean indent);
extern int is_compromised(FILE * f);
int disable_key(char *, char *);
void kv_title(FILE * fo);
int kvformat_keypacket(FILE * f, FILE * pgpout, boolean one_key, char *mcguffin, char *ringfile, boolean show_signatures, boolean show_hashes, int *keycounter);
extern int more_file(char *fileName, boolean eyes_only);
extern int open_more(void);
extern int close_more(void);
extern unsigned long crcbytes(byte * buf, unsigned len, register unsigned long accum);
extern void init_crc(void);
extern int armor_file(char *infile, char *outfile, char *filename, char *clearname, boolean kv_label);
extern int de_armor_file(char *infile, char *outfile, long *curline);
extern boolean is_armor_file(char *infile, long startline);
void user_error(void);
extern char PGP_EXTENSION[];
extern char ASC_EXTENSION[];
extern char SIG_EXTENSION[];
extern char BAK_EXTENSION[];
extern char CONSOLE_FILENAME[];
extern char rel_version[];
extern char globalPubringName[256];
extern char globalSecringName[256];
extern char globalRandseedName[256];
extern char globalCommentString[128];
extern boolean filter_mode;
extern boolean moreflag;
extern FILE *pgpout;
extern char language[];
extern char charset[];
extern char charset_header[];
extern char my_name[];
extern char floppyring[];
extern char literal_mode;
extern boolean emit_radix_64;
extern boolean showpass;
extern boolean keepctx;
extern boolean verbose;
extern boolean compress_enabled;
extern boolean clear_signatures;
extern boolean encrypt_to_self;
extern boolean sign_new_userids;
extern boolean batchmode;
extern boolean quietmode;
extern boolean force_flag;
extern boolean interactive_add;
extern long timeshift;
extern boolean signature_checked;
extern int checksig_pass;
extern int pem_lines;
extern int marg_min;
extern int compl_min;
extern int max_cert_depth;
extern char pager[];
extern int version_byte;
extern boolean nomanual;
extern int makerandom;
struct hashedpw {
    struct hashedpw *next;
    byte hash[16];
};
extern struct hashedpw *keypasswds, *passwds;
extern boolean strip_spaces;
extern boolean use_charset_header;
extern int compressSignature(byte * header);
struct newkey {
    byte keyID[8];
    struct newkey *next;
};
void free_newkeys(struct newkey *nkeys);
int ismember_newkeys(byte const keyid[8], struct newkey const *nkeys);
int maint_update(char *ringfile, struct newkey const *nkeys);
int maint_check(char *ringfile, int options);
void init_trust_lst(void);
int show_key(FILE * f, long keypos, int what);
void show_update(char *s);
int readkpacket(FILE * f, byte * ctb, char *userid, byte * keyID, byte * sigkeyID);
int read_trust(FILE * f, byte * keyctrl);
void write_trust(FILE * f, byte trustbyte);
void write_trust_pos(FILE * f, byte keyctrl, long pos);
int ask_owntrust(char *userid, byte cur_trust);
char *user_from_keyID(byte * keyID);
int setkrent(char *keyring);
void endkrent(void);
int init_userhash(void);
char *store_str(char *str);
extern char trust_lst[8][16];
typedef unsigned long uint32;
struct MD5Context {
    uint32 buf[4];
    uint32 bits[2];
    unsigned char in[64];
};
void MD5Init(struct MD5Context *context);
void MD5Update(struct MD5Context *context, unsigned char const *buf, unsigned len);
void MD5Final(unsigned char digest[16], struct MD5Context *context);
void MD5Transform(uint32 buf[4], uint32 const in[16]);
typedef struct MD5Context MD5_CTX;
int MDfile0_len(struct MD5Context *mdContext, FILE * f, word32 longcount);
int MDfile(struct MD5Context *mdContext, char *filename);
void MD_addbuffer(struct MD5Context *mdContext, byte * buf, int buflen, byte digest[16]);
boolean file_exists(char *filename);
boolean file_ok_write(char *filename);
int wipefile(char *filename);
char *file_tail(char *filename);
boolean no_extension(char *filename);
void drop_extension(char *filename);
void default_extension(char *filename, char *extension);
void force_extension(char *filename, char *extension);
boolean getyesno(char default_answer);
char *maybe_force_extension(char *filename, char *extension);
char *buildfilename(char *result, char *fname);
char *buildsysfilename(char *result, char *fname);
int build_path(char *path, char *fileName, char *origPath);
void file_to_canon(char *filename);
void file_from_canon(char *filename);
int copyfile(FILE * f, FILE * g, word32 longcount);
int copyfilepos(FILE * f, FILE * g, word32 longcount, word32 fpos);
int copyfile_to_canon(FILE * f, FILE * g, word32 longcount);
int copyfile_from_canon(FILE * f, FILE * g, word32 longcount);
int copyfiles_by_name(char *srcFile, char *destFile);
int make_canonical(char *srcFile, char *destFile);
int rename2(char *srcFile, char *destFile);
int readPhantomInput(char *filename);
int writePhantomOutput(char *filename);
word32 fsize(FILE * f);
int is_text_file(char *filename);
FILE *fopenbin(char *, char *);
FILE *fopentxt(char *, char *);
void *xmalloc(unsigned);
char *tempfile(int);
void rmtemp(char *);
char *savetemp(char *, char *);
char *ck_dup_output(char *, boolean, boolean);
void cleanup_tmpf(void);
int savetempbak(char *, char *);
extern int write_error(FILE * f);
extern void settmpdir(char *path);
extern void setoutdir(char *filename);
extern boolean is_tempfile(char *path);
extern boolean has_extension(char *filename, char *extension);
extern char const *const manual_dirs[];
unsigned manuals_missing(void);
extern char INT_C(char c);
extern char EXT_C(char c);
extern int CONVERSION;
extern void init_charset(void);
extern int to_upper(int c);
extern int to_lower(int c);
extern char *LANG(char *s);
extern char language[];
extern void exitPGP(int);
extern int zipup(FILE *, FILE *);
extern char signon_legalese[];
int rsa_public_encrypt(unitptr outbuf, byteptr inbuf, short bytes, unitptr E, unitptr N);
int rsa_private_encrypt(unitptr outbuf, byteptr inbuf, short bytes, unitptr E, unitptr D, unitptr P, unitptr Q, unitptr U, unitptr N);
int rsa_public_decrypt(byteptr outbuf, unitptr inbuf, unitptr E, unitptr N);
int rsa_private_decrypt(byteptr outbuf, unitptr inbuf, unitptr E, unitptr D, unitptr P, unitptr Q, unitptr U, unitptr N);
static unsigned char md5buf[16];
static char already_have_md5 = 0;
static int encryptkeyintofile(FILE * g, char *mcguffin, byte * keybuf, char *keyfile, int ckp_length, int keys_used);
void CToPascal(char *s)
{
    int i, j;
    j = string_length(s);
    for (i = j; i != 0; i--)
	s[i] = s[i - 1];
    s[0] = j;
}

void PascalToC(char *s)
{
    int i, j;
    for (i = 0, j = ((byte *) s)[0]; i < j; i++)
	s[i] = s[i + 1];
    s[i] = '\0';
}

word32 get_timestamp(byte * timestamp)
{
    word32 t;
    t = 0xdeadbeef;
    t += timeshift;
    if (timestamp != ((void *) 0)) {
	put_word32(t, timestamp);
	hiloswap(timestamp, 4);
    }
    return t;
}

static int date_ymd(word32 * tstamp, int *year, int *month, int *day)
{
    word32 days, y;
    int m, d, i;
    static short mdays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    days = (*tstamp) / (unsigned long) 86400L;
    days -= 730L;
    y = ((days * 4) / (unsigned long) 1461L);
    d = (int) (days - ((y / 4) * 1461L));
    *year = (int) (y + 1972);
    for (i = 0; i < 48; i++) {
	m = i % 12;
	d -= mdays[m] + (i == 1);
	if (d < 0) {
	    d += mdays[m] + (i == 1);
	    break;
	}
    }
    *month = m + 1;
    *day = d + 1;
    i = (int) ((days - 2) % (unsigned long) 7L);
    return i;
}

char *cdate(word32 * tstamp)
{
    int month, day, year;
    static char datebuf[20];
    if (*tstamp == 0)
	return "          ";
    (void) date_ymd(tstamp, &year, &month, &day);
    sprintf(datebuf, "%4d/%02d/%02d", year, month, day);
    return (datebuf);
}

char *ctdate(word32 * tstamp)
{
    int hours, minutes;
    static char tdatebuf[40];
    long seconds;
    seconds = (*tstamp) % (unsigned long) 86400L;
    minutes = (int) ((seconds + 30L) / 60L);
    hours = minutes / 60;
    minutes = minutes % 60;
    sprintf(tdatebuf, "%s %02d:%02d GMT", cdate(tstamp), hours, minutes);
    return (tdatebuf);
}

static int warn_signatures(char *keyfile, long fp, char *userid, boolean warn_only)
{
    FILE *f;
    long fpusr;
    int usrpktlen;
    byte keyctrl;
    int trust_status = -1;
    keyctrl = 0x00;
    if (getpubuserid(keyfile, fp, (byte *) userid, &fpusr, &usrpktlen, 0) >= 0) {
	f = fopen(keyfile, "r");
	fseek(f, fpusr + usrpktlen, 0);
	trust_status = read_trust(f, &keyctrl);
	fseek(f, fp, 0);
	if (is_compromised(f)) {
	    CToPascal(userid);
	    fprintf(pgpout, "\n");
	    show_key(f, fp, 0);
	    fclose(f);
	    fprintf(pgpout, LANG("\007\nWARNING:  This key has been revoked by its owner,\npossibly because the secret key was compromised.\n"));
	    if (warn_only) {
		fprintf(pgpout, LANG("This could mean that this signature is a forgery.\n"));
		return 1;
	    } else {
		fprintf(pgpout, LANG("You cannot use this revoked key.\n"));
		return -1;
	    }
	}
	fclose(f);
    }
    CToPascal(userid);
    if ((keyctrl & 0x03) != 0x03) {
	byte userid0[256];
	PascalToC(userid);
	strcpy((char *) userid0, userid);
	CToPascal(userid);
	if ((keyctrl & 0x03) == 0x00)
	    fprintf(pgpout, LANG("\007\nWARNING:  Because this public key is not certified with a trusted\nsignature, it is not known with high confidence that this public key\nactually belongs to: \"%s\".\n"), (char *) userid0);
	if ((keyctrl & 0x03) == 0x01)
	    fprintf(pgpout, LANG("\007\nWARNING:  This public key is not trusted to actually belong to:\n\"%s\".\n"), (char *) userid0);
	if ((keyctrl & 0x03) == 0x02)
	    fprintf(pgpout, LANG("\007\nWARNING:  Because this public key is not certified with enough trusted\nsignatures, it is not known with high confidence that this public key\nactually belongs to: \"%s\".\n"), (char *) userid0);
	if (keyctrl & 0x80) {
	    fprintf(pgpout, LANG("But you previously approved using this public key anyway.\n"));
	}
	if (!filter_mode && !batchmode && !warn_only && !(keyctrl & 0x80)) {
	    fprintf(pgpout, LANG("\nAre you sure you want to use this public key (y/N)? "));
	    if (!getyesno('n'))
		return -1;
	    if (trust_status == 0 && (f = fopen(keyfile, "r+")) != ((void *) 0)) {
		fseek(f, fpusr + usrpktlen, 0);
		keyctrl |= 0x80;
		write_trust(f, keyctrl);
		fclose(f);
	    }
	}
    }
    return 0;
}

boolean legal_ctb(byte ctb)
{
    boolean legal;
    byte ctbtype;
    if (!(((ctb) & 0x80) == 0x80))
	return 0;
    ctbtype = (ctb & 0x7c) >> 2;
    legal = ((ctbtype == 1) || (ctbtype == 2) || (ctbtype == 5) || (ctbtype == 6) || (ctbtype == 10) || (ctbtype == 11) || (ctbtype == 8) || (ctbtype == 9));
    return legal;
}

int version_error(int val, int checkval)
{
    if (val != checkval) {
	fprintf(pgpout, LANG("\n\007Unsupported packet format - you need a newer version of PGP for this file.\n"));
	return 1;
    }
    return 0;
}

int version_byte_error(int val)
{
    if (val != 2 && val != 3) {
	fprintf(pgpout, LANG("\n\007Unsupported packet format - you need a newer version of PGP for this file.\n"));
	return 1;
    }
    return 0;
}

static int make_random_ideakey(byte key[16 + 8], int skip)
{
    int count;
    struct IdeaCfbContext cfb;
    byte buf[10];
    ideaCfbInit(&cfb, md5buf);
    memset((void *) &(md5buf), 0, sizeof(md5buf));
    if (cryptRandOpen(&cfb) < 0) {
	fprintf(pgpout, LANG("Preparing random session key..."));
	trueRandAccum((16 + 8) * 8);
	cryptRandInit(&cfb);
    }
    count = 16 + 8;
    for (count = skip; count < 16 + 8; count++)
	key[count] = cryptRandByte() ^ trueRandByte();
    ideaCfbInit(&cfb, key);
    memcpy(buf, key, 8);
    buf[8] = buf[6];
    buf[9] = buf[7];
    ideaCfbEncrypt(&cfb, buf, buf, 10);
    ideaCfbSync(&cfb);
    cryptRandSave(&cfb);
    ideaCfbDestroy(&cfb);
    return 16;
}

word32 getpastlength(byte ctb, FILE * f)
{
    word32 length;
    unsigned int llength;
    byte buf[8];
    memset(buf, 0, sizeof(buf));
    length = 0L;
    llength = ((int) 1 << (int) ((ctb) & 0x03));
    if (llength == 8)
	return -1L;
    if (fread((byteptr) buf, 1, llength, f) < llength)
	return (-2L);
    if (llength == 1)
	length = (word32) buf[0];
    if (llength == 2)
	length = (word32) fetch_word16(buf);
    if (llength == 4)
	length = fetch_word32(buf);
    return length;
}

void write_ctb_len(FILE * f, byte ctb_type, word32 length, boolean big)
{
    int llength, llenb;
    byte ctb;
    byte buf[4];
    if (big || (length > 0xFFFFL)) {
	llength = 4;
	llenb = 2;
    } else if ((word16) length > 0xFF) {
	llength = 2;
	llenb = 1;
    } else {
	llength = 1;
	llenb = 0;
    }
    _IO_putc((0x80 + (4 * ctb_type) + llenb), f);
    if (llength == 1)
	buf[0] = length;
    if (llength == 2)
	put_word16((word16) length, buf);
    if (llength == 4)
	put_word32(length, buf);
    fwrite(buf, 1, llength, f);
}

static int idea_file(byte * ideakey, boolean decryp, FILE * f, FILE * g, word32 lenfile)
{
    int count, status = 0;
    extern byte textbuf[4096];
    struct IdeaCfbContext cfb;
    ideaCfbInit(&cfb, ideakey);
    if (!decryp) {
	memcpy(textbuf, ideakey + 16, 8);
	textbuf[8] = textbuf[8 - 2];
	textbuf[8 + 1] = textbuf[8 - 1];
	ideaCfbEncrypt(&cfb, textbuf, textbuf, 8 + 2);
	fwrite(textbuf, 1, 8 + 2, g);
    } else {
	count = fread(textbuf, 1, 8 + 2, f);
	lenfile -= count;
	if (count == (8 + 2)) {
	    ideaCfbDecrypt(&cfb, textbuf, textbuf, 8 + 2);
	    if ((textbuf[8] != textbuf[8 - 2]) || (textbuf[8 + 1] != textbuf[8 - 1])) {
		status = -2;
	    }
	} else
	    status = -3;
    }
    ideaCfbSync(&cfb);
    count = (lenfile < 4096) ? (int) lenfile : 4096;
    while (count && status == 0) {
	if ((count = fread(textbuf, 1, count, f)) <= 0) {
	    status = -3;
	    break;
	}
	lenfile -= count;
	if (decryp)
	    ideaCfbDecrypt(&cfb, textbuf, textbuf, count);
	else
	    ideaCfbEncrypt(&cfb, textbuf, textbuf, count);
	if (fwrite(textbuf, 1, count, g) != count)
	    status = -3;
	count = (lenfile < 4096) ? (int) lenfile : 4096;
    } ideaCfbDestroy(&cfb);
    memset((void *) &(textbuf), 0, sizeof(textbuf));
    return status;
}

word16 mpi_checksum;
int read_mpi(unitptr r, FILE * f, boolean adjust_precision, struct IdeaCfbContext *cfb)
{
    byte buf[((2048 + (2 * 16)) / 8) + 2];
    unsigned int count;
    word16 bytecount, bitcount;
    mp_init(r, 0);
    if ((count = fread(buf, 1, 2, f)) < 2)
	return (-1);
    bitcount = fetch_word16(buf);
    if ((((bitcount) + 15) >> 4) > global_precision)
	return -1;
    bytecount = (((bitcount) + 7) >> 3);
    count = fread(buf + 2, 1, bytecount, f);
    if (count < bytecount)
	return -1;
    if (cfb) {
	ideaCfbSync(cfb);
	ideaCfbDecrypt(cfb, buf + 2, buf + 2, bytecount);
    }
    mpi_checksum += checksum(buf, bytecount + 2);
    if (adjust_precision && bytecount) {
	if (bitcount > (2048 + (2 * 16)) - 0)
	    return -1;
	(global_precision = ((((bitcount + 0) + 15) >> 4)));
    }
    if (mpi2reg(r, buf) == -1)
	return -1;
    memset((void *) &(buf), 0, sizeof(buf));
    return (bitcount);
}

void write_mpi(unitptr n, FILE * f, struct IdeaCfbContext *cfb)
{
    byte buf[((2048 + (2 * 16)) / 8) + 2];
    short bytecount;
    bytecount = reg2mpi(buf, n);
    mpi_checksum += checksum(buf, bytecount + 2);
    if (cfb) {
	ideaCfbSync(cfb);
	ideaCfbEncrypt(cfb, buf + 2, buf + 2, bytecount);
    }
    fwrite(buf, 1, bytecount + 2, f);
    memset((void *) &(buf), 0, sizeof(buf));
}

int get_header_info_from_file(char *infile, byte * header, int count)
{
    FILE *f;
    memset(header, 0, count);
    if ((f = fopen(infile, "r")) == ((void *) 0))
	return -1;
    count = fread(header, 1, count, f);
    fclose(f);
    return count;
}

static int make_signature_certificate(byte * certificate, struct MD5Context *MD, byte class, unitptr e, unitptr d, unitptr p, unitptr q, unitptr u, unitptr n)
{
    byte inbuf[((2048 + (2 * 16)) / 8)], outbuf[((2048 + (2 * 16)) / 8) + 2];
    int i, j, certificate_length, blocksize, bytecount;
    word16 ske_length;
    word32 tstamp;
    byte *timestamp = (byte *) & tstamp;
    byte keyID[8];
    byte val;
    int mdlen = 5;
    blocksize = ((countbits(n) + 7) >> 3) - 1;
    if (blocksize < 31) {
	fprintf(pgpout, "\n\007Error: RSA key length must be at least 256 bits.\n");
	return -1;
    }
    get_timestamp(timestamp);
    if (tstamp < ((unsigned long) 0x27804180L)) {
	fprintf(pgpout, LANG("\n\007Error: System clock/calendar is set wrong.\n"));
	return -1;
    }
    hiloswap(timestamp, 4);
    MD_addbuffer(MD, &class, 1, 0);
    MD_addbuffer(MD, timestamp, 4, md5buf);
    already_have_md5 = 1;
    if (!quietmode) {
	fprintf(pgpout, LANG("Just a moment..."));
	fflush(pgpout);
    }
    i = rsa_private_encrypt((unitptr) outbuf, md5buf, sizeof(md5buf), e, d, p, q, u, n);
    if (i < 0) {
	if (i == -4) {
	    fprintf(pgpout, "\n\007Error: RSA key length must be at least 256 bits.\n");
	} else if (i == -3) {
	    fputs("\a\nError: key is too large.  RSA keys may be no longer than 1024 bits,\ndue to limitations imposed by software provided by RSADSI.\n", pgpout);
	} else {
	    fprintf(pgpout, "\a\nUnexpected error %d signing\n", i);
	}
	return i;
    }
    bytecount = reg2mpi(outbuf, (unitptr) outbuf);
    certificate_length = 0;
    certificate[certificate_length++] = (0x80 + (4 * 2) + 1);
    ske_length = 1 + 1 + mdlen + 8 + 1 + 1 + 2 + bytecount + 2;
    put_word16((word16) ske_length, certificate + certificate_length);
    certificate_length += 2;
    certificate[certificate_length++] = version_byte;
    certificate[certificate_length++] = mdlen;
    certificate[certificate_length++] = class & 0xff;
    for (j = 0; j < 4; j++)
	certificate[certificate_length++] = timestamp[j];
    extract_keyID(keyID, n);
    for (i = 0; i < 8; i++)
	certificate[certificate_length++] = keyID[i];
    certificate[certificate_length++] = 1;
    certificate[certificate_length++] = 1;
    certificate[certificate_length++] = md5buf[0];
    certificate[certificate_length++] = md5buf[1];;
    for (i = 0; i < bytecount + 2; i++)
	certificate[certificate_length++] = outbuf[i];
    if (!quietmode)
	fputc('.', pgpout);
    memset((void *) &(inbuf), 0, sizeof(inbuf));
    memset((void *) &(outbuf), 0, sizeof(outbuf));
    return certificate_length;
}

int signfile(boolean nested, boolean separate_signature, char *mcguffin, char *infile, char *outfile, char lit_mode, char *literalfile)
{
    FILE *f;
    FILE *g;
    int certificate_length;
    byte certificate[(1 + 2 + 1 + 1 + 7 + 8 + 2 + 2 + (2 + ((2048 + (2 * 16)) / 8)))];
    char lfile[256];
    byte signature_class; {
	word32 tstamp;
	byte *timestamp = (byte *) & tstamp;
	byte userid[256];
	char keyfile[256];
	int status;
	struct MD5Context MD;
	byte keyID[8];
	unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
	unit d[((2048 + (2 * 16)) / 16)];
	unit p[((2048 + (2 * 16)) / 16)], q[((2048 + (2 * 16)) / 16)];
	unit u[((2048 + (2 * 16)) / 16)];
	(global_precision = (((2048 + (2 * 16)) / 16)));
	if (verbose)
	    fprintf(pgpout, "signfile: infile = '%s', outfile = '%s', mode = '%c', literalfile = '%s'\n", infile, outfile, EXT_C(lit_mode), literalfile);
	if (MDfile(&MD, infile) < 0)
	    return -1;
	userid[0] = '\0';
	if (mcguffin)
	    strcpy((char *) userid, mcguffin);
	if (getsecretkey(0, ((void *) 0), ((void *) 0), timestamp, ((void *) 0), ((void *) 0), userid, n, e, d, p, q, u) < 0)
	    return -1;
	extract_keyID(keyID, n);
	strcpy(keyfile, globalPubringName);
	if ((status = getpublickey(4, keyfile, ((void *) 0), ((void *) 0), keyID, timestamp, userid, n, e)) < 0)
	    return -1;
	if (lit_mode == 't')
	    signature_class = 0x01;
	else
	    signature_class = 0x00;
	certificate_length = make_signature_certificate(certificate, &MD, signature_class, e, d, p, q, u, n);
	if (certificate_length < 0)
	    return -1;
    }
    if ((f = fopen(infile, "r")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open plaintext file '%s'\n"), infile);
	return -1;
    }
    if ((g = fopen(outfile, "w")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't create signature file '%s'\n"), outfile);
	fclose(f);
	return -1;
    }
    fwrite(certificate, 1, certificate_length, g);
    if (literalfile == ((void *) 0)) {
	lfile[0] = '\0';
    } else {
	strcpy(lfile, literalfile);
	file_to_canon(lfile);
	CToPascal(lfile);
    }
    if (!separate_signature) {
	if (!nested) {
	    word32 flen = fsize(f);
	    word32 dummystamp = 0;
	    if (lit_mode == 'l')
		fprintf(pgpout, "signfile: invalid mode\n");
	    else {
		write_ctb_len(g, 11, flen + (unsigned char) lfile[0] + 6, 0);
	    } _IO_putc(lit_mode, g);
	    if (lit_mode == 'l') {
	    } else {
		fwrite(lfile, 1, (unsigned char) lfile[0] + 1, g);
		fwrite(&dummystamp, 1, sizeof(dummystamp), g);
	    }
	}
	copyfile(f, g, -1L);
    }
    fclose(f);
    if (write_error(g)) {
	fclose(g);
	return -1;
    }
    fclose(g);
    return 0;
}

int compromise(byte * keyID, char *keyfile)
{
    FILE *f, *g;
    byte ctb;
    int certificate_length;
    byte certificate[(1 + 2 + 1 + 1 + 7 + 8 + 2 + 2 + (2 + ((2048 + (2 * 16)) / 8)))];
    word32 tstamp;
    byte *timestamp = (byte *) & tstamp;
    byte userid[256];
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    struct MD5Context MD;
    unit d[((2048 + (2 * 16)) / 16)];
    unit p[((2048 + (2 * 16)) / 16)], q[((2048 + (2 * 16)) / 16)];
    unit u[((2048 + (2 * 16)) / 16)];
    long fp, insertpos;
    int pktlen;
    int prec;
    char *scratchf;
    setoutdir(keyfile);
    scratchf = tempfile(0);
    if (getsecretkey(0, ((void *) 0), keyID, timestamp, ((void *) 0), ((void *) 0), userid, n, e, d, p, q, u) < 0)
	return -1;
    if (getpublickey(0, keyfile, &fp, &pktlen, keyID, timestamp, userid, n, e) < 0)
	return -1;
    if ((f = fopen(keyfile, "r")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open key ring file '%s'\n"), keyfile);
	return -1;
    }
    fseek(f, fp + pktlen, 0);
    nextkeypacket(f, &ctb);
    if (ctb == (0x80 + (4 * 12) + 0)) {
	insertpos = ftell(f);
	nextkeypacket(f, &ctb);
    } else {
	insertpos = fp + pktlen;
    }
    if ((((ctb) & 0x7c) == (4 * 2))) {
	fprintf(pgpout, LANG("This key has already been revoked.\n"));
	fclose(f);
	return -1;
    }
    prec = global_precision;
    (global_precision = (((2048 + (2 * 16)) / 16)));
    fseek(f, fp, 0);
    if (MDfile0_len(&MD, f, pktlen) < 0) {
	fclose(f);
	return -1;
    }
    (global_precision = (prec));
    certificate_length = make_signature_certificate(certificate, &MD, 0x20, e, d, p, q, u, n);
    if (certificate_length < 0) {
	fclose(f);
	return -1;
    }
    if ((g = fopen(scratchf, "w")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't create output file to update key ring.\n"));
	fclose(f);
	return -1;
    }
    rewind(f);
    copyfile(f, g, insertpos);
    fwrite(certificate, 1, certificate_length, g);
    copyfile(f, g, -1L);
    fclose(f);
    if (write_error(g)) {
	fclose(g);
	return -1;
    }
    fclose(g);
    savetempbak(scratchf, keyfile);
    fprintf(pgpout, LANG("\nKey compromise certificate created.\n"));
    return 0;
}

int do_sign(char *keyfile, long fp, int pktlen, byte * userid, byte * keyID, char *sigguffin, boolean batchmode)
{
    FILE *f;
    FILE *g;
    byte ctb;
    word32 tstamp;
    byte *timestamp = (byte *) & tstamp;
    byte keyID2[8];
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    int certificate_length;
    byte certificate[(1 + 2 + 1 + 1 + 7 + 8 + 2 + 2 + (2 + ((2048 + (2 * 16)) / 8)))];
    long fpusr;
    int usrpktlen, usrctrllen;
    char *tempring;
    int status;
    status = getpubuserid(keyfile, fp, userid, &fpusr, &usrpktlen, 0);
    if (status < 0)
	return -1;
    f = fopen(keyfile, "r");
    if (f == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open key ring file '%s'\n"), keyfile);
	return -1;
    }
    fseek(f, fpusr + usrpktlen, 0);
    nextkeypacket(f, &ctb);
    usrctrllen = 0;
    if (ctb != (0x80 + (4 * 12) + 0))
	fseek(f, fpusr + usrpktlen, 0);
    else
	usrctrllen = (int) (ftell(f) - (fpusr + usrpktlen));
    for (;;) {
	status = readkeypacket(f, 0, &ctb, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), keyID2, ((void *) 0));
	if (status < 0 || is_key_ctb(ctb) || ctb == (0x80 + (4 * 13) + 0))
	    break;
	if (!memcmp(keyID, keyID2, 8)) {
	    fprintf(pgpout, LANG("\n\007Key is already signed by user '%s'.\n"), sigguffin);
	    fclose(f);
	    return -1;
	}
    }
    rewind(f);
    if (!batchmode) {
	fprintf(pgpout, LANG("\n\nREAD CAREFULLY:  Based on your own direct first-hand knowledge, are\nyou absolutely certain that you are prepared to solemnly certify that\nthe above public key actually belongs to the user specified by the\nabove user ID (y/N)? "));
	if (!getyesno('n')) {
	    fclose(f);
	    return -1;
	}
    }
    {
	struct MD5Context MD;
	unit d[((2048 + (2 * 16)) / 16)], p[((2048 + (2 * 16)) / 16)];
	unit q[((2048 + (2 * 16)) / 16)], u[((2048 + (2 * 16)) / 16)];
	(global_precision = (((2048 + (2 * 16)) / 16)));
	if ((g = fopen(keyfile, "r")) == ((void *) 0)) {
	    fclose(f);
	    fprintf(pgpout, LANG("\n\007Can't open key ring file '%s'\n"), keyfile);
	    return -1;
	}
	fseek(g, fp, 0);
	if (MDfile0_len(&MD, g, pktlen) < 0) {
	    fclose(f);
	    fclose(g);
	    return -1;
	}
	fclose(g);
	CToPascal((char *) userid);
	MD5Update(&MD, userid + 1, (int) (unsigned char) userid[0]);
	strcpy((char *) userid, sigguffin);
	if (getsecretkey((batchmode ? 0 : 16), ((void *) 0), ((void *) 0), timestamp, ((void *) 0), ((void *) 0), userid, n, e, d, p, q, u) < 0) {
	    fclose(f);
	    return -1;
	}
	certificate_length = make_signature_certificate(certificate, &MD, 0x10, e, d, p, q, u, n);
	if (certificate_length < 0) {
	    fclose(f);
	    return -1;
	}
    }
    tempring = tempfile(4);
    if ((g = fopen(tempring, "w")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't create output file to update key ring.\n"));
	fclose(f);
	return -1;
    }
    copyfile(f, g, fpusr + usrpktlen + usrctrllen);
    fwrite(certificate, 1, certificate_length, g);
    write_trust(g, 0x07 | 0x80 | 0x40);
    copyfile(f, g, -1L);
    fclose(f);
    if (write_error(g)) {
	fclose(g);
	return -1;
    }
    fclose(g);
    savetempbak(tempring, keyfile);
    fprintf(pgpout, LANG("\nKey signature certificate added.\n"));
    return 0;
}

int signkey(char *keyguffin, char *sigguffin, char *keyfile)
{
    byte keyID[8];
    word32 tstamp;
    byte *timestamp = (byte *) & tstamp;
    byte userid[256];
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    long fp;
    int pktlen;
    int status;
    strcpy((char *) userid, sigguffin);
    status = getsecretkey(0, ((void *) 0), ((void *) 0), timestamp, ((void *) 0), ((void *) 0), userid, n, e, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0));
    if (status < 0)
	return -1;
    extract_keyID(keyID, n);
    status = getpublickey(4 | 1, keyfile, &fp, &pktlen, keyID, timestamp, userid, n, e);
    if (status < 0) {
	PascalToC((char *) userid);
	fprintf(pgpout, LANG("\nError: Key for signing userid '%s'\ndoes not appear in public keyring '%s'.\nThus, a signature made with this key cannot be checked on this keyring.\n"), (char *) userid, keyfile);
	return -1;
    }
    strcpy((char *) userid, keyguffin);
    fprintf(pgpout, LANG("\nLooking for key for user '%s':\n"), (char *) userid);
    status = getpublickey(2 | 4, keyfile, &fp, &pktlen, ((void *) 0), timestamp, userid, n, e);
    if (status < 0)
	return -1;
    showKeyHash(n, e);
    PascalToC((char *) userid);
    if (do_sign(keyfile, fp, pktlen, userid, keyID, sigguffin, batchmode) < 0)
	return -1;
    return 0;
}

int check_signaturefile(char *infile, char *outfile, boolean strip_signature, char *preserved_name)
{
    byte ctb, ctb2 = 0;
    char keyfile[256];
    char sigfile[256];
    char plainfile[256];
    char *tempFileName;
    FILE *tempFile;
    long fp;
    FILE *f;
    FILE *g;
    long start_text;
    int i, count;
    word16 cert_length;
    byte certbuf[(1 + 2 + 1 + 1 + 7 + 8 + 2 + 2 + (2 + ((2048 + (2 * 16)) / 8)))];
    byteptr certificate;
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    byte inbuf[((2048 + (2 * 16)) / 8)];
    byte outbuf[((2048 + (2 * 16)) / 8)];
    byte keyID[8];
    word32 tstamp;
    byte *timestamp = (byte *) & tstamp;
    word32 dummystamp;
    byte userid[256];
    struct MD5Context MD;
    byte digest[16];
    boolean separate_signature;
    boolean fixedLiteral = 0;
    extern char **myArgv;
    extern int myArgc;
    char lit_mode = 'b';
    unsigned char litfile[256];
    word32 text_len = -1;
    int status;
    byte *mdextras;
    byte mdlensave;
    byte version;
    byte mdlen;
    byte class;
    byte algorithm;
    byte mdlow2[2];
    char org_sys[5];
    boolean retry = (!0);
    int outbufoffset;
    memset(keyID, 0, 8);
    (global_precision = (((2048 + (2 * 16)) / 16)));
    strcpy(keyfile, globalPubringName);
    if (verbose)
	fprintf(pgpout, "check_signaturefile: infile = '%s', outfile = '%s'\n", infile, outfile);
    if (preserved_name)
	*preserved_name = '\0';
    if ((f = fopen(infile, "r")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open ciphertext file '%s'\n"), infile);
	return -1;
    }
    fread(&ctb, 1, 1, f);
    certificate = certbuf;
    *certificate++ = ctb;
    if (!(((ctb) & 0x80) == 0x80) || !(((ctb) & 0x7c) == (4 * 2)))
	goto badcert;
    cert_length = getpastlength(ctb, f);
    certificate += ((int) 1 << (int) ((ctb) & 0x03));
    if (cert_length > (1 + 2 + 1 + 1 + 7 + 8 + 2 + 2 + (2 + ((2048 + (2 * 16)) / 8))) - 3)
	goto badcert;
    if (fread((byteptr) certificate, 1, cert_length, f) < cert_length)
	goto badcert;
    version = *certificate++;
    if (version_byte_error(version))
	goto err1;
    mdlensave = mdlen = *certificate++;
    mdextras = certificate;
    class = *certificate++;
    if (class != 0x01 && class != 0x00) {
	(void) version_error(class, 0x01);
	goto err1;
    }
    mdlen--;
    if (mdlen > 0) {
	for (i = 0; i < 4; ++i) {
	    timestamp[i] = *certificate++;
	    mdlen--;
	}
    }
    if (mdlen > 0) {
	certificate += 2;
	mdlen -= 2;
    }
    for (i = 0; i < 8; i++)
	keyID[i] = *certificate++;
    algorithm = *certificate++;
    if (version_error(algorithm, 1))
	goto err1;
    algorithm = *certificate++;
    if (version_error(algorithm, 1))
	goto err1;
    mdlow2[0] = *certificate++;
    mdlow2[1] = *certificate++;
    if (getpublickey(0, keyfile, &fp, ((void *) 0), keyID, (byte *) & dummystamp, userid, n, e) < 0) {
	(global_precision = (((2048 + (2 * 16)) / 16)));
	if (filter_mode || batchmode)
	    retry = 0;
    }
    if (mpi2reg((unitptr) inbuf, certificate) == -1)
	goto err1;
    certificate += ((countbits((unitptr) inbuf) + 7) >> 3) + 2;
    if ((certificate - certbuf) != cert_length + 3)
	goto badcert;
    start_text = ftell(f);
    if (fread(outbuf, 1, 1, f) < 1) {
	separate_signature = (!0);
	if (preserved_name)
	    strcpy(preserved_name, "/dev/null");
	fclose(f);
	fprintf(pgpout, LANG("\nFile '%s' has signature, but with no text."), infile);
	if (myArgc > 3 && file_exists(myArgv[3])) {
	    outfile = myArgv[3];
	    fprintf(pgpout, LANG("\nText is assumed to be in file '%s'.\n"), outfile);
	} else {
	    strcpy(plainfile, outfile);
	    outfile = plainfile;
	    drop_extension(outfile);
	    if (file_exists(outfile)) {
		fprintf(pgpout, LANG("\nText is assumed to be in file '%s'.\n"), outfile);
	    } else {
		if (batchmode)
		    return -1;
		fprintf(pgpout, LANG("\nPlease enter filename of material that signature applies to: "));
		getstring(outfile, 59, (!0));
		if ((int) strlen(outfile) == 0)
		    return -1;
	    }
	}
	if ((f = fopen(outfile, "r")) == ((void *) 0)) {
	    fprintf(pgpout, LANG("\n\007Can't open file '%s'\n"), outfile);
	    return -1;
	}
	start_text = ftell(f);
	text_len = fsize(f);
    } else {
	separate_signature = 0;
	ctb2 = outbuf[0];
	fixedLiteral = (((ctb2) & 0x7c) == (4 * 11));
	if ((((ctb2) & 0x80) == 0x80) && ((((ctb2) & 0x7c) == (4 * 10)) || fixedLiteral)) {
	    text_len = getpastlength(ctb2, f);
	    lit_mode = '\0';
	    fread(&lit_mode, 1, 1, f);
	    if (lit_mode != 't' && lit_mode != 'b' && lit_mode != 'l') {
		fprintf(pgpout, "\n\007Error: Illegal mode byte %02x in literal packet.\n", lit_mode);
		(void) version_error(lit_mode, 'b');
		goto err1;
	    }
	    if (verbose)
		fprintf(pgpout, LANG("File type: '%c'\n"), EXT_C(lit_mode));
	    litfile[0] = 0;
	    fread(litfile, 1, 1, f);
	    if (fixedLiteral)
		text_len -= litfile[0] + sizeof(dummystamp) + 2;
	    if (litfile[0] > 0) {
		if ((int) litfile[0] >= 256) {
		    fseek(f, litfile[0], 1);
		    litfile[0] = 0;
		} else {
		    fread(litfile + 1, 1, litfile[0], f);
		}
	    }
	    if (litfile[0]) {
		PascalToC((char *) litfile);
		if (verbose)
		    fprintf(pgpout, LANG("Original plaintext file name was: '%s'\n"), litfile);
		if (preserved_name)
		    strcpy(preserved_name, (char *) litfile);
	    }
	    if (lit_mode == 'l') {
		fread(org_sys, 1, 4, f);
		org_sys[4] = '\0';
		if (0) {
		} else {
		    fprintf(pgpout, "\n\007Unrecognised local binary type %s\n", org_sys);
		    return -1;
		}
	    } else {
		fread(&dummystamp, 1, sizeof(dummystamp), f);
	    }
	    start_text = ftell(f);
	}
    }
    if (!retry || getpublickey(0, keyfile, &fp, ((void *) 0), keyID, (byte *) & dummystamp, userid, n, e) < 0) {
	fprintf(pgpout, LANG("\nWARNING: Can't find the right public key-- can't check signature integrity.\n"));
	goto outsig;
    }
    count = rsa_public_decrypt(outbuf, (unitptr) inbuf, e, n);
    if (!quietmode)
	fputc('.', pgpout);
    if (count == -7 || (count > 0 && count != sizeof(digest))) {
	fputs(LANG("\007\nUnrecognized message digest algorithm.\nThis may require a newer version of PGP.\nCan't check signature integrity.\n"), pgpout);
	goto outsig;
    }
    if (count == -5) {
	fputs(LANG("\a\nMalformed or obsolete signature.  Can't check signature integrity.\n"), pgpout);
	goto outsig;
    }
    if (count == -3) {
	fputs(LANG("\a\nSigning key is too large.  Can't check signature integrity.\n"), pgpout);
	goto outsig;
    }
    if (count < 0) {
	fprintf(pgpout, LANG("\n\007Error: RSA-decrypted block is corrupted.\nThis may be caused either by corrupted data or by using the wrong RSA key.\n"));
	goto outsig;
    }
    outbufoffset = (count == sizeof(digest)) ? 0 : 1;
    if (outbuf[outbufoffset] != mdlow2[0] || outbuf[outbufoffset + 1] != mdlow2[1]) {
	fprintf(pgpout, LANG("\n\007Error: RSA-decrypted block is corrupted.\nThis may be caused either by corrupted data or by using the wrong RSA key.\n"));
	goto outsig;
    }
    fseek(f, start_text, 0);
    MDfile0_len(&MD, f, text_len);
    MD_addbuffer(&MD, mdextras, mdlensave, digest);
    hiloswap(timestamp, 4);
    PascalToC((char *) userid);
    if (!!memcmp(digest, outbuf + outbufoffset, 16)) {
	if (class == 0x01 && separate_signature && is_text_file(outfile)) {
	    rewind(f);
	    tempFileName = tempfile(1 | 4);
	    if (verbose)
		fprintf(stderr, "signature checking failed, trying in canonical mode\n");
	    make_canonical(outfile, tempFileName);
	    if ((tempFile = fopen(tempFileName, "r")) != ((void *) 0)) {
		MDfile0_len(&MD, tempFile, -1L);
		MD_addbuffer(&MD, mdextras, mdlensave, digest);
		fclose(tempFile);
		rmtemp(tempFileName);
		if (!memcmp(digest, outbuf + outbufoffset, 16))
		    goto goodsig;
	    }
	}
	if (checksig_pass == 1) {
	    checksig_pass++;
	    return -1;
	}
	if (moreflag && !batchmode) {
	    fprintf(pgpout, LANG("\nPress ENTER to continue..."));
	    fflush(pgpout);
	    getyesno('n');
	}
	goto warnsig;
    }
  goodsig:signature_checked = (!0);
    fprintf(pgpout, LANG("\nGood signature from user \"%s\".\n"), (char *) userid);
    fprintf(pgpout, LANG("Signature made %s using %d-bit key, key ID %s\n"), ctdate((word32 *) timestamp), countbits(n), key2IDstring(n));
  warnsig:warn_signatures(keyfile, fp, (char *) userid, (!0));
  outsig:fseek(f, start_text, 0);
    if (separate_signature) {
	if (!quietmode)
	    fprintf(pgpout, LANG("\nSignature and text are separate.  No output file produced. "));
    } else {
	if (lit_mode == 'l') {
	} else {
	    if (lit_mode == 'b')
		g = fopen(outfile, "w");
	    else
		g = fopen(outfile, "w");
	    if (g == ((void *) 0)) {
		fprintf(pgpout, LANG("\n\007Can't create plaintext file '%s'\n"), outfile);
		goto err1;
	    }
	    CONVERSION = (lit_mode == 't') ? 2 : 0;
	    if (lit_mode == 'b')
		status = copyfile(f, g, text_len);
	    else
		status = copyfile_from_canon(f, g, text_len);
	    CONVERSION = 0;
	    if (write_error(g) || status < 0) {
		fclose(g);
		goto err1;
	    }
	    fclose(g);
	}
	if (strip_signature) {
	    strcpy(sigfile, outfile);
	    force_extension(sigfile, SIG_EXTENSION);
	    if (!force_flag && file_exists(sigfile)) {
		fprintf(pgpout, LANG("\n\007Signature file '%s' already exists.  Overwrite (y/N)? "), sigfile);
		if (!getyesno('n'))
		    goto err1;
	    }
	    if ((g = fopen(sigfile, "w")) == ((void *) 0)) {
		fprintf(pgpout, LANG("\n\007Can't create signature file '%s'\n"), sigfile);
		goto err1;
	    }
	    fseek(f, 0L, 0);
	    copyfile(f, g, (unsigned long) (cert_length + ((int) 1 << (int) ((ctb) & 0x03)) + 1));
	    if (write_error(g)) {
		fclose(g);
		goto err1;
	    }
	    fclose(g);
	    if (!quietmode)
		fprintf(pgpout, LANG("\nWriting signature certificate to '%s'\n"), sigfile);
	}
    }
    memset((void *) &(inbuf), 0, sizeof(inbuf));
    memset((void *) &(outbuf), 0, sizeof(outbuf));
    fclose(f);
    if (separate_signature)
	return 0;
    if ((((ctb2) & 0x80) == 0x80) && ((((ctb2) & 0x7c) == (4 * 10)) || fixedLiteral))
	return 0;
    return 1;
  badcert:fprintf(pgpout, LANG("\n\007Error: Badly-formed or corrupted signature certificate.\n"));
    fprintf(pgpout, LANG("File \"%s\" does not have a properly-formed signature.\n"), infile);
  err1:memset((void *) &(inbuf), 0, sizeof(inbuf));
    memset((void *) &(outbuf), 0, sizeof(outbuf));
    fclose(f);
    return -1;
}

int check_key_sig(FILE * fkey, long fpkey, int keypktlen, char *keyuserid, FILE * fsig, long fpsig, char *keyfile, char *siguserid, byte * xtimestamp, byte * sigclass)
{
    byte ctb;
    long fp;
    word16 cert_length;
    int i, count;
    byte certbuf[(1 + 2 + 1 + 1 + 7 + 8 + 2 + 2 + (2 + ((2048 + (2 * 16)) / 8)))];
    byteptr certificate;
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    byte inbuf[((2048 + (2 * 16)) / 8)];
    byte outbuf[((2048 + (2 * 16)) / 8)];
    byte keyID[8];
    struct MD5Context MD;
    byte digest[16];
    byte *mdextras;
    word32 tstamp;
    byte *timestamp = (byte *) & tstamp;
    byte version;
    byte mdlen;
    byte class;
    byte algorithm;
    byte mdlow2[2];
    memset(keyID, 0, 8);
    (global_precision = (((2048 + (2 * 16)) / 16)));
    fseek(fsig, fpsig, 0);
    fread(&ctb, 1, 1, fsig);
    certificate = certbuf;
    *certificate++ = ctb;
    if (!(((ctb) & 0x80) == 0x80) || !(((ctb) & 0x7c) == (4 * 2)))
	goto badcert;
    cert_length = getpastlength(ctb, fsig);
    certificate += ((int) 1 << (int) ((ctb) & 0x03));
    if (cert_length > (1 + 2 + 1 + 1 + 7 + 8 + 2 + 2 + (2 + ((2048 + (2 * 16)) / 8))) - 3)
	goto badcert;
    if (fread((byteptr) certificate, 1, cert_length, fsig) < cert_length)
	goto badcert;
    version = *certificate++;
    if (version_byte_error(version))
	return -8;
    mdlen = *certificate++;
    if (version_error(mdlen, 5))
	return -8;
    mdextras = certificate;
    *sigclass = class = *certificate++;
    if (class != 0x10 && class != 0x11 && class != 0x12 && class != 0x13 && class != 0x20) {
	(void) version_error(class, 0x10);
	return -8;
    }
    for (i = 0; i < 4; ++i)
	timestamp[i] = *certificate++;
    for (i = 0; i < 8; i++)
	keyID[i] = *certificate++;
    algorithm = *certificate++;
    if (version_error(algorithm, 1))
	return -6;
    algorithm = *certificate++;
    if (version_error(algorithm, 1))
	return -7;
    mdlow2[0] = *certificate++;
    mdlow2[1] = *certificate++;
    if (getpublickey(1, keyfile, &fp, ((void *) 0), keyID, xtimestamp, (unsigned char *) siguserid, n, e) < 0)
	return -2;
    if (mpi2reg((unitptr) inbuf, certificate) == -1)
	return -10;
    certificate += ((countbits((unitptr) inbuf) + 7) >> 3) + 2;
    if ((certificate - certbuf) != cert_length + 3)
	return -10;
    count = rsa_public_decrypt(outbuf, (unitptr) inbuf, e, n);
    if (count < 0)
	return count;
    if (count != sizeof(digest))
	return -9;
    if (outbuf[0] != mdlow2[0] || outbuf[1] != mdlow2[1])
	return -9;
    fseek(fkey, fpkey, 0);
    MDfile0_len(&MD, fkey, keypktlen);
    if (class != 0x20)
	MD5Update(&MD, (unsigned char *) keyuserid + 1, (int) (unsigned char) keyuserid[0]);
    MD_addbuffer(&MD, mdextras, mdlen, digest);
    if (!!memcmp(digest, outbuf, 16))
	return -20;
    hiloswap(timestamp, 4);
    memcpy(xtimestamp, timestamp, 4);
    return 0;
  badcert:fprintf(pgpout, LANG("\n\007Error: Badly-formed or corrupted signature certificate.\n"));
    return -10;
}

static int squish_and_idea_file(byte * ideakey, FILE * f, FILE * g, boolean attempt_compression)
{
    FILE *t;
    char *tempf = ((void *) 0);
    word32 fpos, fpos0;
    extern char plainfile[];
    rewind(f);
    if (!attempt_compression)
	t = f;
    else if ((tempf = tempfile(4 | 1)) == ((void *) 0) || (t = fopen(tempf, "w+")) == ((void *) 0))
	t = f;
    else {
	extern int zipup(FILE *, FILE *);
	if (verbose)
	    fprintf(pgpout, "\nCompressing [%s] ", plainfile);
	_IO_putc((0x80 + (4 * 8) + 3), t);
	_IO_putc(1, t);
	zipup(f, t);
	if (write_error(t)) {
	    fclose(t);
	    if (tempf)
		rmtemp(tempf);
	    return -1;
	}
	if (verbose)
	    fprintf(pgpout, LANG("compressed.  "));
	else if (!quietmode)
	    fputc('.', pgpout);
	rewind(t);
    }
    fpos0 = ftell(g);
    write_ctb_len(g, 9, 0L, (!0));
    fpos = ftell(g) - fpos0;
    idea_file(ideakey, 0, t, g, fsize(t));
    fseek(g, fpos0, 0);
    write_ctb_len(g, 9, fsize(g) - fpos, (!0));
    if (t != f) {
	fclose(t);
	if (tempf)
	    rmtemp(tempf);
    }
    return 0;
}

int squish_file(char *infile, char *outfile)
{
    FILE *f, *g;
    extern int zip(FILE *, FILE *);
    if (verbose)
	fprintf(pgpout, "squish_file: infile = '%s', outfile = '%s'\n", infile, outfile);
    if ((f = fopen(infile, "r")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open file '%s'\n"), infile);
	return -1;
    }
    if ((g = fopen(outfile, "w")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't create compressed file '%s'\n"), outfile);
	fclose(f);
	return -1;
    }
    if (verbose)
	fprintf(pgpout, LANG("Compressing file..."));
    _IO_putc((0x80 + (4 * 8) + 3), g);
    _IO_putc(1, g);
    zipup(f, g);
    if (verbose)
	fprintf(pgpout, LANG("compressed.  "));
    fclose(f);
    if (write_error(g)) {
	fclose(g);
	return -1;
    }
    fclose(g);
    return 0;
}

int idea_encryptfile(char *infile, char *outfile, boolean attempt_compression)
{
    FILE *f;
    FILE *g;
    byte ideakey[24];
    struct hashedpw *hpw;
    if (verbose)
	fprintf(pgpout, "idea_encryptfile: infile = '%s', outfile = '%s'\n", infile, outfile);
    if ((f = fopen(infile, "r")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open plaintext file '%s'\n"), infile);
	return -1;
    }
    if ((g = fopen(outfile, "w")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't create ciphertext file '%s'\n"), outfile);
	fclose(f);
	return -1;
    }
    if (passwds) {
	memcpy(ideakey, passwds->hash, sizeof(ideakey));
	memset(passwds->hash, 0, sizeof(passwds->hash));
	hpw = passwds;
	passwds = passwds->next;
	free(hpw);
    } else {
	if (!quietmode)
	    fprintf(pgpout, LANG("\nYou need a pass phrase to encrypt the file. "));
	if (batchmode || GetHashedPassPhrase((char *) ideakey, 2) <= 0) {
	    fclose(f);
	    fclose(g);
	    return -1;
	}
    }
    make_random_ideakey(ideakey, 16);
    if (!quietmode) {
	fprintf(pgpout, LANG("Just a moment..."));
	fflush(pgpout);
    }
    squish_and_idea_file(ideakey, f, g, attempt_compression);
    memset((void *) &(ideakey), 0, sizeof(ideakey));
    fclose(f);
    if (write_error(g)) {
	fclose(g);
	return -1;
    }
    fclose(g);
    return 0;
}

static byte(*keyID_list)[8] = ((void *) 0);
static int getmyname(char *userid)
{
    char keyfile[256];
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    word32 tstamp;
    byte *timestamp = (byte *) & tstamp;
    long fp;
    int pktlen;
    strcpy(keyfile, globalSecringName);
    getpublickey(32, keyfile, &fp, ((void *) 0), ((void *) 0), timestamp, (unsigned char *) userid, n, e);
    PascalToC((char *) userid);
    return (0);
}

int encryptfile(char **mcguffins, char *infile, char *outfile, boolean attempt_compression)
{
    int i, ckp_length;
    FILE *f;
    FILE *g;
    byte keybuf[((2048 + (2 * 16)) / 8)];
    byte ideakey[24];
    word32 chksum;
    char keyfile[256];
    int keys_used = 0;
    if (mcguffins == ((void *) 0) || *mcguffins == ((void *) 0) || **mcguffins == '\0') {
	return -1;
    }
    if (verbose)
	fprintf(pgpout, "encryptfile: infile = %s, outfile = %s\n", infile, outfile);
    if ((f = fopen(infile, "r")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open plaintext file '%s'\n"), infile);
	return -1;
    }
    if ((g = fopen(outfile, "w")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't create ciphertext file '%s'\n"), outfile);
	fclose(f);
	return -1;
    }
    if (!already_have_md5) {
	struct MD5Context MD;
	MD5Init(&MD);
	MDfile0_len(&MD, f, 4096);
	MD5Final(md5buf, &MD);
	already_have_md5 = 1;
	fseek(f, 0, 0);
    }
    ckp_length = make_random_ideakey(ideakey, 0);
    keybuf[0] = 1;
    for (i = 0; i < ckp_length; ++i)
	keybuf[i + 1] = ideakey[i];
    chksum = checksum(keybuf + 1, ckp_length);
    ckp_length++;
    put_word16((word16) chksum, keybuf + ckp_length);
    ckp_length += 2;
    for (i = 0; mcguffins[i] != ((void *) 0); ++i);
    if (encrypt_to_self)
	++i;
    keyID_list = xmalloc(i * 8);
    for (; *mcguffins && **mcguffins; ++mcguffins) {
	strcpy(keyfile, globalPubringName);
	keys_used = encryptkeyintofile(g, *mcguffins, keybuf, keyfile, ckp_length, keys_used);
    }
    if (!keys_used) {
	fclose(f);
	fclose(g);
	free(keyID_list);
	return -1;
    }
    if (encrypt_to_self) {
	if (!*my_name)
	    getmyname(my_name);
	if (*my_name)
	    keys_used = encryptkeyintofile(g, my_name, keybuf, keyfile, ckp_length, keys_used);
    }
    free(keyID_list);
    squish_and_idea_file(ideakey, f, g, attempt_compression);
    memset((void *) &(keybuf), 0, sizeof(keybuf));
    memset((void *) &(ideakey), 0, sizeof(ideakey));
    fclose(f);
    if (write_error(g)) {
	fclose(g);
	return -1;
    }
    fclose(g);
    return 0;
}

static int encryptkeyintofile(FILE * g, char *mcguffin, byte * keybuf, char *keyfile, int ckp_length, int keys_used)
{
    int i;
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    byte keyID[8];
    byte inbuf[((2048 + (2 * 16)) / 8)];
    byte outbuf[((2048 + (2 * 16)) / 8)];
    word32 tstamp;
    byte *timestamp = (byte *) & tstamp;
    byte userid[256];
    long fp;
    int blocksize;
    byte(*keyp)[8];
    do {
	userid[0] = '\0';
	strcpy((char *) userid, mcguffin);
	if (getpublickey((quietmode ? 0 : 2) | 4, keyfile, &fp, ((void *) 0), ((void *) 0), timestamp, userid, n, e) < 0) {
	    fprintf(pgpout, LANG("\n\007Cannot find the public key matching userid '%s'\nThis user will not be able to decrypt this message.\n"), mcguffin);
	    continue;
	}
	extract_keyID(keyID, n);
	for (keyp = keyID_list; keyp < keyID_list + keys_used; ++keyp) {
	    if (!memcmp(keyp, keyID, 8))
		break;
	}
	if (keyp < keyID_list + keys_used) {
	    continue;
	}
	memcpy(keyp, keyID, 8);
	PascalToC((char *) userid);
	if (warn_signatures(keyfile, fp, (char *) userid, 0) < 0) {
	    fprintf(pgpout, LANG("Skipping userid %s\n"), mcguffin);
	    continue;
	}
	blocksize = ((countbits(n) + 7) >> 3) - 1;
	if (blocksize < 31) {
	    fprintf(pgpout, "\n\007Error: RSA key length must be at least 256 bits.\n");
	    fprintf(pgpout, "Skipping userid %s\n", mcguffin);
	    continue;
	}
	i = rsa_public_encrypt((unitptr) outbuf, keybuf, ckp_length, e, n);
	if (i < 0) {
	    if (i == -4) {
		fprintf(pgpout, "\n\007Error: RSA key length must be at least 256 bits.\n");
	    } else if (i == -3) {
		fputs("\a\nError: key is too large.  RSA keys may be no longer than 1024 bits,\ndue to limitations imposed by software provided by RSADSI.\n", pgpout);
	    } else {
		fprintf(pgpout, "\a\nUnexpected error %d encrypting\n", i);
	    }
	    fprintf(pgpout, LANG("Skipping userid %s\n"), mcguffin);
	    continue;
	}
	write_ctb_len(g, 1, 1 + 8 + 1 + 2 + ((countbits((unitptr) outbuf) + 7) >> 3), 0);
	_IO_putc(version_byte, g);
	writekeyID(n, g);
	_IO_putc(1, g);
	write_mpi((unitptr) outbuf, g, 0);
	memset((void *) &(inbuf), 0, sizeof(inbuf));
	memset((void *) &(outbuf), 0, sizeof(outbuf));
	++keys_used;
    } while (0);
    return keys_used;
}

int make_literal(char *infile, char *outfile, char lit_mode, char *literalfile)
{
    char lfile[256];
    FILE *f;
    FILE *g;
    int status = 0;
    word32 flen, fpos;
    word32 dummystamp = 0;
    if (verbose)
	fprintf(pgpout, "make_literal: infile = %s, outfile = %s, mode = '%c', literalfile = '%s'\n", infile, outfile, EXT_C(lit_mode), literalfile);
    if (lit_mode == 't')
	f = fopen(infile, "r");
    else
	f = fopen(infile, "r");
    if (f == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open input plaintext file '%s'\n"), infile);
	return -1;
    }
    flen = fsize(f);
    if ((g = fopen(outfile, "w")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't create plaintext file '%s'\n"), outfile);
	goto err1;
    }
    if (literalfile == ((void *) 0)) {
	lfile[0] = '\0';
    } else {
	strcpy(lfile, literalfile);
	file_to_canon(lfile);
	CToPascal(lfile);
    }
    if (lit_mode == 'b')
	write_ctb_len(g, 11, (flen + (unsigned char) lfile[0] + 6), 0);
    else
	write_ctb_len(g, 11, 0L, (!0));
    fpos = ftell(g);
    _IO_putc(lit_mode, g);
    if (lit_mode == 'l') {;
    } else {
	fwrite(lfile, 1, (unsigned char) lfile[0] + 1, g);
	fwrite(&dummystamp, 1, sizeof(dummystamp), g);
    }
    if ((lit_mode == 'b') || (lit_mode == 'l')) {
	if (copyfile(f, g, -1L)) {
	    fprintf(pgpout, "\n\007Unable to append to literal plaintext file");
	    perror("\n");
	    fclose(g);
	    goto err1;
	}
    } else {
	CONVERSION = (lit_mode == 't') ? 1 : 0;
	status = copyfile_to_canon(f, g, -1L);
	CONVERSION = 0;
	rewind(g);
	write_ctb_len(g, 11, fsize(g) - fpos, (!0));
    }
    if (write_error(g) || status < 0) {
	fclose(g);
	goto err1;
    }
    fclose(g);
    fclose(f);
    return 0;
  err1:fclose(f);
    return -1;
}

int strip_literal(char *infile, char *outfile, char *preserved_name, char *lit_mode)
{
    byte ctb;
    FILE *f;
    FILE *g;
    word32 LITlength = 0;
    unsigned char litfile[256];
    word32 dummystamp;
    char org_sys[5];
    int status;
    *lit_mode = 'b';
    if (verbose)
	fprintf(pgpout, "strip_literal: infile = %s, outfile = %s\n", infile, outfile);
    if (preserved_name)
	*preserved_name = '\0';
    if ((f = fopen(infile, "r")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open input plaintext file '%s'\n"), infile);
	return -1;
    }
    fread(&ctb, 1, 1, f);
    if (!(((ctb) & 0x80) == 0x80) || !((((ctb) & 0x7c) == (4 * 10)) || (((ctb) & 0x7c) == (4 * 11)))) {
	fprintf(pgpout, "\n\007'%s' is not a literal plaintext file.\n", infile);
	fclose(f);
	return -1;
    }
    LITlength = getpastlength(ctb, f);
    *lit_mode = '\0';
    fread(lit_mode, 1, 1, f);
    if ((*lit_mode != 'b') && (*lit_mode != 't') && (*lit_mode != 'l')) {
	(void) version_error(*lit_mode, 't');
	fclose(f);
	return -1;
    }
    if (verbose)
	fprintf(pgpout, LANG("File type: '%c'\n"), EXT_C(*lit_mode));
    litfile[0] = 0;
    fread(litfile, 1, 1, f);
    if ((((ctb) & 0x7c) == (4 * 11))) {
	LITlength -= litfile[0] + 2 + sizeof(dummystamp);
    }
    if (litfile[0] > 0) {
	if ((int) litfile[0] >= 256) {
	    fseek(f, litfile[0], 1);
	    litfile[0] = 0;
	} else {
	    fread(litfile + 1, 1, litfile[0], f);
	}
    }
    if (litfile[0]) {
	PascalToC((char *) litfile);
	if (verbose)
	    fprintf(pgpout, LANG("Original plaintext file name was: '%s'\n"), litfile);
	if (preserved_name)
	    strcpy(preserved_name, (char *) litfile);
    }
    if (*lit_mode == 'l') {
	fread(org_sys, 1, 4, f);
	org_sys[4] = '\0';
	if (0) {
	} else {
	    fprintf(pgpout, "\n\007Unrecognised local binary type %s\n", org_sys);
	    return -1;
	}
    } else {
	fread(&dummystamp, 1, sizeof(dummystamp), f);
    }
    if (*lit_mode == 'l') {
    } else {
	if (*lit_mode == 't')
	    g = fopen(outfile, "w");
	else
	    g = fopen(outfile, "w");
	if (g == ((void *) 0)) {
	    fprintf(pgpout, LANG("\n\007Can't create plaintext file '%s'\n"), outfile);
	    goto err1;
	}
	CONVERSION = (*lit_mode == 't') ? 2 : 0;
	if (*lit_mode == 'b')
	    status = copyfile(f, g, LITlength);
	else
	    status = copyfile_from_canon(f, g, LITlength);
	CONVERSION = 0;
	if (write_error(g) || status < 0) {
	    fclose(g);
	    goto err1;
	}
	fclose(g);
    }
    fclose(f);
    return 0;
  err1:fclose(f);
    return -1;
}

int decryptfile(char *infile, char *outfile)
{
    byte ctb;
    byte ctbCKE;
    FILE *f;
    FILE *g;
    int count = 0, status, thiskey, gotkey, end_of_pkes;
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    unit d[((2048 + (2 * 16)) / 16)];
    unit p[((2048 + (2 * 16)) / 16)], q[((2048 + (2 * 16)) / 16)];
    unit u[((2048 + (2 * 16)) / 16)];
    byte inbuf[((2048 + (2 * 16)) / 8)];
    byte outbuf[((2048 + (2 * 16)) / 8)];
    byte keyID[8];
    word32 tstamp;
    byte *timestamp = (byte *) & tstamp;
    byte userid[256];
    word32 flen;
    word32 fpos = 0;
    byte ver, alg;
    short realprecision = 0;
    word16 chksum;
    struct nkey {
	byte keyID[8];
	struct nkey *next;
    } *nkey, *nkeys = ((void *) 0);
    if (verbose)
	fprintf(pgpout, "decryptfile: infile = %s, outfile = %s\n", infile, outfile);
    if ((f = fopen(infile, "r")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open ciphertext file '%s'\n"), infile);
	return -1;
    }
    gotkey = end_of_pkes = 0;
    do {
	thiskey = 0;
	(global_precision = (((2048 + (2 * 16)) / 16)));
	fread(&ctb, 1, 1, f);
	if (!(((ctb) & 0x80) == 0x80)) {
	    fprintf(pgpout, LANG("\n\007'%s' is not a cipher file.\n"), infile);
	    fclose(f);
	    return -1;
	}
	if (!(((ctb) & 0x7c) == (4 * 1))) {
	    end_of_pkes = 1;
	    continue;
	}
	getpastlength(ctb, f);
	ver = _IO_getc(f);
	if (version_byte_error(ver)) {
	    fclose(f);
	    return (-1);
	}
	fread(keyID, 1, 8, f);
	nkey = (struct nkey *) malloc(sizeof(struct nkey));
	if (nkey == ((void *) 0)) {
	    fprintf(stderr, LANG("\n\007Out of memory.\n"));
	    exitPGP(7);
	}
	memcpy(nkey->keyID, keyID, 8);
	nkey->next = nkeys;
	nkeys = nkey;
	alg = _IO_getc(f);
	if (version_error(alg, 1)) {
	    fclose(f);
	    return (-1);
	}
	if (!gotkey)
	    if (getsecretkey(1 | (quietmode ? 0 : 2), ((void *) 0), keyID, timestamp, ((void *) 0), ((void *) 0), userid, n, e, d, p, q, u) == 0) {
		thiskey = gotkey = 1;
		realprecision = global_precision;
	    } else {
		(global_precision = (((2048 + (2 * 16)) / 16)));
	    }
	read_mpi((unitptr) inbuf, f, 0, 0);
	if (thiskey) {
	    if (!quietmode) {
		fprintf(pgpout, LANG("Just a moment..."));
		fflush(pgpout);
	    }
	    count = rsa_private_decrypt(outbuf, (unitptr) inbuf, e, d, p, q, u, n);
	    if (count < 0) {
		if (count == -3) {
		    fputs("\a\nError: key is too large.  RSA keys may be no longer than 1024 bits,\ndue to limitations imposed by software provided by RSADSI.\n", pgpout);
		} else if (count == -9 || count == -7) {
		    fprintf(pgpout, LANG("\n\007Error: RSA-decrypted block is corrupted.\nThis may be caused either by corrupted data or by using the wrong RSA key.\n"));
		} else if (count == -5) {
		    fprintf(pgpout, LANG("\n\007Error: RSA block is possibly malformed.  Old format, maybe?\n"));
		} else {
		    fprintf(pgpout, "\a\nUnexpected error %d decrypting\n", count);
		}
		fclose(f);
		return count;
	    }
	    if (!quietmode)
		fputc('.', pgpout);
	}
	fpos = ftell(f);
    } while (!end_of_pkes);
    if (!gotkey || verbose) {
	char *user;
	setkrent(((void *) 0));
	init_userhash();
	if (gotkey)
	    fprintf(pgpout, "\nRecipients:\n");
	else
	    fprintf(pgpout, LANG("\nThis message can only be read by:\n"));
	for (nkey = nkeys; nkey; nkey = nkey->next) {
	    if ((user = user_from_keyID(nkey->keyID)) == ((void *) 0))
		fprintf(pgpout, LANG("  keyID: %s\n"), keyIDstring(nkey->keyID));
	    else
		fprintf(pgpout, "  %s\n", user);
	}
	endkrent();
    }
    for (nkey = nkeys; nkey;) {
	nkey = nkey->next;
	free(nkeys);
	nkeys = nkey;
    }
    if (gotkey) {
	fseek(f, fpos, 0);
	(global_precision = (realprecision));
    } else {
	fprintf(pgpout, LANG("\n\007You do not have the secret key needed to decrypt this file.\n"));
	fclose(f);
	return -1;
    }
    --count;
    if (version_error(outbuf[0], 1)) {
	fclose(f);
	return -1;
    }
    count -= 2;
    chksum = fetch_word16(outbuf + 1 + count);
    if (chksum != checksum(outbuf + 1, count)) {
	fprintf(pgpout, LANG("\n\007Error: RSA-decrypted block is corrupted.\nThis may be caused either by corrupted data or by using the wrong RSA key.\n"));
	fclose(f);
	return -1;
    }
    if ((g = fopen(outfile, "w")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't create plaintext file '%s'\n"), outfile);
	goto err1;
    }
    fread(&ctbCKE, 1, 1, f);
    if (!(((ctbCKE) & 0x80) == 0x80) || !(((ctbCKE) & 0x7c) == (4 * 9))) {
	fprintf(pgpout, "\007\nBad or missing CTB_CKE byte.\n");
	goto err1;
    }
    flen = getpastlength(ctbCKE, f);
    status = idea_file(outbuf + 1, (!0), f, g, flen);
    if (status < 0) {
	fprintf(pgpout, LANG("\n\007Error: Decrypted plaintext is corrupted.\n"));
    }
    if (!quietmode)
	fputc('.', pgpout);
    if (write_error(g)) {
	fclose(g);
	goto err1;
    }
    fclose(g);
    fclose(f);
    memset((void *) &(inbuf), 0, sizeof(inbuf));
    memset((void *) &(outbuf), 0, sizeof(outbuf));
    mp_init(d, 0);
    mp_init(p, 0);
    mp_init(q, 0);
    mp_init(u, 0);
    if (status < 0)
	return status;
    return 1;
  err1:fclose(f);
    memset((void *) &(inbuf), 0, sizeof(inbuf));
    memset((void *) &(outbuf), 0, sizeof(outbuf));
    mp_init(d, 0);
    mp_init(p, 0);
    mp_init(q, 0);
    mp_init(u, 0);
    return -1;
}

int idea_decryptfile(char *infile, char *outfile)
{
    byte ctb;
    FILE *f;
    FILE *g;
    byte ideakey[16];
    int status, retries = 0;
    struct hashedpw *hpw, **hpwp;
    word32 flen;
    if (verbose)
	fprintf(pgpout, "idea_decryptfile: infile = %s, outfile = %s\n", infile, outfile);
    if ((f = fopen(infile, "r")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open ciphertext file '%s'\n"), infile);
	return -1;
    }
    if ((g = fopen(outfile, "w")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't create plaintext file '%s'\n"), outfile);
	goto err1;
    }
    hpwp = &passwds;
    hpw = *hpwp;
    do {
	fread(&ctb, 1, 1, f);
	if (!(((ctb) & 0x80) == 0x80) || !(((ctb) & 0x7c) == (4 * 9))) {
	    fprintf(pgpout, "\007\nBad or missing CTB_CKE byte.\n");
	    fclose(g);
	    goto err1;
	}
	flen = getpastlength(ctb, f);
	if (hpw) {
	    memcpy(ideakey, hpw->hash, sizeof(ideakey));
	} else {
	    fprintf(pgpout, LANG("\nYou need a pass phrase to decrypt this file. "));
	    if (batchmode || GetHashedPassPhrase((char *) ideakey, 1) <= 0) {
		fclose(f);
		fclose(g);
		return -1;
	    }
	}
	if (!quietmode) {
	    fprintf(pgpout, LANG("Just a moment..."));
	    fflush(pgpout);
	}
	status = idea_file(ideakey, (!0), f, g, flen);
	if (status == 0) {
	    if (hpw) {
		*hpwp = hpw->next;
		memset(hpw->hash, 0, sizeof(hpw->hash));
		free(hpw);
	    }
	    break;
	}
	if (hpw) {
	    hpwp = &hpw->next;
	    hpw = *hpwp;
	} else {
	    ++retries;
	    fprintf(pgpout, LANG("\n\007Error:  Bad pass phrase.\n"));
	}
	rewind(f);
	rewind(g);
    } while (status == -2 && retries < 2);
    memset((void *) &(ideakey), 0, sizeof(ideakey));
    if (status == 0 && !quietmode)
	fputc('.', pgpout);
    if (write_error(g)) {
	fclose(g);
	goto err1;
    }
    fclose(g);
    fclose(f);
    if (status < 0) {
	remove(outfile);
	return status;
    }
    if (!quietmode)
	fprintf(pgpout, LANG("Pass phrase appears good. "));
    return 1;
  err1:fclose(f);
    return -1;
}

int decompress_file(char *infile, char *outfile)
{
    byte ctb;
    FILE *f;
    FILE *g;
    extern void lzhDecode(FILE *, FILE *);
    extern int unzip(FILE *, FILE *);
    if (verbose)
	fprintf(pgpout, LANG("Decompressing plaintext..."));
    if ((f = fopen(infile, "r")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open compressed file '%s'\n"), infile);
	return -1;
    }
    fread(&ctb, 1, 1, f);
    if (!(((ctb) & 0x7c) == (4 * 8))) {
	fprintf(pgpout, "\007\nBad or missing CTB_COMPRESSED byte.\n");
	goto err1;
    }
    getpastlength(ctb, f);
    fread(&ctb, 1, 1, f);
    if (ctb != 1) {
	fprintf(pgpout, LANG("\007\nUnrecognized compression algorithm.\nThis may require a newer version of PGP.\n"));
	goto err1;
    }
    if ((g = fopen(outfile, "w")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't create decompressed file '%s'\n"), outfile);
	goto err1;
    }
    if (unzip(f, g)) {
	fprintf(pgpout, LANG("\n\007Decompression error.  Probable corrupted input.\n"));
	goto err2;
    }
    if (verbose)
	fprintf(pgpout, LANG("done.  "));
    else if (!quietmode)
	fputc('.', pgpout);
    if (write_error(g))
	goto err2;
    fclose(g);
    fclose(f);
    return 1;
  err2:fclose(g);
  err1:fclose(f);
    return -1;
}
