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
extern int dprintf(int __fd, __const char *__restrict __fmt, ...) __attribute__ ((__format__(__printf__, 2, 3)));
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
extern __ssize_t getline(char **__restrict __lineptr, size_t * __restrict __n, FILE * __restrict __stream);
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
typedef struct {
    char *next_in;
    unsigned int avail_in;
    unsigned int total_in_lo32;
    unsigned int total_in_hi32;
    char *next_out;
    unsigned int avail_out;
    unsigned int total_out_lo32;
    unsigned int total_out_hi32;
    void *state;
    void *(*bzalloc) (void *, int, int);
    void (*bzfree) (void *, void *);
    void *opaque;
} bz_stream;
extern int BZ2_bzCompressInit(bz_stream * strm, int blockSize100k, int verbosity, int workFactor);
extern int BZ2_bzCompress(bz_stream * strm, int action);
extern int BZ2_bzCompressEnd(bz_stream * strm);
extern int BZ2_bzDecompressInit(bz_stream * strm, int verbosity, int small);
extern int BZ2_bzDecompress(bz_stream * strm);
extern int BZ2_bzDecompressEnd(bz_stream * strm);
typedef void BZFILE;
extern BZFILE *BZ2_bzReadOpen(int *bzerror, FILE * f, int verbosity, int small, void *unused, int nUnused);
extern void BZ2_bzReadClose(int *bzerror, BZFILE * b);
extern void BZ2_bzReadGetUnused(int *bzerror, BZFILE * b, void **unused, int *nUnused);
extern int BZ2_bzRead(int *bzerror, BZFILE * b, void *buf, int len);
extern BZFILE *BZ2_bzWriteOpen(int *bzerror, FILE * f, int blockSize100k, int verbosity, int workFactor);
extern void BZ2_bzWrite(int *bzerror, BZFILE * b, void *buf, int len);
extern void BZ2_bzWriteClose(int *bzerror, BZFILE * b, int abandon, unsigned int *nbytes_in, unsigned int *nbytes_out);
extern void BZ2_bzWriteClose64(int *bzerror, BZFILE * b, int abandon, unsigned int *nbytes_in_lo32, unsigned int *nbytes_in_hi32, unsigned int *nbytes_out_lo32, unsigned int *nbytes_out_hi32);
extern int BZ2_bzBuffToBuffCompress(char *dest, unsigned int *destLen, char *source, unsigned int sourceLen, int blockSize100k, int verbosity, int workFactor);
extern int BZ2_bzBuffToBuffDecompress(char *dest, unsigned int *destLen, char *source, unsigned int sourceLen, int small, int verbosity);
extern const char *BZ2_bzlibVersion(void);
extern BZFILE *BZ2_bzopen(const char *path, const char *mode);
extern BZFILE *BZ2_bzdopen(int fd, const char *mode);
extern int BZ2_bzread(BZFILE * b, void *buf, int len);
extern int BZ2_bzwrite(BZFILE * b, void *buf, int len);
extern int BZ2_bzflush(BZFILE * b);
extern void BZ2_bzclose(BZFILE * b);
extern const char *BZ2_bzerror(BZFILE * b, int *errnum);
typedef char Char;
typedef unsigned char Bool;
typedef unsigned char UChar;
typedef int Int32;
typedef unsigned int UInt32;
typedef short Int16;
typedef unsigned short UInt16;
extern void BZ2_bz__AssertH__fail(int errcode);
extern Int32 BZ2_rNums[512];
extern UInt32 BZ2_crc32Table[256];
typedef struct {
    bz_stream *strm;
    Int32 mode;
    Int32 state;
    UInt32 avail_in_expect;
    UInt32 *arr1;
    UInt32 *arr2;
    UInt32 *ftab;
    Int32 origPtr;
    UInt32 *ptr;
    UChar *block;
    UInt16 *mtfv;
    UChar *zbits;
    Int32 workFactor;
    UInt32 state_in_ch;
    Int32 state_in_len;
    Int32 rNToGo;
    Int32 rTPos;
    Int32 nblock;
    Int32 nblockMAX;
    Int32 numZ;
    Int32 state_out_pos;
    Int32 nInUse;
    Bool inUse[256];
    UChar unseqToSeq[256];
    UInt32 bsBuff;
    Int32 bsLive;
    UInt32 blockCRC;
    UInt32 combinedCRC;
    Int32 verbosity;
    Int32 blockNo;
    Int32 blockSize100k;
    Int32 nMTF;
    Int32 mtfFreq[258];
    UChar selector[(2 + (900000 / 50))];
    UChar selectorMtf[(2 + (900000 / 50))];
    UChar len[6][258];
    Int32 code[6][258];
    Int32 rfreq[6][258];
    UInt32 len_pack[258][4];
} EState;
extern void BZ2_blockSort(EState *);
extern void BZ2_compressBlock(EState *, Bool);
extern void BZ2_bsInitWrite(EState *);
extern void BZ2_hbAssignCodes(Int32 *, UChar *, Int32, Int32, Int32);
extern void BZ2_hbMakeCodeLengths(UChar *, Int32 *, Int32, Int32);
typedef struct {
    bz_stream *strm;
    Int32 state;
    UChar state_out_ch;
    Int32 state_out_len;
    Bool blockRandomised;
    Int32 rNToGo;
    Int32 rTPos;
    UInt32 bsBuff;
    Int32 bsLive;
    Int32 blockSize100k;
    Bool smallDecompress;
    Int32 currBlockNo;
    Int32 verbosity;
    Int32 origPtr;
    UInt32 tPos;
    Int32 k0;
    Int32 unzftab[256];
    Int32 nblock_used;
    Int32 cftab[257];
    Int32 cftabCopy[257];
    UInt32 *tt;
    UInt16 *ll16;
    UChar *ll4;
    UInt32 storedBlockCRC;
    UInt32 storedCombinedCRC;
    UInt32 calculatedBlockCRC;
    UInt32 calculatedCombinedCRC;
    Int32 nInUse;
    Bool inUse[256];
    Bool inUse16[16];
    UChar seqToUnseq[256];
    UChar mtfa[4096];
    Int32 mtfbase[256 / 16];
    UChar selector[(2 + (900000 / 50))];
    UChar selectorMtf[(2 + (900000 / 50))];
    UChar len[6][258];
    Int32 limit[6][258];
    Int32 base[6][258];
    Int32 perm[6][258];
    Int32 minLens[6];
    Int32 save_i;
    Int32 save_j;
    Int32 save_t;
    Int32 save_alphaSize;
    Int32 save_nGroups;
    Int32 save_nSelectors;
    Int32 save_EOB;
    Int32 save_groupNo;
    Int32 save_groupPos;
    Int32 save_nextSym;
    Int32 save_nblockMAX;
    Int32 save_nblock;
    Int32 save_es;
    Int32 save_N;
    Int32 save_curr;
    Int32 save_zt;
    Int32 save_zn;
    Int32 save_zvec;
    Int32 save_zj;
    Int32 save_gSel;
    Int32 save_gMinlen;
    Int32 *save_gLimit;
    Int32 *save_gBase;
    Int32 *save_gPerm;
} DState;
extern Int32 BZ2_indexIntoF(Int32, Int32 *);
extern Int32 BZ2_decompress(DState *);
extern void BZ2_hbCreateDecodeTables(Int32 *, Int32 *, Int32 *, UChar *, Int32, Int32, Int32);
static void makeMaps_d(DState * s)
{
    Int32 i;
    s->nInUse = 0;
    for (i = 0; i < 256; i++)
	if (s->inUse[i]) {
	    s->seqToUnseq[s->nInUse] = i;
	    s->nInUse++;
	}
}

