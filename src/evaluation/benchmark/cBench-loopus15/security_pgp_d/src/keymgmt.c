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
extern int getopt(int ___argc, char *const *___argv, const char *__shortopts) __attribute__ ((__nothrow__));
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
int getch();
int kbhit();
long Clock();
void ttycbreak();
void ttynorm();
char *strlwr(char *);
void breakHandler(int);
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
int rsa_keygen(unitptr n, unitptr e, unitptr d, unitptr p, unitptr q, unitptr u, short keybits, short ebits);
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
extern char INT_C(char c);
extern char EXT_C(char c);
extern int CONVERSION;
extern void init_charset(void);
extern int to_upper(int c);
extern int to_lower(int c);
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
static boolean userid_match(char *userid, char *substr, unitptr n)
{
    boolean match_end = 0;
    int id_len, sub_len, i;
    char buf[256], sub[256], *p;
    if (substr == ((void *) 0) || *substr == '\0')
	return (!0);
    if (userid == ((void *) 0) || *userid == '\0')
	return 0;
    if (n != ((void *) 0) && substr[0] == '0' && to_lower(substr[1]) == 'x') {
	userid = key2IDstring(n);
	substr += 2;
    }
    id_len = strlen(userid);
    for (i = 0; i <= id_len; ++i)
	buf[i] = to_lower(userid[i]);
    sub_len = strlen(substr);
    for (i = 0; i <= sub_len; ++i)
	sub[i] = to_lower(substr[i]);
    if (n == ((void *) 0)) {
	return !strcmp(buf, sub);
    }
    if (sub_len > id_len)
	return 0;
    if (match_end)
	return !strcmp(buf + id_len - sub_len, sub);
    p = buf;
    while ((p = strchr(p, *sub)) != ((void *) 0)) {
	if (strncmp(p, sub, sub_len) == 0)
	    return (!0);
	++p;
    }
    return 0;
}

int is_key_ctb(byte ctb)
{
    return ctb == (0x80 + (4 * 6) + 1) || ctb == (0x80 + (4 * 5) + 1);
}

char const blankkeyID[] = "        ";
char *keyIDstring(byte * keyID)
{
    short i;
    char *bufptr;
    static char keyIDbuf[9];
    bufptr = keyIDbuf;
    for (i = 8 - 4; i < 8; i++) {
	sprintf(bufptr, "%02X", keyID[i]);
	bufptr += 2;
    }
    *bufptr = '\0';
    return keyIDbuf;
}

void extract_keyID(byteptr keyID, unitptr n)
{
    byte buf[((2048 + (2 * 16)) / 8) + 2];
    short i, j;
    memset(buf, 0, 8 + 2);
    reg2mpi(buf, n);
    i = reg2mpi(buf, n);
    i = i + 2 - 8;
    for (j = 0; j < 8;)
	keyID[j++] = buf[i++];
}

char *key2IDstring(unitptr n)
{
    byte keyID[8];
    extract_keyID(keyID, n);
    return keyIDstring(keyID);
}

static void showkeyID(byteptr keyID, FILE * pgpout)
{
    fprintf(pgpout, "%s", keyIDstring(keyID));
} void writekeyID(unitptr n, FILE * f)
{
    byte keyID[8];
    extract_keyID(keyID, n);
    fwrite(keyID, 1, 8, f);
} static boolean checkkeyID(byte * keyID, unitptr n)
{
    byte keyID0[8];
    if (keyID == ((void *) 0))
	return (!0);
    extract_keyID(keyID0, n);
    return !memcmp(keyID, keyID0, 8);
}

