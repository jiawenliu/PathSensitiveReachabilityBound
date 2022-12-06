typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
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
struct stat {
    __dev_t st_dev;
    unsigned short int __pad1;
    __ino_t st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    unsigned short int __pad2;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    unsigned long int __unused4;
    unsigned long int __unused5;
};
extern int stat(__const char *__restrict __file, struct stat *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int fstat(int __fd, struct stat *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int fstatat(int __fd, __const char *__restrict __file, struct stat *__restrict __buf, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern int lstat(__const char *__restrict __file, struct stat *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int chmod(__const char *__file, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int lchmod(__const char *__file, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fchmod(int __fd, __mode_t __mode) __attribute__ ((__nothrow__));
extern int fchmodat(int __fd, __const char *__file, __mode_t __mode, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern __mode_t umask(__mode_t __mask) __attribute__ ((__nothrow__));
extern int mkdir(__const char *__path, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int mkdirat(int __fd, __const char *__path, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int mknod(__const char *__path, __mode_t __mode, __dev_t __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int mknodat(int __fd, __const char *__path, __mode_t __mode, __dev_t __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int mkfifo(__const char *__path, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int mkfifoat(int __fd, __const char *__path, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int utimensat(int __fd, __const char *__path, __const struct timespec __times[2], int __flags) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int futimens(int __fd, __const struct timespec __times[2]) __attribute__ ((__nothrow__));
extern int __fxstat(int __ver, int __fildes, struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3)));
extern int __xstat(int __ver, __const char *__filename, struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern int __lxstat(int __ver, __const char *__filename, struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern int __fxstatat(int __ver, int __fildes, __const char *__filename, struct stat *__stat_buf, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern int __xmknod(int __ver, __const char *__path, __mode_t __mode, __dev_t * __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 4)));
extern int __xmknodat(int __ver, int __fd, __const char *__path, __mode_t __mode, __dev_t * __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 5)));
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
extern int lockf(int __fd, int __cmd, __off_t __len);
extern int posix_fadvise(int __fd, __off_t __offset, __off_t __len, int __advise) __attribute__ ((__nothrow__));
extern int posix_fallocate(int __fd, __off_t __offset, __off_t __len);
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
extern int fdatasync(int __fildes);
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
extern int *__errno_location(void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
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
enum { __LC_CTYPE = 0, __LC_NUMERIC = 1, __LC_TIME = 2, __LC_COLLATE = 3, __LC_MONETARY = 4, __LC_MESSAGES = 5, __LC_ALL = 6, __LC_PAPER = 7, __LC_NAME = 8, __LC_ADDRESS = 9, __LC_TELEPHONE = 10, __LC_MEASUREMENT = 11, __LC_IDENTIFICATION = 12 };
struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};
extern char *setlocale(int __category, __const char *__locale) __attribute__ ((__nothrow__));
extern struct lconv *localeconv(void) __attribute__ ((__nothrow__));
extern __locale_t newlocale(int __category_mask, __const char *__locale, __locale_t __base) __attribute__ ((__nothrow__));
extern __locale_t duplocale(__locale_t __dataset) __attribute__ ((__nothrow__));
extern void freelocale(__locale_t __dataset) __attribute__ ((__nothrow__));
extern __locale_t uselocale(__locale_t __dataset) __attribute__ ((__nothrow__));
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
typedef unsigned char cc_t;
typedef unsigned int speed_t;
typedef unsigned int tcflag_t;
struct termios {
    tcflag_t c_iflag;
    tcflag_t c_oflag;
    tcflag_t c_cflag;
    tcflag_t c_lflag;
    cc_t c_line;
    cc_t c_cc[32];
    speed_t c_ispeed;
    speed_t c_ospeed;
};
extern speed_t cfgetospeed(__const struct termios *__termios_p) __attribute__ ((__nothrow__));
extern speed_t cfgetispeed(__const struct termios *__termios_p) __attribute__ ((__nothrow__));
extern int cfsetospeed(struct termios *__termios_p, speed_t __speed) __attribute__ ((__nothrow__));
extern int cfsetispeed(struct termios *__termios_p, speed_t __speed) __attribute__ ((__nothrow__));
extern int cfsetspeed(struct termios *__termios_p, speed_t __speed) __attribute__ ((__nothrow__));
extern int tcgetattr(int __fd, struct termios *__termios_p) __attribute__ ((__nothrow__));
extern int tcsetattr(int __fd, int __optional_actions, __const struct termios *__termios_p) __attribute__ ((__nothrow__));
extern void cfmakeraw(struct termios *__termios_p) __attribute__ ((__nothrow__));
extern int tcsendbreak(int __fd, int __duration) __attribute__ ((__nothrow__));
extern int tcdrain(int __fd);
extern int tcflush(int __fd, int __queue_selector) __attribute__ ((__nothrow__));
extern int tcflow(int __fd, int __action) __attribute__ ((__nothrow__));
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
extern void __assert_fail(__const char *__assertion, __const char *__file, unsigned int __line, __const char *__function) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void __assert_perror_fail(int __errnum, __const char *__file, unsigned int __line, __const char *__function) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void __assert(const char *__assertion, const char *__file, int __line) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void *mmap(void *__addr, size_t __len, int __prot, int __flags, int __fd, __off_t __offset) __attribute__ ((__nothrow__));
extern int munmap(void *__addr, size_t __len) __attribute__ ((__nothrow__));
extern int mprotect(void *__addr, size_t __len, int __prot) __attribute__ ((__nothrow__));
extern int msync(void *__addr, size_t __len, int __flags);
extern int madvise(void *__addr, size_t __len, int __advice) __attribute__ ((__nothrow__));
extern int posix_madvise(void *__addr, size_t __len, int __advice) __attribute__ ((__nothrow__));
extern int mlock(__const void *__addr, size_t __len) __attribute__ ((__nothrow__));
extern int munlock(__const void *__addr, size_t __len) __attribute__ ((__nothrow__));
extern int mlockall(int __flags) __attribute__ ((__nothrow__));
extern int munlockall(void) __attribute__ ((__nothrow__));
extern int mincore(void *__start, size_t __len, unsigned char *__vec) __attribute__ ((__nothrow__));
extern int shm_open(__const char *__name, int __oflag, mode_t __mode);
extern int shm_unlink(__const char *__name);
extern char const mad_version[];
extern char const mad_copyright[];
extern char const mad_author[];
extern char const mad_build[];
typedef signed int mad_fixed_t;
typedef signed int mad_fixed64hi_t;
typedef unsigned int mad_fixed64lo_t;
typedef mad_fixed_t mad_sample_t;
mad_fixed_t mad_f_abs(mad_fixed_t);
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
enum audio_command { AUDIO_COMMAND_INIT, AUDIO_COMMAND_CONFIG, AUDIO_COMMAND_PLAY, AUDIO_COMMAND_STOP, AUDIO_COMMAND_FINISH };
enum audio_mode { AUDIO_MODE_ROUND, AUDIO_MODE_DITHER };
struct audio_stats {
    unsigned long clipped_samples;
    mad_fixed_t peak_clipping;
    mad_fixed_t peak_sample;
};
union audio_control {
    enum audio_command command;
    struct audio_init {
	enum audio_command command;
	char const *path;
    } init;
    struct audio_config {
	enum audio_command command;
	unsigned int channels;
	unsigned int speed;
	unsigned int precision;
    } config;
    struct audio_play {
	enum audio_command command;
	unsigned int nsamples;
	mad_fixed_t const *samples[2];
	enum audio_mode mode;
	struct audio_stats *stats;
    } play;
    struct audio_stop {
	enum audio_command command;
	int flush;
    } stop;
    struct audio_finish {
	enum audio_command command;
    } finish;
};
struct audio_dither {
    mad_fixed_t error[3];
    mad_fixed_t random;
};
extern char const *audio_error;
typedef int audio_ctlfunc_t(union audio_control *);
audio_ctlfunc_t *audio_output(char const **);
audio_ctlfunc_t audio_oss;
audio_ctlfunc_t audio_esd;
audio_ctlfunc_t audio_empeg;
audio_ctlfunc_t audio_sun;
audio_ctlfunc_t audio_win32;
audio_ctlfunc_t audio_raw;
audio_ctlfunc_t audio_cdda;
audio_ctlfunc_t audio_aiff;
audio_ctlfunc_t audio_wave;
audio_ctlfunc_t audio_snd;
audio_ctlfunc_t audio_hex;
audio_ctlfunc_t audio_null;
void audio_control_init(union audio_control *, enum audio_command);
signed long audio_linear_round(unsigned int, mad_fixed_t, struct audio_stats *);
signed long audio_linear_dither(unsigned int, mad_fixed_t, struct audio_dither *, struct audio_stats *);
unsigned char audio_mulaw_round(mad_fixed_t, struct audio_stats *);
unsigned char audio_mulaw_dither(mad_fixed_t, struct audio_dither *, struct audio_stats *);
typedef unsigned int audio_pcmfunc_t(unsigned char *, unsigned int, mad_fixed_t const *, mad_fixed_t const *, enum audio_mode, struct audio_stats *);
audio_pcmfunc_t audio_pcm_u8;
audio_pcmfunc_t audio_pcm_s8;
audio_pcmfunc_t audio_pcm_s16le;
audio_pcmfunc_t audio_pcm_s16be;
audio_pcmfunc_t audio_pcm_s24le;
audio_pcmfunc_t audio_pcm_s24be;
audio_pcmfunc_t audio_pcm_s32le;
audio_pcmfunc_t audio_pcm_s32be;
audio_pcmfunc_t audio_pcm_mulaw;
struct resample_state {
    mad_fixed_t ratio;
    mad_fixed_t step;
    mad_fixed_t last;
};
int resample_init(struct resample_state *, unsigned int, unsigned int);
unsigned int resample_block(struct resample_state *, unsigned int nsamples, mad_fixed_t const *, mad_fixed_t *);
typedef enum mad_flow filter_func_t(void *, struct mad_frame *);
struct filter {
    int flags;
    filter_func_t *func;
    void *data;
    struct filter *chain;
};
enum { FILTER_FLAG_DMEM = 0x0001 };
void filter_init(struct filter *, filter_func_t *, void *, struct filter *);
struct filter *filter_new(filter_func_t *, void *, struct filter *);
void filter_free(struct filter *);
enum mad_flow filter_run(struct filter *, struct mad_frame *);
filter_func_t mono_filter;
filter_func_t fadein_filter;
struct xing {
    long flags;
    unsigned long frames;
    unsigned long bytes;
    unsigned char toc[100];
    long scale;
};
enum { XING_FRAMES = 0x00000001L, XING_BYTES = 0x00000002L, XING_TOC = 0x00000004L, XING_SCALE = 0x00000008L };
void xing_init(struct xing *);
int xing_parse(struct xing *, struct mad_bitptr, unsigned int);
enum { PLAYER_OPTION_SHUFFLE = 0x0001, PLAYER_OPTION_DOWNSAMPLE = 0x0002, PLAYER_OPTION_IGNORECRC = 0x0004, PLAYER_OPTION_SKIP = 0x0010, PLAYER_OPTION_TIMED = 0x0020, PLAYER_OPTION_TTYCONTROL = 0x0040, PLAYER_OPTION_STREAMID3 = 0x0080, PLAYER_OPTION_FADEIN = 0x0100, PLAYER_OPTION_FADEOUT = 0x0200, PLAYER_OPTION_GAP = 0x0400, PLAYER_OPTION_CROSSFADE = 0x0800, };
enum player_control { PLAYER_CONTROL_DEFAULT, PLAYER_CONTROL_NEXT, PLAYER_CONTROL_PREVIOUS, PLAYER_CONTROL_REPLAY, PLAYER_CONTROL_STOP };
enum player_channel { PLAYER_CHANNEL_DEFAULT = 0, PLAYER_CHANNEL_LEFT = 1, PLAYER_CHANNEL_RIGHT = 2, PLAYER_CHANNEL_MONO = 3, PLAYER_CHANNEL_STEREO = 4 };
enum stats_show { STATS_SHOW_OVERALL, STATS_SHOW_CURRENT, STATS_SHOW_REMAINING };
struct player {
    int verbosity;
    int options;
    int repeat;
    enum player_control control;
    struct playlist {
	char const **entries;
	int length;
	int current;
    } playlist;
    mad_timer_t global_start;
    mad_timer_t global_stop;
    mad_timer_t fade_in;
    mad_timer_t fade_out;
    mad_timer_t gap;
    struct input {
	char const *path;
	int fd;
	unsigned char *fdm;
	unsigned char *data;
	unsigned long length;
	int eof;
	struct xing xing;
    } input;
    struct output {
	enum audio_mode mode;
	mad_fixed_t attenuation;
	struct filter *filters;
	unsigned int channels_in;
	unsigned int channels_out;
	enum player_channel select;
	unsigned int speed_in;
	unsigned int speed_out;
	unsigned int precision_in;
	unsigned int precision_out;
	char const *path;
	audio_ctlfunc_t *command;
	struct resample_state resample[2];
	mad_fixed_t(*resampled)[2][(1152 * 3)];
    } output;
    struct stats {
	enum stats_show show;
	char const *label;
	unsigned long total_bytes;
	mad_timer_t total_time;
	mad_timer_t global_timer;
	mad_timer_t absolute_timer;
	mad_timer_t play_timer;
	unsigned long global_framecount;
	unsigned long absolute_framecount;
	unsigned long play_framecount;
	unsigned long error_frame;
	unsigned long mute_frame;
	int vbr;
	unsigned int bitrate;
	unsigned long vbr_frames;
	unsigned long vbr_rate;
	signed long nsecs;
	struct audio_stats audio;
    } stats;
};
void player_init(struct player *);
void player_finish(struct player *);
int player_run(struct player *, int, char const *[]);
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
struct equalizer {
    mad_fixed_t bandfactors[2][32];
};
void equalizer_init(struct equalizer *);
filter_func_t equalizer_filter;
enum { KEY_PAUSE = 'p', KEY_STOP = 's', KEY_FORWARD = 'f', KEY_BACK = 'b', KEY_TIME = 't', KEY_QUIT = 'q', KEY_INFO = 'i' };
static int on_same_line;
static int tty_fd = -1;
static struct termios save_tty;
static struct sigaction save_sigtstp, save_sigint;
void player_init(struct player *player)
{
    player->verbosity = 0;
    player->options = 0;
    player->repeat = 1;
    player->control = PLAYER_CONTROL_DEFAULT;
    player->playlist.entries = 0;
    player->playlist.length = 0;
    player->playlist.current = 0;
    player->global_start = mad_timer_zero;
    player->global_stop = mad_timer_zero;
    player->fade_in = mad_timer_zero;
    player->fade_out = mad_timer_zero;
    player->gap = mad_timer_zero;
    player->input.path = 0;
    player->input.fd = -1;
    player->input.fdm = 0;
    player->input.data = 0;
    player->input.length = 0;
    player->input.eof = 0;
    xing_init(&player->input.xing);
    player->output.mode = AUDIO_MODE_DITHER;
    player->output.attenuation = ((mad_fixed_t) (0x10000000L));
    player->output.filters = 0;
    player->output.channels_in = 0;
    player->output.channels_out = 0;
    player->output.select = PLAYER_CHANNEL_DEFAULT;
    player->output.speed_in = 0;
    player->output.speed_out = 0;
    player->output.precision_in = 0;
    player->output.precision_out = 0;
    player->output.path = 0;
    player->output.command = 0;
    player->output.resampled = 0;
    player->stats.show = STATS_SHOW_OVERALL;
    player->stats.label = 0;
    player->stats.total_bytes = 0;
    player->stats.total_time = mad_timer_zero;
    player->stats.global_timer = mad_timer_zero;
    player->stats.absolute_timer = mad_timer_zero;
    player->stats.play_timer = mad_timer_zero;
    player->stats.global_framecount = 0;
    player->stats.absolute_framecount = 0;
    player->stats.play_framecount = 0;
    player->stats.error_frame = -1;
    player->stats.mute_frame = 0;
    player->stats.vbr = 0;
    player->stats.bitrate = 0;
    player->stats.vbr_frames = 0;
    player->stats.vbr_rate = 0;
    player->stats.nsecs = 0;
    player->stats.audio.clipped_samples = 0;
    player->stats.audio.peak_clipping = 0;
    player->stats.audio.peak_sample = 0;
} void player_finish(struct player *player)
{
    if (player->output.filters)
	filter_free(player->output.filters);
    if (player->output.resampled) {;;
	free(player->output.resampled);
	player->output.resampled = 0;
    }
}

static int message(char const *format, ...)
{
    int len, newline, result;
    va_list args;
    len = strlen(format);
    newline = (len > 0 && format[len - 1] == '\n');
    if (on_same_line && newline && len > 1)
	fputc('\n', stderr);
    __builtin_va_start(args, format);
    result = vfprintf(stderr, format, args);
    __builtin_va_end(args);
    if (on_same_line && !newline && result < on_same_line) {
	unsigned int i;
	i = on_same_line - result;
	while (i--)
	    _IO_putc(' ', stderr);
    }
    on_same_line = newline ? 0 : result;
    if (!newline) {
	fputc('\r', stderr);
	fflush(stderr);
    }
    return result;
}

static void error(char const *id, char const *format, ...)
{
    int err;
    va_list args;
    err = (*__errno_location());
    if (on_same_line)
	message("\n");
    if (id)
	fprintf(stderr, "%s: ", id);
    __builtin_va_start(args, format);
    if (*format == ':') {
	if (format[1] == 0) {
	    format = __builtin_va_arg(args, char const *);
	    (*__errno_location()) = err;
	    perror(format);
	} else {
	    (*__errno_location()) = err;
	    perror(format + 1);
	}
    } else {
	vfprintf(stderr, format, args);
	fputc('\n', stderr);
    }
    __builtin_va_end(args);
}

static void *map_file(int fd, unsigned long length)
{
    void *fdm;
    fdm = mmap(0, length, 0x1, 0x01, fd, 0);
    if (fdm == ((void *) -1))
	return 0;
    madvise(fdm, length, 2);
    return fdm;
}

static int unmap_file(void *fdm, unsigned long length)
{
    if (munmap(fdm, length) == -1)
	return -1;
    return 0;
}

static enum mad_flow decode_input_mmap(void *data, struct mad_stream *stream)
{
    struct player *player = data;
    struct input *input = &player->input;
    if (input->eof)
	return MAD_FLOW_STOP;
    if (stream->next_frame) {
	struct stat stat;
	unsigned long posn, left;
	if (fstat(input->fd, &stat) == -1)
	    return MAD_FLOW_BREAK;
	posn = stream->next_frame - input->fdm;
	if (stat.st_size > input->length) {
	    if (unmap_file(input->fdm, input->length) == -1) {
		input->fdm = 0;
		input->data = 0;
		return MAD_FLOW_BREAK;
	    }
	    player->stats.total_bytes += stat.st_size - input->length;
	    input->length = stat.st_size;
	    input->fdm = map_file(input->fd, input->length);
	    if (input->fdm == 0) {
		input->data = 0;
		return MAD_FLOW_BREAK;
	    }
	    mad_stream_buffer(stream, input->fdm + posn, input->length - posn);
	    return MAD_FLOW_CONTINUE;
	}
	left = input->length - posn;
	input->data = malloc(left + 8);
	if (input->data == 0)
	    return MAD_FLOW_BREAK;
	input->eof = 1;
	memcpy(input->data, input->fdm + posn, left);
	memset(input->data + left, 0, 8);
	mad_stream_buffer(stream, input->data, left + 8);
	return MAD_FLOW_CONTINUE;
    }
    mad_stream_buffer(stream, input->fdm, input->length);
    return MAD_FLOW_CONTINUE;
}

static enum mad_flow decode_input_read(void *data, struct mad_stream *stream)
{
    struct player *player = data;
    struct input *input = &player->input;
    int len;
    if (input->eof)
	return MAD_FLOW_STOP;
    if (stream->next_frame) {
	memmove(input->data, stream->next_frame, input->length = &input->data[input->length] - stream->next_frame);
    }
    do {
	len = read(input->fd, input->data + input->length, 40000 - input->length);
    } while (len == -1 && (*__errno_location()) == 4);
    if (len == -1) {
	error("input", ":read");
	return MAD_FLOW_BREAK;
    } else if (len == 0) {
	input->eof = 1;
	((40000 - input->length >= 8) ? (void) (0) : __assert_fail("40000 - input->length >= 8", "player.c", 416, __PRETTY_FUNCTION__));
	while (len < 8)
	    input->data[input->length + len++] = 0;
    }
    mad_stream_buffer(stream, input->data, input->length += len);
    return MAD_FLOW_CONTINUE;
}

static enum mad_flow decode_header(void *data, struct mad_header const *header)
{
    struct player *player = data;
    if ((player->options & PLAYER_OPTION_TIMED) && mad_timer_compare(player->stats.global_timer, player->global_stop) > 0)
	return MAD_FLOW_STOP;
    if (player->stats.absolute_framecount) {
	++player->stats.absolute_framecount;
	mad_timer_add(&player->stats.absolute_timer, header->duration);
	++player->stats.global_framecount;
	mad_timer_add(&player->stats.global_timer, header->duration);
	if ((player->options & PLAYER_OPTION_SKIP) && mad_timer_compare(player->stats.global_timer, player->global_start) < 0)
	    return MAD_FLOW_IGNORE;
    }
    return MAD_FLOW_CONTINUE;
}

static enum mad_flow decode_filter(void *data, struct mad_stream const *stream, struct mad_frame *frame)
{
    struct player *player = data;
    if (player->stats.absolute_framecount == 0) {
	if (xing_parse(&player->input.xing, stream->anc_ptr, stream->anc_bitlen) == 0) {
	    if (player->input.xing.flags & XING_FRAMES) {
		player->stats.total_time = frame->header.duration;
		mad_timer_multiply(&player->stats.total_time, player->input.xing.frames);
	    }
	    if (player->stats.total_bytes >= stream->next_frame - stream->this_frame)
		player->stats.total_bytes -= stream->next_frame - stream->this_frame;
	    return MAD_FLOW_IGNORE;
	}
	++player->stats.absolute_framecount;
	mad_timer_add(&player->stats.absolute_timer, frame->header.duration);
	++player->stats.global_framecount;
	mad_timer_add(&player->stats.global_timer, frame->header.duration);
	if ((player->options & PLAYER_OPTION_SKIP) && mad_timer_compare(player->stats.global_timer, player->global_start) < 0)
	    return MAD_FLOW_IGNORE;
    }
    return filter_run(player->output.filters, frame);
}

static void show_id3(struct id3_tag const *tag)
{
    unsigned int i;
    struct id3_frame const *frame;
    id3_ucs4_t const *ucs4;
    id3_latin1_t *latin1;
    char const spaces[] = "          ";
    struct {
	char const *id;
	char const *name;
    } const info[] = { {"TIT2", "Title"}, {"TIT3", 0}, {"TCOP", 0,}, {"TPRO", 0,}, {"TCOM", "Composer"}, {"TPE1", "Artist"}, {"TPE2", "Orchestra"}, {"TPE3", "Conductor"}, {"TEXT", "Lyricist"}, {"TALB", "Album"}, {"TDRC", "Year"}, {"TRCK", "Track"}, {"TPUB", "Publisher"}, {"TCON", "Genre"}, {"TRSN", "Station"}, {"TENC", "Encoder"} };
    for (i = 0; i < sizeof(info) / sizeof(info[0]); ++i) {
	union id3_field const *field;
	unsigned int nstrings, namelen, j;
	char const *name;
	frame = id3_tag_findframe(tag, info[i].id, 0);
	if (frame == 0)
	    continue;
	field = &frame->fields[1];
	nstrings = id3_field_getnstrings(field);
	name = info[i].name;
	if (name)
	    name = name;
	namelen = name ? strlen(name) : 0;
	((namelen < sizeof(spaces)) ? (void) (0) : __assert_fail("namelen < sizeof(spaces)", "player.c", 554, __PRETTY_FUNCTION__));
	for (j = 0; j < nstrings; ++j) {
	    ucs4 = id3_field_getstrings(field, j);
	    ((ucs4) ? (void) (0) : __assert_fail("ucs4", "player.c", 558, __PRETTY_FUNCTION__));
	    if (strcmp(info[i].id, "TCON") == 0)
		ucs4 = id3_genre_name(ucs4);
	    latin1 = id3_ucs4_latin1duplicate(ucs4);
	    if (latin1 == 0)
		goto fail;
	    if (j == 0 && name)
		message("%s%s: %s\n", &spaces[namelen], name, latin1);
	    else {
		if (strcmp(info[i].id, "TCOP") == 0 || strcmp(info[i].id, "TPRO") == 0) {
		    message("%s  %s %s\n", spaces, (info[i].id[1] == 'C') ? "Copyright (C)" : "Produced (P)", latin1);
		} else
		    message("%s  %s\n", spaces, latin1);
	    }
	    free(latin1);
	}
    }
    i = 0;
    while ((frame = id3_tag_findframe(tag, "COMM", i++))) {
	id3_latin1_t *ptr, *newline;
	int first = 1;
	ucs4 = id3_field_getstring(&frame->fields[2]);
	((ucs4) ? (void) (0) : __assert_fail("ucs4", "player.c", 591, __PRETTY_FUNCTION__));
	if (*ucs4)
	    continue;
	ucs4 = id3_field_getfullstring(&frame->fields[3]);
	((ucs4) ? (void) (0) : __assert_fail("ucs4", "player.c", 597, __PRETTY_FUNCTION__));
	latin1 = id3_ucs4_latin1duplicate(ucs4);
	if (latin1 == 0)
	    goto fail;
	ptr = latin1;
	while (*ptr) {
	    newline = strchr(ptr, '\n');
	    if (newline)
		*newline = 0;
	    if (strlen(ptr) > 66) {
		id3_latin1_t *linebreak;
		linebreak = ptr + 66;
		while (linebreak > ptr && *linebreak != ' ')
		    --linebreak;
		if (*linebreak == ' ') {
		    if (newline)
			*newline = '\n';
		    newline = linebreak;
		    *newline = 0;
		}
	    }
	    if (first) {
		char const *name;
		unsigned int namelen;
		name = "Comment";
		namelen = strlen(name);
		((namelen < sizeof(spaces)) ? (void) (0) : __assert_fail("namelen < sizeof(spaces)", "player.c", 632, __PRETTY_FUNCTION__));
		message("%s%s: %s\n", &spaces[namelen], name, ptr);
		first = 0;
	    } else
		message("%s  %s\n", spaces, ptr);
	    ptr += strlen(ptr) + (newline ? 1 : 0);
	}
	free(latin1);
	break;
    }
    if (0) {
      fail:error("id3", "not enough memory to display tag");
    }
}

static void show_status(struct stats *stats, struct mad_header const *header, char const *label, int now)
{
    signed long seconds;
    static char const *const layer_str[3] = { "I", "II", "III" };
    static char const *const mode_str[4] = { "single channel", "dual channel", "joint stereo", "stereo" };
    if (header) {
	unsigned int bitrate;
	bitrate = header->bitrate / 1000;
	stats->vbr_rate += bitrate;
	stats->vbr_frames++;
	stats->vbr += (stats->bitrate && stats->bitrate != bitrate) ? 128 : -1;
	if (stats->vbr < 0)
	    stats->vbr = 0;
	else if (stats->vbr > 512)
	    stats->vbr = 512;
	stats->bitrate = bitrate;
    }
    seconds = mad_timer_count(stats->global_timer, MAD_UNITS_SECONDS);
    if (seconds != stats->nsecs || !on_same_line || now) {
	mad_timer_t timer;
	char time_str[18];
	char const *joint_str = "";
	stats->nsecs = seconds;
	switch (stats->show) {
	case STATS_SHOW_OVERALL:
	    timer = stats->global_timer;
	    break;
	case STATS_SHOW_CURRENT:
	    timer = stats->absolute_timer;
	    break;
	case STATS_SHOW_REMAINING:
	    timer = stats->total_time;
	    if (mad_timer_compare((timer), mad_timer_zero) == 0 && stats->total_bytes) {
		unsigned long rate;
		rate = stats->vbr ? stats->vbr_rate * 125 / stats->vbr_frames : stats->bitrate * 125UL;
		mad_timer_set(&timer, 0, stats->total_bytes, rate);
	    }
	    mad_timer_negate(&timer);
	    mad_timer_add(&timer, stats->absolute_timer);
	    break;
	}
	mad_timer_string(timer, time_str, " %02lu:%02u:%02u", MAD_UNITS_HOURS, 0, 0);
	if (mad_timer_compare((timer), mad_timer_zero) < 0)
	    time_str[0] = '-';
	if (label || stats->label) {
	    message("%s %s", time_str, label ? label : stats->label);
	    stats->label = now ? label : 0;
	} else if (header) {
	    if (header->mode == MAD_MODE_JOINT_STEREO) {
		switch (header->flags & (MAD_FLAG_MS_STEREO | MAD_FLAG_I_STEREO)) {
		case 0:
		    joint_str = " (LR)";
		    break;
		case MAD_FLAG_MS_STEREO:
		    joint_str = " (MS)";
		    break;
		case MAD_FLAG_I_STEREO:
		    joint_str = " (I)";
		    break;
		case (MAD_FLAG_MS_STEREO | MAD_FLAG_I_STEREO):
		    joint_str = " (MS+I)";
		    break;
		}
	    }
	    message("%s Layer %s, %s%u kbps%s, %u Hz, %s%s, %s", time_str, layer_str[header->layer - 1], stats->vbr ? "VBR (avg " : "", stats->vbr ? ((stats->vbr_rate * 2) / stats->vbr_frames + 1) / 2 : stats->bitrate, stats->vbr ? ")" : "", header->samplerate, mode_str[header->mode], joint_str, (header->flags & MAD_FLAG_PROTECTION) ? "CRC" : "no CRC");
	} else
	    message("%s", time_str);
    }
}

static enum mad_flow decode_output(void *data, struct mad_header const *header, struct mad_pcm *pcm)
{
    struct player *player = data;
    struct output *output = &player->output;
    mad_fixed_t const *ch1, *ch2;
    unsigned int nchannels;
    union audio_control control;
    ch1 = pcm->samples[0];
    ch2 = pcm->samples[1];
    switch (nchannels = pcm->channels) {
    case 1:
	ch2 = 0;
	if (output->select == PLAYER_CHANNEL_STEREO) {
	    ch2 = ch1;
	    nchannels = 2;
	}
	break;
    case 2:
	switch (output->select) {
	case PLAYER_CHANNEL_RIGHT:
	    ch1 = ch2;
	case PLAYER_CHANNEL_LEFT:
	    ch2 = 0;
	    nchannels = 1;
	case PLAYER_CHANNEL_STEREO:
	    break;
	default:
	    if (header->mode == MAD_MODE_DUAL_CHANNEL) {
		if (output->select == PLAYER_CHANNEL_DEFAULT) {
		    if (player->verbosity >= -1) {
			error("output", "no channel selected for dual channel; using first");
		    }
		    output->select = -PLAYER_CHANNEL_LEFT;
		}
		ch2 = 0;
		nchannels = 1;
	    }
	}
    }
    if (output->channels_in != nchannels || output->speed_in != pcm->samplerate) {
	if (player->verbosity >= 1 && pcm->samplerate != header->samplerate) {
	    error("output", "using output sample frequency %u Hz", pcm->samplerate);
	}
	audio_control_init(&control, AUDIO_COMMAND_CONFIG);
	control.config.channels = nchannels;
	control.config.speed = pcm->samplerate;
	control.config.precision = output->precision_in;
	if (output->command(&control) == -1) {
	    error("output", audio_error);
	    return MAD_FLOW_BREAK;
	}
	output->channels_in = nchannels;
	output->speed_in = pcm->samplerate;
	output->channels_out = control.config.channels;
	output->speed_out = control.config.speed;
	output->precision_out = control.config.precision;
	if (player->verbosity >= -1 && output->channels_in != output->channels_out) {
	    if (output->channels_in == 1)
		error("output", "mono output not available; forcing stereo");
	    else {
		error("output", "stereo output not available; using first channel " "(use -m to mix)");
	    }
	}
	if (player->verbosity >= 0 && output->speed_in != output->speed_out) {
	    error("output", "sample frequency %u Hz not available; closest %u Hz", output->speed_in, output->speed_out);
	}
	if (player->verbosity >= -1 && output->precision_in && output->precision_in != output->precision_out) {
	    error("output", "bit depth %u not available; using %u", output->precision_in, output->precision_out);
	}
	if (abs(output->speed_out - output->speed_in) < (long) 6 * output->speed_in / 100) {
	    if (output->resampled) {;;
		free(output->resampled);
		output->resampled = 0;
	    }
	} else {
	    if (output->resampled) {;;
	    } else {
		output->resampled = malloc(sizeof(*output->resampled));
		if (output->resampled == 0) {
		    error("output", "not enough memory to allocate resampling buffer");
		    return MAD_FLOW_BREAK;
		}
	    }
	    if (resample_init(&output->resample[0], output->speed_in, output->speed_out) == -1 || resample_init(&output->resample[1], output->speed_in, output->speed_out) == -1) {
		error("output", "cannot resample %u Hz to %u Hz", output->speed_in, output->speed_out);
		free(output->resampled);
		output->resampled = 0;
		return MAD_FLOW_BREAK;
	    } else if (player->verbosity >= -1) {
		error("output", "resampling %u Hz to %u Hz", output->speed_in, output->speed_out);
	    }
	}
    }
    audio_control_init(&control, AUDIO_COMMAND_PLAY);
    if (output->channels_in != output->channels_out)
	ch2 = (output->channels_out == 2) ? ch1 : 0;
    if (output->resampled) {
	control.play.nsamples = resample_block(&output->resample[0], pcm->length, ch1, (*output->resampled)[0]);
	control.play.samples[0] = (*output->resampled)[0];
	if (ch2 == ch1)
	    control.play.samples[1] = control.play.samples[0];
	else if (ch2) {
	    resample_block(&output->resample[1], pcm->length, ch2, (*output->resampled)[1]);
	    control.play.samples[1] = (*output->resampled)[1];
	} else
	    control.play.samples[1] = 0;
    } else {
	control.play.nsamples = pcm->length;
	control.play.samples[0] = ch1;
	control.play.samples[1] = ch2;
    }
    control.play.mode = output->mode;
    control.play.stats = &player->stats.audio;
    if (output->command(&control) == -1) {
	error("output", audio_error);
	return MAD_FLOW_BREAK;
    }
    ++player->stats.play_framecount;
    mad_timer_add(&player->stats.play_timer, header->duration);
    if (player->verbosity > 0)
	show_status(&player->stats, header, 0, 0);
    return MAD_FLOW_CONTINUE;
}

static struct id3_tag *get_id3(struct mad_stream *stream, id3_length_t tagsize, struct input *input)
{
    struct id3_tag *tag = 0;
    id3_length_t count;
    id3_byte_t const *data;
    id3_byte_t *allocated = 0;
    count = stream->bufend - stream->this_frame;
    if (tagsize <= count) {
	data = stream->this_frame;
	mad_stream_skip(stream, tagsize);
    } else {
	allocated = malloc(tagsize);
	if (allocated == 0) {
	    error("id3", "not enough memory to allocate tag data buffer");
	    goto fail;
	}
	memcpy(allocated, stream->this_frame, count);
	mad_stream_skip(stream, count);
	while (count < tagsize) {
	    int len;
	    do
		len = read(input->fd, allocated + count, tagsize - count);
	    while (len == -1 && (*__errno_location()) == 4);
	    if (len == -1) {
		error("id3", ":read");
		goto fail;
	    }
	    if (len == 0) {
		error("id3", "EOF while reading tag data");
		goto fail;
	    }
	    count += len;
	}
	data = allocated;
    }
    tag = id3_tag_parse(data, tagsize);
  fail:if (allocated)
	free(allocated);
    return tag;
}

static enum mad_flow decode_error(void *data, struct mad_stream *stream, struct mad_frame *frame)
{
    struct player *player = data;
    signed long tagsize;
    switch (stream->error) {
    case MAD_ERROR_BADDATAPTR:
	return MAD_FLOW_CONTINUE;
    case MAD_ERROR_LOSTSYNC:
	tagsize = id3_tag_query(stream->this_frame, stream->bufend - stream->this_frame);
	if (tagsize > 0) {
	    if (player->verbosity >= 0 && (player->options & PLAYER_OPTION_STREAMID3)) {
		struct id3_tag *tag;
		tag = get_id3(stream, tagsize, &player->input);
		if (tag) {
		    show_id3(tag);
		    id3_tag_delete(tag);
		}
	    } else
		mad_stream_skip(stream, tagsize);
	    if (player->stats.total_bytes >= tagsize)
		player->stats.total_bytes -= tagsize;
	    return MAD_FLOW_CONTINUE;
	}
    default:
	if (player->verbosity >= -1 && ((stream->error == MAD_ERROR_LOSTSYNC && !player->input.eof) || stream->sync) && player->stats.global_framecount != player->stats.error_frame) {
	    error("error", "frame %lu: %s", player->stats.absolute_framecount, mad_stream_errorstr(stream));
	    player->stats.error_frame = player->stats.global_framecount;
	}
    }
    if (stream->error == MAD_ERROR_BADCRC) {
	if (player->stats.global_framecount == player->stats.mute_frame)
	    mad_frame_mute(frame);
	player->stats.mute_frame = player->stats.global_framecount + 1;
	return MAD_FLOW_IGNORE;
    }
    return MAD_FLOW_CONTINUE;
}

static int decode(struct player *player)
{
    struct stat stat;
    struct mad_decoder decoder;
    int options, result;
    if (fstat(player->input.fd, &stat) == -1) {
	error("decode", ":fstat");
	return -1;
    }
    player->stats.total_bytes = ((((stat.st_mode)) & 0170000) == (0100000)) ? stat.st_size : 0;
    player->stats.total_time = mad_timer_zero;
    xing_init(&player->input.xing);
    if (((((stat.st_mode)) & 0170000) == (0100000)) && stat.st_size > 0) {
	player->input.length = stat.st_size;
	player->input.fdm = map_file(player->input.fd, player->input.length);
	if (player->input.fdm == 0 && player->verbosity >= 0)
	    error("decode", ":mmap");
	player->input.data = player->input.fdm;
    }
    if (player->input.data == 0) {
	player->input.data = malloc(40000);
	if (player->input.data == 0) {
	    error("decode", "not enough memory to allocate input buffer");
	    return -1;
	}
	player->input.length = 0;
    }
    player->input.eof = 0;
    player->stats.absolute_timer = mad_timer_zero;
    player->stats.play_timer = mad_timer_zero;
    player->stats.absolute_framecount = 0;
    player->stats.play_framecount = 0;
    player->stats.error_frame = -1;
    player->stats.vbr = 0;
    player->stats.bitrate = 0;
    player->stats.vbr_frames = 0;
    player->stats.vbr_rate = 0;
    player->stats.audio.clipped_samples = 0;
    player->stats.audio.peak_clipping = 0;
    player->stats.audio.peak_sample = 0;
    mad_decoder_init(&decoder, player, player->input.fdm ? decode_input_mmap : decode_input_read, decode_header, decode_filter, player->output.command ? decode_output : 0, decode_error, 0);
    options = 0;
    if (player->options & PLAYER_OPTION_DOWNSAMPLE)
	options |= MAD_OPTION_HALFSAMPLERATE;
    if (player->options & PLAYER_OPTION_IGNORECRC)
	options |= MAD_OPTION_IGNORECRC;
    ((void) ((&decoder)->options = (options)));
    result = mad_decoder_run(&decoder, MAD_DECODER_MODE_SYNC);
    mad_decoder_finish(&decoder);
    if (player->input.fdm) {
	if (unmap_file(player->input.fdm, player->input.length) == -1) {
	    error("decode", ":munmap");
	    result = -1;
	}
	player->input.fdm = 0;
	if (!player->input.eof)
	    player->input.data = 0;
    }
    if (player->input.data) {
	free(player->input.data);
	player->input.data = 0;
    };
    return result;
}

static int play_one(struct player *player)
{
    char const *file = player->playlist.entries[player->playlist.current];
    int result;
    if (strcmp(file, "-") == 0) {
	if (isatty(0)) {
	    error(0, "%s: %s", "stdin", "is a tty");
	    return -1;
	}
	player->input.path = "stdin";
	player->input.fd = 0;
    } else {
	player->input.path = file;
	player->input.fd = open(player->input.path, 00 | 0);
	if (player->input.fd == -1) {
	    error(0, ":", player->input.path);
	    return -1;
	}
    }
    player->options &= ~PLAYER_OPTION_STREAMID3;
    if (player->verbosity >= 0) {
	int fd;
	struct id3_file *file;
	if (player->playlist.length > 1)
	    message(">> %s\n", player->input.path);
	fd = dup(player->input.fd);
	file = id3_file_fdopen(fd, ID3_FILE_MODE_READONLY);
	if (file == 0) {
	    close(fd);
	    player->options |= PLAYER_OPTION_STREAMID3;
	} else {
	    show_id3(id3_file_tag(file));
	    id3_file_close(file);
	}
    }
    result = decode(player);
    if (result == 0 && player->verbosity >= 0) {
	char time_str[19], db_str[7];
	char const *peak_str;
	mad_fixed_t peak;
	mad_timer_string(player->stats.play_timer, time_str, "%lu:%02u:%02u.%1u", MAD_UNITS_HOURS, MAD_UNITS_DECISECONDS, 0); {
	    char *point;
	    point = strchr(time_str, '.');
	    if (point)
		*point = *localeconv()->decimal_point;
	}
	peak = ((mad_fixed_t) (0x10000000L)) + player->stats.audio.peak_clipping;
	if (peak == ((mad_fixed_t) (0x10000000L)))
	    peak = player->stats.audio.peak_sample;
	if (peak == 0)
	    peak_str = "-inf";
	else {
	    sprintf(db_str, "%+.1f", 20 * log10(((double) ((peak) / (double) (1L << 28)))));
	    peak_str = db_str;
	} message("%lu frames decoded (%s), " "%s dB peak amplitude, " "%lu clipped samples\n", player->stats.play_framecount, time_str, peak_str, player->stats.audio.clipped_samples);
    }
    if (player->input.fd != 0 && close(player->input.fd) == -1 && result == 0) {
	error(0, ":", player->input.path);
	result = -1;
    }
    return result;
}

static int play_all(struct player *player)
{
    FILE *loop_wrap = ((void *) 0);
    long loop_wrap1, loop_wrap2;
    int count, i, j, result = 0;
    struct playlist *playlist = &player->playlist;
    char const *tmp;
    count = playlist->length;
    if (player->options & PLAYER_OPTION_SHUFFLE) {
	srand(time(0));
	for (i = 0; i < count; ++i) {
	    j = rand() % count;
	    tmp = playlist->entries[i];
	    playlist->entries[i] = playlist->entries[j];
	    playlist->entries[j] = tmp;
	}
    }
    while (count && (player->repeat == -1 || player->repeat--)) {
	while (playlist->current < playlist->length) {
	    i = playlist->current;
	    if (playlist->entries[i] == 0) {
		++playlist->current;
		continue;
	    }
	    player->control = PLAYER_CONTROL_DEFAULT;
	    if ((loop_wrap = fopen("_finfo_dataset", "rt")) == ((void *) 0)) {
		fprintf(stderr, "\nError: Can't find dataset!\n");
		exit(1);
	    }
	    fscanf(loop_wrap, "%ld", &loop_wrap2);
	    fclose(loop_wrap);
	    for (loop_wrap1 = 0; loop_wrap1 < loop_wrap2; loop_wrap1++) {
		if (play_one(player) == -1) {
		    playlist->entries[i] = 0;
		    --count;
		    result = -1;
		}
	    }
	    if ((player->options & PLAYER_OPTION_TIMED) && mad_timer_compare(player->stats.global_timer, player->global_stop) > 0) {
		count = 0;
		break;
	    }
	    switch (player->control) {
	    case PLAYER_CONTROL_DEFAULT:
		if ((player->options & PLAYER_OPTION_SHUFFLE) && player->repeat && ++i < playlist->length) {
		    j = (i + rand() % ((playlist->length + 1) / 2)) % playlist->length;
		    tmp = playlist->entries[i];
		    playlist->entries[i] = playlist->entries[j];
		    playlist->entries[j] = tmp;
		}
	    case PLAYER_CONTROL_NEXT:
		++playlist->current;
		break;
	    case PLAYER_CONTROL_PREVIOUS:
		do {
		    if (playlist->current-- == 0)
			playlist->current = playlist->length;
		} while (playlist->current < playlist->length && playlist->entries[playlist->current] == 0);
		break;
	    case PLAYER_CONTROL_REPLAY:
		break;
	    case PLAYER_CONTROL_STOP:
		playlist->current = playlist->length;
		count = 0;
		break;
	    }
	}
	playlist->current = 0;
    }
    return result;
}

static int stop_audio(struct player *player, int flush)
{
    int result = 0;
    if (player->output.command) {
	union audio_control control;
	audio_control_init(&control, AUDIO_COMMAND_STOP);
	control.stop.flush = flush;
	result = player->output.command(&control);
    }
    return result;
}

static int readkey(int blocking)
{
    unsigned char key;
    ssize_t count;
    if (!blocking) {
	count = read(tty_fd, &key, 1);
	if (count == -1 && (*__errno_location()) != 4) {
	    error("tty", ":read");
	    return -1;
	}
	return (count == 1) ? key : 0;
    } else {
	struct termios tty, save_tty;
	if (tcgetattr(tty_fd, &tty) == -1) {
	    error("tty", ":tcgetattr");
	    return -1;
	}
	save_tty = tty;
	tty.c_cc[6] = 1;
	if (tcsetattr(tty_fd, 0, &tty) == -1) {
	    error("tty", ":tcsetattr");
	    return -1;
	}
	do
	    count = read(tty_fd, &key, 1);
	while (count == -1 && (*__errno_location()) == 4);
	if (count == -1)
	    error("tty", ":read");
	if (tcsetattr(tty_fd, 0, &save_tty) == -1) {
	    error("tty", ":tcsetattr");
	    return -1;
	}
	if (count == -1)
	    return -1;
	return (count == 1) ? key : 0;
    }
    return blocking ? -1 : 0;
}

static enum mad_flow tty_filter(void *data, struct mad_frame *frame)
{
    struct player *player = data;
    enum mad_flow flow = MAD_FLOW_CONTINUE;
    int command, stopped = 0;
    command = readkey(0);
    if (command == -1)
	return MAD_FLOW_BREAK;
  again:switch (command) {
    case KEY_PAUSE:
    case KEY_STOP:
	stop_audio(player, stopped = (command == KEY_STOP));
	message(" --%s--", stopped ? "Stopped" : "Paused");
	if (stopped) {
	    player->control = PLAYER_CONTROL_REPLAY;
	    flow = MAD_FLOW_STOP;
	}
	command = readkey(1);
	message("");
	if (command == -1)
	    return MAD_FLOW_BREAK;
	if (command > 0 && command != KEY_PAUSE)
	    goto again;
	break;
    case KEY_FORWARD:
    case (('n') & 0x1f):
	player->control = PLAYER_CONTROL_NEXT;
	goto stop;
    case KEY_BACK:
    case (('p') & 0x1f):{
	    mad_timer_t threshold;
	    mad_timer_set(&threshold, 4, 0, 0);
	    player->control = (stopped || mad_timer_compare(player->stats.play_timer, threshold) < 0) ? PLAYER_CONTROL_PREVIOUS : PLAYER_CONTROL_REPLAY;
	}
	goto stop;
    case KEY_QUIT:
    case (('c') & 0x1f):
    case 'Q':
	player->control = PLAYER_CONTROL_STOP;
	goto stop;
    case KEY_INFO:
    case '?':
	if (player->verbosity <= 0) {
	    show_status(&player->stats, 0, player->input.path, 1);
	    message("\n");
	}
	break;
    case KEY_TIME:
	if (player->verbosity > 0) {
	    char const *label = 0;
	    switch (player->stats.show) {
	    case STATS_SHOW_CURRENT:
		if (player->playlist.length > 1) {
		    player->stats.show = STATS_SHOW_OVERALL;
		    label = "[Overall Time]";
		    break;
		}
	    case STATS_SHOW_OVERALL:
		player->stats.show = STATS_SHOW_REMAINING;
		label = "[Current Time Remaining]";
		break;
	    case STATS_SHOW_REMAINING:
		player->stats.show = STATS_SHOW_CURRENT;
		label = "[Current Time]";
		break;
	    }
	    show_status(&player->stats, 0, label, 1);
	}
	break;
    }
    return flow;
  stop:stop_audio(player, 1);
    return MAD_FLOW_STOP;
}

static int addfilter(struct player *player, filter_func_t * func, void *data)
{
    struct filter *filter;
    filter = filter_new(func, data, player->output.filters);
    if (filter == 0)
	return -1;
    player->output.filters = filter;
    return 0;
}

static int setup_filters(struct player *player)
{
    static struct equalizer attenuation;
    if ((player->options & PLAYER_OPTION_FADEIN) && addfilter(player, fadein_filter, player) == -1)
	return -1;
    if (player->output.attenuation != ((mad_fixed_t) (0x10000000L))) {
	int sb;
	equalizer_init(&attenuation);
	for (sb = 0; sb < 32; ++sb) {
	    attenuation.bandfactors[0][sb] = attenuation.bandfactors[1][sb] = player->output.attenuation;
	}
	if (addfilter(player, equalizer_filter, &attenuation) == -1)
	    return -1;
    }
    if (player->output.select == PLAYER_CHANNEL_MONO && addfilter(player, mono_filter, player) == -1)
	return -1;
    if ((player->options & PLAYER_OPTION_TTYCONTROL) && addfilter(player, tty_filter, player) == -1)
	return -1;
    return 0;
}

static int restore_tty(int interrupt)
{
    struct termios tty;
    struct sigaction action;
    int result = 0;
    if (tcgetattr(tty_fd, &tty) == 0 && tcsetattr(tty_fd, interrupt ? 2 : 1, &save_tty) == -1) {
	if (!interrupt)
	    error("tty", ":tcsetattr");
	result = -1;
    }
    save_tty = tty;
    if (sigaction(2, 0, &action) == 0 && sigaction(2, &save_sigint, 0) == -1) {
	if (!interrupt)
	    error("tty", ":sigaction(SIGINT)");
	result = -1;
    }
    save_sigint = action;
    if (sigaction(20, 0, &action) == 0 && sigaction(20, &save_sigtstp, 0) == -1) {
	if (!interrupt)
	    error("tty", ":sigaction(SIGTSTP)");
	result = -1;
    }
    save_sigtstp = action;
    if (!interrupt) {
	if (close(tty_fd) == -1) {
	    error("tty", ":close");
	    result = -1;
	}
	tty_fd = -1;
    }
    return result;
}

static void signal_handler(int signal)
{
    static struct sigaction save_sigcont;
    restore_tty(1);
    switch (signal) {
    case 20:{
	    struct sigaction action;
	    sigaction(18, 0, &save_sigcont);
	    action = save_sigcont;
	    action.__sigaction_handler.sa_handler = signal_handler;
	    sigemptyset(&action.sa_mask);
	    action.sa_flags = 0;
	    sigaction(18, &action, 0);
	} break;
    case 18:
	sigaction(18, &save_sigcont, 0);
	break;
    }
    kill(getpid(), signal);
    return;
}

static int setup_tty(void)
{
    struct termios tty;
    struct sigaction action;
    tty_fd = open("/dev/tty", 00);
    if (tty_fd == -1) {
	error("tty", ":", "/dev/tty");
	return -1;
    }
    if (tcgetattr(tty_fd, &save_tty) == -1) {
	error("tty", ":tcgetattr");
	return -1;
    }
    if (sigaction(20, 0, &save_sigtstp) == -1) {
	error("tty", ":sigaction(SIGTSTP)");
	return -1;
    }
    if (sigaction(2, 0, &save_sigint) == -1) {
	error("tty", ":sigaction(SIGINT)");
	return -1;
    }
    action = save_sigtstp;
    action.__sigaction_handler.sa_handler = signal_handler;
    sigemptyset(&action.sa_mask);
    action.sa_flags = 0;
    if (sigaction(20, &action, 0) == -1) {
	error("tty", ":sigaction(SIGTSTP)");
	goto fail;
    }
    action = save_sigint;
    action.__sigaction_handler.sa_handler = signal_handler;
    sigemptyset(&action.sa_mask);
    action.sa_flags = 0;
    if (sigaction(2, &action, 0) == -1) {
	error("tty", ":sigaction(SIGINT)");
	goto fail;
    }
    tty = save_tty;
    tty.c_lflag &= ~(0000010 | 0000002);
    tty.c_cc[6] = 0;
    tty.c_cc[5] = 0;
    if (tcsetattr(tty_fd, 2, &tty) == -1) {
	error("tty", ":tcsetattr");
	goto fail;
    }
    return 0;
  fail:sigaction(2, &save_sigint, 0);
    sigaction(20, &save_sigtstp, 0);
    return -1;
}

static int silence(struct player *player, mad_timer_t duration, char const *label)
{
    union audio_control control;
    unsigned int nchannels, speed, nsamples;
    mad_fixed_t *samples;
    mad_timer_t unit;
    int result = 0;
    audio_control_init(&control, AUDIO_COMMAND_CONFIG);
    control.config.channels = 2;
    control.config.speed = 44100;
    if (player->output.command(&control) == -1) {
	error("audio", audio_error);
	return -1;
    }
    nchannels = control.config.channels;
    speed = control.config.speed;
    nsamples = speed > (1152 * 3) ? (1152 * 3) : speed;
    player->output.channels_in = nchannels;
    player->output.channels_out = nchannels;
    player->output.speed_in = speed;
    player->output.speed_out = speed;
    samples = calloc(nsamples, sizeof(mad_fixed_t));
    if (samples == 0) {
	error("silence", "not enough memory to allocate sample buffer");
	return -1;
    }
    audio_control_init(&control, AUDIO_COMMAND_PLAY);
    control.play.nsamples = nsamples;
    control.play.samples[0] = samples;
    control.play.samples[1] = (nchannels == 2) ? samples : 0;
    control.play.mode = player->output.mode;
    control.play.stats = &player->stats.audio;
    mad_timer_set(&unit, 0, nsamples, speed);
    for (mad_timer_negate(&duration); mad_timer_compare((duration), mad_timer_zero) < 0; mad_timer_add(&duration, unit)) {
	if (mad_timer_compare(unit, mad_timer_abs(duration)) > 0) {
	    unit = mad_timer_abs(duration);
	    control.play.nsamples = mad_timer_fraction(unit, speed);
	}
	if (player->output.command(&control) == -1) {
	    error("audio", audio_error);
	    goto fail;
	}
	mad_timer_add(&player->stats.global_timer, unit);
	if (player->verbosity > 0)
	    show_status(&player->stats, 0, label, 0);
    }
    if (0) {
      fail:result = -1;
    }
    free(samples);
    return result;
}

int player_run(struct player *player, int argc, char const *argv[])
{
    int result = 0;
    union audio_control control;
    player->playlist.entries = argv;
    player->playlist.length = argc;
    if ((player->options & PLAYER_OPTION_TTYCONTROL) && setup_tty() == -1)
	player->options &= ~PLAYER_OPTION_TTYCONTROL;
    if (setup_filters(player) == -1) {
	error("filter", "not enough memory to allocate filters");
	goto fail;
    }
    if (player->output.command) {
	audio_control_init(&control, AUDIO_COMMAND_INIT);
	control.init.path = player->output.path;
	if (player->output.command(&control) == -1) {
	    error("audio", audio_error, control.init.path);
	    goto fail;
	}
	if ((player->options & PLAYER_OPTION_SKIP) && mad_timer_compare((player->global_start), mad_timer_zero) < 0) {
	    player->stats.global_timer = player->global_start;
	    if (silence(player, mad_timer_abs(player->global_start), "lead-in") == -1)
		goto fail;
	}
    }
    result = play_all(player);
    if (player->output.command) {
	audio_control_init(&control, AUDIO_COMMAND_FINISH);
	if (player->output.command(&control) == -1) {
	    error("audio", audio_error);
	    goto fail;
	}
    }
    if (0) {
      fail:result = -1;
    }
    if (player->options & PLAYER_OPTION_TTYCONTROL)
	restore_tty(0);
    return result;
}