Int32 BZ2_decompress(DState * s)
{
    UChar uc;
    Int32 retVal;
    Int32 minLen, maxLen;
    bz_stream *strm = s->strm;
    Int32 i;
    Int32 j;
    Int32 t;
    Int32 alphaSize;
    Int32 nGroups;
    Int32 nSelectors;
    Int32 EOB;
    Int32 groupNo;
    Int32 groupPos;
    Int32 nextSym;
    Int32 nblockMAX;
    Int32 nblock;
    Int32 es;
    Int32 N;
    Int32 curr;
    Int32 zt;
    Int32 zn;
    Int32 zvec;
    Int32 zj;
    Int32 gSel;
    Int32 gMinlen;
    Int32 *gLimit;
    Int32 *gBase;
    Int32 *gPerm;
    if (s->state == 10) {
	s->save_i = 0;
	s->save_j = 0;
	s->save_t = 0;
	s->save_alphaSize = 0;
	s->save_nGroups = 0;
	s->save_nSelectors = 0;
	s->save_EOB = 0;
	s->save_groupNo = 0;
	s->save_groupPos = 0;
	s->save_nextSym = 0;
	s->save_nblockMAX = 0;
	s->save_nblock = 0;
	s->save_es = 0;
	s->save_N = 0;
	s->save_curr = 0;
	s->save_zt = 0;
	s->save_zn = 0;
	s->save_zvec = 0;
	s->save_zj = 0;
	s->save_gSel = 0;
	s->save_gMinlen = 0;
	s->save_gLimit = ((void *) 0);
	s->save_gBase = ((void *) 0);
	s->save_gPerm = ((void *) 0);
    }
    i = s->save_i;
    j = s->save_j;
    t = s->save_t;
    alphaSize = s->save_alphaSize;
    nGroups = s->save_nGroups;
    nSelectors = s->save_nSelectors;
    EOB = s->save_EOB;
    groupNo = s->save_groupNo;
    groupPos = s->save_groupPos;
    nextSym = s->save_nextSym;
    nblockMAX = s->save_nblockMAX;
    nblock = s->save_nblock;
    es = s->save_es;
    N = s->save_N;
    curr = s->save_curr;
    zt = s->save_zt;
    zn = s->save_zn;
    zvec = s->save_zvec;
    zj = s->save_zj;
    gSel = s->save_gSel;
    gMinlen = s->save_gMinlen;
    gLimit = s->save_gLimit;
    gBase = s->save_gBase;
    gPerm = s->save_gPerm;
    retVal = 0;
    switch (s->state) {
    case 10:
	s->state = 10;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	if (uc != 0x42) {
	    retVal = (-5);
	    goto save_state_and_return;
	};;
    case 11:
	s->state = 11;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	if (uc != 0x5a) {
	    retVal = (-5);
	    goto save_state_and_return;
	};;
    case 12:
	s->state = 12;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	}
	if (uc != 0x68) {
	    retVal = (-5);
	    goto save_state_and_return;
	};;
    case 13:
	s->state = 13;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		s->blockSize100k = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	}
	if (s->blockSize100k < (0x30 + 1) || s->blockSize100k > (0x30 + 9)) {
	    retVal = (-5);
	    goto save_state_and_return;
	};;
	s->blockSize100k -= 0x30;
	if (s->smallDecompress) {
	    s->ll16 = (strm->bzalloc) (strm->opaque, (s->blockSize100k * 100000 * sizeof(UInt16)), 1);
	    s->ll4 = (strm->bzalloc) (strm->opaque, (((1 + s->blockSize100k * 100000) >> 1) * sizeof(UChar)), 1);
	    if (s->ll16 == ((void *) 0) || s->ll4 == ((void *) 0)) {
		retVal = (-3);
		goto save_state_and_return;
	    };;
	} else {
	    s->tt = (strm->bzalloc) (strm->opaque, (s->blockSize100k * 100000 * sizeof(Int32)), 1);
	    if (s->tt == ((void *) 0)) {
		retVal = (-3);
		goto save_state_and_return;
	    };;
	}
    case 14:
	s->state = 14;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	if (uc == 0x17)
	    goto endhdr_2;
	if (uc != 0x31) {
	    retVal = (-4);
	    goto save_state_and_return;
	};;
    case 15:
	s->state = 15;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	if (uc != 0x41) {
	    retVal = (-4);
	    goto save_state_and_return;
	};;
    case 16:
	s->state = 16;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	if (uc != 0x59) {
	    retVal = (-4);
	    goto save_state_and_return;
	};;
    case 17:
	s->state = 17;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	if (uc != 0x26) {
	    retVal = (-4);
	    goto save_state_and_return;
	};;
    case 18:
	s->state = 18;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	if (uc != 0x53) {
	    retVal = (-4);
	    goto save_state_and_return;
	};;
    case 19:
	s->state = 19;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	if (uc != 0x59) {
	    retVal = (-4);
	    goto save_state_and_return;
	};;
	s->currBlockNo++;
	if (s->verbosity >= 2)
	    fprintf(stderr, "\n    [%d: huff+mtf ", s->currBlockNo);
	s->storedBlockCRC = 0;
    case 20:
	s->state = 20;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	s->storedBlockCRC = (s->storedBlockCRC << 8) | ((UInt32) uc);
    case 21:
	s->state = 21;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	s->storedBlockCRC = (s->storedBlockCRC << 8) | ((UInt32) uc);
    case 22:
	s->state = 22;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	s->storedBlockCRC = (s->storedBlockCRC << 8) | ((UInt32) uc);
    case 23:
	s->state = 23;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	s->storedBlockCRC = (s->storedBlockCRC << 8) | ((UInt32) uc);
    case 24:
	s->state = 24;
	while (((Bool) 1)) {
	    if (s->bsLive >= 1) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 1)) & ((1 << 1) - 1);
		s->bsLive -= 1;
		s->blockRandomised = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	s->origPtr = 0;
    case 25:
	s->state = 25;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	s->origPtr = (s->origPtr << 8) | ((Int32) uc);
    case 26:
	s->state = 26;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	s->origPtr = (s->origPtr << 8) | ((Int32) uc);
    case 27:
	s->state = 27;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	s->origPtr = (s->origPtr << 8) | ((Int32) uc);
	if (s->origPtr < 0) {
	    retVal = (-4);
	    goto save_state_and_return;
	};;
	if (s->origPtr > 10 + 100000 * s->blockSize100k) {
	    retVal = (-4);
	    goto save_state_and_return;
	};;
	for (i = 0; i < 16; i++) {
    case 28:
	    s->state = 28;
	    while (((Bool) 1)) {
		if (s->bsLive >= 1) {
		    UInt32 v;
		    v = (s->bsBuff >> (s->bsLive - 1)) & ((1 << 1) - 1);
		    s->bsLive -= 1;
		    uc = v;
		    break;
		}
		if (s->strm->avail_in == 0) {
		    retVal = 0;
		    goto save_state_and_return;
		};;
		s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
		s->bsLive += 8;
		s->strm->next_in++;
		s->strm->avail_in--;
		s->strm->total_in_lo32++;
		if (s->strm->total_in_lo32 == 0)
		    s->strm->total_in_hi32++;
	    };
	    if (uc == 1)
		s->inUse16[i] = ((Bool) 1);
	    else
		s->inUse16[i] = ((Bool) 0);
	}
	for (i = 0; i < 256; i++)
	    s->inUse[i] = ((Bool) 0);
	for (i = 0; i < 16; i++)
	    if (s->inUse16[i])
		for (j = 0; j < 16; j++) {
    case 29:
		    s->state = 29;
		    while (((Bool) 1)) {
			if (s->bsLive >= 1) {
			    UInt32 v;
			    v = (s->bsBuff >> (s->bsLive - 1)) & ((1 << 1) - 1);
			    s->bsLive -= 1;
			    uc = v;
			    break;
			}
			if (s->strm->avail_in == 0) {
			    retVal = 0;
			    goto save_state_and_return;
			};;
			s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
			s->bsLive += 8;
			s->strm->next_in++;
			s->strm->avail_in--;
			s->strm->total_in_lo32++;
			if (s->strm->total_in_lo32 == 0)
			    s->strm->total_in_hi32++;
		    };
		    if (uc == 1)
			s->inUse[i * 16 + j] = ((Bool) 1);
		}
	makeMaps_d(s);
	if (s->nInUse == 0) {
	    retVal = (-4);
	    goto save_state_and_return;
	};;
	alphaSize = s->nInUse + 2;
    case 30:
	s->state = 30;
	while (((Bool) 1)) {
	    if (s->bsLive >= 3) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 3)) & ((1 << 3) - 1);
		s->bsLive -= 3;
		nGroups = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	if (nGroups < 2 || nGroups > 6) {
	    retVal = (-4);
	    goto save_state_and_return;
	};;
    case 31:
	s->state = 31;
	while (((Bool) 1)) {
	    if (s->bsLive >= 15) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 15)) & ((1 << 15) - 1);
		s->bsLive -= 15;
		nSelectors = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	if (nSelectors < 1) {
	    retVal = (-4);
	    goto save_state_and_return;
	};;
	for (i = 0; i < nSelectors; i++) {
	    j = 0;
	    while (((Bool) 1)) {
    case 32:
		s->state = 32;
		while (((Bool) 1)) {
		    if (s->bsLive >= 1) {
			UInt32 v;
			v = (s->bsBuff >> (s->bsLive - 1)) & ((1 << 1) - 1);
			s->bsLive -= 1;
			uc = v;
			break;
		    }
		    if (s->strm->avail_in == 0) {
			retVal = 0;
			goto save_state_and_return;
		    };;
		    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
		    s->bsLive += 8;
		    s->strm->next_in++;
		    s->strm->avail_in--;
		    s->strm->total_in_lo32++;
		    if (s->strm->total_in_lo32 == 0)
			s->strm->total_in_hi32++;
		};
		if (uc == 0)
		    break;
		j++;
		if (j >= nGroups) {
		    retVal = (-4);
		    goto save_state_and_return;
		};;
	    }
	    s->selectorMtf[i] = j;
	}
	{
	    UChar pos[6], tmp, v;
	    for (v = 0; v < nGroups; v++)
		pos[v] = v;
	    for (i = 0; i < nSelectors; i++) {
		v = s->selectorMtf[i];
		tmp = pos[v];
		while (v > 0) {
		    pos[v] = pos[v - 1];
		    v--;
		}
		pos[0] = tmp;
		s->selector[i] = tmp;
	    }
	}
	for (t = 0; t < nGroups; t++) {
    case 33:
	    s->state = 33;
	    while (((Bool) 1)) {
		if (s->bsLive >= 5) {
		    UInt32 v;
		    v = (s->bsBuff >> (s->bsLive - 5)) & ((1 << 5) - 1);
		    s->bsLive -= 5;
		    curr = v;
		    break;
		}
		if (s->strm->avail_in == 0) {
		    retVal = 0;
		    goto save_state_and_return;
		};;
		s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
		s->bsLive += 8;
		s->strm->next_in++;
		s->strm->avail_in--;
		s->strm->total_in_lo32++;
		if (s->strm->total_in_lo32 == 0)
		    s->strm->total_in_hi32++;
	    };
	    for (i = 0; i < alphaSize; i++) {
		while (((Bool) 1)) {
		    if (curr < 1 || curr > 20) {
			retVal = (-4);
			goto save_state_and_return;
		    };;
    case 34:
		    s->state = 34;
		    while (((Bool) 1)) {
			if (s->bsLive >= 1) {
			    UInt32 v;
			    v = (s->bsBuff >> (s->bsLive - 1)) & ((1 << 1) - 1);
			    s->bsLive -= 1;
			    uc = v;
			    break;
			}
			if (s->strm->avail_in == 0) {
			    retVal = 0;
			    goto save_state_and_return;
			};;
			s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
			s->bsLive += 8;
			s->strm->next_in++;
			s->strm->avail_in--;
			s->strm->total_in_lo32++;
			if (s->strm->total_in_lo32 == 0)
			    s->strm->total_in_hi32++;
		    };
		    if (uc == 0)
			break;
    case 35:
		    s->state = 35;
		    while (((Bool) 1)) {
			if (s->bsLive >= 1) {
			    UInt32 v;
			    v = (s->bsBuff >> (s->bsLive - 1)) & ((1 << 1) - 1);
			    s->bsLive -= 1;
			    uc = v;
			    break;
			}
			if (s->strm->avail_in == 0) {
			    retVal = 0;
			    goto save_state_and_return;
			};;
			s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
			s->bsLive += 8;
			s->strm->next_in++;
			s->strm->avail_in--;
			s->strm->total_in_lo32++;
			if (s->strm->total_in_lo32 == 0)
			    s->strm->total_in_hi32++;
		    };
		    if (uc == 0)
			curr++;
		    else
			curr--;
		}
		s->len[t][i] = curr;
	    }
	}
	for (t = 0; t < nGroups; t++) {
	    minLen = 32;
	    maxLen = 0;
	    for (i = 0; i < alphaSize; i++) {
		if (s->len[t][i] > maxLen)
		    maxLen = s->len[t][i];
		if (s->len[t][i] < minLen)
		    minLen = s->len[t][i];
	    }
	    BZ2_hbCreateDecodeTables(&(s->limit[t][0]), &(s->base[t][0]), &(s->perm[t][0]), &(s->len[t][0]), minLen, maxLen, alphaSize);
	    s->minLens[t] = minLen;
	}
	EOB = s->nInUse + 1;
	nblockMAX = 100000 * s->blockSize100k;
	groupNo = -1;
	groupPos = 0;
	for (i = 0; i <= 255; i++)
	    s->unzftab[i] = 0; {
	    Int32 ii, jj, kk;
	    kk = 4096 - 1;
	    for (ii = 256 / 16 - 1; ii >= 0; ii--) {
		for (jj = 16 - 1; jj >= 0; jj--) {
		    s->mtfa[kk] = (UChar) (ii * 16 + jj);
		    kk--;
		}
		s->mtfbase[ii] = kk + 1;
	    }
	    }
	    nblock = 0; {
		if (groupPos == 0) {
		    groupNo++;
		    if (groupNo >= nSelectors) {
			retVal = (-4);
			goto save_state_and_return;
		    };;
		    groupPos = 50;
		    gSel = s->selector[groupNo];
		    gMinlen = s->minLens[gSel];
		    gLimit = &(s->limit[gSel][0]);
		    gPerm = &(s->perm[gSel][0]);
		    gBase = &(s->base[gSel][0]);
		}
		groupPos--;
		zn = gMinlen;
    case 36:
		s->state = 36;
		while (((Bool) 1)) {
		    if (s->bsLive >= zn) {
			UInt32 v;
			v = (s->bsBuff >> (s->bsLive - zn)) & ((1 << zn) - 1);
			s->bsLive -= zn;
			zvec = v;
			break;
		    }
		    if (s->strm->avail_in == 0) {
			retVal = 0;
			goto save_state_and_return;
		    };;
		    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
		    s->bsLive += 8;
		    s->strm->next_in++;
		    s->strm->avail_in--;
		    s->strm->total_in_lo32++;
		    if (s->strm->total_in_lo32 == 0)
			s->strm->total_in_hi32++;
		};
		while (1) {
		    if (zn > 20) {
			retVal = (-4);
			goto save_state_and_return;
		    };;
		    if (zvec <= gLimit[zn])
			break;
		    zn++;
    case 37:
		    s->state = 37;
		    while (((Bool) 1)) {
			if (s->bsLive >= 1) {
			    UInt32 v;
			    v = (s->bsBuff >> (s->bsLive - 1)) & ((1 << 1) - 1);
			    s->bsLive -= 1;
			    zj = v;
			    break;
			}
			if (s->strm->avail_in == 0) {
			    retVal = 0;
			    goto save_state_and_return;
			};;
			s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
			s->bsLive += 8;
			s->strm->next_in++;
			s->strm->avail_in--;
			s->strm->total_in_lo32++;
			if (s->strm->total_in_lo32 == 0)
			    s->strm->total_in_hi32++;
		    };
		    zvec = (zvec << 1) | zj;
		};
		if (zvec - gBase[zn] < 0 || zvec - gBase[zn] >= 258) {
		    retVal = (-4);
		    goto save_state_and_return;
		};;
		nextSym = gPerm[zvec - gBase[zn]];
	    };
	    while (((Bool) 1)) {
		if (nextSym == EOB)
		    break;
		if (nextSym == 0 || nextSym == 1) {
		    es = -1;
		    N = 1;
		    do {
			if (nextSym == 0)
			    es = es + (0 + 1) * N;
			else if (nextSym == 1)
			    es = es + (1 + 1) * N;
			N = N * 2; {
			    if (groupPos == 0) {
				groupNo++;
				if (groupNo >= nSelectors) {
				    retVal = (-4);
				    goto save_state_and_return;
				};;
				groupPos = 50;
				gSel = s->selector[groupNo];
				gMinlen = s->minLens[gSel];
				gLimit = &(s->limit[gSel][0]);
				gPerm = &(s->perm[gSel][0]);
				gBase = &(s->base[gSel][0]);
			    }
			    groupPos--;
			    zn = gMinlen;
    case 38:
			    s->state = 38;
			    while (((Bool) 1)) {
				if (s->bsLive >= zn) {
				    UInt32 v;
				    v = (s->bsBuff >> (s->bsLive - zn)) & ((1 << zn) - 1);
				    s->bsLive -= zn;
				    zvec = v;
				    break;
				}
				if (s->strm->avail_in == 0) {
				    retVal = 0;
				    goto save_state_and_return;
				};;
				s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
				s->bsLive += 8;
				s->strm->next_in++;
				s->strm->avail_in--;
				s->strm->total_in_lo32++;
				if (s->strm->total_in_lo32 == 0)
				    s->strm->total_in_hi32++;
			    };
			    while (1) {
				if (zn > 20) {
				    retVal = (-4);
				    goto save_state_and_return;
				};;
				if (zvec <= gLimit[zn])
				    break;
				zn++;
    case 39:
				s->state = 39;
				while (((Bool) 1)) {
				    if (s->bsLive >= 1) {
					UInt32 v;
					v = (s->bsBuff >> (s->bsLive - 1)) & ((1 << 1) - 1);
					s->bsLive -= 1;
					zj = v;
					break;
				    }
				    if (s->strm->avail_in == 0) {
					retVal = 0;
					goto save_state_and_return;
				    };;
				    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
				    s->bsLive += 8;
				    s->strm->next_in++;
				    s->strm->avail_in--;
				    s->strm->total_in_lo32++;
				    if (s->strm->total_in_lo32 == 0)
					s->strm->total_in_hi32++;
				};
				zvec = (zvec << 1) | zj;
			    };
			    if (zvec - gBase[zn] < 0 || zvec - gBase[zn] >= 258) {
				retVal = (-4);
				goto save_state_and_return;
			    };;
			    nextSym = gPerm[zvec - gBase[zn]];
			};
		    } while (nextSym == 0 || nextSym == 1);
		    es++;
		    uc = s->seqToUnseq[s->mtfa[s->mtfbase[0]]];
		    s->unzftab[uc] += es;
		    if (s->smallDecompress)
			while (es > 0) {
			    if (nblock >= nblockMAX) {
				retVal = (-4);
				goto save_state_and_return;
			    };;
			    s->ll16[nblock] = (UInt16) uc;
			    nblock++;
			    es--;
		    } else
			while (es > 0) {
			    if (nblock >= nblockMAX) {
				retVal = (-4);
				goto save_state_and_return;
			    };;
			    s->tt[nblock] = (UInt32) uc;
			    nblock++;
			    es--;
			};
		    continue;
		} else {
		    if (nblock >= nblockMAX) {
			retVal = (-4);
			goto save_state_and_return;
		    };; {
			Int32 ii, jj, kk, pp, lno, off;
			UInt32 nn;
			nn = (UInt32) (nextSym - 1);
			if (nn < 16) {
			    pp = s->mtfbase[0];
			    uc = s->mtfa[pp + nn];
			    while (nn > 3) {
				Int32 z = pp + nn;
				s->mtfa[(z)] = s->mtfa[(z) - 1];
				s->mtfa[(z) - 1] = s->mtfa[(z) - 2];
				s->mtfa[(z) - 2] = s->mtfa[(z) - 3];
				s->mtfa[(z) - 3] = s->mtfa[(z) - 4];
				nn -= 4;
			    }
			    while (nn > 0) {
				s->mtfa[(pp + nn)] = s->mtfa[(pp + nn) - 1];
				nn--;
			    };
			    s->mtfa[pp] = uc;
			} else {
			    lno = nn / 16;
			    off = nn % 16;
			    pp = s->mtfbase[lno] + off;
			    uc = s->mtfa[pp];
			    while (pp > s->mtfbase[lno]) {
				s->mtfa[pp] = s->mtfa[pp - 1];
				pp--;
			    };
			    s->mtfbase[lno]++;
			    while (lno > 0) {
				s->mtfbase[lno]--;
				s->mtfa[s->mtfbase[lno]] = s->mtfa[s->mtfbase[lno - 1] + 16 - 1];
				lno--;
			    }
			    s->mtfbase[0]--;
			    s->mtfa[s->mtfbase[0]] = uc;
			    if (s->mtfbase[0] == 0) {
				kk = 4096 - 1;
				for (ii = 256 / 16 - 1; ii >= 0; ii--) {
				    for (jj = 16 - 1; jj >= 0; jj--) {
					s->mtfa[kk] = s->mtfa[s->mtfbase[ii] + jj];
					kk--;
				    }
				    s->mtfbase[ii] = kk + 1;
				}
			    }
			}
		    }
		    s->unzftab[s->seqToUnseq[uc]]++;
		    if (s->smallDecompress)
			s->ll16[nblock] = (UInt16) (s->seqToUnseq[uc]);
		    else
			s->tt[nblock] = (UInt32) (s->seqToUnseq[uc]);
		    nblock++; {
			if (groupPos == 0) {
			    groupNo++;
			    if (groupNo >= nSelectors) {
				retVal = (-4);
				goto save_state_and_return;
			    };;
			    groupPos = 50;
			    gSel = s->selector[groupNo];
			    gMinlen = s->minLens[gSel];
			    gLimit = &(s->limit[gSel][0]);
			    gPerm = &(s->perm[gSel][0]);
			    gBase = &(s->base[gSel][0]);
			}
			groupPos--;
			zn = gMinlen;
    case 40:
			s->state = 40;
			while (((Bool) 1)) {
			    if (s->bsLive >= zn) {
				UInt32 v;
				v = (s->bsBuff >> (s->bsLive - zn)) & ((1 << zn) - 1);
				s->bsLive -= zn;
				zvec = v;
				break;
			    }
			    if (s->strm->avail_in == 0) {
				retVal = 0;
				goto save_state_and_return;
			    };;
			    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
			    s->bsLive += 8;
			    s->strm->next_in++;
			    s->strm->avail_in--;
			    s->strm->total_in_lo32++;
			    if (s->strm->total_in_lo32 == 0)
				s->strm->total_in_hi32++;
			};
			while (1) {
			    if (zn > 20) {
				retVal = (-4);
				goto save_state_and_return;
			    };;
			    if (zvec <= gLimit[zn])
				break;
			    zn++;
    case 41:
			    s->state = 41;
			    while (((Bool) 1)) {
				if (s->bsLive >= 1) {
				    UInt32 v;
				    v = (s->bsBuff >> (s->bsLive - 1)) & ((1 << 1) - 1);
				    s->bsLive -= 1;
				    zj = v;
				    break;
				}
				if (s->strm->avail_in == 0) {
				    retVal = 0;
				    goto save_state_and_return;
				};;
				s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
				s->bsLive += 8;
				s->strm->next_in++;
				s->strm->avail_in--;
				s->strm->total_in_lo32++;
				if (s->strm->total_in_lo32 == 0)
				    s->strm->total_in_hi32++;
			    };
			    zvec = (zvec << 1) | zj;
			};
			if (zvec - gBase[zn] < 0 || zvec - gBase[zn] >= 258) {
			    retVal = (-4);
			    goto save_state_and_return;
			};;
			nextSym = gPerm[zvec - gBase[zn]];
		    };
		    continue;
		}
	    }
	    if (s->origPtr < 0 || s->origPtr >= nblock) {
		retVal = (-4);
		goto save_state_and_return;
	    };;
	s->cftab[0] = 0;
	for (i = 1; i <= 256; i++)
	    s->cftab[i] = s->unzftab[i - 1];
	for (i = 1; i <= 256; i++)
	    s->cftab[i] += s->cftab[i - 1];
	for (i = 0; i <= 256; i++) {
	    if (s->cftab[i] < 0 || s->cftab[i] > nblock) { {
		    retVal = (-4);
		    goto save_state_and_return;
	    };;
	    }
	}
	s->state_out_len = 0;
	s->state_out_ch = 0; {
	    s->calculatedBlockCRC = 0xffffffffL;
	};
	s->state = 2;
	if (s->verbosity >= 2)
	    fprintf(stderr, "rt+rld");
	if (s->smallDecompress) {
	    for (i = 0; i <= 256; i++)
		s->cftabCopy[i] = s->cftab[i];
	    for (i = 0; i < nblock; i++) {
		uc = (UChar) (s->ll16[i]); {
		    s->ll16[i] = (UInt16) (s->cftabCopy[uc] & 0x0000ffff); {
			if (((i) & 0x1) == 0)
			    s->ll4[(i) >> 1] = (s->ll4[(i) >> 1] & 0xf0) | (s->cftabCopy[uc] >> 16);
			else
			    s->ll4[(i) >> 1] = (s->ll4[(i) >> 1] & 0x0f) | ((s->cftabCopy[uc] >> 16) << 4);
		    };
		};
		s->cftabCopy[uc]++;
	    }
	    i = s->origPtr;
	    j = (((UInt32) s->ll16[i]) | (((((UInt32) (s->ll4[(i) >> 1])) >> (((i) << 2) & 0x4)) & 0xF) << 16));
	    do {
		Int32 tmp = (((UInt32) s->ll16[j]) | (((((UInt32) (s->ll4[(j) >> 1])) >> (((j) << 2) & 0x4)) & 0xF) << 16)); {
		    s->ll16[j] = (UInt16) (i & 0x0000ffff); {
			if (((j) & 0x1) == 0)
			    s->ll4[(j) >> 1] = (s->ll4[(j) >> 1] & 0xf0) | (i >> 16);
			else
			    s->ll4[(j) >> 1] = (s->ll4[(j) >> 1] & 0x0f) | ((i >> 16) << 4);
		    };
		};
		i = j;
		j = tmp;
	    } while (i != s->origPtr);
	    s->tPos = s->origPtr;
	    s->nblock_used = 0;
	    if (s->blockRandomised) {
		s->rNToGo = 0;
		s->rTPos = 0;
		s->k0 = BZ2_indexIntoF(s->tPos, s->cftab);
		s->tPos = (((UInt32) s->ll16[s->tPos]) | (((((UInt32) (s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));;
		s->nblock_used++;
		if (s->rNToGo == 0) {
		    s->rNToGo = BZ2_rNums[s->rTPos];
		    s->rTPos++;
		    if (s->rTPos == 512)
			s->rTPos = 0;
		}
		s->rNToGo--;;
		s->k0 ^= ((s->rNToGo == 1) ? 1 : 0);
	    } else {
		s->k0 = BZ2_indexIntoF(s->tPos, s->cftab);
		s->tPos = (((UInt32) s->ll16[s->tPos]) | (((((UInt32) (s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));;
		s->nblock_used++;
	    }
	} else {
	    for (i = 0; i < nblock; i++) {
		uc = (UChar) (s->tt[i] & 0xff);
		s->tt[s->cftab[uc]] |= (i << 8);
		s->cftab[uc]++;
	    }
	    s->tPos = s->tt[s->origPtr] >> 8;
	    s->nblock_used = 0;
	    if (s->blockRandomised) {
		s->rNToGo = 0;
		s->rTPos = 0;
		s->tPos = s->tt[s->tPos];
		s->k0 = (UChar) (s->tPos & 0xff);
		s->tPos >>= 8;;
		s->nblock_used++;
		if (s->rNToGo == 0) {
		    s->rNToGo = BZ2_rNums[s->rTPos];
		    s->rTPos++;
		    if (s->rTPos == 512)
			s->rTPos = 0;
		}
		s->rNToGo--;;
		s->k0 ^= ((s->rNToGo == 1) ? 1 : 0);
	    } else {
		s->tPos = s->tt[s->tPos];
		s->k0 = (UChar) (s->tPos & 0xff);
		s->tPos >>= 8;;
		s->nblock_used++;
	    }
	}
	{
	    retVal = 0;
	    goto save_state_and_return;
	};;
    endhdr_2: case 42:
	s->state = 42;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	if (uc != 0x72) {
	    retVal = (-4);
	    goto save_state_and_return;
	};;
    case 43:
	s->state = 43;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	if (uc != 0x45) {
	    retVal = (-4);
	    goto save_state_and_return;
	};;
    case 44:
	s->state = 44;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	if (uc != 0x38) {
	    retVal = (-4);
	    goto save_state_and_return;
	};;
    case 45:
	s->state = 45;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	if (uc != 0x50) {
	    retVal = (-4);
	    goto save_state_and_return;
	};;
    case 46:
	s->state = 46;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	if (uc != 0x90) {
	    retVal = (-4);
	    goto save_state_and_return;
	};;
	s->storedCombinedCRC = 0;
    case 47:
	s->state = 47;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	s->storedCombinedCRC = (s->storedCombinedCRC << 8) | ((UInt32) uc);
    case 48:
	s->state = 48;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	s->storedCombinedCRC = (s->storedCombinedCRC << 8) | ((UInt32) uc);
    case 49:
	s->state = 49;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	s->storedCombinedCRC = (s->storedCombinedCRC << 8) | ((UInt32) uc);
    case 50:
	s->state = 50;
	while (((Bool) 1)) {
	    if (s->bsLive >= 8) {
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive - 8)) & ((1 << 8) - 1);
		s->bsLive -= 8;
		uc = v;
		break;
	    }
	    if (s->strm->avail_in == 0) {
		retVal = 0;
		goto save_state_and_return;
	    };;
	    s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar *) (s->strm->next_in))));
	    s->bsLive += 8;
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	};
	s->storedCombinedCRC = (s->storedCombinedCRC << 8) | ((UInt32) uc);
	s->state = 1; {
	    retVal = 4;
	    goto save_state_and_return;
	};;
    default:{
	    if (!(((Bool) 0)))
		BZ2_bz__AssertH__fail(4001);
	};
    }
    {
	if (!(((Bool) 0)))
	    BZ2_bz__AssertH__fail(4002);
    };
  save_state_and_return:s->save_i = i;
    s->save_j = j;
    s->save_t = t;
    s->save_alphaSize = alphaSize;
    s->save_nGroups = nGroups;
    s->save_nSelectors = nSelectors;
    s->save_EOB = EOB;
    s->save_groupNo = groupNo;
    s->save_groupPos = groupPos;
    s->save_nextSym = nextSym;
    s->save_nblockMAX = nblockMAX;
    s->save_nblock = nblock;
    s->save_es = es;
    s->save_N = N;
    s->save_curr = curr;
    s->save_zt = zt;
    s->save_zn = zn;
    s->save_zvec = zvec;
    s->save_zj = zj;
    s->save_gSel = gSel;
    s->save_gMinlen = gMinlen;
    s->save_gLimit = gLimit;
    s->save_gBase = gBase;
    s->save_gPerm = gPerm;
    return retVal;
}
