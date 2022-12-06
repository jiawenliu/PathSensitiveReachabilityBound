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
typedef __clock_t clock_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
struct timespec {
    __time_t tv_sec;
    long int tv_nsec;
};
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
typedef __pid_t pid_t;
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
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
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
extern char INT_C(char c);
extern char EXT_C(char c);
extern int CONVERSION;
extern void init_charset(void);
extern int to_upper(int c);
extern int to_lower(int c);
extern char *LANG(char *s);
extern char language[];
extern void __assert_fail(__const char *__assertion, __const char *__file, unsigned int __line, __const char *__function) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void __assert_perror_fail(int __errnum, __const char *__file, unsigned int __line, __const char *__function) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void __assert(const char *__assertion, const char *__file, int __line) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
void free_newkeys(struct newkey *nkeys)
{
    struct newkey *nkey;
    while (nkeys) {
	nkey = nkeys;
	nkeys = nkeys->next;
	free(nkey);
    }
}

int ismember_newkeys(byte const keyid[8], struct newkey const *nkeys)
{
    while (nkeys) {
	if (memcmp(keyid, nkeys->keyID, 8) == 0)
	    return 1;
	nkeys = nkeys->next;
    }
    return 0;
}

struct userid;
struct signature;
struct pubkey {
    struct pubkey *pk_next;
    struct pubkey *pk_hash;
    struct userid *pk_userids;
    struct signature *pk_signed;
    byte pk_keyid[8];
    byte pk_owntrust;
    byte pk_depth;
};
struct userid {
    struct userid *uid_next;
    struct pubkey *uid_key;
    struct signature *uid_signatures;
    char *uid_userid;
    byte uid_legit;
};
struct signature {
    struct signature *sig_next;
    struct userid *sig_uid;
    struct pubkey *sig_from;
    struct signature *sig_nextfrom;
    byte sig_trust;
};
int maint_list(char *ringfile);
void init_trust_lst(void);
long lookup_by_keyID(FILE * f, byte * srch_keyID);
void show_userid(FILE * f, byte * keyID);
static int maintenance(char *ringfile, struct newkey const *nkeys);
static int maint_read_data(char *ringfile, struct newkey const *nkeys);
static int maint_trace_chain(void);
static int trace_sig_chain(struct pubkey *pk, int depth);
static int maint_final(char *ringfile);
static struct pubkey *getpubkey(byte * keyID);
static void setup_trust(void);
static int check_secretkey(FILE * f, long keypos, byte keyctrl);
static void maint_init_mem(void);
static void maint_release_mem(void);
static void *allocn(int size);
static void *allocbuf(int size);
static void freebufpool(void);
static void compute_legit(struct userid *id);
static int trust_tbl[8];
static int marginal_min;
static int complete_min;
int marg_min = 2;
int compl_min = 1;
char trust_lst[8][16] = { "undefined", "unknown", "untrusted", "<3>", "<4>", "marginal", "complete", "ultimate", };
char legit_lst[4][16] = { "undefined", "untrusted", "marginal", "complete" };

static int trustlst_len = 9;
static int legitlst_len = 9;
char floppyring[256] = "";
int max_cert_depth = 4;
static boolean check_only = 0;
static boolean mverbose;
static FILE *sec_fp;
static FILE *floppy_fp = ((void *) 0);
static int undefined_trust;
int maint_update(char *ringfile, struct newkey const *nkeys)
{
    check_only = mverbose = 0;
    return maintenance(ringfile, nkeys);
}

int maint_check(char *ringfile, int options)
{
    int status;
    char *fixfile;
    mverbose = ((options & 0x02) != 0);
    if (moreflag)
	open_more();
    if (*floppyring != '\0' && (floppy_fp = fopen(floppyring, "r")) == ((void *) 0))
	fprintf(pgpout, LANG("\nCan't open backup key ring file '%s'\n"), floppyring);
    check_only = (!0);
    status = maintenance(ringfile, ((void *) 0));
    if (floppy_fp) {
	fclose(floppy_fp);
	floppy_fp = ((void *) 0);
    }
    if (status <= 0) {
	if (status == 0)
	    maint_list(ringfile);
	close_more();
	return status;
    }
    if (undefined_trust) {
	if (options & 0x01) {
	    maint_list(ringfile);
	}
	fprintf(pgpout, LANG("\n%d \"trust parameter(s)\" need to be changed.\n"), undefined_trust);
	if (options & 0x01) {
	    close_more();
	    return status;
	}
	fprintf(pgpout, LANG("Continue with '%s' (Y/n)? "), ringfile);
	if (!getyesno('y')) {
	    close_more();
	    return status;
	}
    }
    fixfile = tempfile(0);
    if (copyfiles_by_name(ringfile, fixfile) < 0) {
	close_more();
	return -1;
    }
    check_only = mverbose = 0;
    if ((status = maintenance(fixfile, ((void *) 0))) >= 0) {
	maint_list(fixfile);
	fprintf(pgpout, LANG("\n%d \"trust parameter(s)\" changed.\n"), status);
    }
    close_more();
    if (status > 0 && !(options & 0x01)) {
	fprintf(pgpout, LANG("Update public keyring '%s' (Y/n)? "), ringfile);
	if (getyesno('y'))
	    return savetempbak(fixfile, ringfile);
    }
    rmtemp(fixfile);
    return status;
}

