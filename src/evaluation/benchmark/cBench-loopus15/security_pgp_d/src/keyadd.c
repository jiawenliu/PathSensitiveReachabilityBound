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
typedef struct __locale_struct {
    struct locale_data *__locales[13];
    const unsigned short int *__ctype_b;
    const int *__ctype_tolower;
    const int *__ctype_toupper;
    const char *__names[13];
} *__locale_t;
typedef __locale_t locale_t;
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
extern char INT_C(char c);
extern char EXT_C(char c);
extern int CONVERSION;
extern void init_charset(void);
extern int to_upper(int c);
extern int to_lower(int c);
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
extern char *LANG(char *s);
extern char language[];
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
extern void exitPGP(int);
int addto_keyring(char *keyfile, char *ringfile);
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
void gpk_close(void);
int gpk_open(char *keyfile);
int get_publickey(long *file_position, int *pktlen, byte * keyID, byte * timestamp, byte * userid, unitptr n, unitptr e);
static int ask_to_sign(byte * keyID, char *ringfile);
static boolean ask_first;
static boolean publickey;
static int newkeys, newsigs, newids, newrvks;
static byte mykeyID[8];
static struct sig_list {
    struct sig_list *next;
    long pos;
} *siglist;
static void sig_list_add(long pos)
{
    struct sig_list *p;
    p = xmalloc(sizeof *p);
    p->pos = pos;
    p->next = siglist;
    siglist = p;
}

static int sig_list_find(long pos)
{
    struct sig_list *p;
    for (p = siglist; p; p = p->next)
	if (p->pos == pos)
	    return 1;
    return 0;
}

