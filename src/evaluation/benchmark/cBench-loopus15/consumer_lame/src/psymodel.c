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
extern int *__errno_location(void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
typedef float FLOAT;
typedef double FLOAT8;
typedef enum sound_file_format_e { sf_unknown, sf_wave, sf_aiff, sf_mp3, sf_raw } sound_file_format;
typedef struct {
    unsigned long num_samples;
    int num_channels;
    int in_samplerate;
    int out_samplerate;
    int gtkflag;
    int bWriteVbrTag;
    int quality;
    int silent;
    int mode;
    int mode_fixed;
    int force_ms;
    int brate;
    int copyright;
    int original;
    int error_protection;
    int padding_type;
    int extension;
    int disable_reservoir;
    int experimentalX;
    int experimentalY;
    int experimentalZ;
    int VBR;
    int VBR_q;
    int VBR_min_bitrate_kbps;
    int VBR_max_bitrate_kbps;
    int lowpassfreq;
    int highpassfreq;
    int lowpasswidth;
    int highpasswidth;
    sound_file_format input_format;
    int swapbytes;
    char *inPath;
    char *outPath;
    int ATHonly;
    int noATH;
    float cwlimit;
    int allow_diff_short;
    int no_short_blocks;
    int emphasis;
    long int frameNum;
    long totalframes;
    int encoder_delay;
    int framesize;
    int version;
    int padding;
    int mode_gr;
    int stereo;
    int VBR_min_bitrate;
    int VBR_max_bitrate;
    float resample_ratio;
    int bitrate_index;
    int samplerate_index;
    int mode_ext;
    float lowpass1, lowpass2;
    float highpass1, highpass2;
    int lowpass_band;
    int highpass_band;
    int filter_type;
    int quantization;
    int noise_shaping;
    int noise_shaping_stop;
    int psymodel;
    int use_best_huffman;
} lame_global_flags;
void lame_init(lame_global_flags *);
void lame_usage(lame_global_flags *, char *);
void lame_help(lame_global_flags *, char *);
void lame_version(lame_global_flags *, char *);
void lame_parse_args(lame_global_flags *, int argc, char **argv);
void lame_init_params(lame_global_flags *);
void lame_print_config(lame_global_flags *);
int lame_encode_buffer(lame_global_flags *, short int leftpcm[], short int rightpcm[], int num_samples, char *mp3buffer, int mp3buffer_size);
int lame_encode_buffer_interleaved(lame_global_flags *, short int pcm[], int num_samples, char *mp3buffer, int mp3buffer_size);
int lame_encode(lame_global_flags *, short int Buffer[2][1152], char *mp3buffer, int mp3buffer_size);
int lame_encode_finish(lame_global_flags *, char *mp3buffer, int size);
void lame_mp3_tags(lame_global_flags *);
void lame_init_infile(lame_global_flags *);
int lame_readframe(lame_global_flags *, short int Buffer[2][1152]);
void lame_close_infile(lame_global_flags *);
int lame_decode_init(void);
int lame_decode(char *mp3buf, int len, short pcm_l[], short pcm_r[]);
int lame_decode_initfile(FILE * fd, int *stereo, int *samp, int *bitrate, unsigned long *nsamp);
int lame_decode_fromfile(FILE * fd, short int pcm_l[], short int pcm_r[]);
typedef struct {
    unsigned int steps;
    unsigned int bits;
    unsigned int group;
    unsigned int quant;
} sb_alloc, *alloc_ptr;
typedef sb_alloc al_table[32][16];
enum byte_order { order_unknown, order_bigEndian, order_littleEndian };
extern enum byte_order NativeByteOrder;
typedef struct bit_stream_struc {
    unsigned char *pbtOutBuf;
    int nOutBufPos;
    FILE *pt;
    unsigned char *buf;
    int buf_size;
    unsigned long totbit;
    int buf_byte_idx;
    int buf_bit_idx;
} Bit_stream_struc;
typedef FLOAT8 D576[576];
typedef int I576[576];
typedef FLOAT8 D192_3[192][3];
typedef int I192_3[192][3];
typedef struct {
    FLOAT8 l[21 + 1];
    FLOAT8 s[12 + 1][3];
} III_psy_xmin;
typedef struct {
    III_psy_xmin thm;
    III_psy_xmin en;
} III_psy_ratio;
typedef struct {
    unsigned part2_3_length;
    unsigned big_values;
    unsigned count1;
    unsigned global_gain;
    unsigned scalefac_compress;
    unsigned window_switching_flag;
    unsigned block_type;
    unsigned mixed_block_flag;
    unsigned table_select[3];
    int subblock_gain[3];
    unsigned region0_count;
    unsigned region1_count;
    unsigned preflag;
    unsigned scalefac_scale;
    unsigned count1table_select;
    unsigned part2_length;
    unsigned sfb_lmax;
    unsigned sfb_smax;
    unsigned count1bits;
    unsigned *sfb_partition_table;
    unsigned slen[4];
} gr_info;
typedef struct {
    int main_data_begin;
    unsigned private_bits;
    int resvDrain;
    unsigned scfsi[2][4];
    struct {
	struct gr_info_ss {
	    gr_info tt;
	} ch[2];
    } gr[2];
} III_side_info_t;
typedef struct {
    int l[22];
    int s[13][3];
} III_scalefac_t;
extern int bitrate_table[2][15];
extern void display_bitrates(FILE * out_fh);
extern int BitrateIndex(int, int, int);
extern int SmpFrqIndex(long, int *);
extern void *mem_alloc(unsigned long, char *);
extern int copy_buffer(char *buffer, int buffer_size, Bit_stream_struc * bs);
extern void init_bit_stream_w(Bit_stream_struc *);
extern void alloc_buffer(Bit_stream_struc *, int);
extern void desalloc_buffer(Bit_stream_struc *);
extern void putbits(Bit_stream_struc *, unsigned int, int);
extern enum byte_order DetermineByteOrder(void);
extern void SwapBytesInWords(short *loc, int words);
extern void getframebits(lame_global_flags * gfp, int *bitsPerFrame, int *mean_bits);
void L3psycho_anal(lame_global_flags * gfp, short int *buffer[2], int gr, FLOAT8 * ms_ratio, FLOAT8 * ms_ratio_next, FLOAT8 * ms_ener_ratio, III_psy_ratio ratio[2][2], III_psy_ratio MS_ratio[2][2], FLOAT8 pe[2], FLOAT8 pe_MS[2], int blocktype_d[2]);
extern void __assert_fail(__const char *__assertion, __const char *__file, unsigned int __line, __const char *__function) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void __assert_perror_fail(int __errnum, __const char *__file, unsigned int __line, __const char *__function) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void __assert(const char *__assertion, const char *__file, int __line) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern FLOAT8 psy_data[];
struct huffcodetab {
    unsigned int xlen;
    unsigned int linmax;
    unsigned long int *table;
    unsigned char *hlen;
};
extern struct huffcodetab ht[34];
void fft_long(FLOAT x_real[1024], int, short **);
void fft_short(FLOAT x_real[3][256], int, short **);
void init_fft(void);
void L3para_read(FLOAT8 sfreq, int numlines[63], int numlines_s[63], int partition_l[513], FLOAT8 minval[63], FLOAT8 qthr_l[63], FLOAT8 s3_l[63 + 1][63 + 1], FLOAT8 s3_s[63 + 1][63 + 1], FLOAT8 qthr_s[63], FLOAT8 SNR_s[63], int bu_l[21], int bo_l[21], FLOAT8 w1_l[21], FLOAT8 w2_l[21], int bu_s[12], int bo_s[12], FLOAT8 w1_s[12], FLOAT8 w2_s[12]);
void L3psycho_anal(lame_global_flags * gfp, short int *buffer[2], int gr_out, FLOAT8 * ms_ratio, FLOAT8 * ms_ratio_next, FLOAT8 * ms_ener_ratio, III_psy_ratio masking_ratio[2][2], III_psy_ratio masking_MS_ratio[2][2], FLOAT8 percep_entropy[2], FLOAT8 percep_MS_entropy[2], int blocktype_d[2])
{
    static FLOAT8 minval[63], qthr_l[63];
    static FLOAT8 qthr_s[63];
    static FLOAT8 nb_1[4][63], nb_2[4][63];
    static FLOAT8 s3_s[63 + 1][63 + 1];
    static FLOAT8 s3_l[63 + 1][63 + 1];
    static III_psy_xmin thm[4];
    static III_psy_xmin en[4];
    static int cw_upper_index;
    static int cw_lower_index;
    static FLOAT ax_sav[4][2][513];
    static FLOAT bx_sav[4][2][513];
    static FLOAT rx_sav[4][2][513];
    static FLOAT cw[513];
    FLOAT(*wsamp_l)[1024];
    FLOAT(*wsamp_s)[3][256];
    FLOAT tot_ener[4];
    static FLOAT wsamp_L[2][1024];
    static FLOAT energy[513];
    static FLOAT wsamp_S[2][3][256];
    static FLOAT energy_s[3][129];
    static FLOAT8 eb[63];
    static FLOAT8 cb[63];
    static FLOAT8 thr[63];
    static FLOAT8 w1_l[21], w2_l[21];
    static FLOAT8 w1_s[12], w2_s[12];
    static FLOAT8 mld_l[21], mld_s[12];
    static int bu_l[21], bo_l[21];
    static int bu_s[12], bo_s[12];
    static int npart_l, npart_s;
    static int npart_l_orig, npart_s_orig;
    static int s3ind[63][2];
    static int s3ind_s[63][2];
    static int numlines_s[63];
    static int numlines_l[63];
    static int partition_l[513];
    static FLOAT8 pe[4] = { 0, 0, 0, 0 };
    static FLOAT8 ms_ratio_s_old = 0, ms_ratio_l_old = 0;
    static FLOAT8 ms_ener_ratio_old = .25;
    FLOAT8 ms_ratio_l = 0, ms_ratio_s = 0;
    static int blocktype_old[2];
    int blocktype[2], uselongblock[2];
    int numchn, chn;
    int b, i, j, k;
    int sb, sblock;
    FLOAT cwlimit;
    if ((gfp->frameNum == 0) && (gr_out == 0)) {
	FLOAT8 SNR_s[63];
	blocktype_old[0] = 3;
	blocktype_old[1] = 3;
	i = gfp->out_samplerate;
	switch (i) {
	case 32000:
	    break;
	case 44100:
	    break;
	case 48000:
	    break;
	case 16000:
	    break;
	case 22050:
	    break;
	case 24000:
	    break;
	default:
	    fprintf(stderr, "error, invalid sampling frequency: %d Hz\n", i);
	    exit(-1);
	}
	memset(rx_sav, 0, sizeof(rx_sav));
	memset(ax_sav, 0, sizeof(ax_sav));
	memset(bx_sav, 0, sizeof(bx_sav));
	memset(en, 0, sizeof(en));
	memset(thm, 0, sizeof(thm));
	cw_lower_index = 6;
	if (gfp->cwlimit > 0)
	    cwlimit = gfp->cwlimit;
	else
	    cwlimit = 8.8717;
	cw_upper_index = cwlimit * 1000.0 * 1024.0 / ((FLOAT8) gfp->out_samplerate);
	cw_upper_index = ((513 - 4) < (cw_upper_index) ? (513 - 4) : (cw_upper_index));
	cw_upper_index = ((6) > (cw_upper_index) ? (6) : (cw_upper_index));
	for (j = 0; j < 513; j++)
	    cw[j] = 0.4;
	for (sb = 0; sb < 12; sb++) {
	    FLOAT8 mld = 1.25 * (1 - cos(3.14159265358979323846 * sb / 12)) - 2.5;
	    mld_s[sb] = pow(10.0, mld);
	}
	for (sb = 0; sb < 21; sb++) {
	    FLOAT8 mld = 1.25 * (1 - cos(3.14159265358979323846 * sb / 21)) - 2.5;
	    mld_l[sb] = pow(10.0, mld);
	}
	for (i = 0; i < 513; i++)
	    partition_l[i] = -1;
	L3para_read((FLOAT8) gfp->out_samplerate, numlines_l, numlines_s, partition_l, minval, qthr_l, s3_l, s3_s, qthr_s, SNR_s, bu_l, bo_l, w1_l, w2_l, bu_s, bo_s, w1_s, w2_s);
	npart_l_orig = 0;
	npart_s_orig = 0;
	for (i = 0; i < 513; i++)
	    if (partition_l[i] > npart_l_orig)
		npart_l_orig = partition_l[i];
	npart_l_orig++;
	for (i = 0; numlines_s[i] >= 0; i++);
	npart_s_orig = i;
	npart_l = bo_l[21 - 1] + 1;
	npart_s = bo_s[12 - 1] + 1;
	if (npart_l > npart_l_orig) {
	    npart_l = npart_l_orig;
	    bo_l[21 - 1] = npart_l - 1;
	    w2_l[21 - 1] = 1.0;
	}
	if (npart_s > npart_s_orig) {
	    npart_s = npart_s_orig;
	    bo_s[12 - 1] = npart_s - 1;
	    w2_s[12 - 1] = 1.0;
	}
	for (i = 0; i < npart_l; i++) {
	    for (j = 0; j < npart_l_orig; j++) {
		if (s3_l[i][j] != 0.0)
		    break;
	    }
	    s3ind[i][0] = j;
	    for (j = npart_l_orig - 1; j > 0; j--) {
		if (s3_l[i][j] != 0.0)
		    break;
	    }
	    s3ind[i][1] = j;
	}
	for (i = 0; i < npart_s; i++) {
	    for (j = 0; j < npart_s_orig; j++) {
		if (s3_s[i][j] != 0.0)
		    break;
	    }
	    s3ind_s[i][0] = j;
	    for (j = npart_s_orig - 1; j > 0; j--) {
		if (s3_s[i][j] != 0.0)
		    break;
	    }
	    s3ind_s[i][1] = j;
	}
	for (b = 0; b < npart_l; b++) {
	    FLOAT8 norm = 0;
	    for (k = s3ind[b][0]; k <= s3ind[b][1]; k++) {
		norm += s3_l[b][k];
	    }
	    for (k = s3ind[b][0]; k <= s3ind[b][1]; k++) {
		s3_l[b][k] *= exp(-(2.30258509299404568402 / 10) * 6) / norm;
	    }
	}
	if (gfp->version == 1) {
	    for (b = 0; b < npart_s; b++) {
		SNR_s[b] = exp((FLOAT8) SNR_s[b] * (2.30258509299404568402 / 10));
	    }
	}
	for (b = 0; b < npart_s; b++) {
	    FLOAT8 norm = 0;
	    for (k = s3ind_s[b][0]; k <= s3ind_s[b][1]; k++) {
		norm += s3_s[b][k];
	    }
	    for (k = s3ind_s[b][0]; k <= s3ind_s[b][1]; k++) {
		s3_s[b][k] *= SNR_s[b] / norm;
	    }
	}
	init_fft();
    }
    numchn = gfp->stereo;
    if (gfp->mode == 1)
	numchn = 4;
    for (chn = 0; chn < numchn; chn++) {
	wsamp_s = wsamp_S + (chn & 1);
	wsamp_l = wsamp_L + (chn & 1);
	if (chn < 2) {
	    fft_long(*wsamp_l, chn, buffer);
	    fft_short(*wsamp_s, chn, buffer);
	    percep_entropy[chn] = pe[chn];
	    masking_ratio[gr_out][chn].thm = thm[chn];
	    masking_ratio[gr_out][chn].en = en[chn];
	} else {
	    percep_MS_entropy[chn - 2] = pe[chn];
	    masking_MS_ratio[gr_out][chn - 2].en = en[chn];
	    masking_MS_ratio[gr_out][chn - 2].thm = thm[chn];
	    if (chn == 2) {
		for (j = 1024 - 1; j >= 0; --j) {
		    FLOAT l = wsamp_L[0][j];
		    FLOAT r = wsamp_L[1][j];
		    wsamp_L[0][j] = (l + r) * (FLOAT) (1.41421356237309504880 * 0.5);
		    wsamp_L[1][j] = (l - r) * (FLOAT) (1.41421356237309504880 * 0.5);
		}
		for (b = 2; b >= 0; --b) {
		    for (j = 256 - 1; j >= 0; --j) {
			FLOAT l = wsamp_S[0][b][j];
			FLOAT r = wsamp_S[1][b][j];
			wsamp_S[0][b][j] = (l + r) * (FLOAT) (1.41421356237309504880 * 0.5);
			wsamp_S[1][b][j] = (l - r) * (FLOAT) (1.41421356237309504880 * 0.5);
		    }
		}
	    }
	}
	energy[0] = (*wsamp_l)[0];
	energy[0] *= energy[0];
	tot_ener[chn] = energy[0];
	for (j = 1024 / 2 - 1; j >= 0; --j) {
	    FLOAT re = (*wsamp_l)[1024 / 2 - j];
	    FLOAT im = (*wsamp_l)[1024 / 2 + j];
	    energy[1024 / 2 - j] = (re * re + im * im) * (FLOAT) 0.5;
	    tot_ener[chn] += energy[1024 / 2 - j];
	}
	for (b = 2; b >= 0; --b) {
	    energy_s[b][0] = (*wsamp_s)[b][0];
	    energy_s[b][0] *= energy_s[b][0];
	    for (j = 256 / 2 - 1; j >= 0; --j) {
		FLOAT re = (*wsamp_s)[b][256 / 2 - j];
		FLOAT im = (*wsamp_s)[b][256 / 2 + j];
		energy_s[b][256 / 2 - j] = (re * re + im * im) * (FLOAT) 0.5;
	    }
	}
	for (j = 0; j < cw_lower_index; j++) {
	    FLOAT an, a1, a2;
	    FLOAT bn, b1, b2;
	    FLOAT rn, r1, r2;
	    FLOAT numre, numim, den;
	    a2 = ax_sav[chn][1][j];
	    b2 = bx_sav[chn][1][j];
	    r2 = rx_sav[chn][1][j];
	    a1 = ax_sav[chn][1][j] = ax_sav[chn][0][j];
	    b1 = bx_sav[chn][1][j] = bx_sav[chn][0][j];
	    r1 = rx_sav[chn][1][j] = rx_sav[chn][0][j];
	    an = ax_sav[chn][0][j] = (*wsamp_l)[j];
	    bn = bx_sav[chn][0][j] = j == 0 ? (*wsamp_l)[0] : (*wsamp_l)[1024 - j];
	    rn = rx_sav[chn][0][j] = sqrt(energy[j]); {
		if (r1 != 0) {
		    numre = (a1 * b1);
		    numim = (a1 * a1 - b1 * b1) * (FLOAT) 0.5;
		    den = r1 * r1;
		} else {
		    numre = 1;
		    numim = 0;
		    den = 1;
		}
	    }
	    {
		if (r2 != 0) {
		    FLOAT tmp2 = (numim + numre) * (a2 + b2) * (FLOAT) 0.5;
		    FLOAT tmp1 = -a2 * numre + tmp2;
		    numre = -b2 * numim + tmp2;
		    numim = tmp1;
		    den *= r2;
		} else {
		}
	    }
	    {
		FLOAT tmp = (2 * r1 - r2) / den;
		numre *= tmp;
		numim *= tmp;
	    }
	    den = rn + fabs(2 * r1 - r2);
	    if (den != 0) {
		numre = (an + bn) * (FLOAT) 0.5 - numre;
		numim = (an - bn) * (FLOAT) 0.5 - numim;
		den = sqrt(numre * numre + numim * numim) / den;
	    }
	    cw[j] = den;
	}
	for (j = cw_lower_index; j < cw_upper_index; j += 4) {
	    FLOAT rn, r1, r2;
	    FLOAT numre, numim, den;
	    k = (j + 2) / 4; {
		r1 = energy_s[0][k];
		if (r1 != 0) {
		    FLOAT a1 = (*wsamp_s)[0][k];
		    FLOAT b1 = (*wsamp_s)[0][256 - k];
		    numre = (a1 * b1);
		    numim = (a1 * a1 - b1 * b1) * (FLOAT) 0.5;
		    den = r1;
		    r1 = sqrt(r1);
		} else {
		    numre = 1;
		    numim = 0;
		    den = 1;
		}
	    }
	    {
		r2 = energy_s[2][k];
		if (r2 != 0) {
		    FLOAT a2 = (*wsamp_s)[2][k];
		    FLOAT b2 = (*wsamp_s)[2][256 - k];
		    FLOAT tmp2 = (numim + numre) * (a2 + b2) * (FLOAT) 0.5;
		    FLOAT tmp1 = -a2 * numre + tmp2;
		    numre = -b2 * numim + tmp2;
		    numim = tmp1;
		    r2 = sqrt(r2);
		    den *= r2;
		} else {
		}
	    }
	    {
		FLOAT tmp = (2 * r1 - r2) / den;
		numre *= tmp;
		numim *= tmp;
	    }
	    rn = sqrt(energy_s[1][k]);
	    den = rn + fabs(2 * r1 - r2);
	    if (den != 0) {
		FLOAT an = (*wsamp_s)[1][k];
		FLOAT bn = (*wsamp_s)[1][256 - k];
		numre = (an + bn) * (FLOAT) 0.5 - numre;
		numim = (an - bn) * (FLOAT) 0.5 - numim;
		den = sqrt(numre * numre + numim * numim) / den;
	    }
	    cw[j + 1] = cw[j + 2] = cw[j + 3] = cw[j] = den;
	}
	b = 0;
	for (j = 0; j < cw_upper_index;) {
	    FLOAT8 ebb, cbb;
	    int i;
	    ebb = energy[j];
	    cbb = energy[j] * cw[j];
	    j++;
	    for (i = numlines_l[b] - 1; i > 0; i--) {
		ebb += energy[j];
		cbb += energy[j] * cw[j];
		j++;
	    }
	    eb[b] = ebb;
	    cb[b] = cbb;
	    b++;
	}
	for (; b < npart_l_orig; b++) {
	    int i;
	    FLOAT8 ebb = energy[j++];
	    for (i = numlines_l[b] - 1; i > 0; i--) {
		ebb += energy[j++];
	    }
	    eb[b] = ebb;
	    cb[b] = ebb * 0.4;
	}
	pe[chn] = 0;
	for (b = 0; b < npart_l; b++) {
	    FLOAT8 tbb, ecb, ctb;
	    FLOAT8 temp_1;
	    ecb = 0;
	    ctb = 0;
	    for (k = s3ind[b][0]; k <= s3ind[b][1]; k++) {
		ecb += s3_l[b][k] * eb[k];
		ctb += s3_l[b][k] * cb[k];
	    }
	    tbb = ecb;
	    if (tbb != 0) {
		tbb = ctb / tbb;
		if (tbb <= 0.04875584301) {
		    tbb = exp(-(2.30258509299404568402 / 10) * (18 - 6));
		} else if (tbb > 0.4989003827) {
		    tbb = 1;
		} else {
		    tbb = log(tbb);
		    tbb = exp(((18 - 6) * ((2.30258509299404568402 / 10) * 0.299)) + ((18 - 6) * ((2.30258509299404568402 / 10) * 0.43)) * tbb);
		}
	    }
	    tbb = ((minval[b]) < (tbb) ? (minval[b]) : (tbb));
	    ecb *= tbb;
	    temp_1 = ((ecb) < (((2 * nb_1[chn][b]) < (16 * nb_2[chn][b]) ? (2 * nb_1[chn][b]) : (16 * nb_2[chn][b]))) ? (ecb) : (((2 * nb_1[chn][b]) < (16 * nb_2[chn][b]) ? (2 * nb_1[chn][b]) : (16 * nb_2[chn][b]))));
	    thr[b] = ((qthr_l[b]) > (temp_1) ? (qthr_l[b]) : (temp_1));
	    nb_2[chn][b] = nb_1[chn][b];
	    nb_1[chn][b] = ecb;
	    if (thr[b] < eb[b]) {
		pe[chn] -= numlines_l[b] * log(thr[b] / eb[b]);
	    }
	}
	if (chn < 2) {
	    if (gfp->no_short_blocks) {
		uselongblock[chn] = 1;
	    } else {
		if (pe[chn] > 3000) {
		    uselongblock[chn] = 0;
		} else {
		    FLOAT mn, mx, ma = 0, mb = 0, mc = 0;
		    for (j = 129 / 2; j < 129; j++) {
			ma += energy_s[0][j];
			mb += energy_s[1][j];
			mc += energy_s[2][j];
		    }
		    mn = ((ma) < (mb) ? (ma) : (mb));
		    mn = ((mn) < (mc) ? (mn) : (mc));
		    mx = ((ma) > (mb) ? (ma) : (mb));
		    mx = ((mx) > (mc) ? (mx) : (mc));
		    uselongblock[chn] = 1;
		    if (mx > 30 * mn) {
			uselongblock[chn] = 0;
		    } else if ((mx > 10 * mn) && (pe[chn] > 1000)) {
			uselongblock[chn] = 0;
		    }
		}
	    }
	}
	for (sb = 0; sb < 21; sb++) {
	    FLOAT8 enn = w1_l[sb] * eb[bu_l[sb]] + w2_l[sb] * eb[bo_l[sb]];
	    FLOAT8 thmm = w1_l[sb] * thr[bu_l[sb]] + w2_l[sb] * thr[bo_l[sb]];
	    for (b = bu_l[sb] + 1; b < bo_l[sb]; b++) {
		enn += eb[b];
		thmm += thr[b];
	    }
	    en[chn].l[sb] = enn;
	    thm[chn].l[sb] = thmm;
	}
	for (sblock = 0; sblock < 3; sblock++) {
	    j = 0;
	    for (b = 0; b < npart_s_orig; b++) {
		int i;
		FLOAT ecb = energy_s[sblock][j++];
		for (i = numlines_s[b]; i > 0; i--) {
		    ecb += energy_s[sblock][j++];
		}
		eb[b] = ecb;
	    }
	    for (b = 0; b < npart_s; b++) {
		FLOAT8 ecb = 0;
		for (k = s3ind_s[b][0]; k <= s3ind_s[b][1]; k++) {
		    ecb += s3_s[b][k] * eb[k];
		}
		thr[b] = ((qthr_s[b]) > (ecb) ? (qthr_s[b]) : (ecb));
	    }
	    for (sb = 0; sb < 12; sb++) {
		FLOAT8 enn = w1_s[sb] * eb[bu_s[sb]] + w2_s[sb] * eb[bo_s[sb]];
		FLOAT8 thmm = w1_s[sb] * thr[bu_s[sb]] + w2_s[sb] * thr[bo_s[sb]];
		for (b = bu_s[sb] + 1; b < bo_s[sb]; b++) {
		    enn += eb[b];
		    thmm += thr[b];
		}
		en[chn].s[sb][sblock] = enn;
		thm[chn].s[sb][sblock] = thmm;
	    }
	}
    }
    if (numchn == 4) {
	FLOAT8 rside, rmid, mld;
	int chmid = 2, chside = 3;
	for (sb = 0; sb < 21; sb++) {
	    if (thm[0].l[sb] <= 1.58 * thm[1].l[sb] && thm[1].l[sb] <= 1.58 * thm[0].l[sb]) {
		mld = mld_l[sb] * en[chside].l[sb];
		rmid = ((thm[chmid].l[sb]) > (((thm[chside].l[sb]) < (mld) ? (thm[chside].l[sb]) : (mld))) ? (thm[chmid].l[sb]) : (((thm[chside].l[sb]) < (mld) ? (thm[chside].l[sb]) : (mld))));
		mld = mld_l[sb] * en[chmid].l[sb];
		rside = ((thm[chside].l[sb]) > (((thm[chmid].l[sb]) < (mld) ? (thm[chmid].l[sb]) : (mld))) ? (thm[chside].l[sb]) : (((thm[chmid].l[sb]) < (mld) ? (thm[chmid].l[sb]) : (mld))));
		thm[chmid].l[sb] = rmid;
		thm[chside].l[sb] = rside;
	    }
	}
	for (sb = 0; sb < 12; sb++) {
	    for (sblock = 0; sblock < 3; sblock++) {
		if (thm[0].s[sb][sblock] <= 1.58 * thm[1].s[sb][sblock] && thm[1].s[sb][sblock] <= 1.58 * thm[0].s[sb][sblock]) {
		    mld = mld_s[sb] * en[chside].s[sb][sblock];
		    rmid = ((thm[chmid].s[sb][sblock]) > (((thm[chside].s[sb][sblock]) < (mld) ? (thm[chside].s[sb][sblock]) : (mld))) ? (thm[chmid].s[sb][sblock]) : (((thm[chside].s[sb][sblock]) < (mld) ? (thm[chside].s[sb][sblock]) : (mld))));
		    mld = mld_s[sb] * en[chmid].s[sb][sblock];
		    rside = ((thm[chside].s[sb][sblock]) > (((thm[chmid].s[sb][sblock]) < (mld) ? (thm[chmid].s[sb][sblock]) : (mld))) ? (thm[chside].s[sb][sblock]) : (((thm[chmid].s[sb][sblock]) < (mld) ? (thm[chmid].s[sb][sblock]) : (mld))));
		    thm[chmid].s[sb][sblock] = rmid;
		    thm[chside].s[sb][sblock] = rside;
		}
	    }
	}
    }
    if (gfp->mode == 1) {
	FLOAT8 db, x1, x2, sidetot = 0, tot = 0;
	for (sb = 21 / 4; sb < 21; sb++) {
	    x1 = ((thm[0].l[sb]) < (thm[1].l[sb]) ? (thm[0].l[sb]) : (thm[1].l[sb]));
	    x2 = ((thm[0].l[sb]) > (thm[1].l[sb]) ? (thm[0].l[sb]) : (thm[1].l[sb]));
	    if (x2 >= 1000 * x1)
		db = 3;
	    else
		db = log10(x2 / x1);
	    sidetot += db;
	    tot++;
	}
	ms_ratio_l = (sidetot / tot) * 0.7;
	ms_ratio_l = ((ms_ratio_l) < (0.5) ? (ms_ratio_l) : (0.5));
	sidetot = 0;
	tot = 0;
	for (sblock = 0; sblock < 3; sblock++)
	    for (sb = 12 / 4; sb < 12; sb++) {
		x1 = ((thm[0].s[sb][sblock]) < (thm[1].s[sb][sblock]) ? (thm[0].s[sb][sblock]) : (thm[1].s[sb][sblock]));
		x2 = ((thm[0].s[sb][sblock]) > (thm[1].s[sb][sblock]) ? (thm[0].s[sb][sblock]) : (thm[1].s[sb][sblock]));
		if (x2 >= 1000 * x1)
		    db = 3;
		else
		    db = log10(x2 / x1);
		sidetot += db;
		tot++;
	    }
	ms_ratio_s = (sidetot / tot) * 0.7;
	ms_ratio_s = ((ms_ratio_s) < (.5) ? (ms_ratio_s) : (.5));
    }
    for (chn = 0; chn < gfp->stereo; chn++) {
	blocktype[chn] = 0;
    }
    if (gfp->stereo == 2) {
	if (!gfp->allow_diff_short || gfp->mode == 1) {
	    int bothlong = (uselongblock[0] && uselongblock[1]);
	    if (!bothlong) {
		uselongblock[0] = 0;
		uselongblock[1] = 0;
	    }
	}
    }
    for (chn = 0; chn < gfp->stereo; chn++) {
	if (uselongblock[chn]) {
	    switch (blocktype_old[chn]) {
	    case 0:
	    case 3:
		blocktype[chn] = 0;
		break;
	    case 2:
		blocktype[chn] = 3;
		break;
	    case 1:
		fprintf(stderr, "Error in block selecting\n");
		abort();
		break;
	    }
	} else {
	    blocktype[chn] = 2;
	    if (blocktype_old[chn] == 0) {
		blocktype_old[chn] = 1;
	    }
	    if (blocktype_old[chn] == 3) {
		blocktype_old[chn] = 2;
	    }
	}
	blocktype_d[chn] = blocktype_old[chn];
	blocktype_old[chn] = blocktype[chn];
    }
    if (blocktype_d[0] == 2)
	*ms_ratio = ms_ratio_s_old;
    else
	*ms_ratio = ms_ratio_l_old;
    ms_ratio_s_old = ms_ratio_s;
    ms_ratio_l_old = ms_ratio_l;
    *ms_ratio_next = ms_ratio_l;
    if (numchn == 4) {
	FLOAT tmp = tot_ener[3] + tot_ener[2];
	*ms_ener_ratio = ms_ener_ratio_old;
	ms_ener_ratio_old = 0;
	if (tmp > 0)
	    ms_ener_ratio_old = tot_ener[3] / tmp;
    } else
	*ms_ener_ratio = 0;
}

void L3para_read(FLOAT8 sfreq, int *numlines_l, int *numlines_s, int *partition_l, FLOAT8 * minval, FLOAT8 * qthr_l, FLOAT8 s3_l[64][64], FLOAT8 s3_s[63 + 1][63 + 1], FLOAT8 * qthr_s, FLOAT8 * SNR, int *bu_l, int *bo_l, FLOAT8 * w1_l, FLOAT8 * w2_l, int *bu_s, int *bo_s, FLOAT8 * w1_s, FLOAT8 * w2_s)
{
    FLOAT8 freq_tp;
    FLOAT8 bval_l[63], bval_s[63];
    int cbmax = 0, cbmax_tp;
    FLOAT8 *p = psy_data;
    int sbmax;
    int i, j, k, k2, loop, part_max;
    int freq_scale = 1;
    for (loop = 0; loop < 6; loop++) {
	freq_tp = *p++;
	cbmax_tp = (int) *p++;
	cbmax_tp++;
	if (sfreq == freq_tp / freq_scale) {
	    cbmax = cbmax_tp;
	    for (i = 0, k2 = 0; i < cbmax_tp; i++) {
		j = (int) *p++;
		numlines_l[i] = (int) *p++;
		minval[i] = exp(-((*p++) - 6) * (2.30258509299404568402 / 10));
		qthr_l[i] = *p++;
		p++;
		bval_l[i] = *p++;
		if (j != i) {
		    fprintf(stderr, "1. please check \"psy_data\"");
		    exit(-1);
		}
		for (k = 0; k < numlines_l[i]; k++)
		    partition_l[k2++] = i;
	    }
	} else
	    p += cbmax_tp * 6;
    }
    part_max = cbmax;
    for (i = 0; i < part_max; i++) {
	FLOAT8 tempx, x, tempy, temp;
	for (j = 0; j < part_max; j++) {
	    if (j >= i)
		tempx = (bval_l[i] - bval_l[j]) * 3.0;
	    else
		tempx = (bval_l[i] - bval_l[j]) * 1.5;
	    if (i >= j)
		tempx = (bval_l[i] - bval_l[j]) * 3.0;
	    else
		tempx = (bval_l[i] - bval_l[j]) * 1.5;
	    if (tempx >= 0.5 && tempx <= 2.5) {
		temp = tempx - 0.5;
		x = 8.0 * (temp * temp - 2.0 * temp);
	    } else
		x = 0.0;
	    tempx += 0.474;
	    tempy = 15.811389 + 7.5 * tempx - 17.5 * sqrt(1.0 + tempx * tempx);
	    if (tempy <= -60.0)
		s3_l[i][j] = 0.0;
	    else
		s3_l[i][j] = exp((x + tempy) * (2.30258509299404568402 / 10));
	}
    }
    for (loop = 0; loop < 6; loop++) {
	freq_tp = *p++;
	cbmax_tp = (int) *p++;
	cbmax_tp++;
	if (sfreq == freq_tp / freq_scale) {
	    cbmax = cbmax_tp;
	    for (i = 0, k2 = 0; i < cbmax_tp; i++) {
		j = (int) *p++;
		numlines_s[i] = (int) *p++;
		qthr_s[i] = *p++;
		p++;
		SNR[i] = *p++;
		bval_s[i] = *p++;
		if (j != i) {
		    fprintf(stderr, "3. please check \"psy_data\"");
		    exit(-1);
		}
		numlines_s[i]--;
	    }
	    numlines_s[i] = -1;
	} else
	    p += cbmax_tp * 6;
    }
    part_max = cbmax;
    for (i = 0; i < part_max; i++) {
	FLOAT8 tempx, x, tempy, temp;
	for (j = 0; j < part_max; j++) {
	    if (j >= i)
		tempx = (bval_s[i] - bval_s[j]) * 3.0;
	    else
		tempx = (bval_s[i] - bval_s[j]) * 1.5;
	    if (i >= j)
		tempx = (bval_s[i] - bval_s[j]) * 3.0;
	    else
		tempx = (bval_s[i] - bval_s[j]) * 1.5;
	    if (tempx >= 0.5 && tempx <= 2.5) {
		temp = tempx - 0.5;
		x = 8.0 * (temp * temp - 2.0 * temp);
	    } else
		x = 0.0;
	    tempx += 0.474;
	    tempy = 15.811389 + 7.5 * tempx - 17.5 * sqrt(1.0 + tempx * tempx);
	    if (tempy <= -60.0)
		s3_s[i][j] = 0.0;
	    else
		s3_s[i][j] = exp((x + tempy) * (2.30258509299404568402 / 10));
	}
    }
    for (loop = 0; loop < 6; loop++) {
	freq_tp = *p++;
	sbmax = (int) *p++;
	sbmax++;
	if (sfreq == freq_tp / freq_scale) {
	    for (i = 0; i < sbmax; i++) {
		j = (int) *p++;
		p++;
		bu_l[i] = (int) *p++;
		bo_l[i] = (int) *p++;
		w1_l[i] = (FLOAT8) * p++;
		w2_l[i] = (FLOAT8) * p++;
		if (j != i) {
		    fprintf(stderr, "30:please check \"psy_data\"\n");
		    exit(-1);
		}
		if (i != 0)
		    if ((fabs(1.0 - w1_l[i] - w2_l[i - 1]) > 0.01)) {
			fprintf(stderr, "31l: please check \"psy_data.\"\n");
			fprintf(stderr, "w1,w2: %f %f \n", w1_l[i], w2_l[i - 1]);
			exit(-1);
		    }
	    }
	} else
	    p += sbmax * 6;
    }
    for (loop = 0; loop < 6; loop++) {
	freq_tp = *p++;
	sbmax = (int) *p++;
	sbmax++;
	if (sfreq == freq_tp / freq_scale) {
	    for (i = 0; i < sbmax; i++) {
		j = (int) *p++;
		p++;
		bu_s[i] = (int) *p++;
		bo_s[i] = (int) *p++;
		w1_s[i] = *p++;
		w2_s[i] = *p++;
		if (j != i) {
		    fprintf(stderr, "30:please check \"psy_data\"\n");
		    exit(-1);
		}
		if (i != 0)
		    if ((fabs(1.0 - w1_s[i] - w2_s[i - 1]) > 0.01)) {
			fprintf(stderr, "31s: please check \"psy_data.\"\n");
			fprintf(stderr, "w1,w2: %f %f \n", w1_s[i], w2_s[i - 1]);
			exit(-1);
		    }
	    }
	} else
	    p += sbmax * 6;
    }
}