static int maintenance(char *ringfile, struct newkey const *nkeys)
{
    int status;
    undefined_trust = 0;
    if (max_cert_depth > 8)
	max_cert_depth = 8;
    if ((sec_fp = fopen(globalSecringName, "r")) == ((void *) 0))
	fprintf(pgpout, LANG("\nCan't open secret key ring file '%s'\n"), globalSecringName);
    setkrent(ringfile);
    setup_trust();
    maint_init_mem();
    if (mverbose || verbose)
	fprintf(pgpout, LANG("\nPass 1: Looking for the \"ultimately-trusted\" keys...\n"));
    status = maint_read_data(ringfile, nkeys);
    if (sec_fp) {
	fclose(sec_fp);
	sec_fp = ((void *) 0);
    }
    if (status < 0)
	goto failed;
    if (mverbose || verbose)
	fprintf(pgpout, LANG("\nPass 2: Tracing signature chains...\n"));
    if ((status = maint_trace_chain()) < 0)
	goto failed;
    if (verbose)
	fprintf(pgpout, "\nPass 3: %s keyring...\n", (check_only ? "Checking with" : "Updating"));
    if ((status = maint_final(ringfile)) < 0)
	goto failed;
    endkrent();
    maint_release_mem();
    return status + undefined_trust;
  failed:if (verbose)
	fprintf(pgpout, "maintenance pass: error exit = %d\n", status);
    endkrent();
    maint_release_mem();
    return status;
}

static struct pubkey *pklist, **pkhash = ((void *) 0);
static struct pubkey *getpubkey(byte * keyID)
{
    struct pubkey *pk;
    for (pk = pkhash[(*(byte *) (keyID) & (256 - 1))]; pk; pk = pk->pk_hash)
	if (memcmp(pk->pk_keyid, keyID, 8) == 0)
	    return pk;
    pk = allocn(sizeof(struct pubkey));
    memset(pk, 0, sizeof(struct pubkey));
    memcpy(pk->pk_keyid, keyID, 8);
    pk->pk_hash = pkhash[(*(byte *) (keyID) & (256 - 1))];
    pkhash[(*(byte *) (keyID) & (256 - 1))] = pk;
    return pk;
}