static void sig_list_clear(void)
{
    struct sig_list *p, *n;
    for (p = siglist; p; p = n) {
	n = p->next;
	free(p);
    }
    siglist = ((void *) 0);
} static int mergesigs(FILE * fkey, char *keyfile, long keypos, FILE * fring, char *ringfile, long *pringpos, FILE * out)
{
    long ringuseridpos, ringpos;
    int ringpktlen, keypktlen;
    int status;
    byte ctb;
    int copying;
    word32 rstamp, kstamp, xstamp;
    byte keyID[8];
    char userid[256];
    ringuseridpos = ringpos = *pringpos;
    fseek(fring, ringpos, 0);
    (void) readkeypacket(fring, 0, &ctb, ((void *) 0), userid, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0));
    PascalToC(userid);
    ringpktlen = ftell(fring) - ringpos;
    copyfilepos(fring, out, ringpktlen, ringpos);
    for (;;) {
	ringpos = ftell(fring);
	status = nextkeypacket(fring, &ctb);
	if (status < 0 || is_key_ctb(ctb) || ctb == (0x80 + (4 * 13) + 0) || (((ctb) & 0x7c) == (4 * 2)))
	    break;
	ringpktlen = ftell(fring) - ringpos;
	copyfilepos(fring, out, ringpktlen, ringpos);
    }
    fseek(fring, ringpos, 0);
    fseek(fkey, keypos, 0);
    (void) nextkeypacket(fkey, &ctb);
    for (;;) {
	keypos = ftell(fkey);
	status = nextkeypacket(fkey, &ctb);
	if (status < 0 || is_key_ctb(ctb) || ctb == (0x80 + (4 * 13) + 0) || (((ctb) & 0x7c) == (4 * 2)))
	    break;
    }
    fseek(fkey, keypos, 0);
    copying = 0;
    for (;;) {
	keypos = ftell(fkey);
	status = readkeypacket(fkey, 0, &ctb, (byte *) & kstamp, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), keyID, ((void *) 0));
	if (status == -3)
	    return status;
	keypktlen = ftell(fkey) - keypos;
	if (status == -1 || is_key_ctb(ctb) || ctb == (0x80 + (4 * 13) + 0))
	    break;
	if (status < 0)
	    continue;
	if ((((ctb) & 0x7c) == (4 * 2))) {
	    long sig_pos;
	    int sig_len;
	    copying = (getpubusersig(ringfile, ringuseridpos, keyID, (byte *) & rstamp, &sig_pos, &sig_len) < 0);
	    if (!copying) {
		long save_pos = ftell(fkey);
		fseek(fkey, keypos + 6, 0);
		fread(&kstamp, 1, 4, fkey);
		fseek(fkey, save_pos, 0);
		hiloswap((byte *) & kstamp, 4);
		if (verbose)
		    fprintf(pgpout, "ring: %lx  key: %lx\n", rstamp, kstamp);
		if (kstamp > rstamp) {
		    char *signator;
		    if ((signator = user_from_keyID(keyID)) == ((void *) 0)) {
			fprintf(pgpout, LANG("Replacing signature from keyID %s on userid \"%s\"\n"), keyIDstring(keyID), userid);
		    } else {
			long save_keypos;
			long save_ringpos;
			long KeyIDpos;
			int KeyIDlen;
			byte sigClass;
			fprintf(pgpout, LANG("Verifying signature from %s\n"), signator);
			fprintf(pgpout, LANG("on userid \"%s\"\n"), userid);
			save_keypos = ftell(fkey);
			save_ringpos = ftell(fring);
			status = getpublickey(1, ringfile, &KeyIDpos, &KeyIDlen, ((void *) 0), ((void *) 0), (byte *) userid, ((void *) 0), ((void *) 0));
			if (!status)
			    status = check_key_sig(fring, KeyIDpos, KeyIDlen, userid, fkey, keypos, ringfile, ((void *) 0), (byte *) & xstamp, &sigClass);
			PascalToC(userid);
			PascalToC(signator);
			if (!status) {
			    fprintf(pgpout, LANG("Replacing signature from %s\n"), signator);
			    fprintf(pgpout, LANG("on userid \"%s\"\n"), userid);
			    sig_list_add(sig_pos);
			    ++newsigs;
			    copying = 1;
			} else
			    fprintf(pgpout, LANG("Verification Failed\n"));
			fseek(fring, save_ringpos, 0);
			fseek(fkey, save_keypos, 0);
		    }
		}
	    } else {
		char *signator;
		if ((signator = user_from_keyID(keyID)) == ((void *) 0))
		    fprintf(pgpout, LANG("New signature from keyID %s on userid \"%s\"\n"), keyIDstring(keyID), userid);
		else {
		    fprintf(pgpout, LANG("New signature from %s\n"), signator);
		    fprintf(pgpout, LANG("on userid \"%s\"\n"), userid);
		}
		++newsigs;
		if (batchmode)
		    show_update(keyIDstring(mykeyID));
	    }
	}
	if (copying && (((ctb) & 0x7c) == (4 * 2))) {
	    copyfilepos(fkey, out, keypktlen, keypos);
	    if (publickey)
		write_trust(out, 0x00);
	}
    }
    fseek(fring, ringpos, 0);
    for (;;) {
	ringpos = ftell(fring);
	if (sig_list_find(ringpos)) {
	    nextkeypacket(fring, &ctb);
	    ringpos = ftell(fring);
	    if (nextkeypacket(fring, &ctb) < 0 || ctb != (0x80 + (4 * 12) + 0))
		fseek(fring, ringpos, 0);
	    continue;
	}
	status = nextkeypacket(fring, &ctb);
	ringpktlen = ftell(fring) - ringpos;
	if (status < 0 || is_key_ctb(ctb) || ctb == (0x80 + (4 * 13) + 0))
	    break;
	copyfilepos(fring, out, ringpktlen, ringpos);
    }
    sig_list_clear();
    fseek(fring, ringpos, 0);
    *pringpos = ringpos;
    return 0;
}