void dump_unit_array(string s, unitptr r);
void write_trust(FILE * f, byte trustbyte)
{
    _IO_putc((0x80 + (4 * 12) + 0), f);
    _IO_putc(1, f);
    _IO_putc(trustbyte, f);
} static short writekeyfile(char *fname, struct IdeaCfbContext *cfb, word32 timestamp, byte * userid, unitptr n, unitptr e, unitptr d, unitptr p, unitptr q, unitptr u)
{
    FILE *f;
    byte ctb;
    byte alg, version;
    word16 validity;
    word16 cert_length;
    extern word16 mpi_checksum;
    byte iv[8];
    int i;
    if ((f = fopen(fname, "w")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Unable to create key file '%s'.\n"), fname);
	return -1;
    }
    if (d == ((void *) 0)) {
	ctb = (0x80 + (4 * 6) + 1);
	cert_length = 1 + 4 + 2 + 1 + (((countbits(n) + 7) >> 3) + 2) + (((countbits(e) + 7) >> 3) + 2);
    } else {
	ctb = (0x80 + (4 * 5) + 1);
	cert_length = 1 + 4 + 2 + 1 + (((countbits(n) + 7) >> 3) + 2) + (((countbits(e) + 7) >> 3) + 2) + 1 + (cfb ? 8 : 0) + (((countbits(d) + 7) >> 3) + 2) + (((countbits(p) + 7) >> 3) + 2) + (((countbits(q) + 7) >> 3) + 2) + (((countbits(u) + 7) >> 3) + 2) + 2;
    }
    fwrite(&ctb, 1, 1, f);
    hiloswap((byteptr) & ((cert_length)), (sizeof(cert_length)));
    fwrite(&cert_length, 1, sizeof(cert_length), f);
    version = version_byte;
    fwrite(&version, 1, 1, f);
    memcpy(iv, &timestamp, 4);
    hiloswap(iv, 4);
    fwrite(iv, 1, 4, f);
    validity = 0;
    fwrite(&validity, 1, sizeof(validity), f);
    alg = 1;
    fwrite(&alg, 1, 1, f);
    write_mpi(n, f, 0);
    write_mpi(e, f, 0);
    if ((((ctb) & 0x7c) == (4 * 5))) {
	alg = cfb ? 1 : 0;
	_IO_putc(alg, f);
	if (cfb) {
	    for (i = 0; i < 8; i++)
		iv[i] = trueRandByte();
	    ideaCfbEncrypt(cfb, iv, iv, 8);
	    fwrite(iv, 1, 8, f);
	}
	mpi_checksum = 0;
	write_mpi(d, f, cfb);
	write_mpi(p, f, cfb);
	write_mpi(q, f, cfb);
	write_mpi(u, f, cfb);
	hiloswap((byteptr) & ((mpi_checksum)), (sizeof(mpi_checksum)));
	fwrite(&mpi_checksum, 1, sizeof(mpi_checksum), f);
    } else {
	write_trust(f, 0x07 | 0x80);
    }
    ctb = (0x80 + (4 * 13) + 0);
    fwrite(&ctb, 1, 1, f);
    fwrite(userid, 1, userid[0] + 1, f);
    if (d == ((void *) 0))
	write_trust(f, 0x03);
    if (write_error(f)) {
	fclose(f);
	return -1;
    }
    fclose(f);
    if (verbose)
	fprintf(pgpout, "%d-bit %s key written to file '%s'.\n", countbits(n), (((ctb) & 0x7c) == (4 * 5)) ? "secret" : "public", fname);
    return 0;
}

short nextkeypacket(FILE * f, byte * pctb)
{
    word32 cert_length;
    int count;
    byte ctb;
    *pctb = 0;
    count = fread(&ctb, 1, 1, f);
    if (count == 0)
	return -1;
    *pctb = ctb;
    if ((ctb != (0x80 + (4 * 6) + 1)) && (ctb != (0x80 + (4 * 5) + 1)) && (ctb != (0x80 + (4 * 13) + 0)) && (ctb != (0x80 + (4 * 12) + 0)) && !(((ctb) & 0x7c) == (4 * 2)) && !(((ctb) & 0x7c) == (4 * 14)))
	return (ctb == 0x1A) ? -1 : -2;
    cert_length = getpastlength(ctb, f);
    if (cert_length > (1 + 2 + 1 + 4 + 2 + 1 + (2 * (2 + ((2048 + (2 * 16)) / 8))) + 1 + 8 + (4 * (2 + ((2048 + (2 * 16)) / 8))) + 2) - 3)
	return -3;
    fseek(f, cert_length, 1);
    return 0;
}

short readkeypacket(FILE * f, struct IdeaCfbContext *cfb, byte * pctb, byte * timestamp, char *userid, unitptr n, unitptr e, unitptr d, unitptr p, unitptr q, unitptr u, byte * sigkeyID, byte * keyctrl)
{
    byte ctb;
    word16 cert_length;
    int count;
    byte version, alg, mdlen;
    word16 validity;
    word16 chksum;
    extern word16 mpi_checksum;
    long next_packet;
    byte iv[8];
    *pctb = 0;
    count = fread(&ctb, 1, 1, f);
    if (count == 0)
	return -1;
    *pctb = ctb;
    if ((ctb != (0x80 + (4 * 6) + 1)) && (ctb != (0x80 + (4 * 5) + 1)) && (ctb != (0x80 + (4 * 13) + 0)) && (ctb != (0x80 + (4 * 12) + 0)) && !(((ctb) & 0x7c) == (4 * 2)) && !(((ctb) & 0x7c) == (4 * 14)))
	return (ctb == 0x1A) ? -1 : -2;
    cert_length = getpastlength(ctb, f);
    if (cert_length > (1 + 2 + 1 + 4 + 2 + 1 + (2 * (2 + ((2048 + (2 * 16)) / 8))) + 1 + 8 + (4 * (2 + ((2048 + (2 * 16)) / 8))) + 2) - 3)
	return -3;
    next_packet = ftell(f) + cert_length;
    if (ctb == (0x80 + (4 * 13) + 0)) {
	if (cert_length > 255)
	    return -3;
	if (userid) {
	    userid[0] = cert_length;
	    fread(userid + 1, 1, cert_length, f);
	} else
	    fseek(f, (long) cert_length, 1);
	return 0;
    } else if ((((ctb) & 0x7c) == (4 * 2))) {
	if (sigkeyID) {
	    fread(&version, 1, 1, f);
	    if (version_byte_error(version))
		return fseek(f, next_packet, 0), -6;
	    fread(&mdlen, 1, 1, f);
	    fseek(f, (long) mdlen, 1);
	    fread(sigkeyID, 1, 8, f);
	}
	return fseek(f, next_packet, 0), 0;
    } else if (ctb == (0x80 + (4 * 12) + 0)) {
	if (cert_length != 1)
	    return -3;
	if (keyctrl)
	    fread(keyctrl, 1, cert_length, f);
	else
	    fseek(f, (long) cert_length, 1);
	return 0;
    } else if (!is_key_ctb(ctb))
	return fseek(f, next_packet, 0), 0;
    if (n != ((void *) 0))
	(global_precision = (((2048 + (2 * 16)) / 16)));
    fread(&version, 1, 1, f);
    if (version_byte_error(version))
	return fseek(f, next_packet, 0), -6;
    if (timestamp) {
	fread(timestamp, 1, 4, f);
	hiloswap(timestamp, 4);
    } else {
	fseek(f, (long) 4, 1);
    } fread(&validity, 1, sizeof(validity), f);
    hiloswap((byteptr) & ((validity)), (sizeof(validity)));
    fread(&alg, 1, 1, f);
    if (version_error(alg, 1))
	return fseek(f, next_packet, 0), -6;
    cert_length -= 1 + 4 + 2 + 1;
    if (n == ((void *) 0))
	return fseek(f, next_packet, 0), 0;
    if (read_mpi(n, f, (!0), 0) < 0)
	return fseek(f, next_packet, 0), -4;
    if (read_mpi(e, f, 0, 0) < 0)
	return fseek(f, next_packet, 0), -4;
    cert_length -= (((countbits(n) + 7) >> 3) + 2) + (((countbits(e) + 7) >> 3) + 2);
    if (d == ((void *) 0)) {
	if (cert_length && !(((ctb) & 0x7c) == (4 * 5)))
	    return fseek(f, next_packet, 0), -4;
	else
	    return fseek(f, next_packet, 0), 0;
    }
    if ((((ctb) & 0x7c) == (4 * 5))) {
	fread(&alg, 1, 1, f);
	if (alg && version_error(alg, 1))
	    return fseek(f, next_packet, 0), -6;
	if (!cfb && alg)
	    return fseek(f, next_packet, 0), -5;
	if (alg) {
	    count = fread(iv, 1, 8, f);
	    if (count < 8)
		return -4;
	    ideaCfbDecrypt(cfb, iv, iv, 8);
	    cert_length -= 8;
	}
	mpi_checksum = 0;
	if (read_mpi(d, f, 0, cfb) < 0)
	    return -4;
	if (read_mpi(p, f, 0, cfb) < 0)
	    return -4;
	if (read_mpi(q, f, 0, cfb) < 0)
	    return -4;
	mp_mult(u, p, q);
	if (mp_compare(n, u) != 0)
	    return -5;
	if (read_mpi(u, f, 0, cfb) < 0)
	    return -4;
	fread(&chksum, 1, sizeof(chksum), f);
	hiloswap((byteptr) & ((chksum)), (sizeof(chksum)));
	if (chksum != mpi_checksum)
	    return -5;
	cert_length -= 1 + (((countbits(d) + 7) >> 3) + 2) + (((countbits(p) + 7) >> 3) + 2) + (((countbits(q) + 7) >> 3) + 2) + (((countbits(u) + 7) >> 3) + 2) + 2;
    } else {
	mp_init(d, 0);
	mp_init(p, 0);
	mp_init(q, 0);
	mp_init(u, 0);
    }
    if (cert_length != 0) {
	fprintf(pgpout, "\n\007Corrupted key.  Bad length, off by %d bytes.\n", (int) cert_length);
	return fseek(f, next_packet, 0), -4;
    }
    return 0;
}

int getpublickey(int flags, char *keyfile, long *_file_position, int *_pktlen, byte * keyID, byte * timestamp, byte * userid, unitptr n, unitptr e)
{
    byte ctb;
    FILE *f;
    int status, keystatus = -1;
    boolean keyfound = 0;
    char matchid[256];
    long fpos;
    long file_position = 0;
    int pktlen = 0;
    boolean skip = 0;
    byte keyctrl;
    if (keyID == ((void *) 0))
	strcpy(matchid, (char *) userid);
    else
	matchid[0] = '\0';
  top:if (strlen(keyfile) == 0)
	return -1;
    if (!file_exists(keyfile))
	default_extension(keyfile, PGP_EXTENSION);
    if (!file_exists(keyfile)) {
	if (flags & 1)
	    return -1;
	fprintf(pgpout, LANG("\n\007Keyring file '%s' does not exist. "), keyfile);
	fprintf(pgpout, "\n");
	goto nogood;
    }
    if (verbose) {
	fprintf(pgpout, "searching key ring file '%s' ", keyfile);
	if (keyID)
	    fprintf(pgpout, "for keyID %s\n", keyIDstring(keyID));
	else
	    fprintf(pgpout, "for userid \"%s\"\n", userid);
    }
    if ((f = fopen(keyfile, "r")) == ((void *) 0))
	return -1;
    keyfound = 0;
    for (;;) {
	fpos = ftell(f);
	status = readkeypacket(f, 0, &ctb, timestamp, (char *) userid, n, e, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0));
	if (status == -1)
	    break;
	if (status < -1 && status != -4 && status != -6) {
	    fprintf(pgpout, LANG("\n\007Could not read key from file '%s'.\n"), keyfile);
	    fclose(f);
	    return status;
	}
	if (is_key_ctb(ctb)) {
	    file_position = fpos;
	    pktlen = (int) (ftell(f) - fpos);
	    keystatus = status;
	    if (!keyID && !(flags & 8) && ((((ctb) & 0x7c) == (4 * 5)) || (((ctb) & 0x7c) == (4 * 6))) && read_trust(f, &keyctrl) == 0 && (keyctrl & 0x20))
		skip = (!0);
	    else
		skip = 0;
	}
	if (!skip && ctb == (0x80 + (4 * 13) + 0)) {
	    if (keyID != ((void *) 0)) {
		if (keystatus == 0)
		    keyfound = checkkeyID(keyID, n);
	    } else {
		PascalToC((char *) userid);
		keyfound = userid_match((char *) userid, matchid, n);
		CToPascal((char *) userid);
	}}
	if (keyfound) {
	    if (flags & 2)
		show_key(f, file_position, 0);
	    fseek(f, file_position, 0);
	    if ((flags & 4) && keystatus == 0 && is_compromised(f)) {
		if (flags & 2) {
		    fprintf(pgpout, LANG("\n\007Sorry, this key has been revoked by its owner.\n"));
		} else {
		    PascalToC((char *) userid);
		    fprintf(pgpout, LANG("\nKey for user ID \"%s\"\nhas been revoked.  You cannot use this key.\n"), (char *) userid);
		} keyfound = 0;
		skip = (!0);
		nextkeypacket(f, &ctb);
	    } else {
		if (_pktlen)
		    *_pktlen = pktlen;
		if (_file_position)
		    *_file_position = file_position;
		fclose(f);
		return keystatus;
	    }
	}
    }
    fclose(f);
    if (flags & 1)
	return -1;
    if (keyID != ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Key matching expected Key ID %s not found in file '%s'.\n"), keyIDstring(keyID), keyfile);
    } else {
	fprintf(pgpout, LANG("\n\007Key matching userid '%s' not found in file '%s'.\n"), matchid, keyfile);
    }
  nogood:if (filter_mode || batchmode)
	return -1;
    if (flags & 32)
	fprintf(pgpout, LANG("Enter secret key filename: "));
    else
	fprintf(pgpout, LANG("Enter public key filename: "));
    getstring(keyfile, 59, (!0));
    goto top;
}

int getpubuserid(char *keyfile, long key_position, byte * userid, long *userid_position, int *userid_len, boolean exact_match)
{
    unit n[((2048 + (2 * 16)) / 16)];
    unit e[((2048 + (2 * 16)) / 16)];
    byte ctb;
    FILE *f;
    int status;
    char userid0[256];
    long fpos;
    if ((f = fopen(keyfile, "r")) == ((void *) 0))
	return -1;
    fseek(f, key_position, 0);
    (void) nextkeypacket(f, &ctb);
    for (;;) {
	fpos = ftell(f);
	status = readkeypacket(f, 0, &ctb, ((void *) 0), (char *) userid0, n, e, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0));
	if (status < 0 || is_key_ctb(ctb)) {
	    fclose(f);
	    return status ? status : -1;
	}
	if (ctb == (0x80 + (4 * 13) + 0)) {
	    if (userid[0] == '0' && userid[1] == 'x')
		break;
	    PascalToC((char *) userid0);
	    if (userid_match((char *) userid0, (char *) userid, (exact_match ? ((void *) 0) : n)))
		break;
	}
    }
    *userid_position = fpos;
    *userid_len = (int) (ftell(f) - fpos);
    fclose(f);
    return 0;
}