static int maint_read_data(char *ringfile, struct newkey const *nkeys)
{
    FILE *f;
    int status;
    char userid[256];
    byte keyID[8];
    byte sigkeyID[8];
    byte ctb;
    byte keyctrl;
    boolean buckstop = 0, show_user = 0;
    int buckstopcount = 0;
    long keypos = 0;
    int skip = 0;
    struct pubkey *pk = ((void *) 0);
    struct userid *id = ((void *) 0);
    struct signature *sig = ((void *) 0);
    if ((f = fopen(ringfile, "r")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open key ring file '%s'\n"), ringfile);
	return -1;
    }
    while ((status = readkpacket(f, &ctb, userid, keyID, sigkeyID)) != -1) {
	if (status == -3 || status == -2) {
	    fclose(f);
	    return status;
	}
	if (status < 0 || (((ctb) & 0x7c) == (4 * 5))) {
	    skip = 1;
	    continue;
	}
	if (skip) {
	    if ((((ctb) & 0x7c) == (4 * 6)))
		skip = 0;
	    else
		continue;
	}
	if ((((ctb) & 0x7c) == (4 * 14)) || ctb == (0x80 + (4 * 12) + 0))
	    continue;
	if (pk && (((ctb) & 0x7c) == (4 * 2)) && !pk->pk_userids) {
	    pk->pk_owntrust = 0x02;
	    continue;
	}
	if (read_trust(f, &keyctrl) < 0) {
	    fclose(f);
	    return -7;
	}
	switch (((ctb & 0x7c) >> 2)) {
	case 6:
	    if (pk)
		pk = pk->pk_next = getpubkey(keyID);
	    else
		pk = pklist = getpubkey(keyID);
	    if (pk->pk_next) {
		fprintf(pgpout, LANG("Keyring contains duplicate key: %s\n"), keyIDstring(keyID));
		fclose(f);
		return -1;
	    }
	    if (keyctrl & 0x80 || ismember_newkeys(keyID, nkeys)) {
		if (check_secretkey(f, keypos, keyctrl) == 0) {
		    ++buckstopcount;
		    keyctrl |= 0x80;
		    (*(&keyctrl) = (*(&keyctrl) & ~7) | (0x07));
		    buckstop = (!0);
		    if (mverbose)
			fprintf(pgpout, "* %s", keyIDstring(keyID));
		} else {
		    keyctrl &= ~0x80;
		    if (((keyctrl) & 7) == 0x07)
			keyctrl = 0x06;
		    if (mverbose)
			fprintf(pgpout, ". %s", keyIDstring(keyID));
		}
		show_user = mverbose;
	    } else {
		buckstop = 0;
		show_user = 0;
	    }
	    pk->pk_owntrust = keyctrl;
	    pk->pk_userids = id = ((void *) 0);
	    break;
	case 13:
	    if (!pk)
		break;
	    if (show_user) {
		if (pk->pk_userids)
		    fprintf(pgpout, "        ");
		fprintf(pgpout, "  %s\n", userid);
	    }
	    if (id)
		id = id->uid_next = allocn(sizeof(struct userid));
	    else
		id = pk->pk_userids = allocn(sizeof(struct userid));
	    if (mverbose)
		id->uid_userid = store_str(userid);
	    keyctrl &= ~0x03;
	    if (buckstop)
		keyctrl |= 0x03;
	    else
		keyctrl |= 0x00;
	    id->uid_next = ((void *) 0);
	    id->uid_key = pk;
	    id->uid_legit = keyctrl;
	    id->uid_signatures = sig = ((void *) 0);
	    break;
	case 2:
	    if (!pk || !id)
		break;
	    if (sig)
		sig = sig->sig_next = allocn(sizeof(struct signature));
	    else
		sig = id->uid_signatures = allocn(sizeof(struct signature));
	    sig->sig_next = ((void *) 0);
	    sig->sig_uid = id;
	    sig->sig_from = getpubkey(sigkeyID);
	    sig->sig_nextfrom = sig->sig_from->pk_signed;
	    sig->sig_from->pk_signed = sig;
	    sig->sig_trust = keyctrl & 0x40;
	    break;
	}
	keypos = ftell(f);
    }
    if (buckstopcount == 0 && mverbose)
	fprintf(pgpout, LANG("No ultimately-trusted keys.\n"));
    fclose(f);
    return 0;
}

static int maint_trace_chain(void)
{
    char *userid;
    struct pubkey *pk;
    for (pk = pklist; pk; pk = pk->pk_next) {
	if (!(pk->pk_owntrust & 0x80))
	    continue;
	if (mverbose)
	    fprintf(pgpout, "* %s\n", pk->pk_userids->uid_userid);
	if (((pk->pk_owntrust) & 7) == 0x00) {
	    userid = user_from_keyID(pk->pk_keyid);
	    (*(&pk->pk_owntrust) = (*(&pk->pk_owntrust) & ~7) | (ask_owntrust(userid, pk->pk_owntrust)));
	}
	trace_sig_chain(pk, 0);
    }
    return 0;
}

static int trace_sig_chain(struct pubkey *pk, int depth)
{
    int d, trust_count = 0;
    int counts[8];
    struct signature *sig, *s;
    struct pubkey *p;
    struct userid *id;
    ((depth <= max_cert_depth) ? (void) (0) : __assert_fail("depth <= max_cert_depth", "keymaint.c", 551, __PRETTY_FUNCTION__));
    if (pk->pk_depth && pk->pk_depth <= depth)
	return 0;
    pk->pk_depth = depth;
    if (((pk->pk_owntrust) & 7) == 0x00)
	for (id = pk->pk_userids; id; id = id->uid_next) {
	    compute_legit(id);
	    if ((id->uid_legit & 0x03) == 0x03) {
		(*(&pk->pk_owntrust) = (*(&pk->pk_owntrust) & ~7) | (ask_owntrust(user_from_keyID(pk->pk_keyid), pk->pk_owntrust)));
		break;
	    }
	}
    if (!pk->pk_signed)
	return 0;
    for (sig = pk->pk_signed; sig; sig = sig->sig_nextfrom) {
	if (sig->sig_trust & 0x40) {
	    (*(&sig->sig_trust) = (*(&sig->sig_trust) & ~7) | (((pk->pk_owntrust) & 7)));
	    sig->sig_trust |= 0x80;
	    if (mverbose)
		fprintf(pgpout, "%*s  > %s\n", 2 * depth, "", sig->sig_uid->uid_userid);
	} else {
	    (*(&sig->sig_trust) = (*(&sig->sig_trust) & ~7) | (0x02));
	    sig->sig_trust &= ~0x80;
	    if (mverbose)
		fprintf(pgpout, "%*s  X %s\n", 2 * depth, "", sig->sig_uid->uid_userid);
	}
	if ((trust_tbl[((sig->sig_trust) & 7)]) == 0)
	    continue;
	p = sig->sig_uid->uid_key;
	if (p->pk_owntrust & 0x80)
	    continue;
	if (p->pk_depth && p->pk_depth <= depth + 1)
	    continue;
	for (d = 0; d < max_cert_depth; ++d)
	    counts[d] = 0;
	for (s = sig->sig_uid->uid_signatures; s; s = s->sig_next) {
	    d = s->sig_from->pk_depth;
	    if (d < max_cert_depth)
		counts[d] += (trust_tbl[((s->sig_trust) & 7)]);
	}
	trust_count = 0;
	for (d = 0; d < max_cert_depth; ++d) {
	    trust_count += counts[d];
	    if (trust_count >= complete_min) {
		trace_sig_chain(p, d + 1);
		break;
	    }
	}
    }
    return 0;
}

static void compute_legit(struct userid *id)
{
    struct signature *s;
    int trust_count, legit;
    if (id->uid_key->pk_owntrust & 0x80)
	legit = 0x03;
    else {
	trust_count = 0;
	for (s = id->uid_signatures; s; s = s->sig_next)
	    trust_count += (trust_tbl[((s->sig_trust) & 7)]);
	if (trust_count == 0)
	    legit = 0x00;
	else if (trust_count < marginal_min)
	    legit = 0x01;
	else if (trust_count < complete_min)
	    legit = 0x02;
	else
	    legit = 0x03;
    }
    id->uid_legit = (id->uid_legit & ~0x03) | legit;
}

static int maint_final(char *ringfile)
{
    int status;
    FILE *f;
    long trust_pos = 0;
    char userid[256];
    byte keyID[8];
    byte sigkeyID[8];
    byte ctb;
    byte kc_orig, kc_new = 0, mask;
    int changed = 0;
    int skip = 0;
    struct pubkey *pk;
    struct userid *id = ((void *) 0);
    struct signature *sig = ((void *) 0);
    if (check_only)
	f = fopen(ringfile, "r");
    else
	f = fopen(ringfile, "r+");
    if (f == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open key ring file '%s'\n"), ringfile);
	return -1;
    }
    pk = pklist;
    while ((status = readkpacket(f, &ctb, userid, keyID, sigkeyID)) != -1) {
	if (status == -3 || status == -2)
	    break;
	if (status < 0 || (((ctb) & 0x7c) == (4 * 5))) {
	    skip = 1;
	    continue;
	}
	if (skip) {
	    if ((((ctb) & 0x7c) == (4 * 6)))
		skip = 0;
	    else
		continue;
	}
	if ((((ctb) & 0x7c) == (4 * 6)) || (((ctb) & 0x7c) == (4 * 2)) || ctb == (0x80 + (4 * 13) + 0)) {
	    trust_pos = ftell(f);
	    if (read_trust(f, &kc_orig) < 0) {
		status = -7;
		if ((((ctb) & 0x7c) == (4 * 2)))
		    continue;
		else
		    break;
	    }
	}
	switch (((ctb & 0x7c) >> 2)) {
	case 6:
	    ((pk && !memcmp(pk->pk_keyid, keyID, 8)) ? (void) (0) : __assert_fail("pk && !memcmp(pk->pk_keyid, keyID, 8)", "keymaint.c", 723, __PRETTY_FUNCTION__));
	    ((!sig && !id) ? (void) (0) : __assert_fail("!sig && !id", "keymaint.c", 724, __PRETTY_FUNCTION__));
	    id = pk->pk_userids;
	    kc_new = pk->pk_owntrust;
	    pk = pk->pk_next;
	    mask = 0x07 | 0x80;
	    break;
	case 13:
	    ((id && !sig) ? (void) (0) : __assert_fail("id && !sig", "keymaint.c", 735, __PRETTY_FUNCTION__));
	    sig = id->uid_signatures;
	    compute_legit(id);
	    kc_new = id->uid_legit;
	    id = id->uid_next;
	    mask = 0x03;
	    break;
	case 2:
	    ((sig) ? (void) (0) : __assert_fail("sig", "keymaint.c", 752, __PRETTY_FUNCTION__));
	    ((!memcmp(sig->sig_from->pk_keyid, sigkeyID, 8)) ? (void) (0) : __assert_fail("!memcmp(sig->sig_from->pk_keyid, sigkeyID, 8)", "keymaint.c", 753, __PRETTY_FUNCTION__));
	    kc_new = sig->sig_trust;
	    sig = sig->sig_next;
	    mask = 0x07 | 0x80;
	    break;
	default:
	    mask = 0;
	}
	if ((kc_new & mask) != (kc_orig & mask)) {
	    if (!check_only)
		write_trust_pos(f, kc_new, trust_pos);
	    ++changed;
	}
    }
    fclose(f);
    if (status < -1)
	return status;
    if (pk || sig || id) {
	fprintf(pgpout, "maint_final: internal error\n");
	return -1;
    }
    return changed;
}

int maint_list(char *ringfile)
{
    int status;
    FILE *f;
    char userid[256];
    byte keyID[8];
    byte sigkeyID[8];
    char *signator;
    char tchar = 0;
    byte ctb, kc;
    int owntrust = 0;
    int usercount = 0;
    if ((f = fopen(ringfile, "r")) == ((void *) 0)) {
	fprintf(pgpout, LANG("\n\007Can't open key ring file '%s'\n"), ringfile);
	return -1;
    }
    init_trust_lst();
    setkrent(ringfile);
    init_userhash();
    fprintf(pgpout, LANG("  KeyID    Trust     Validity  User ID\n"));
    while ((status = readkpacket(f, &ctb, userid, keyID, sigkeyID)) != -1) {
	if (status == -3 || status == -2)
	    break;
	if (status < 0)
	    continue;
	if ((((ctb) & 0x7c) == (4 * 6)) || (((ctb) & 0x7c) == (4 * 2)) || ctb == (0x80 + (4 * 13) + 0)) {
	    if (read_trust(f, &kc) < 0) {
		status = -7;
		if (!(((ctb) & 0x7c) == (4 * 2)))
		    break;
	    }
	}
	switch (((ctb & 0x7c) >> 2)) {
	case 6:
	    tchar = (kc & 0x80 ? '*' : ' ');
	    owntrust = ((kc) & 7);
	    usercount = 0;
	    userid[0] = '\0';
	    break;
	case 13:
	    if (!usercount) {
		fprintf(pgpout, "%c %s ", tchar, keyIDstring(keyID));
		fprintf(pgpout, "%-*s ", trustlst_len, trust_lst[owntrust]);
	    } else
		fprintf(pgpout, "  %s %*s ", blankkeyID, trustlst_len, "");
	    fprintf(pgpout, "%-*s ", legitlst_len, legit_lst[kc & 0x03]);
	    if (usercount)
		_IO_putc(' ', pgpout);
	    ++usercount;
	    fprintf(pgpout, "%s\n", userid);
	    break;
	case 2:
	    if (!usercount) {
		tchar = '#';
		break;
	    }
	    fprintf(pgpout, "%c %s ", (kc & 0x80) ? 'c' : ' ', blankkeyID);
	    fprintf(pgpout, "%-*s ", trustlst_len, trust_lst[((kc) & 7)]);
	    fprintf(pgpout, "%*s  ", legitlst_len, "");
	    if ((signator = user_from_keyID(sigkeyID)) == ((void *) 0))
		fprintf(pgpout, LANG("(KeyID: %s)\n"), keyIDstring(sigkeyID));
	    else
		fprintf(pgpout, "%s\n", signator);
	    break;
	}
    }
    endkrent();
    fclose(f);
    if (status < -1)
	return status;
    return 0;
}

void init_trust_lst(void)
{
    static int initialized = 0;
    int i, len;
    char *s;
    if (initialized)
	return;
    for (i = 0; i < 8; ++i) {
	if (trust_lst[i][0]) {
	    s = LANG(trust_lst[i]);
	    if (s != trust_lst[i])
		strncpy(trust_lst[i], s, sizeof(trust_lst[0]) - 1);
	    len = strlen(s);
	    if (len > trustlst_len)
		trustlst_len = len;
	}
    }
    for (i = 0; i < 4; ++i) {
	s = LANG(legit_lst[i]);
	if (s != legit_lst[i])
	    strncpy(legit_lst[i], s, sizeof(legit_lst[0]) - 1);
	len = strlen(s);
	if (len > legitlst_len)
	    legitlst_len = len;
    }
    initialized = 1;
}

static int check_secretkey(FILE * f, long keypos, byte keyctrl)
{
    int status = -1;
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    unit nsec[((2048 + (2 * 16)) / 16)], esec[((2048 + (2 * 16)) / 16)];
    char userid[256];
    byte keyID[8];
    long savepos, pktlen;
    byte ctb;
    if (sec_fp == ((void *) 0))
	return -1;
    savepos = ftell(f);
    fseek(f, keypos, 0);
    if (readkeypacket(f, 0, &ctb, ((void *) 0), ((void *) 0), n, e, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0)) < 0)
	goto ex;
    extract_keyID(keyID, n);
    do {
	status = readkpacket(f, &ctb, userid, ((void *) 0), ((void *) 0));
	if (status == -1 || status == -3)
	    goto ex;
    } while (ctb != (0x80 + (4 * 13) + 0));
    if (lookup_by_keyID(sec_fp, keyID) < 0) {
	status = 1;
    } else {
	long kpos = ftell(sec_fp);
	if (readkeypacket(sec_fp, 0, &ctb, ((void *) 0), ((void *) 0), nsec, esec, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0)) < 0) {
	    fprintf(pgpout, LANG("\n\007Cannot read from secret keyring.\n"));
	    status = -3;
	    goto ex;
	}
	if (mp_compare(n, nsec) || mp_compare(e, esec)) {
	    fprintf(pgpout, LANG("\n\007WARNING: Public key for user ID: \"%s\"\ndoes not match the corresponding key in the secret keyring.\n"), userid);
	    fprintf(pgpout, LANG("This is a serious condition, indicating possible keyring tampering.\n"));
	    status = -2;
	} else {
	    status = 0;
	}
	if (!(keyctrl & 0x80)) {
	    if (batchmode) {
		status = -1;
	    } else {
		fprintf(pgpout, LANG("\nKey for user ID \"%s\"\nalso appears in the secret key ring."), userid);
		fputs(LANG("\nUse this key as an ultimately-trusted introducer (y/N)? "), pgpout);
		status = getyesno('n') ? 0 : -1;
	    }
	}
	if (status == 0 && floppy_fp) {
	    if (lookup_by_keyID(floppy_fp, keyID) < 0) {
		fprintf(pgpout, LANG("Public key for: \"%s\"\nis not present in the backup keyring '%s'.\n"), userid, floppyring);
	    } else {
		pktlen = ftell(sec_fp) - kpos;
		fseek(sec_fp, kpos, 0);
		while (--pktlen >= 0 && _IO_getc(sec_fp) == _IO_getc(floppy_fp));
		if (pktlen != -1) {
		    fprintf(pgpout, LANG("\n\007WARNING: Secret key for: \"%s\"\ndoes not match the key in the backup keyring '%s'.\n"), userid, floppyring);
		    fprintf(pgpout, LANG("This is a serious condition, indicating possible keyring tampering.\n"));
		    status = -2;
		}
	    }
	}
    }
  ex:fseek(f, savepos, 0);
    return status;
}