static int mergekeys(FILE * fkey, char *keyfile, long keypos, FILE * fring, char *ringfile, long *pringpos, FILE * out)
{
    long ringkeypos, keykeypos, ringpos;
    int ringpktlen, keypktlen;
    int status;
    byte ctb;
    int copying;
    boolean ring_compromise = 0;
    byte userid[256];
    ringkeypos = ringpos = *pringpos;
    fseek(fring, ringpos, 0);
    (void) nextkeypacket(fring, &ctb);
    ringpktlen = ftell(fring) - ringpos;
    copyfilepos(fring, out, ringpktlen, ringpos);
    for (;;) {
	ringpos = ftell(fring);
	status = nextkeypacket(fring, &ctb);
	if (status < 0 || is_key_ctb(ctb) || ctb == (0x80 + (4 * 13) + 0))
	    break;
	if ((((ctb) & 0x7c) == (4 * 2)))
	    ring_compromise = (!0);
	ringpktlen = ftell(fring) - ringpos;
	copyfilepos(fring, out, ringpktlen, ringpos);
    }
    fseek(fring, ringpos, 0);
    fseek(fkey, keypos, 0);
    keykeypos = keypos;
    (void) nextkeypacket(fkey, &ctb);
    keypktlen = ftell(fkey) - keypos;
    for (;;) {
	keypos = ftell(fkey);
	status = nextkeypacket(fkey, &ctb);
	if (status < 0 || ctb == (0x80 + (4 * 13) + 0) || (((ctb) & 0x7c) == (4 * 2)))
	    break;
    }
    if (!ring_compromise && (((ctb) & 0x7c) == (4 * 2))) {
	word32 timestamp;
	byte sig_class;
	int cert_pktlen;
	cert_pktlen = ftell(fkey) - keypos;
	if (check_key_sig(fkey, keykeypos, keypktlen, (char *) userid, fkey, keypos, ringfile, (char *) userid, (byte *) & timestamp, &sig_class) == 0 && sig_class == 0x20) {
	    PascalToC((char *) userid);
	    fprintf(pgpout, LANG("Key revocation certificate from \"%s\".\n"), (char *) userid);
	    copyfilepos(fkey, out, cert_pktlen, keypos);
	    if (batchmode)
		show_key(fring, *pringpos, 16);
	    ++newrvks;
	} else
	    fprintf(pgpout, LANG("\n\007WARNING:  File '%s' contains bad revocation certificate.\n"), keyfile);
    }
    fseek(fkey, keypos, 0);
    copying = 0;
    for (;;) {
	keypos = ftell(fkey);
	status = readkeypacket(fkey, 0, &ctb, ((void *) 0), (char *) userid, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0));
	if (status == -3)
	    return status;
	keypktlen = ftell(fkey) - keypos;
	if (status == -1 || is_key_ctb(ctb))
	    break;
	if (status < 0)
	    continue;
	if (ctb == (0x80 + (4 * 13) + 0)) {
	    long userid_pos;
	    int userid_len;
	    PascalToC((char *) userid);
	    copying = (getpubuserid(ringfile, ringkeypos, userid, &userid_pos, &userid_len, (!0)) < 0);
	    if (copying) {
		_IO_putc('\n', pgpout);
		fprintf(pgpout, LANG("New userid: \"%s\".\n"), (char *) userid);
		fprintf(pgpout, LANG("\nWill be added to the following key:\n"));
		show_key(fring, *pringpos, 0);
		fprintf(pgpout, LANG("\nAdd this userid (y/N)? "));
		if (batchmode || getyesno('n')) {
		    ++newids;
		    if (batchmode) {
			fprintf(pgpout, "\n");
			show_key(fring, *pringpos, 16);
		    }
		} else {
		    copying = 0;
		}
	    }
	}
	if (copying) {
	    if (ctb == (0x80 + (4 * 13) + 0) || (((ctb) & 0x7c) == (4 * 2))) {
		copyfilepos(fkey, out, keypktlen, keypos);
		if (publickey) {
		    if ((((ctb) & 0x7c) == (4 * 2)))
			write_trust(out, 0x00);
		    else
			write_trust(out, 0x00);
		}
	    }
	}
    }
    fseek(fring, ringpos, 0);
    readkeypacket(fring, 0, &ctb, ((void *) 0), (char *) userid, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0));
    fseek(fring, ringpos, 0);
    for (;;) {
	ringpos = ftell(fring);
	status = readkeypacket(fring, 0, &ctb, ((void *) 0), (char *) userid, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0));
	ringpktlen = ftell(fring) - ringpos;
	if (status == -3)
	    return status;
	if (status == -1 || is_key_ctb(ctb))
	    break;
	if (ctb == (0x80 + (4 * 13) + 0)) {
	    long userid_pos;
	    int userid_len;
	    PascalToC((char *) userid);
	    if (getpubuserid(keyfile, keykeypos, userid, &userid_pos, &userid_len, (!0)) >= 0) {
		if ((status = mergesigs(fkey, keyfile, userid_pos, fring, ringfile, &ringpos, out)) < 0)
		    return status;
		copying = 0;
	    } else {
		copying = (!0);
	    }
	}
	if (copying) {
	    copyfilepos(fring, out, ringpktlen, ringpos);
	}
    }
    fseek(fring, ringpos, 0);
    *pringpos = ringpos;
    return 0;
}