int getpubusersig(char *keyfile, long user_position, byte * sigkeyID, byte * timestamp, long *sig_position, int *sig_len)
{
    byte ctb;
    FILE *f;
    int status;
    byte keyID0[8];
    long fpos;
    if ((f = fopen(keyfile, "r")) == ((void *) 0))
	return -1;
    fseek(f, user_position, 0);
    (void) nextkeypacket(f, &ctb);
    for (;;) {
	fpos = ftell(f);
	status = readkeypacket(f, 0, &ctb, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), keyID0, ((void *) 0));
	if (status < 0 || is_key_ctb(ctb) || ctb == (0x80 + (4 * 13) + 0))
	    break;
	if ((((ctb) & 0x7c) == (4 * 2))) {
	    if (!memcmp(sigkeyID, keyID0, 8)) {
		*sig_position = fpos;
		*sig_len = (int) (ftell(f) - fpos);
		fseek(f, fpos + 6, 0);
		fread(timestamp, 1, 4, f);
		hiloswap(timestamp, 4);
		fclose(f);
		return 0;
	    }
	}
    }
    fclose(f);
    return status ? status : -1;
}

int getsecretkey(int flags, char *keyfile, byte * keyID, byte * timestamp, byte * hpass, boolean * hkey, byte * userid, unitptr n, unitptr e, unitptr d, unitptr p, unitptr q, unitptr u)
{
    byte ctb;
    FILE *f;
    char keyfilename[256];
    long file_position;
    int status;
    boolean hidekey;
    word16 iv[4];
    byte ideakey[16];
    int guesses;
    struct hashedpw *hpw, **hpwp;
    struct IdeaCfbContext cfb;
    if (keyfile == ((void *) 0)) {
	strcpy(keyfilename, globalSecringName);
	keyfile = keyfilename;
    }
    status = getpublickey(flags | 32, keyfile, &file_position, ((void *) 0), keyID, timestamp, userid, n, e);
    if (status < 0)
	return status;
    if ((f = fopen(keyfile, "r")) == ((void *) 0))
	return -1;
    hidekey = 0;
    fseek(f, file_position, 0);
    status = readkeypacket(f, 0, &ctb, timestamp, (char *) userid, n, e, d, p, q, u, ((void *) 0), ((void *) 0));
    if (status != -5)
	goto done;
    if (!(flags & 16)) {
	hidekey = (!0);
	hpw = keypasswds;
	while (hpw) {
	    ideaCfbInit(&cfb, hpw->hash);
	    fseek(f, file_position, 0);
	    status = readkeypacket(f, &cfb, &ctb, timestamp, (char *) userid, n, e, d, p, q, u, ((void *) 0), ((void *) 0));
	    ideaCfbDestroy(&cfb);
	    if (status != -5) {
		memcpy(ideakey, hpw->hash, sizeof(ideakey));
		goto done;
	    }
	    hpw = hpw->next;
	}
	hpwp = &passwds;
	hpw = *hpwp;
	while (hpw) {
	    ideaCfbInit(&cfb, hpw->hash);
	    fseek(f, file_position, 0);
	    status = readkeypacket(f, &cfb, &ctb, timestamp, (char *) userid, n, e, d, p, q, u, ((void *) 0), ((void *) 0));
	    ideaCfbDestroy(&cfb);
	    if (status >= 0) {
		memcpy(ideakey, hpw->hash, sizeof(ideakey));
		*hpwp = hpw->next;
		hpw->next = keypasswds;
		keypasswds = hpw;
	    }
	    if (status != -5)
		goto done;
	    hpwp = &hpw->next;
	    hpw = *hpwp;
	}
    }
    if (batchmode) {
	fprintf(pgpout, LANG("\n\007Error:  Bad pass phrase.\n"));
	fclose(f);
	return -1;
    }
    fprintf(pgpout, LANG("\nYou need a pass phrase to unlock your RSA secret key. "));
    if (!(flags & 2)) {
	PascalToC((char *) userid);
	fprintf(pgpout, LANG("\nKey for user ID: %s\n"), (char *) userid);
	fprintf(pgpout, LANG("%d-bit key, key ID %s, created %s\n"), countbits(n), key2IDstring(n), cdate((word32 *) timestamp));
	CToPascal((char *) userid);
    }
    guesses = 0;
    for (;;) {
	if (++guesses > 3)
	    hidekey = 0;
	else
	    hidekey = (GetHashedPassPhrase((char *) ideakey, 1) > 0);
	if (!hidekey) {
	    status = -5;
	    fputs(LANG("No passphrase; secret key unavailable.\n"), pgpout);
	    break;
	}
	ideaCfbInit(&cfb, ideakey);
	fseek(f, file_position, 0);
	status = readkeypacket(f, &cfb, &ctb, timestamp, (char *) userid, n, e, d, p, q, u, ((void *) 0), ((void *) 0));
	ideaCfbDestroy(&cfb);
	if (status >= 0) {
	    if (flags & 16) {
		hpw = passwds;
		while (hpw) {
		    if (memcmp(hpw->hash, ideakey, sizeof(ideakey)) == 0)
			goto done;
		    hpw = hpw->next;
		}
		hpw = keypasswds;
		while (hpw) {
		    if (memcmp(hpw->hash, ideakey, sizeof(ideakey)) == 0)
			goto done;
		    hpw = hpw->next;
		}
	    }
	    hpw = (struct hashedpw *) malloc(sizeof(struct hashedpw));
	    if (hpw) {
		memcpy(hpw->hash, ideakey, sizeof(hpw->hash));
		hpw->next = keypasswds;
		keypasswds = hpw;
	    }
	}
	if (status != -5)
	    goto done;
	fprintf(pgpout, LANG("\n\007Error:  Bad pass phrase.\n"));
    }
    while (--guesses);
  done:fclose(f);
    if (hkey)
	*hkey = hidekey;
    if (status == -5)
	return status;
    if (status < 0) {
	fprintf(pgpout, LANG("\n\007Could not read key from file '%s'.\n"), keyfile);
	fclose(f);
	return -1;
    }
    if (hpass)
	memcpy(hpass, ideakey, sizeof(ideakey));
    memset((void *) &(ideakey), 0, sizeof(ideakey));
    if (d != ((void *) 0)) {
	if (!quietmode) {
	    if (!hidekey)
		fprintf(pgpout, LANG("\nAdvisory warning: This RSA secret key is not protected by a passphrase.\n"));
	    else
		fprintf(pgpout, LANG("Pass phrase is good.  "));
	}
	if ((((*(d)) == (0)) && (significance(d) <= 1))) {
	    fprintf(pgpout, LANG("\n\007Key file '%s' is not a secret key file.\n"), keyfile);
	    return -1;
	}
    }
    return 0;
}

int is_compromised(FILE * f)
{
    long pos, savepos;
    byte class, ctb;
    int cert_len;
    int status = 0;
    pos = savepos = ftell(f);
    nextkeypacket(f, &ctb);
    if (is_key_ctb(ctb)) {
	pos = ftell(f);
	nextkeypacket(f, &ctb);
    }
    if (ctb != (0x80 + (4 * 12) + 0))
	fseek(f, pos, 0);
    if (fread(&ctb, 1, 1, f) != 1) {
	status = -1;
	goto ex;
    }
    if ((((ctb) & 0x7c) == (4 * 2))) {
	cert_len = (int) getpastlength(ctb, f);
	if (cert_len > (1 + 2 + 1 + 1 + 7 + 8 + 2 + 2 + (2 + ((2048 + (2 * 16)) / 8)))) {
	    status = -1;
	    goto ex;
	}
	fseek(f, 2L, 1);
	if (fread(&class, 1, 1, f) != 1) {
	    status = -1;
	    goto ex;
	}
	status = (class == 0x20);
    }
  ex:fseek(f, savepos, 0);
    return status;
}

void getKeyHash(byte * hash, unitptr n, unitptr e)
{
    struct MD5Context mdContext;
    byte buffer[((2048 + (2 * 16)) / 8) + 2];
    byte mdBuffer[((2048 + (2 * 16)) / 8) * 2];
    int i, mdIndex = 0, bufIndex;
    i = reg2mpi(buffer, n);
    for (bufIndex = 2; bufIndex < i + 2; bufIndex++)
	mdBuffer[mdIndex++] = buffer[bufIndex];
    i = reg2mpi(buffer, e);
    for (bufIndex = 2; bufIndex < i + 2; bufIndex++)
	mdBuffer[mdIndex++] = buffer[bufIndex];
    MD5Init(&mdContext);
    MD5Update(&mdContext, mdBuffer, mdIndex);
    MD5Final(hash, &mdContext);
}

void printKeyHash(byteptr hash, boolean indent)
{
    int i;
    fprintf(pgpout, "%*s", indent ? 29 : 1, LANG("Key fingerprint ="));
    for (i = 0; i < 8; i++)
	fprintf(pgpout, " %02X", hash[i]);
    _IO_putc(' ', pgpout);
    for (i = 8; i < 16; i++)
	fprintf(pgpout, " %02X", hash[i]);
    _IO_putc('\n', pgpout);
}