static void setup_trust(void)
{
    if (marg_min == 0) {
	trust_tbl[5] = 0;
	trust_tbl[6] = 1;
	complete_min = compl_min;
    } else {
	if (marg_min < compl_min)
	    marg_min = compl_min;
	trust_tbl[5] = compl_min;
	trust_tbl[6] = marg_min;
	complete_min = compl_min * marg_min;
    }
    trust_tbl[7] = complete_min;
    marginal_min = complete_min / 2;
}

int ask_owntrust(char *userid, byte cur_trust)
{
    char buf[8];
    if (check_only || filter_mode || batchmode) {
	++undefined_trust;
	return 0x00;
    }
    fprintf(pgpout, LANG("\nMake a determination in your own mind whether this key actually\nbelongs to the person whom you think it belongs to, based on available\nevidence.  If you think it does, then based on your estimate of\nthat person's integrity and competence in key management, answer\nthe following question:\n"));
    fprintf(pgpout, LANG("\nWould you trust \"%s\"\nto act as an introducer and certify other people's public keys to you?\n(1=I don't know. 2=No. 3=Usually. 4=Yes, always.) ? "), userid);
    fflush(pgpout);
    getstring(buf, sizeof(buf) - 1, (!0));
    switch (buf[0]) {
    case '1':
	return 0x01;
    case '2':
	return 0x02;
    case '3':
	return 0x05;
    case '4':
	return 0x06;
    default:
	return ((cur_trust) & 7);
    }
}