int _addto_keyring(char *keyfile, char *ringfile)
{
    FILE *f, *g, *h;
    long file_position, fp;
    int pktlen;
    byte ctb;
    int status;
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    unit n1[((2048 + (2 * 16)) / 16)];
    byte keyID[8];
    byte userid[256];
    byte userid1[256];
    word32 tstamp;
    byte *timestamp = (byte *) & tstamp;
    boolean userid_seen = 0;
    int commonkeys = 0;
    int copying;
    struct newkey *nkey, *nkeys = ((void *) 0);
    char *scratchf;
    if ((f = fopen(keyfile, "r")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open key file '%s'\n"), keyfile);
	return -1;
    }
    ctb = 0;
    if (fread(&ctb, 1, 1, f) != 1 || !is_key_ctb(ctb)) {
	fclose(f);
	return -1;
    }
    rewind(f);
    setoutdir(ringfile);
    scratchf = tempfile(0);
    setkrent(ringfile);
    setkrent(keyfile);
    init_userhash();
    if (!file_exists(ringfile)) {
	g = fopen(ringfile, "w");
	if (g == ((void *) 0)) {
	    fprintf(pgpout, LANG("\nKey ring file '%s' cannot be created.\n"), ringfile);
	    fclose(f);
	    goto err;
	}
	fclose(g);
    }
    if ((g = fopen(scratchf, "w")) == ((void *) 0)) {
	fclose(f);
	goto err;
    }
    newkeys = newsigs = newids = newrvks = 0;
    fprintf(pgpout, LANG("\nLooking for new keys...\n"));
    copying = 0;
    if (gpk_open(ringfile) < 0) {
	fclose(f);
	fclose(g);
	goto err;
    }
    for (;;) {
	file_position = ftell(f);
	status = readkeypacket(f, 0, &ctb, timestamp, (char *) userid, n, e, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0));
	if (status == -1)
	    break;
	if (status == -2 || status == -3) {
	    fprintf(pgpout, LANG("\n\007Could not read key from file '%s'.\n"), keyfile);
	    fclose(f);
	    fclose(g);
	    goto err;
	}
	if (status < 0) {
	    copying = 0;
	    continue;
	}
	if (is_key_ctb(ctb)) {
	    extract_keyID(keyID, n);
	    publickey = (((ctb) & 0x7c) == (4 * 6));
	    status = get_publickey(&fp, ((void *) 0), keyID, timestamp, userid, n1, e);
	    if (status == 0) {
		if (mp_compare(n, n1) != 0) {
		    fprintf(pgpout, LANG("\n\007Warning: Key ID %s matches key ID of key already on \nkey ring '%s', but the keys themselves differ.\nThis is highly suspicious.  This key will not be added to ring.\nAcknowledge by pressing return: "), keyIDstring(keyID), ringfile);
		    getyesno('n');
		} else {
		    ++commonkeys;
		}
		copying = 0;
	    } else if (status == -1) {
		++newkeys;
		if (interactive_add) {
		    if (!show_key(f, file_position, (1 | 2))) {
			fprintf(pgpout, LANG("\nDo you want to add this key to keyring '%s' (y/N)? "), ringfile);
			copying = getyesno('n');
		    } else
			copying = 0;
		} else {
		    if (!show_key(f, file_position, 8))
			copying = (!0);
		    else
			copying = 0;
		}
		if (batchmode)
		    show_key(f, file_position, 16);
		if (copying) {
		    nkey = xmalloc(sizeof(*nkey));
		    memcpy(nkey->keyID, keyID, 8);
		    nkey->next = nkeys;
		    nkeys = nkey;
		}
	    } else {
		copying = 0;
	    }
	}
	if (copying && (is_key_ctb(ctb) || ctb == (0x80 + (4 * 13) + 0) || (((ctb) & 0x7c) == (4 * 2)))) {
	    pktlen = (int) (ftell(f) - file_position);
	    copyfilepos(f, g, pktlen, file_position);
	    if (publickey) {
		if (is_key_ctb(ctb)) {
		    write_trust(g, 0x00);
		    userid_seen = 0;
		} else if ((((ctb) & 0x7c) == (4 * 2))) {
		    if (userid_seen) {
			write_trust(g, 0x00);
		    } else {
			fprintf(pgpout, LANG("Key has been revoked.\n"));
		    }
		} else if ((((ctb) & 0x7c) == (4 * 13))) {
		    write_trust(g, 0x00);
		    userid_seen = (!0);
		}
	    }
	}
    }
    gpk_close();
    if ((h = fopen(ringfile, "r")) != ((void *) 0)) {
	if (gpk_open(keyfile) < 0) {
	    fclose(f);
	    fclose(g);
	    fclose(h);
	    goto err;
	}
	while (commonkeys) {
	    file_position = ftell(h);
	    status = readkeypacket(h, 0, &ctb, ((void *) 0), (char *) userid, n, e, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0));
	    if (status == -1 || status == -3) {
		if (status == -1)
		    fprintf(pgpout, LANG("\n\007Key file contains duplicate keys: cannot be added to keyring\n"));
		else
		    fprintf(pgpout, LANG("\n\007Could not read key from file '%s'.\n"), ringfile);
		fclose(f);
		fclose(g);
		fclose(h);
		goto err;
	    }
	    PascalToC((char *) userid);
	    pktlen = ftell(h) - file_position;
	    if (is_key_ctb(ctb)) {
		long tfp;
		copying = (!0);
		if (status == 0) {
		    extract_keyID(keyID, n);
		    extract_keyID(mykeyID, n);
		    publickey = (((ctb) & 0x7c) == (4 * 6));
		    if ((status = get_publickey(&tfp, ((void *) 0), keyID, timestamp, userid1, n1, e)) >= 0) {
			if (verbose)
			    fprintf(pgpout, "Merging key ID: %s\n", keyIDstring(keyID));
			if (mergekeys(f, keyfile, tfp, h, ringfile, &file_position, g) < 0) {
			    fclose(f);
			    fclose(g);
			    fclose(h);
			    goto err;
			}
			copying = 0;
			--commonkeys;
		    } else {
			if (status == -3)
			    --commonkeys;
		    }
		}
	    }
	    if (copying) {
		copyfilepos(h, g, pktlen, file_position);
		file_position += pktlen;
	    }
	}
	gpk_close();
	copyfile(h, g, -1L);
	fclose(h);
    }
    fclose(f);
    if (write_error(g)) {
	fclose(g);
	goto err;
    }
    fclose(g);
    if (newsigs == 0 && newkeys == 0 && newids == 0 && newrvks == 0) {
	fprintf(pgpout, LANG("No new keys or signatures in keyfile.\n"));
	rmtemp(scratchf);
	endkrent();
	return 0;
    }
    if (status = dokeycheck(((void *) 0), scratchf, 1)) {
	if (verbose)
	    fprintf(pgpout, "addto_keyring: dokeycheck returned %d\n", status);
	goto err;
    }
    endkrent();
    fprintf(pgpout, LANG("\nKeyfile contains:\n"));
    if (newkeys)
	fprintf(pgpout, LANG("%4d new key(s)\n"), newkeys);
    if (newsigs)
	fprintf(pgpout, LANG("%4d new signatures(s)\n"), newsigs);
    if (newids)
	fprintf(pgpout, LANG("%4d new user ID(s)\n"), newids);
    if (newrvks)
	fprintf(pgpout, LANG("%4d new revocation(s)\n"), newrvks);
    ask_first = (!0);
    status = maint_update(scratchf, nkeys);
    if (status >= 0 && !filter_mode && !batchmode)
	for (nkey = nkeys; nkey; nkey = nkey->next)
	    if (ask_to_sign(nkey->keyID, scratchf) != 0)
		break;
    if (status && verbose)
	fprintf(pgpout, "addto_keyring: maint_update returned %d\n", status);
    free_newkeys(nkeys);
    savetempbak(scratchf, ringfile);
    return 0;
  err:gpk_close();
    endkrent();
    rmtemp(scratchf);
    return -1;
}