void showKeyHash(unitptr n, unitptr e)
{
    byte hash[16];
    getKeyHash(hash, n, e);
    printKeyHash(hash, (!0));
} int view_keyring(char *mcguffin, char *ringfile, boolean show_signatures, boolean show_hashes)
{
    FILE *f;
    int status;
    char dfltring[256];
    int keycounter = 0;
    FILE *savepgpout;
    strcpy(dfltring, globalPubringName);
    if ((f = fopen(ringfile, "r")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open key ring file '%s'\n"), ringfile);
	return -1;
    }
    if (show_signatures) {
	setkrent(ringfile);
	setkrent(dfltring);
	init_userhash();
    }
    savepgpout = pgpout;
    pgpout = stdout;
    if (moreflag)
	open_more();
    if (!quietmode) {
	fprintf(pgpout, LANG("\nKey ring: '%s'"), ringfile);
	if (mcguffin && strlen(mcguffin) > 0)
	    fprintf(pgpout, LANG(", looking for user ID \"%s\"."), mcguffin);
    }
    fprintf(pgpout, "\n");
    kv_title(pgpout);
    status = kvformat_keypacket(f, pgpout, 0, mcguffin, ringfile, show_signatures, show_hashes, &keycounter);
    fclose(f);
    if (show_signatures)
	endkrent();
    if (keycounter == 1)
	fprintf(pgpout, LANG("1 matching key found.\n"));
    else
	fprintf(pgpout, LANG("%d matching keys found.\n"), keycounter);
    close_more();
    pgpout = savepgpout;
    if (status < 0)
	return status;
    if (mcguffin != ((void *) 0) && *mcguffin != '\0') {
	if (keycounter == 0)
	    return 67;
	else if (keycounter > 1)
	    return 1;
    }
    return 0;
}

int dokeycheck(char *mcguffin, char *ringfile, int options)
{
    FILE *f, *fixedf = ((void *) 0);
    byte ctb, keyctb = 0;
    long fpsig = 0, fpkey = 0, fixpos = 0, trustpos = -1;
    int status, sigstatus;
    int keypktlen = 0, sigpktlen = 0;
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    byte keyID[8];
    byte sigkeyID[8];
    byte keyuserid[256];
    byte siguserid[256];
    char dfltring[256];
    char *tempring = ((void *) 0);
    word32 tstamp;
    byte *timestamp = (byte *) & tstamp;
    word32 sigtstamp;
    byte *sigtimestamp = (byte *) & sigtstamp;
    byte sigclass;
    int firstuser = 0;
    int compromised = 0;
    boolean invalid_key = 0;
    boolean failed = 0;
    boolean print_userid = 0;
    byte sigtrust, newtrust;
    FILE *savepgpout;
    strcpy(dfltring, globalPubringName);
    f = fopen(ringfile, "r+");
    if (f == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open key ring file '%s'\n"), ringfile);
	return -1;
    }
    savepgpout = pgpout;
    pgpout = stdout;
    if (options & 1) {
	fprintf(pgpout, LANG("\nChecking signatures...\n"));
    } else {
	if (moreflag)
	    open_more();
	if (!quietmode) {
	    fprintf(pgpout, LANG("\nKey ring: '%s'"), ringfile);
	    if (mcguffin && strlen(mcguffin) > 0)
		fprintf(pgpout, LANG(", looking for user ID \"%s\"."), mcguffin);
	}
	fprintf(pgpout, "\n");
	kv_title(pgpout);
    }
    for (;;) {
	long fpos = ftell(f);
	status = readkeypacket(f, 0, &ctb, timestamp, (char *) keyuserid, n, e, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), sigkeyID, ((void *) 0));
	if (status == -1)
	    break;
	if (status == -4 || status == -6) {
	    memset(sigkeyID, 0, 8);
	    tstamp = 0;
	} else if (status < 0) {
	    fprintf(pgpout, LANG("\n\007Could not read key from file '%s'.\n"), ringfile);
	    fclose(f);
	    return -1;
	}
	if (is_key_ctb(ctb)) {
	    firstuser = 1;
	    keyctb = ctb;
	    fpkey = fpos;
	    keypktlen = (int) (ftell(f) - fpkey);
	    compromised = is_compromised(f);
	    if (status < 0) {
		invalid_key = (!0);
		memset(keyID, 0, 8);
	    } else {
		invalid_key = 0;
		extract_keyID(keyID, n);
	    }
	    if (options & 1)
		print_userid = (!0);
	}
	if (ctb == (0x80 + (4 * 13) + 0)) {
	    PascalToC((char *) keyuserid);
	} else if ((((ctb) & 0x7c) == (4 * 2))) {
	    fpsig = fpos;
	    sigpktlen = (int) (ftell(f) - fpsig);
	} else {
	    continue;
	}
	trustpos = ftell(f);
	status = read_trust(f, &sigtrust);
	if (status == -1)
	    break;
	if (status == -7) {
	    trustpos = -1;
	    continue;
	}
	if (status < 0) {
	    fclose(f);
	    return status;
	}
	if (options & 1) {
	    if (!(((ctb) & 0x7c) == (4 * 2)))
		continue;
	    if (sigtrust & 0x40)
		continue;
	    if (user_from_keyID(sigkeyID) == ((void *) 0))
		continue;
	}
	if (!(options & 1) && !userid_match((char *) keyuserid, mcguffin, n))
	    continue;
	if (ctb == (0x80 + (4 * 13) + 0) || print_userid) {
	    print_userid = 0;
	    if (firstuser) {
		if ((((keyctb) & 0x7c) == (4 * 6)))
		    fprintf(pgpout, LANG("pub"));
		else if ((((keyctb) & 0x7c) == (4 * 5)))
		    fprintf(pgpout, LANG("sec"));
		else
		    fprintf(pgpout, "???");
		if (invalid_key)
		    fprintf(pgpout, "? ");
		else
		    fprintf(pgpout, "  ");
		fprintf(pgpout, "%4d/%s %s ", countbits(n), keyIDstring(keyID), cdate(&tstamp));
	    } else {
		fprintf(pgpout, "          %s            ", blankkeyID);
	    }
	    if (compromised && firstuser) {
		fprintf(pgpout, LANG("*** KEY REVOKED ***\n"));
		fprintf(pgpout, "          %s              ", blankkeyID);
	    }
	    firstuser = 0;
	    fprintf(pgpout, "%s\n", (char *) keyuserid);
	}
	if (!(((ctb) & 0x7c) == (4 * 2)))
	    continue;
	CToPascal((char *) keyuserid);
	sigstatus = check_key_sig(f, fpkey, keypktlen, (char *) keyuserid, f, fpsig, ringfile, (char *) siguserid, sigtimestamp, &sigclass);
	if (sigstatus == -2 && strcmp(ringfile, dfltring) != 0) {
	    sigstatus = check_key_sig(f, fpkey, keypktlen, (char *) keyuserid, f, fpsig, dfltring, (char *) siguserid, sigtimestamp, &sigclass);
	}
	PascalToC((char *) keyuserid);
	fseek(f, fpsig + sigpktlen, 0);
	if (sigclass == 0x20)
	    fprintf(pgpout, LANG("com"));
	else
	    fprintf(pgpout, LANG("sig"));
	if (sigstatus >= 0)
	    fputs("!      ", pgpout);
	else if (status < 0 || sigstatus == -2 || sigstatus == -3)
	    fputs("?      ", pgpout);
	else if (sigstatus != -20)
	    fputs("%      ", pgpout);
	else
	    fputs("*      ", pgpout);
	showkeyID(sigkeyID, pgpout);
	if (sigstatus >= 0 || sigstatus == -3 || (sigstatus <= -5 && sigstatus >= -9) || sigstatus == -20) {
	    PascalToC((char *) siguserid);
	    fprintf(pgpout, " %s ", cdate(&sigtstamp));
	    if (sigclass != 0x20)
		_IO_putc(' ', pgpout);
	    fputs((char *) siguserid, pgpout);
	    _IO_putc('\n', pgpout);
	    if (sigstatus < 0)
		fprintf(pgpout, "          %s             ", blankkeyID);
	} else {
	    fprintf(pgpout, "             ");
	}
	newtrust = sigtrust;
	if (sigstatus >= 0) {
	    newtrust |= 0x40;
	} else if (sigstatus == -2) {
	    newtrust |= 0x40;
	    newtrust &= ~0x07;
	} else {
	    newtrust &= ~0x07 & ~0x40;
	    newtrust |= 0x02;
	}
	if (trustpos > 0 && newtrust != sigtrust)
	    write_trust_pos(f, newtrust, trustpos);
	if (sigstatus >= 0)
	    continue;
	if (sigstatus == -2)
	    fprintf(pgpout, LANG("(Unknown signator, can't be checked)"));
	else if (sigstatus == -3)
	    fprintf(pgpout, LANG("(Key too long, can't be checked)"));
	else if (sigstatus == -5)
	    fprintf(pgpout, LANG("(Malformed or obsolete signature format)"));
	else if (sigstatus == -6)
	    fprintf(pgpout, LANG("(Unknown public-key algorithm)"));
	else if (sigstatus == -7)
	    fprintf(pgpout, LANG("(Unknown hash algorithm)"));
	else if (sigstatus == -8)
	    fprintf(pgpout, LANG("(Unknown signature packet version)"));
	else if (sigstatus == -9)
	    fprintf(pgpout, LANG("(Malformed signature)"));
	else if (sigstatus == -10)
	    fprintf(pgpout, LANG("(Corrupted signature packet)"));
	else if (sigstatus == -20)
	    fprintf(pgpout, LANG("\007**** BAD SIGNATURE! ****"));
	else
	    fprintf(pgpout, "(Unexpected signature error %d)", sigstatus);
	_IO_putc('\n', pgpout);
	if (sigstatus == -2 || sigstatus == -3)
	    continue;
	if (!failed) {
	    tempring = tempfile(4);
	    fixedf = fopen(tempring, "w");
	    failed = (!0);
	}
	if (fixedf != ((void *) 0)) {
	    copyfilepos(f, fixedf, fpsig - fixpos, fixpos);
	    fseek(f, fpsig + sigpktlen, 0);
	    if (nextkeypacket(f, &ctb) < 0 || ctb != (0x80 + (4 * 12) + 0))
		fseek(f, fpsig + sigpktlen, 0);
	    fixpos = ftell(f);
	}
    }
    close_more();
    pgpout = savepgpout;
    if (status < -1) {
	fclose(f);
	return status;
    }
    fputc('\n', pgpout);
    if (failed && fixedf) {
	copyfilepos(f, fixedf, -1L, fixpos);
	fclose(f);
	if (write_error(fixedf)) {
	    fclose(fixedf);
	    return -1;
	}
	fclose(fixedf);
	if (!batchmode)
	    fprintf(pgpout, LANG("Remove bad signatures (Y/n)? "));
	if (batchmode || getyesno('y')) {
	    savetempbak(tempring, ringfile);
	    failed = 0;
	}
    } else {
	fclose(f);
    }
    return 0;
}