long lookup_by_keyID(FILE * f, byte * srch_keyID)
{
    int status;
    long keypos = 0;
    byte keyID[8];
    byte ctb;
    rewind(f);
    while ((status = readkpacket(f, &ctb, ((void *) 0), keyID, ((void *) 0))) != -1) {
	if (status == -3 || status == -2)
	    break;
	if (status < 0)
	    continue;
	if (is_key_ctb(ctb) && memcmp(keyID, srch_keyID, 8) == 0) {
	    fseek(f, keypos, 0);
	    return keypos;
	}
	keypos = ftell(f);
    }
    return status;
}

void show_userid(FILE * f, byte * keyID)
{
    int status;
    long filepos;
    char userid[256];
    byte ctb;
    filepos = ftell(f);
    if (lookup_by_keyID(f, keyID) >= 0)
	while ((status = readkpacket(f, &ctb, userid, ((void *) 0), ((void *) 0))) != -1 && status != -3)
	    if (ctb == (0x80 + (4 * 13) + 0)) {
		fprintf(pgpout, "%s\n", userid);
		fseek(f, filepos, 0);
		return;
	    }
    fprintf(pgpout, LANG("(KeyID: %s)\n"), keyIDstring(keyID));
    fseek(f, filepos, 0);
}
static char *owntrust_msg[] = { "", "", "This user is untrusted to certify other keys.\n", "", "", "This user is generally trusted to certify other keys.\n", "This user is completely trusted to certify other keys.\n", "This axiomatic key is ultimately trusted to certify other keys.\n", };
static char *keylegit_msg[] = { "This key/userID association is not certified.\n", "This key/userID association is not certified.\n", "This key/userID association is marginally certified.\n", "This key/userID association is fully certified.\n", };
static char *sigtrust_msg[] = { "  Questionable certification from:\n  ", "  Questionable certification from:\n  ", "  Untrusted certification from:\n  ", "", "", "  Generally trusted certification from:\n  ", "  Completely trusted certification from:\n  ", "  Axiomatically trusted certification from:\n  ", };