int addto_keyring(char *keyfile, char *ringfile)
{
    long armorline = 0;
    char *tempf;
    int addflag = 0;
    if (_addto_keyring(keyfile, ringfile) == 0)
	return 0;
    while (is_armor_file(keyfile, armorline)) {
	tempf = tempfile(4 | 1);
	if (de_armor_file(keyfile, tempf, &armorline)) {
	    rmtemp(tempf);
	    return -1;
	}
	if (_addto_keyring(tempf, ringfile) == 0)
	    addflag = 1;
	rmtemp(tempf);
    }
    if (!addflag) {
	fprintf(pgpout, LANG("\nNo keys found in '%s'.\n"), keyfile);
	return -1;
    } else {
	return 0;
    }
}

static int ask_to_sign(byte * keyID, char *ringfile)
{
    FILE *f;
    word32 timestamp;
    byte ctb, trust;
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    byte userid[256];
    long fpos;
    int status;
    extern char my_name[];
    if (getpublickey(1, ringfile, &fpos, ((void *) 0), keyID, (byte *) & timestamp, userid, n, e) < 0)
	return -1;
    if ((f = fopen(ringfile, "r")) == ((void *) 0))
	return -1;
    fseek(f, fpos, 0);
    if (is_compromised(f)) {
	fclose(f);
	return 0;
    }
    if (nextkeypacket(f, &ctb) < 0) {
	fclose(f);
	return -1;
    }
    if (ctb != (0x80 + (4 * 6) + 1)) {
	fclose(f);
	return 0;
    }
    while (nextkeypacket(f, &ctb) == 0 && !is_key_ctb(ctb))
	if (ctb == (0x80 + (4 * 13) + 0))
	    break;
    if (ctb != (0x80 + (4 * 13) + 0)) {
	fclose(f);
	return -1;
    }
    if ((status = read_trust(f, &trust)) < 0) {
	fclose(f);
	return status;
    }
    if ((trust & 0x03) == 0x03) {
	fclose(f);
	return 0;
    }
    if (ask_first) {
	fprintf(pgpout, LANG("\nOne or more of the new keys are not fully certified.\nDo you want to certify any of these keys yourself (y/N)? "));
	if (!getyesno('n')) {
	    fclose(f);
	    return 1;
	}
    }
    ask_first = 0;
    show_key(f, fpos, (1 | 2) | 4);
    fclose(f);
    PascalToC((char *) userid);
    fprintf(pgpout, LANG("\nDo you want to certify this key yourself (y/N)? "));
    if (getyesno('n')) {
	if (signkey((char *) userid, my_name, ringfile) == 0)
	    maint_update(ringfile, 0);
    }
    return 0;
}