int backup_rename(char *scratchfile, char *destfile)
{
    char bakfile[256];
    if (is_tempfile(destfile)) {
	remove(destfile);
    } else {
	if (file_exists(destfile)) {
	    strcpy(bakfile, destfile);
	    force_extension(bakfile, BAK_EXTENSION);
	    remove(bakfile);
	    rename(destfile, bakfile);
	}
    }
    return rename2(scratchfile, destfile);
}

int remove_sigs(char *mcguffin, char *ringfile)
{
    FILE *f, *g;
    byte ctb;
    long fp, fpuser;
    int packetlength;
    int status;
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    byte sigkeyID[8];
    byte userid[256];
    char dfltring[256];
    word32 tstamp;
    byte *timestamp = (byte *) & tstamp;
    int nsigs = 0, nremoved = 0;
    int keeping;
    char *scratchf;
    strcpy(dfltring, globalPubringName);
    if (!mcguffin || strlen(mcguffin) == 0)
	return -1;
    setoutdir(ringfile);
    scratchf = tempfile(0);
    strcpy((char *) userid, mcguffin);
    fprintf(pgpout, LANG("\nRemoving signatures from userid '%s' in key ring '%s'\n"), mcguffin, ringfile);
    status = getpublickey(1 | 2, ringfile, &fp, &packetlength, ((void *) 0), timestamp, userid, n, e);
    if (status < 0) {
	fprintf(pgpout, LANG("\n\007Key not found in key ring '%s'.\n"), ringfile);
	return 0;
    }
    strcpy((char *) userid, mcguffin);
    getpubuserid(ringfile, fp, userid, &fpuser, &packetlength, 0);
    packetlength += (int) (fpuser - fp);
    if ((f = fopen(ringfile, "r")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open key ring file '%s'\n"), ringfile);
	return -1;
    }
    fseek(f, fp + packetlength, 0);
    for (;;) {
	status = nextkeypacket(f, &ctb);
	if (status < 0 || is_key_ctb(ctb) || ctb == (0x80 + (4 * 13) + 0))
	    break;
	if ((((ctb) & 0x7c) == (4 * 2)))
	    ++nsigs;
    }
    rewind(f);
    if (nsigs == 0) {
	fprintf(pgpout, LANG("\nKey has no signatures to remove.\n"));
	fclose(f);
	return 0;
    }
    fprintf(pgpout, LANG("\nKey has %d signature(s):\n"), nsigs);
    if ((g = fopen(scratchf, "w")) == ((void *) 0)) {
	fclose(f);
	return -1;
    }
    copyfile(f, g, fp + packetlength);
    keeping = 1;
    for (;;) {
	fp = ftell(f);
	status = readkeypacket(f, 0, &ctb, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), sigkeyID, ((void *) 0));
	packetlength = (int) (ftell(f) - fp);
	if ((status < 0 && status != -6 && status != -4) || is_key_ctb(ctb) || ctb == (0x80 + (4 * 13) + 0))
	    break;
	if ((((ctb) & 0x7c) == (4 * 2))) {
	    fprintf(pgpout, LANG("sig"));
	    fprintf(pgpout, "%c     ", status < 0 ? '?' : ' ');
	    if (status < 0)
		memset(sigkeyID, 0, 8);
	    showkeyID(sigkeyID, pgpout);
	    fprintf(pgpout, "               ");
	    if (getpublickey(1, ringfile, ((void *) 0), ((void *) 0), sigkeyID, timestamp, userid, n, e) >= 0 || getpublickey(1, dfltring, ((void *) 0), ((void *) 0), sigkeyID, timestamp, userid, n, e) >= 0) {
		PascalToC((char *) userid);
		fprintf(pgpout, "%s\n", (char *) userid);
	    } else {
		fprintf(pgpout, LANG("(Unknown signator, can't be checked)\n"));
	    }
	    fprintf(pgpout, LANG("Remove this signature (y/N)? "));
	    if (!(keeping = !getyesno('n')))
		++nremoved;
	}
	if (keeping)
	    copyfilepos(f, g, (long) packetlength, fp);
    } copyfilepos(f, g, -1L, fp);
    fclose(f);
    if (write_error(g)) {
	fclose(g);
	return -1;
    }
    fclose(g);
    savetempbak(scratchf, ringfile);
    if (nremoved == 0)
	fprintf(pgpout, LANG("\nNo key signatures removed.\n"));
    else
	fprintf(pgpout, LANG("\n%d key signature(s) removed.\n"), nremoved);
    return 0;
}