int show_key(FILE * f, long keypos, int what)
{
    int status, keystatus = -1;
    long filepos;
    char userid[256];
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    byte sigkeyID[8];
    word32 timestamp;
    byte ctb, keyctb = 0, keyctrl;
    int userids = 0;
    int keyids = 0;
    byte savekeyID[8];
    boolean print_trust = 0;
    byte hash[16];
    int precision = global_precision;
    int compromised = 0;
    int disabled = 0;
    filepos = ftell(f);
    fseek(f, keypos, 0);
    while ((status = readkeypacket(f, 0, &ctb, (byte *) & timestamp, userid, n, e, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), sigkeyID, &keyctrl)) != -1) {
	if (status == -2 || status == -3)
	    break;
	if (is_key_ctb(ctb)) {
	    if (keyids)
		break;
	    extract_keyID(savekeyID, n);
	    keyids++;
	    if (what & 4)
		getKeyHash(hash, n, e);
	    keyctb = ctb;
	    keystatus = status;
	} else if (ctb == (0x80 + (4 * 12) + 0)) {
	    if (keystatus >= 0 && !userids)
		if (keyctrl & 0x20)
		    disabled = 1;
	    if (what & 1)
		print_trust = (!0);
	} else if (ctb == (0x80 + (4 * 13) + 0)) {
	    if (userids == 0) {
		PascalToC(userid);
		++userids;
		if (what & 16) {
		    show_update(key2IDstring(n));
		    break;
		}
		if (what & 8) {
		    if ((((keyctb) & 0x7c) == (4 * 6)))
			fprintf(pgpout, LANG("pub"));
		    else if ((((keyctb) & 0x7c) == (4 * 5)))
			fprintf(pgpout, LANG("sec"));
		    else
			fprintf(pgpout, "???");
		    if (keystatus < 0)
			fprintf(pgpout, "? ");
		    else if (compromised)
			fprintf(pgpout, "# ");
		    else if (disabled)
			fprintf(pgpout, "- ");
		    else
			fprintf(pgpout, "  ");
		    fprintf(pgpout, "%4d/%s %s  ", countbits(n), key2IDstring(n), cdate(&timestamp));
		    fprintf(pgpout, "%s\n", userid);
		    break;
		}
		fprintf(pgpout, LANG("\nKey for user ID: %s\n"), userid);
		fprintf(pgpout, LANG("%d-bit key, key ID %s, created %s\n"), countbits(n), key2IDstring(n), cdate(&timestamp));
		if (keystatus == -4)
		    fprintf(pgpout, LANG("Bad key format.\n"));
		else if (keystatus == -6)
		    fprintf(pgpout, LANG("Unrecognized version.\n"));
		else if (what & 4)
		    printKeyHash(hash, 0);
		if (compromised)
		    fprintf(pgpout, LANG("Key has been revoked.\n"));
		if (disabled)
		    fprintf(pgpout, LANG("Key is disabled.\n"));
		if (print_trust && *owntrust_msg[((keyctrl) & 7)] != '\0')
		    fprintf(pgpout, LANG(owntrust_msg[((keyctrl) & 7)]));
	    } else {
		PascalToC(userid);
		if (what != 0)
		    fprintf(pgpout, "\n");
		fprintf(pgpout, LANG("Also known as: %s\n"), userid);
	    }
	    if (print_trust) {
		read_trust(f, &keyctrl);
		fprintf(pgpout, LANG(keylegit_msg[keyctrl & 0x03]));
	    }
	} else if ((((ctb) & 0x7c) == (4 * 2))) {
	    if (userids == 0)
		compromised = 1;
	    if (what & 16) {
		show_update(key2IDstring(n));
		break;
	    }
	    if (what & 2) {
		if (print_trust) {
		    read_trust(f, &keyctrl);
		    fprintf(pgpout, LANG(sigtrust_msg[((keyctrl) & 7)]));
		} else {
		    fprintf(pgpout, LANG("  Certified by: "));
		}
		show_userid(f, sigkeyID);
	    }
	}
    }
    if (status == -1 && userids)
	status = 0;
    if (!userids && !compromised && (what != 16)) {
	status = -1;
	fprintf(pgpout, LANG("\nWarning: keyid %4d/%s %s  has no user id!\n"), countbits(n), keyIDstring(savekeyID), cdate(&timestamp));
    }
    (global_precision = (precision));
    fseek(f, filepos, 0);
    return status;
}