static long find_keyID(byte * keyID);
static FILE *gpkf = ((void *) 0);
int get_publickey(long *file_position, int *pktlen, byte * keyID, byte * timestamp, byte * userid, unitptr n, unitptr e)
{
    byte ctb;
    int status, keystatus = -1;
    long fpos;
    if ((fpos = find_keyID(keyID)) == -1)
	return -1;
    fseek(gpkf, fpos, 0);
    for (;;) {
	fpos = ftell(gpkf);
	status = readkeypacket(gpkf, 0, &ctb, timestamp, (char *) userid, n, e, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0));
	if (status < 0 && status != -4 && status != -6)
	    return status;
	if (is_key_ctb(ctb)) {
	    if (file_position)
		*file_position = fpos;
	    if (pktlen)
		*pktlen = (int) (ftell(gpkf) - fpos);
	    if (keystatus != -1)
		return -3;
	    keystatus = status;
	}
	if (ctb == (0x80 + (4 * 13) + 0))
	    return keystatus;
    }
}

static void *allocbuf(int size);
static void freebufpool(void);
static struct hashent {
    struct hashent *next;
    byte keyID[8];
    long offset;
} **hashtbl = ((void *) 0), *hashptr;
static int hashleft = 0;
int gpk_open(char *keyfile)
{
    int status;
    long fpos = 0;
    byte keyID[8];
    byte ctb;
    if (gpkf) {
	fprintf(pgpout, "gpk_open: already open\n");
	return -1;
    }
    default_extension(keyfile, PGP_EXTENSION);
    if ((gpkf = fopen(keyfile, "r")) == ((void *) 0))
	return -1;
    hashtbl = allocbuf(256 * sizeof(struct hashent *));
    memset(hashtbl, 0, 256 * sizeof(struct hashent *));
    while ((status = readkpacket(gpkf, &ctb, ((void *) 0), keyID, ((void *) 0))) != -1) {
	if (status == -2 || status == -3) {
	    fprintf(pgpout, LANG("\n\007Could not read key from file '%s'.\n"), keyfile);
	    fclose(gpkf);
	    return -1;
	}
	if (is_key_ctb(ctb)) {
	    if (status != -4) {
		if (find_keyID(keyID) != -1)
		    fprintf(pgpout, "Warning: duplicate key in keyring '%s'\n", keyfile);
		if (!hashleft) {
		    hashptr = allocbuf(400 * sizeof(struct hashent));
		    hashleft = 400;
		}
		memcpy(hashptr->keyID, keyID, 8);
		hashptr->offset = fpos;
		hashptr->next = hashtbl[(*(byte *) (keyID) & (256 - 1))];
		hashtbl[(*(byte *) (keyID) & (256 - 1))] = hashptr;
		++hashptr;
		--hashleft;
	    }
	}
	fpos = ftell(gpkf);
    } return 0;
}

void gpk_close(void)
{
    if (!gpkf)
	return;
    hashleft = 0;
    hashtbl = ((void *) 0);
    freebufpool();
    fclose(gpkf);
    gpkf = ((void *) 0);
} static long find_keyID(byte * keyID)
{
    struct hashent *p;
    for (p = hashtbl[(*(byte *) (keyID) & (256 - 1))]; p; p = p->next)
	if (memcmp(keyID, p->keyID, 8) == 0)
	    return p->offset;
    return -1;
}

static struct bufpool {
    struct bufpool *next;
    char buf[1];
} *bufpool = ((void *) 0);
static void *allocbuf(int size)
{
    struct bufpool *p;
    p = xmalloc(size + sizeof(struct bufpool *));
    p->next = bufpool;
    bufpool = p;
    return p->buf;
}

static void freebufpool(void)
{
    struct bufpool *p;
    while (bufpool) {
	p = bufpool;
	bufpool = bufpool->next;
	free(p);
    }
}