int remove_from_keyring(byte * keyID, char *mcguffin, char *ringfile, boolean secring_too)
{
    FILE *f;
    FILE *g;
    long fp, nfp;
    int packetlength;
    byte ctb;
    int status;
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    byte userid[256];
    word32 tstamp;
    byte *timestamp = (byte *) & tstamp;
    int userids;
    boolean rmuserid = 0;
    char *scratchf;
    unsigned secflag = 0;
    default_extension(ringfile, PGP_EXTENSION);
    if ((keyID == ((void *) 0)) && (!mcguffin || strlen(mcguffin) == 0))
	return -1;
  top:if (mcguffin)
	strcpy((char *) userid, mcguffin);
    fprintf(pgpout, LANG("\nRemoving from key ring: '%s'"), ringfile);
    if (mcguffin && strlen(mcguffin) > 0)
	fprintf(pgpout, LANG(", userid \"%s\".\n"), mcguffin);
    status = getpublickey(secflag | 1 | 2, ringfile, &fp, &packetlength, ((void *) 0), timestamp, userid, n, e);
    if (status < 0 && status != -4 && status != -6) {
	fprintf(pgpout, LANG("\n\007Key not found in key ring '%s'.\n"), ringfile);
	return 0;
    }
    if ((f = fopen(ringfile, "r")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open key ring file '%s'\n"), ringfile);
	return -1;
    }
    fseek(f, fp + packetlength, 0);
    userids = 0;
    do {
	nfp = ftell(f);
	status = nextkeypacket(f, &ctb);
	if (status == 0 && ctb == (0x80 + (4 * 13) + 0))
	    ++userids;
    } while (status == 0 && !is_key_ctb(ctb));
    if (status < -1) {
	fclose(f);
	return -1;
    }
    if (keyID == ((void *) 0)) {
	if (userids > 1) {
	    fprintf(pgpout, LANG("\nKey has more than one user ID.\nDo you want to remove the whole key (y/N)? "));
	    if (!getyesno('n')) {
		rmuserid = (!0);
		fseek(f, fp + packetlength, 0);
		for (;;) {
		    fp = ftell(f);
		    status = readkpacket(f, &ctb, (char *) userid, ((void *) 0), ((void *) 0));
		    if (status < 0 && status != -4 && status != -6 || is_key_ctb(ctb)) {
			fclose(f);
			fprintf(pgpout, LANG("\nNo more user ID's\n"));
			return -1;
		    }
		    if (ctb == (0x80 + (4 * 13) + 0)) {
			fprintf(pgpout, LANG("Remove \"%s\" (y/N)? "), userid);
			if (getyesno('n'))
			    break;
		    }
		}
		do {
		    nfp = ftell(f);
		    status = nextkeypacket(f, &ctb);
		} while ((status == 0 || status == -4 || status == -6) && !is_key_ctb(ctb) && ctb != (0x80 + (4 * 13) + 0));
		if (status < -1 && status != -4 && status != -6) {
		    fclose(f);
		    return -1;
		}
	    }
	} else if (!force_flag) {
	    fprintf(pgpout, LANG("\nAre you sure you want this key removed (y/N)? "));
	    if (!getyesno('n')) {
		fclose(f);
		return -1;
	    }
	}
    }
    fclose(f);
    packetlength = (int) (nfp - fp);
    if ((f = fopen(ringfile, "r")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open key ring file '%s'\n"), ringfile);
	return -1;
    }
    setoutdir(ringfile);
    scratchf = tempfile(0);
    if ((g = fopen(scratchf, "w")) == ((void *) 0)) {
	fclose(f);
	return -1;
    }
    copyfilepos(f, g, fp, 0L);
    copyfilepos(f, g, -1L, fp + packetlength);
    fclose(f);
    if (write_error(g)) {
	fclose(g);
	return -1;
    }
    fclose(g);
    if (secring_too)
	maint_update(scratchf, 0);
    savetempbak(scratchf, ringfile);
    if (rmuserid)
	fprintf(pgpout, LANG("\nUser ID removed from key ring.\n"));
    else
	fprintf(pgpout, LANG("\nKey removed from key ring.\n"));
    if (secring_too) {
	secring_too = 0;
	strcpy(ringfile, globalSecringName);
	strcpy((char *) userid, mcguffin);
	if (getpublickey(1 | 32, ringfile, ((void *) 0), ((void *) 0), ((void *) 0), timestamp, userid, n, e) == 0) {
	    fprintf(pgpout, LANG("\nKey or user ID is also present in secret keyring.\nDo you also want to remove it from the secret keyring (y/N)? "));
	    if (getyesno('n')) {
		secflag = 32;
		goto top;
	    }
	}
    }
    return 0;
}

int extract_from_keyring(char *mcguffin, char *keyfile, char *ringfile, boolean transflag)
{
    FILE *f;
    FILE *g;
    long fp;
    int packetlength = 0;
    byte ctb;
    byte keyctrl;
    int status;
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    byte keyID[8];
    byte userid[256];
    char fname[256], transfile[256], transname[256];
    char *tempf = ((void *) 0);
    word32 tstamp;
    byte *timestamp = (byte *) & tstamp;
    boolean append = 0;
    boolean whole_ring = 0;
    default_extension(ringfile, PGP_EXTENSION);
    if (!mcguffin || strlen(mcguffin) == 0 || strcmp(mcguffin, "*") == 0)
	whole_ring = (!0);
    if ((f = fopen(ringfile, "r")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open key ring file '%s'\n"), ringfile);
	return -1;
    }
    if (!whole_ring) {
	strcpy((char *) userid, mcguffin);
	fprintf(pgpout, LANG("\nExtracting from key ring: '%s'"), ringfile);
	fprintf(pgpout, LANG(", userid \"%s\".\n"), mcguffin);
	status = getpublickey(1 | 2, ringfile, &fp, &packetlength, ((void *) 0), timestamp, userid, n, e);
	if (status < 0 && status != -4 && status != -6) {
	    fprintf(pgpout, LANG("\n\007Key not found in key ring '%s'.\n"), ringfile);
	    fclose(f);
	    return 1;
	}
	extract_keyID(keyID, n);
    } else {
	do
	    fp = ftell(f);
	while ((status = nextkeypacket(f, &ctb)) >= 0 && !is_key_ctb(ctb));
	if (status < 0) {
	    fclose(f);
	    return -1;
	}
	packetlength = (int) (ftell(f) - fp);
    } if (!keyfile || strlen(keyfile) == 0) {
	fprintf(pgpout, "\n");
	fprintf(pgpout, LANG("Extract the above key into which file?"));
	fprintf(pgpout, " ");
	if (batchmode)
	    return -1;
	getstring(fname, sizeof(fname) - 4, (!0));
	if (*fname == '\0')
	    return -1;
    } else {
	strcpy(fname, keyfile);
    }
    default_extension(fname, PGP_EXTENSION);
    if (transflag) {
	strcpy(transname, fname);
	strcpy(transfile, fname);
	force_extension(transfile, ASC_EXTENSION);
	tempf = tempfile(4 | 1);
	strcpy(fname, tempf);
    }
    if (file_exists(transflag ? transfile : fname)) {
	if (!transflag && !whole_ring) {
	    status = getpublickey(1, fname, ((void *) 0), ((void *) 0), keyID, timestamp, userid, n, e);
	    if (status >= 0 || status == -4 || status == -6) {
		fclose(f);
		fprintf(pgpout, LANG("Key ID %s is already included in key ring '%s'.\n"), keyIDstring(keyID), fname);
		return -1;
	    }
	}
	if (whole_ring || transflag || status < -1) {
	    if (!is_tempfile(fname) && !force_flag) {
		fprintf(pgpout, LANG("\n\007Output file '%s' already exists.  Overwrite (y/N)? "), transflag ? transfile : fname);
		if (!getyesno('n')) {
		    fclose(f);
		    return -1;
		}
	    }
	} else {
	    append = (!0);
	}
    }
    if (append)
	g = fopen(fname, "r+");
    else
	g = fopen(fname, "w");
    if (g == ((void *) 0)) {
	if (append)
	    fprintf(pgpout, LANG("\n\007Can't open key ring file '%s'\n"), ringfile);
	else
	    fprintf(pgpout, LANG("\n\007Unable to create key file '%s'.\n"), fname);
	fclose(f);
	return -1;
    }
    if (append)
	fseek(g, 0L, 2);
    do {
	if (whole_ring && read_trust(f, &keyctrl) == 0 && (keyctrl & 0x20)) {
	    do {
		fp = ftell(f);
		status = nextkeypacket(f, &ctb);
		packetlength = (int) (ftell(f) - fp);
	    } while (!is_key_ctb(ctb) && status >= 0);
	    continue;
	}
	if (copyfilepos(f, g, (long) packetlength, fp) < 0) {
	    status = -2;
	    break;
	}
	for (;;) {
	    fp = ftell(f);
	    status = nextkeypacket(f, &ctb);
	    packetlength = (int) (ftell(f) - fp);
	    if (status < 0 || is_key_ctb(ctb))
		break;
	    if (ctb == (0x80 + (4 * 13) + 0) || (((ctb) & 0x7c) == (4 * 2)))
		if (copyfilepos(f, g, (long) packetlength, fp) < 0) {
		    status = -2;
		    break;
		}
	}
    } while (whole_ring && status >= 0);
    fclose(f);
    if (status < -1 || write_error(g)) {
	fclose(g);
	return -1;
    }
    fclose(g);
    if (transflag) {
	do {
	    char *t;
	    force_extension(transfile, ASC_EXTENSION);
	    if (!file_exists(transfile))
		break;
	    t = ck_dup_output(transfile, (!0), (!0));
	    if (t == ((void *) 0))
		user_error();
	    strcpy(transfile, t);
	} while ((!0));
	status = armor_file(fname, transfile, transname, ((void *) 0), !whole_ring);
	rmtemp(tempf);
	if (status)
	    return -1;
    }
    fprintf(pgpout, LANG("\nKey extracted to file '%s'.\n"), transflag ? transfile : fname);
    return 0;
}

static int merge_key_to_ringfile(char *keyfile, char *ringfile, long fp, int packetlength, long keylen)
{
    FILE *f, *g, *h;
    char *tempf;
    int rc;
    setoutdir(ringfile);
    tempf = tempfile(1);
    if ((f = fopen(ringfile, "r")) == ((void *) 0))
	return -1;
    if ((g = fopen(tempf, "w")) == ((void *) 0)) {
	fclose(f);
	return -1;
    }
    if ((h = fopen(keyfile, "r")) == ((void *) 0)) {
	fclose(f);
	fclose(g);
	return -1;
    }
    copyfile(f, g, fp);
    copyfile(h, g, keylen);
    copyfilepos(f, g, -1L, fp + packetlength);
    fclose(f);
    rc = write_error(g);
    fclose(g);
    fclose(h);
    if (!rc)
	savetempbak(tempf, ringfile);
    return rc ? -1 : 0;
}

static int insert_userid(char *keyfile, byte * userid, long fpos)
{
    char *tmpf;
    FILE *f, *g;
    tmpf = tempfile(4);
    if ((f = fopen(keyfile, "r")) == ((void *) 0))
	return -1;
    if ((g = fopen(tmpf, "w")) == ((void *) 0)) {
	fclose(f);
	return -1;
    }
    copyfile(f, g, fpos);
    _IO_putc((0x80 + (4 * 13) + 0), g);
    fwrite(userid, 1, userid[0] + 1, g);
    write_trust(g, 0x03);
    copyfile(f, g, -1L);
    fclose(f);
    if (write_error(g)) {
	fclose(g);
	return -1;
    }
    fclose(g);
    return savetempbak(tmpf, keyfile);
}

int dokeyedit(char *mcguffin, char *ringfile)
{
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)], d[((2048 + (2 * 16)) / 16)], p[((2048 + (2 * 16)) / 16)], q[((2048 + (2 * 16)) / 16)], u[((2048 + (2 * 16)) / 16)];
    char *fname, secring[256];
    FILE *f;
    byte userid[256];
    byte userid1[256];
    word32 timestamp;
    byte keyID[8];
    boolean hidekey;
    boolean changed = 0, changeID = 0;
    byte ctb;
    int status;
    long fpp, fps, fpu, trust_pos, keylen;
    int pplength = 0, pslength = 0;
    byte ideakey[16];
    byte keyctrl;
    struct IdeaCfbContext cfb;
    if (!ringfile || strlen(ringfile) == 0 || !mcguffin || strlen(mcguffin) == 0)
	return -1;
    if (!file_exists(ringfile))
	force_extension(ringfile, PGP_EXTENSION);
    if (!strcmp(file_tail(ringfile), "secring.pgp") || !strcmp(file_tail(ringfile), file_tail(globalSecringName))) {
	fprintf(pgpout, LANG("\nThis operation may not be performed on a secret keyring.\nDefaulting to public keyring."));
	strcpy(ringfile, globalPubringName);
    }
    strcpy((char *) userid, mcguffin);
    fprintf(pgpout, LANG("\nEditing userid \"%s\" in key ring: '%s'.\n"), (char *) userid, ringfile);
    if (!file_exists(ringfile)) {
	fprintf(pgpout, LANG("\nCan't open public key ring file '%s'\n"), ringfile);
	return -1;
    }
    status = getpublickey(1 | 2, ringfile, &fpp, &pplength, ((void *) 0), (byte *) & timestamp, userid, n, e);
    if (status < 0) {
	fprintf(pgpout, LANG("\n\007Key not found in key ring '%s'.\n"), ringfile);
	return -1;
    }
    if ((f = fopen(ringfile, "r+")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open key ring file '%s'\n"), ringfile);
	return -1;
    }
    if (fread(&ctb, 1, 1, f) != 1 || !(((ctb) & 0x7c) == (4 * 6))) {
	fprintf(pgpout, LANG("\n\007File '%s' is not a public keyring.\n"), ringfile);
	fclose(f);
	return -1;
    }
    fseek(f, fpp, 0);
    if (is_compromised(f)) {
	fprintf(pgpout, LANG("\n\007This key has been revoked by its owner.\n"));
	fclose(f);
	return -1;
    }
    trust_pos = fpp + pplength;
    fseek(f, trust_pos, 0);
    if (read_trust(f, &keyctrl) < 0)
	trust_pos = -1;
    extract_keyID(keyID, n);
    strcpy(secring, globalSecringName);
    if (!file_exists(secring)) {
	fprintf(pgpout, LANG("\nCan't open secret key ring file '%s'\n"), secring);
	fclose(f);
	return -1;
    }
    (void) getpublickey(1 | 32, secring, &fps, &pslength, keyID, (byte *) & timestamp, userid1, n, e);
    status = getsecretkey(1, secring, keyID, (byte *) & timestamp, ideakey, &hidekey, userid1, n, e, d, p, q, u);
    if (status < 0) {
	int i;
	fprintf(pgpout, LANG("\nNo secret key available.  Editing public key trust parameter.\n"));
	if (trust_pos < 0) {
	    fprintf(pgpout, LANG("\n\007File '%s' is not a public keyring.\n"), ringfile);
	    fclose(f);
	    return -1;
	}
	show_key(f, fpp, (1 | 2));
	init_trust_lst();
	fprintf(pgpout, LANG("Current trust for this key's owner is: %s\n"), trust_lst[keyctrl & 0x07]);
	PascalToC((char *) userid);
	i = ask_owntrust((char *) userid, keyctrl);
	if (i == (keyctrl & 0x07)) {
	    fclose(f);
	    return 0;
	}
	if (i < 0 || i > 0x06) {
	    fclose(f);
	    return -1;
	}
	keyctrl = (keyctrl & ~0x07) | i;
	fseek(f, trust_pos, 0);
	write_trust(f, keyctrl);
	fclose(f);
	fprintf(pgpout, LANG("Public key ring updated.\n"));
	return 0;
    }
    if (trust_pos > 0 && (keyctrl & (0x80 | 0x07)) != (0x07 | 0x80)) {
	fprintf(pgpout, LANG("\nUse this key as an ultimately-trusted introducer (y/N)? "), userid);
	if (getyesno('n')) {
	    fseek(f, trust_pos, 0);
	    keyctrl = 0x07 | 0x80;
	    write_trust(f, keyctrl);
	}
    }
    PascalToC((char *) userid);
    fprintf(pgpout, LANG("\nCurrent user ID: %s"), (char *) userid);
    CToPascal((char *) userid);
    fprintf(pgpout, LANG("\nDo you want to add a new user ID (y/N)? "));
    if (getyesno('n')) {
	fprintf(pgpout, LANG("\nEnter the new user ID: "));
	getstring((char *) userid, 255, (!0));
	if (userid[0] == '\0') {
	    fclose(f);
	    return -1;
	};
	fprintf(pgpout, LANG("\nMake this user ID the primary user ID for this key (y/N)? "));
	if (!getyesno('n')) {
	    int pktlen;
	    long fpuser;
	    strcpy((char *) userid1, mcguffin);
	    if (getpubuserid(ringfile, fpp, userid1, &fpuser, &pktlen, 0) < 0) {
		fclose(f);
		return -1;
	    }
	    fseek(f, fpuser, 0);
	} else {
	    fseek(f, fpp, 0);
	}
	nextkeypacket(f, &ctb);
	do {
	    fpu = ftell(f);
	    if (nextkeypacket(f, &ctb) < 0)
		break;
	} while (ctb != (0x80 + (4 * 13) + 0) && !is_key_ctb(ctb));
	CToPascal((char *) userid);
	changeID = (!0);
	changed = (!0);
    }
    fclose(f);
    fprintf(pgpout, LANG("\nDo you want to change your pass phrase (y/N)? "));
    if (getyesno('n')) {
	hidekey = (GetHashedPassPhrase((char *) ideakey, 2) > 0);
	changed = (!0);
    }
    if (!changed) {
	fprintf(pgpout, LANG("(No changes will be made.)\n"));
	if (hidekey)
	    memset((void *) &(ideakey), 0, sizeof(ideakey));
	goto done;
    }
    if (hidekey) {
	ideaCfbInit(&cfb, ideakey);
	memset((void *) &(ideakey), 0, sizeof(ideakey));
    }
    fname = tempfile(4 | 1);
    writekeyfile(fname, hidekey ? &cfb : 0, timestamp, userid, n, e, d, p, q, u);
    if (hidekey)
	ideaCfbDestroy(&cfb);
    if (changeID) {
	keylen = -1;
    } else {
	f = fopen(fname, "r");
	if (f == ((void *) 0))
	    goto err;
	nextkeypacket(f, &ctb);
	keylen = ftell(f);
	fclose(f);
    }
    if (merge_key_to_ringfile(fname, secring, fps, pslength, keylen) < 0) {
	fprintf(pgpout, LANG("\n\007Unable to update secret key ring.\n"));
	goto err;
    }
    fprintf(pgpout, LANG("\nSecret key ring updated...\n"));
    if (changeID) {
	if (insert_userid(ringfile, userid, fpu) < 0) {
	    fprintf(pgpout, LANG("\n\007Unable to update public key ring.\n"));
	    goto err;
	}
	if (sign_new_userids) {
	    PascalToC((char *) userid);
	    strcpy((char *) userid1, (char *) userid);
	    if (do_sign(ringfile, fpp, pplength, userid, keyID, (char *) userid1, (!0)) < 0)
		return -1;
	}
	fprintf(pgpout, LANG("Public key ring updated.\n"));
    } else {
	fprintf(pgpout, LANG("(No need to update public key ring)\n"));
    }
    rmtemp(fname);
  done:mp_init(d, 0);
    mp_init(p, 0);
    mp_init(q, 0);
    mp_init(u, 0);
    mp_init(e, 0);
    mp_init(n, 0);
    return 0;
  err:mp_init(d, 0);
    mp_init(p, 0);
    mp_init(q, 0);
    mp_init(u, 0);
    mp_init(e, 0);
    mp_init(n, 0);
    rmtemp(fname);
    return -1;
}

int disable_key(char *keyguffin, char *keyfile)
{
    FILE *f;
    byte keyctrl;
    byte keyID[8];
    byte userid[256];
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    long fp;
    int pktlen;
    strcpy((char *) userid, keyguffin);
    if (getpublickey(2 | 8, keyfile, &fp, &pktlen, ((void *) 0), ((void *) 0), userid, n, e) < 0)
	return -1;
    extract_keyID(keyID, n);
    if (getsecretkey(1, ((void *) 0), keyID, ((void *) 0), ((void *) 0), ((void *) 0), userid, n, e, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0)) >= 0) {
	PascalToC((char *) userid);
	fprintf(pgpout, LANG("\nDo you want to permanently revoke your public key\nby issuing a secret key compromise certificate\nfor \"%s\" (y/N)? "), (char *) userid);
	if (getyesno('n'))
	    return compromise(keyID, keyfile);
    }
    if ((f = fopen(keyfile, "r+")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open key ring file '%s'\n"), keyfile);
	return -1;
    }
    fseek(f, fp + pktlen, 0);
    if (read_trust(f, &keyctrl) < 0) {
	fprintf(pgpout, LANG("\n\007File '%s' is not a public keyring.\n"), keyfile);
	fprintf(pgpout, LANG("You can only disable keys on your public keyring.\n"));
	fclose(f);
	return -1;
    }
    if (keyctrl & 0x20) {
	fprintf(pgpout, LANG("\nKey is already disabled.\nDo you want to enable this key again (y/N)? "));
	keyctrl &= ~0x20;
    } else {
	fprintf(pgpout, LANG("\nDisable this key (y/N)? "));
	keyctrl |= 0x20;
    }
    if (!getyesno('n')) {
	fclose(f);
	return -1;
    }
    write_trust_pos(f, keyctrl, fp + pktlen);
    fclose(f);
    return 0;
}

int dokeygen(char *numstr, char *numstr2, char *username)
{
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    unit d[((2048 + (2 * 16)) / 16)], p[((2048 + (2 * 16)) / 16)];
    unit q[((2048 + (2 * 16)) / 16)], u[((2048 + (2 * 16)) / 16)];
    char *fname;
    word16 iv[4];
    byte userid[256];
    short keybits, ebits;
    word32 tstamp;
    boolean hidekey;
    boolean cryptrandflag;
    byte ideakey[16];
    struct IdeaCfbContext cfb;
    struct hashedpw *hpw;
    byte keyID[8];
    boolean keygen_OK;
    if (!numstr || strlen(numstr) == 0) {
	fputs("\n", pgpout);
	fputs(LANG("Pick your RSA key size:\n    1)   512 bits- Low commercial grade, fast but less secure\n    2)   768 bits- High commercial grade, medium speed, good security\n    3)  1024 bits- \"Military\" grade, slow, highest security\nChoose 1, 2, or 3, or enter desired number of bits: "), pgpout);
	numstr = (char *) userid;
	getstring(numstr, 5, (!0));
    }
    keybits = 0;
    while ((*numstr >= '0') && (*numstr <= '9'))
	keybits = keybits * 10 + (*numstr++ - '0');
    if (keybits == 0)
	return -1;
    if (keybits == 1)
	keybits = 512;
    if (keybits == 2)
	keybits = 768;
    if (keybits == 3)
	keybits = 1024;
    if (keybits < 384)
	keybits = 384;
    if (keybits > 2048)
	keybits = 2048;
    ebits = 0;
    while ((*numstr2 >= '0') && (*numstr2 <= '9'))
	ebits = ebits * 10 + (*numstr2++ - '0');
    fprintf(pgpout, "\n");
    fprintf(pgpout, LANG("Generating an RSA key with a %d-bit modulus.\n"), keybits);
    if (username == ((void *) 0) || *username == '\0') {
	fputs(LANG("\nYou need a user ID for your public key.  The desired form for this\nuser ID is your name, followed by your E-mail address enclosed in\n<angle brackets>, if you have an E-mail address.\nFor example:  John Q. Smith <12345.6789@compuserve.com>\nEnter a user ID for your public key: \n"), pgpout);
	getstring((char *) userid, 255, (!0));
	if (userid[0] == '\0')
	    return -1;
    } else {
	memcpy(userid, username, 255);
	fprintf(pgpout, LANG("Generating RSA key-pair with UserID \"%s\".\n"), userid);
    };
    CToPascal((char *) userid);
    fputs(LANG("\nYou need a pass phrase to protect your RSA secret key.\nYour pass phrase can be any sentence or phrase and may have many\nwords, spaces, punctuation, or any other printable characters.\n"), pgpout);
    hidekey = (GetHashedPassPhrase((char *) ideakey, 2) > 0);
    if (hidekey) {
	hpw = (struct hashedpw *) malloc(sizeof(struct hashedpw));
	if (hpw) {
	    memcpy(hpw->hash, ideakey, sizeof(hpw->hash));
	    hpw->next = keypasswds;
	    keypasswds = hpw;
	}
	ideaCfbInit(&cfb, ideakey);
	trueRandAccumLater(64);
    }
    cryptrandflag = (cryptRandOpen((struct IdeaCfbContext *) 0) < 0);
    if (cryptrandflag)
	trueRandAccumLater(192);
    fputs(LANG("\nNote that key generation is a lengthy process.\n"), pgpout);
    if (rsa_keygen(n, e, d, p, q, u, keybits, ebits) < 0) {
	fputs(LANG("\n\007Keygen failed!\n"), pgpout);
	return -1;
    }
    _IO_putc('\n', pgpout);
    if (verbose) {
	fprintf(pgpout, LANG("Key ID %s\n"), key2IDstring(n));
	mp_display(" modulus n = ", n);
	mp_display("exponent e = ", e);
	fputs(LANG("Display secret components (y/N)?"), pgpout);
	if (getyesno('n')) {
	    mp_display("exponent d = ", d);
	    mp_display("   prime p = ", p);
	    mp_display("   prime q = ", q);
	    mp_display(" inverse u = ", u);
	}
    }
    tstamp = get_timestamp(((void *) 0));
    fputc('\007', pgpout);
    fflush(pgpout);
    fname = tempfile(4 | 1);
    writekeyfile(fname, hidekey ? &cfb : 0, tstamp, userid, n, e, d, p, q, u);
    mp_init(d, 0);
    mp_init(p, 0);
    mp_init(q, 0);
    mp_init(u, 0);
    if (hidekey)
	ideaCfbDestroy(&cfb);
    if (file_exists(globalSecringName)) {
	if (!(keygen_OK = (merge_key_to_ringfile(fname, globalSecringName, 0L, 0, -1L) == 0)))
	    fprintf(pgpout, LANG("\n\007Unable to update secret key ring.\n"));
	rmtemp(fname);
    } else {
	keygen_OK = (savetemp(fname, globalSecringName) != ((void *) 0));
    } if (keygen_OK) {
	fname = tempfile(4 | 1);
	writekeyfile(fname, ((void *) 0), tstamp, userid, n, e, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0));
	if (file_exists(globalPubringName)) {
	    if (!(keygen_OK = (merge_key_to_ringfile(fname, globalPubringName, 0L, 0, -1L) == 0)))
		fprintf(pgpout, LANG("\n\007Unable to update public key ring.\n"));
	    rmtemp(fname);
	} else {
	    keygen_OK = (savetemp(fname, globalPubringName) != ((void *) 0));
    }}
    if (keygen_OK && sign_new_userids) {
	long fp;
	int pktlen;
	word32 tstamp;
	byte *timestamp = (byte *) & tstamp;
	byte sigguffin[256];
	PascalToC((char *) userid);
	extract_keyID(keyID, n);
	getpublickey(1, globalPubringName, &fp, &pktlen, ((void *) 0), timestamp, userid, n, e);
	PascalToC((char *) userid);
	strcpy((char *) sigguffin, (char *) userid);
	do_sign(globalPubringName, fp, pktlen, userid, keyID, (char *) sigguffin, (!0));
    }
    mp_init(e, 0);
    mp_init(n, 0);
    if (keygen_OK)
	fputs(LANG("\007Key generation completed.\n"), pgpout);
    else
	return -1;
    if (cryptrandflag) {
	trueRandConsume(192);
	cryptRandInit((struct IdeaCfbContext *) 0);
    }
    return 0;
}

void kv_title(FILE * fo)
{
    fprintf(fo, LANG("Type Bits/KeyID    Date       User ID\n"));
    return;
}

int kvformat_keypacket(FILE * f, FILE * pgpout, boolean one_key, char *mcguffin, char *ringfile, boolean show_signatures, boolean show_hashes, int *keycounter)
{
    byte ctb, keyctb = 0;
    int status;
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    byte keyID[8];
    byte sigkeyID[8];
    byte userid[256];
    char *siguserid;
    word32 tstamp;
    byte *timestamp = (byte *) & tstamp;
    int firstuser = 0;
    int compromised = 0;
    boolean shownKeyHash = 0;
    boolean invalid_key = 0;
    boolean match = 0;
    boolean disabled = 0;
    boolean first_key = 0;
    for (;;) {
	status = readkeypacket(f, 0, &ctb, timestamp, (char *) userid, n, e, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), sigkeyID, ((void *) 0));
	if (status == -1) {
	    status = 0;
	    break;
	}
	if (status == -4 || status == -6) {
	    memset(sigkeyID, 0, 8);
	    tstamp = 0;
	} else if (status < 0) {
	    fprintf(pgpout, LANG("\n\007Could not read key from file '%s'.\n"), ringfile);
	    break;
	}
	if (is_key_ctb(ctb)) {
	    byte keyctrl;
	    firstuser = 1;
	    keyctb = ctb;
	    compromised = is_compromised(f);
	    shownKeyHash = 0;
	    if (status < 0) {
		invalid_key = (!0);
		memset(keyID, 0, 8);
	    } else {
		invalid_key = 0;
		extract_keyID(keyID, n);
		if (read_trust(f, &keyctrl) == 0 && (keyctrl & 0x20))
		    disabled = (!0);
		else
		    disabled = 0;
	    }
	}
	if (ctb != (0x80 + (4 * 13) + 0) && !(((ctb) & 0x7c) == (4 * 2)))
	    continue;
	if (ctb == (0x80 + (4 * 13) + 0)) {
	    PascalToC((char *) userid);
	    match = userid_match((char *) userid, mcguffin, n);
	}
	if (match) {
	    if (ctb == (0x80 + (4 * 13) + 0)) {
		if (firstuser) {
		    (*keycounter)++;
		    if ((((keyctb) & 0x7c) == (4 * 6)))
			fprintf(pgpout, LANG("pub"));
		    else if ((((keyctb) & 0x7c) == (4 * 5)))
			fprintf(pgpout, LANG("sec"));
		    else
			fprintf(pgpout, "???");
		    if (invalid_key)
			fprintf(pgpout, "? ");
		    else if (disabled)
			fprintf(pgpout, "- ");
		    else
			fprintf(pgpout, "  ");
		    fprintf(pgpout, "%4d/%s %s ", countbits(n), keyIDstring(keyID), cdate(&tstamp));
		} else {
		    fprintf(pgpout, "     %s                 ", blankkeyID);
		}
		if (compromised && firstuser) {
		    fprintf(pgpout, LANG("*** KEY REVOKED ***\n"));
		    fprintf(pgpout, "     %s                 ", blankkeyID);
		}
		firstuser = 0;
		fprintf(pgpout, "%s\n", (char *) userid);
		if (show_hashes && !shownKeyHash) {
		    showKeyHash(n, e);
		    shownKeyHash = (!0);
		}
	    } else if (show_signatures && !(firstuser && compromised)) {
		fprintf(pgpout, LANG("sig"));
		fprintf(pgpout, "%c      ", status < 0 ? '?' : ' ');
		showkeyID(sigkeyID, pgpout);
		fprintf(pgpout, "             ");
		if ((siguserid = user_from_keyID(sigkeyID)) == ((void *) 0))
		    fprintf(pgpout, LANG("(Unknown signator, can't be checked)\n"));
		else
		    fprintf(pgpout, "%s\n", siguserid);
	    }
	}
    }
    return (status);
}