void show_update(char *s)
{
    fprintf(pgpout, LANG("Updated keyID: 0x%s\n"), s);
} int readkpacket(FILE * f, byte * ctb, char *userid, byte * keyID, byte * sigkeyID)
{
    int status;
    unit n[((2048 + (2 * 16)) / 16)], e[((2048 + (2 * 16)) / 16)];
    status = readkeypacket(f, 0, ctb, ((void *) 0), userid, n, e, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), sigkeyID, ((void *) 0));
    if (status < 0) {
	return status;
    }
    if (keyID && is_key_ctb(*ctb))
	extract_keyID(keyID, n);
    if (userid && *ctb == (0x80 + (4 * 13) + 0))
	PascalToC(userid);
    return 0;
}

void write_trust_pos(FILE * f, byte keyctrl, long pos)
{
    long fpos;
    fpos = ftell(f);
    fseek(f, pos, 0);
    write_trust(f, keyctrl);
    fseek(f, fpos, 0);
} int read_trust(FILE * f, byte * keyctrl)
{
    unsigned char buf[3];
    if (fread(buf, 1, 3, f) != 3)
	return -1;
    if (buf[0] != (0x80 + (4 * 12) + 0)) {
	if ((((buf[0]) & 0x80) == 0x80)) {
	    fseek(f, -3L, 1);
	    return -7;
	} else
	    return -3;
    }
    if (buf[1] != 1)
	return -3;
    if (keyctrl)
	*keyctrl = buf[2];
    return 0;
}

static void *allocbuf(int size);
static void freebufpool();
static struct hashent {
    struct hashent *next;
    byte keyID[8];
    char *userid;
} **hashtbl = ((void *) 0), *hashptr;
static char *strptr;
static int strleft = 0;
static int hashleft = 0;
static int nleft = 0;
static char *krnames[8];
static int nkr = 0;
static char *_user_from_keyID(byte * srch_keyID)
{
    FILE *f;
    int i, status, found = 0;
    byte keyID[8];
    static char userid[256];
    byte ctb;
    for (i = 0; !found && i < nkr; ++i) {
	if ((f = fopen(krnames[i], "r")) == ((void *) 0))
	    continue;
	while ((status = readkpacket(f, &ctb, userid, keyID, ((void *) 0))) != -1) {
	    if (status == -2 || status == -3)
		break;
	    if (is_key_ctb(ctb) && memcmp(keyID, srch_keyID, 8) == 0)
		found = 1;
	    if (found && ctb == (0x80 + (4 * 13) + 0))
		break;
	}
	fclose(f);
    }
    return found ? userid : ((void *) 0);
} char *user_from_keyID(byte * keyID)
{
    struct hashent *p;
    if (!hashtbl)
	return _user_from_keyID(keyID);
    for (p = hashtbl[(*(byte *) (keyID) & (256 - 1))]; p; p = p->next)
	if (memcmp(keyID, p->keyID, 8) == 0)
	    return p->userid;
    return ((void *) 0);
} int setkrent(char *keyring)
{
    int i;
    ((nkr < 8) ? (void) (0) : __assert_fail("nkr < 8", "keymaint.c", 1473, __PRETTY_FUNCTION__));
    if (keyring == ((void *) 0))
	keyring = globalPubringName;
    for (i = 0; i < nkr; ++i)
	if (strcmp(keyring, krnames[i]) == 0)
	    return 0;
    krnames[nkr++] = store_str(keyring);
    return 0;
}

void endkrent(void)
{
    hashleft = strleft = 0;
    hashtbl = ((void *) 0);
    nkr = 0;
    freebufpool();
} int init_userhash(void)
{
    FILE *f;
    int status, i;
    byte keyID[8];
    char userid[256];
    byte ctb;
    int keyflag;
    if (!hashtbl) {
	hashtbl = allocbuf(256 * sizeof(struct hashent *));
	memset(hashtbl, 0, 256 * sizeof(struct hashent *));
    }
    for (i = 0; i < nkr; ++i) {
	if ((f = fopen(krnames[i], "r")) == ((void *) 0))
	    continue;
	keyflag = 0;
	while ((status = readkpacket(f, &ctb, userid, keyID, ((void *) 0))) != -1) {
	    if (is_key_ctb(ctb) && user_from_keyID(keyID) == ((void *) 0))
		keyflag = 1;
	    if (keyflag && ctb == (0x80 + (4 * 13) + 0)) {
		if (!hashleft) {
		    hashptr = allocbuf((4000 / sizeof(struct hashent)) * sizeof(struct hashent));
		    hashleft = (4000 / sizeof(struct hashent));
		}
		memcpy(hashptr->keyID, keyID, 8);
		hashptr->userid = store_str(userid);
		hashptr->next = hashtbl[(*(byte *) (keyID) & (256 - 1))];
		hashtbl[(*(byte *) (keyID) & (256 - 1))] = hashptr;
		++hashptr;
		--hashleft;
		keyflag = 0;
	    }
	} fclose(f);
    } return 0;
}

static void maint_init_mem(void)
{
    pkhash = allocbuf(256 * sizeof(struct pubkey *));
    memset(pkhash, 0, 256 * sizeof(struct pubkey *));
} static void maint_release_mem(void)
{
    nleft = 0;
    strleft = 0;
    pkhash = ((void *) 0);
    freebufpool();
} static void *allocn(int size)
{
    static char *ptr;
    size = (size + 3) & ~3;
    ((size < 4000) ? (void) (0) : __assert_fail("size < 4000", "keymaint.c", 1562, __PRETTY_FUNCTION__));
    if (size > nleft) {
	ptr = allocbuf(4000);
	nleft = 4000;
    }
    nleft -= size;
    ptr += size;
    return ptr - size;
}

char *store_str(char *str)
{
    int size = strlen(str) + 1;
    if (size > 4000) {
	fprintf(stderr, "store_str: string too long\n");
	return ((void *) 0);
    }
    if (size > strleft) {
	strptr = allocbuf(4000);
	strleft = 4000;
    }
    strcpy(strptr, str);
    strptr += size;
    strleft -= size;
    return strptr - size;
}

static struct bufpool {
    struct bufpool *next;
    char buf[1];
} *bufpool = ((void *) 0);
long totalsize = 0;
static void *allocbuf(int size)
{
    struct bufpool *p;
    p = xmalloc(size + sizeof(struct bufpool *));
    totalsize += size;
    p->next = bufpool;
    bufpool = p;
    return p->buf;
}

static void freebufpool(void)
{
    struct bufpool *p;
    if (verbose)
	fprintf(pgpout, "\nMemory used: %ldk\n", totalsize / 1024);
    totalsize = 0;
    while (bufpool) {
	p = bufpool;
	bufpool = bufpool->next;
	free(p);
    }
    nleft = strleft = hashleft = 0;
}
