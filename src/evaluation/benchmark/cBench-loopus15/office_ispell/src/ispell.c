static char Rcs_Id[] = "$Id: ispell.c,v 1.133 1995/10/11 04:30:29 geoff Exp $";
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
struct dirent {
    __ino_t d_ino;
    __off_t d_off;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
};
enum { DT_UNKNOWN = 0, DT_FIFO = 1, DT_CHR = 2, DT_DIR = 4, DT_BLK = 6, DT_REG = 8, DT_LNK = 10, DT_SOCK = 12, DT_WHT = 14 };
typedef struct __dirstream DIR;
extern DIR *opendir(__const char *__name) __attribute__ ((__nonnull__(1)));
extern DIR *fdopendir(int __fd);
extern int closedir(DIR * __dirp) __attribute__ ((__nonnull__(1)));
extern struct dirent *readdir(DIR * __dirp) __attribute__ ((__nonnull__(1)));
extern int readdir_r(DIR * __restrict __dirp, struct dirent *__restrict __entry, struct dirent **__restrict __result) __attribute__ ((__nonnull__(1, 2, 3)));
extern void rewinddir(DIR * __dirp) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void seekdir(DIR * __dirp, long int __pos) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long int telldir(DIR * __dirp) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int dirfd(DIR * __dirp) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int scandir(__const char *__restrict __dir, struct dirent ***__restrict __namelist, int (*__selector) (__const struct dirent *), int (*__cmp) (__const struct dirent **, __const struct dirent **)) __attribute__ ((__nonnull__(1, 2)));
extern int alphasort(__const struct dirent **__e1, __const struct dirent **__e2) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern __ssize_t getdirentries(int __fd, char *__restrict __buf, size_t __nbytes, __off_t * __restrict __basep) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 4)));
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
typedef unsigned char ichar_t;
struct dent {
    struct dent *next;
    char *word;
    long mask[(32 / 32)];
};
struct flagent {
    ichar_t *strip;
    ichar_t *affix;
    short flagbit;
    short stripl;
    short affl;
    short numconds;
    short flagflags;
    char conds[128 + 100];
};
union ptr_union {
    struct flagptr *fp;
    struct flagent *ent;
};
struct flagptr {
    union ptr_union pu;
    int numents;
};
struct strchartype {
    char *name;
    char *deformatter;
    char *suffixes;
};
struct hashheader {
    unsigned short magic;
    unsigned short compileoptions;
    short maxstringchars;
    short maxstringcharlen;
    short compoundmin;
    short compoundbit;
    int stringsize;
    int lstringsize;
    int tblsize;
    int stblsize;
    int ptblsize;
    int sortval;
    int nstrchars;
    int nstrchartype;
    int strtypestart;
    char nrchars[5];
    char texchars[13];
    char compoundflag;
    char defhardflag;
    char flagmarker;
    unsigned short sortorder[128 + 100];
    ichar_t lowerconv[128 + 100];
    ichar_t upperconv[128 + 100];
    char wordchars[128 + 100];
    char upperchars[128 + 100];
    char lowerchars[128 + 100];
    char boundarychars[128 + 100];
    char stringstarts[128];
    char stringchars[100][10 + 1];
    unsigned int stringdups[100];
    int dupnos[100];
    unsigned short magic2;
};
struct success {
    struct dent *dictent;
    struct flagent *prefix;
    struct flagent *suffix;
};
char *BC;
char *cd;
char *cl;
char *cm;
char *ho;
char *nd;
char *so;
char *se;
int sg;
char *ti;
char *te;
int li;
int co;
int contextsize;
char contextbufs[10][8192];
int contextoffset;
char *currentchar;
char ctoken[100 + 20];
ichar_t itoken[100 + 20];
char termcap[2048];
char termstr[2048];
char *termptr;
int numhits;
struct success hits[10];
char *hashstrings;
struct hashheader hashheader;
struct dent *hashtbl;
int hashsize;
char hashname[4096];
int aflag;
int cflag;
int lflag;
int incfileflag;
int nodictflag;
int uerasechar;
int ukillchar;
unsigned int laststringch;
int defdupchar;
int numpflags;
int numsflags;
struct flagptr pflagindex[128 + 100];
struct flagent *pflaglist;
struct flagptr sflagindex[128 + 100];
struct flagent *sflaglist;
struct strchartype *chartypes;
FILE *infile;
FILE *outfile;
FILE *infile1;
FILE *outfile1;
char *askfilename;
int changes;
int readonly;
int quit;
char possibilities[100][100 + 20];
int pcount;
int maxposslen;
int easypossibilities;
int Trynum;
ichar_t Try[128 + 100];
int minimenusize = 2;
int eflag = 0;
int dumpflag = 0;
int fflag = 0;
int sflag = 0;
int vflag = 0;
int xflag = 0;
int deftflag = -1;
int tflag = 0;
int prefstringchar = -1;
int terse = 0;
char tempfile[4096] = "";
int minword = 1;
int sortit = 1;
int compoundflag = -1;
int tryhardflag = -1;
char *currentfile = ((void *) 0);
int math_mode = 0;
char LaTeX_Mode = 'P';
extern int addvheader(struct dent *ent);
extern void askmode(void);
extern void backup(void);
extern int cap_ok(ichar_t * word, struct success *hit, int len);
extern int casecmp(char *a, char *b, int canonical);
extern void chupcase(char *s);
extern void checkfile(void);
extern void checkline(FILE * ofile);
extern void chk_aff(ichar_t * word, ichar_t * ucword, int len, int ignoreflagbits, int allhits, int pfxopts, int sfxopts);
extern int combinecaps(struct dent *hdr, struct dent *newent);
extern int compoundgood(ichar_t * word, int pfxopts);
extern void copyout(char **cc, int cnt);
extern void correct(char *ctok, int ctokl, ichar_t * itok, int itokl, char **curchar);
extern char *do_regex_lookup(char *expr, int whence);
extern void done(int);
extern void dumpmode(void);
extern void erase(void);
extern int expand_pre(char *croot, ichar_t * rootword, long mask[], int option, char *extra);
extern int expand_suf(char *croot, ichar_t * rootword, long mask[], int crossonly, int option, char *extra);
extern int findfiletype(char *name, int searchnames, int *deformatter);
extern void flagpr(ichar_t * word, int preflag, int prestrip, int preadd, int sufflag, int sufadd);
extern void givehelp(int interactive);
extern int good(ichar_t * word, int ignoreflagbits, int allhits, int pfxopts, int sfxopts);
extern int hash(ichar_t * word, int hashtablesize);
extern int ichartostr(char *out, ichar_t * in, int outlen, int canonical);
extern char *ichartosstr(ichar_t * in, int canonical);
extern int ins_root_cap(ichar_t * word, ichar_t * pattern, int prestrip, int preadd, int sufstrip, int sufadd, struct dent *firstdent, struct flagent *pfxent, struct flagent *sufent);
extern void inverse(void);
extern int linit(void);
extern struct dent *lookup(ichar_t * word, int dotree);
extern void lowcase(ichar_t * string);
extern int makedent(char *lbuf, int lbuflen, struct dent *d);
extern void makepossibilities(ichar_t * word);
extern void move(int row, int col);
extern void normal(void);
extern char *printichar(int in);
extern int shellescape(char *buf);
extern char *skipoverword(char *bufp);
extern void stop(void);
extern int stringcharlen(char *bufp, int canonical);
extern int strtoichar(ichar_t * out, char *in, int outlen, int canonical);
extern ichar_t *strtosichar(char *in, int canonical);
extern void terminit(void);
extern void toutent(FILE * outfile, struct dent *hent, int onlykeep);
extern void treeinit(char *persdict, char *LibDict);
extern void treeinsert(char *word, int wordlen, int keep);
extern struct dent *treelookup(ichar_t * word);
extern void treeoutput(void);
extern void upcase(ichar_t * string);
extern long whatcap(ichar_t * word);
extern char *xgets(char *string, int size, FILE * stream);
extern void yyinit(void);
extern int yyopen(char *file);
extern int yyparse(void);
extern void myfree(void *area);
extern void *mymalloc(unsigned int);
extern void *myrealloc(void *area, unsigned int size, unsigned int oldsize);
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
extern char *index();
extern char *rindex();
extern int tgetent();
extern int tgetnum();
extern char *tgetstr();
extern char *tgoto();
extern char *tputs();
static char *Version_ID[] = { "@(#) International Ispell Version 3.1.20 10/10/95", "@(#) Copyright (c), 1983, by Pace Willisson", "@(#) International version Copyright (c) 1987, 1988, 1990-1995,", "@(#) by Geoff Kuenning, Granada Hills, CA.  All rights reserved.", "@(#)", "@(#) Redistribution and use in source and binary forms, with or without", "@(#) modification, are permitted provided that the following conditions", "@(#) are met:", "@(#)", "@(#) 1. Redistributions of source code must retain the above copyright", "@(#)    notice, this list of conditions and the following disclaimer.", "@(#) 2. Redistributions in binary form must reproduce the above", "@(#)    copyright notice, this list of conditions and the following", "@(#)    disclaimer in the documentation and/or other materials provided", "@(#)    with the distribution.", "@(#) 3. All modifications to the source code must be clearly marked as", "@(#)    such.  Binary redistributions based on modified source code", "@(#)    must be clearly marked as modified versions in the documentation", "@(#)    and/or other materials provided with the distribution.", "@(#) 4. All advertising materials mentioning features or use of this", "@(#)    software must display the following acknowledgment:", "@(#)      This product includes software developed by Geoff Kuenning and", "@(#)      other unpaid contributors.", "@(#) 5. The name of Geoff Kuenning may not be used to endorse or promote", "@(#)    products derived from this software without specific prior", "@(#)    written permission.", "@(#)", "@(#) THIS SOFTWARE IS PROVIDED BY GEOFF KUENNING AND CONTRIBUTORS ``AS", "@(#) IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT", "@(#) LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS", "@(#) FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL GEOFF", "@(#) KUENNING OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,", "@(#) INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES", "@(#) (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR", "@(#) SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)", "@(#) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,", "@(#) STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)", "@(#) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED", "@(#) OF THE POSSIBILITY OF SUCH DAMAGE.", ((void *) 0) };

static char RCS_Version_ID[] = "$Id: version.h,v 1.44 1995/10/11 05:03:28 geoff Exp $";
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
static void usage(void);
static void initckch(char *wchars);
int main(int argc, char *argv[]);
static void dofile(char *filename);
static void update_file(char *filename, struct stat *statbuf);
static void expandmode(int printorig);
static char *Cmd;
static char *LibDict = ((void *) 0);
int cbench_print;
static void usage()
{
    (void) fprintf(stderr, "Usage: %s [-dfile | -pfile | -wchars | -Wn | -t | -n | -x | -b | -S | -B | -C | -P | -m | -Lcontext | -M | -N | -Ttype | -V] file .....\n", Cmd);
    (void) fprintf(stderr, "       %s [-dfile | -pfile | -wchars | -Wn | -t | -n | -Ttype] -l\n", Cmd);
    (void) fprintf(stderr, "       %s [-dfile | -pfile | -ffile | -Wn | -t | -n | -s | -B | -C | -P | -m | -Ttype] {-a | -A}\n", Cmd);
    (void) fprintf(stderr, "       %s [-dfile] [-wchars | -Wn] -c\n", Cmd);
    (void) fprintf(stderr, "       %s [-dfile] [-wchars] -e[1-4]\n", Cmd);
    (void) fprintf(stderr, "       %s [-dfile] [-wchars] -D\n", Cmd);
    (void) fprintf(stderr, "       %s -v\n", Cmd);
    givehelp(0);
    exit(1);
} static void initckch(wchars)

char *wchars;
{
    register ichar_t c;
    char num[4];
    for (c = 0; c < (ichar_t) (128 + hashheader.nstrchars); ++c) {
	if ((hashheader.wordchars[(c)])) {
	    if (!(hashheader.lowerchars[(c)])) {
		Try[Trynum] = c;
		++Trynum;
	    }
	} else if ((hashheader.boundarychars[(c)])) {
	    Try[Trynum] = c;
	    ++Trynum;
	}
    }
    if (wchars != ((void *) 0)) {
	while (Trynum < 128 && *wchars != '\0') {
	    if (*wchars != 'n' && *wchars != '\\') {
		c = *wchars;
		++wchars;
	    } else {
		++wchars;
		num[0] = '\0';
		num[1] = '\0';
		num[2] = '\0';
		num[3] = '\0';
		if (((*__ctype_b_loc())[(int) ((wchars[0]))] & (unsigned short int) _ISdigit)) {
		    num[0] = wchars[0];
		    if (((*__ctype_b_loc())[(int) ((wchars[1]))] & (unsigned short int) _ISdigit)) {
			num[1] = wchars[1];
			if (((*__ctype_b_loc())[(int) ((wchars[2]))] & (unsigned short int) _ISdigit))
			    num[2] = wchars[2];
		    }
		}
		if (wchars[-1] == 'n') {
		    wchars += strlen(num);
		    c = atoi(num);
		} else {
		    wchars += strlen(num);
		    c = 0;
		    if (num[0])
			c = num[0] - '0';
		    if (num[1]) {
			c <<= 3;
			c += num[1] - '0';
		    }
		    if (num[2]) {
			c <<= 3;
			c += num[2] - '0';
		    }
		}
	    }
	    c &= 0x7f;
	    if (!hashheader.wordchars[c]) {
		hashheader.wordchars[c] = 1;
		hashheader.sortorder[c] = hashheader.sortval++;
		Try[Trynum] = c;
		++Trynum;
	    }
	}
    }
}

int main(argc, argv)
int argc;
char *argv[];
{
    FILE *loop_wrap = ((void *) 0);
    FILE *loop_wrapi = ((void *) 0);
    FILE *loop_wrapo = ((void *) 0);
    long loop_wrap1, loop_wrap2;
    char *p;
    char *cpd;
    char **versionp;
    char *wchars = ((void *) 0);
    char *preftype = ((void *) 0);
    static char libdictname[sizeof "english.hash"];
    static char outbuf[8192];
    int argno;
    int arglen;
    Cmd = *argv;
    Trynum = 0;
    p = getenv("DICTIONARY");
    if (p != ((void *) 0)) {
	if (index(p, '/') != ((void *) 0))
	    (void) strcpy(hashname, p);
	else
	    (void) sprintf(hashname, "%s/%s", ".", p);
	(void) strcpy(libdictname, p);
	p = rindex(p, '.');
	if (p == ((void *) 0) || strcmp(p, ".hash") != 0)
	    (void) strcat(hashname, ".hash");
	LibDict = rindex(libdictname, '/');
	if (LibDict != ((void *) 0))
	    LibDict++;
	else
	    LibDict = libdictname;
	p = rindex(libdictname, '.');
	if (p != ((void *) 0))
	    *p = '\0';
    } else
	(void) sprintf(hashname, "%s/%s", ".", "english.hash");
    cpd = ((void *) 0);
    argv++;
    argc--;
    while (argc && **argv == '-') {
	arglen = strlen(*argv);
	switch ((*argv)[1]) {
	case 'v':
	    if (arglen > 3)
		usage();
	    for (versionp = Version_ID; *versionp;) {
		p = *versionp++;
		if (strncmp(p, "(#) ", 5) == 0)
		    p += 5;
		(void) printf("%s\n", p);
	    } if ((*argv)[2] == 'v') {
		(void) printf("Compiled-in options:\n");
		(void) printf("\t!USG (BSD)\n");
		(void) printf("\tBAKEXT = \"%s\"\n", ".bak");
		(void) printf("\tBINDIR = \"%s\"\n", "/usr/local/bin");
		(void) printf("\t!BOTTOMCONTEXT\n");
		(void) printf("\tCBREAK\n");
		(void) printf("\tCC = \"%s\"\n", "cc");
		(void) printf("\tCFLAGS = \"%s\"\n", "-O");
		(void) printf("\t!COMMANDFORSPACE\n");
		(void) printf("\t!CONTEXTROUNDUP\n");
		(void) printf("\tCONTEXTPCT = %d\n", 10);
		(void) printf("\tCOUNTSUFFIX = \"%s\"\n", ".cnt");
		(void) printf("\tDEFHASH = \"%s\"\n", "english.hash");
		(void) printf("\tDEFINCSTR = \"%s\"\n", "&Include_File&");
		(void) printf("\tDEFLANG = \"%s\"\n", "english.aff");
		(void) printf("\tDEFNOBACKUPFLAG = %d\n", 0);
		(void) printf("\tDEFPAFF = \"%s\"\n", "words");
		(void) printf("\tDEFPDICT = \"%s\"\n", ".ispell_");
		(void) printf("\tDEFTEXFLAG = %d\n", 0);
		(void) printf("\tEGREPCMD = \"%s\"\n", "/usr/bin/egrep -i");
		(void) printf("\tELISPDIR = \"%s\"\n", "/usr/local/lib/emacs/site-lisp");
		(void) printf("\tEMACS = \"%s\"\n", "emacs");
		(void) printf("\t!EQUAL_COLUMNS\n");
		(void) printf("\t!GENERATE_LIBRARY_PROTOS\n");
		(void) printf("\t!HAS_RENAME\n");
		(void) printf("\tHASHSUFFIX = \"%s\"\n", ".hash");
		(void) printf("\tHOME = \"%s\"\n", "HOME");
		(void) printf("\t!IGNOREBIB\n");
		(void) printf("\tINCSTRVAR = \"%s\"\n", "INCLUDE_STRING");
		(void) printf("\tINPUTWORDLEN = %d\n", 100);
		(void) printf("\tLANGUAGES = \"%s\"\n", "{american,MASTERDICTS=american.med+,HASHFILES=americanmed+.hash,EXTRADICT=words}");
		(void) printf("\tLIBDIR = \"%s\"\n", ".");
		(void) printf("\tLIBES = \"%s\"\n", "");
		(void) printf("\tLINT = \"%s\"\n", "lint");
		(void) printf("\tLINTFLAGS = \"%s\"\n", "");
		(void) printf("\tLOOK = \"%s\"\n", "look -df");
		(void) printf("\tMAKE_SORTTMP = \"%s\"\n", "-T ${TMPDIR-/tmp}");
		(void) printf("\tMALLOC_INCREMENT = %d\n", (4096 - 8));
		(void) printf("\tMAN1DIR = \"%s\"\n", "/usr/local/man/man1");
		(void) printf("\tMAN1EXT = \"%s\"\n", ".1");
		(void) printf("\tMAN4DIR = \"%s\"\n", "/usr/local/man/man4");
		(void) printf("\tMAN4EXT = \"%s\"\n", ".4");
		(void) printf("\tMASKBITS = %d\n", 32);
		(void) printf("\tMASKTYPE = %s\n", "long");
		(void) printf("\tMASKTYPE_WIDTH = %d\n", 32);
		(void) printf("\tMASTERHASH = \"%s\"\n", "americanmed+.hash");
		(void) printf("\tMAXAFFIXLEN = %d\n", 20);
		(void) printf("\tMAXCONTEXT = %d\n", 10);
		(void) printf("\tMAXINCLUDEFILES = %d\n", 5);
		(void) printf("\tMAXNAMLEN = %d\n", 255);
		(void) printf("\tMAXPATHLEN = %d\n", 4096);
		(void) printf("\tMAXPCT = %d\n", 70);
		(void) printf("\tMAXSEARCH = %d\n", 4);
		(void) printf("\tMAXSTRINGCHARLEN = %d\n", 10);
		(void) printf("\tMAXSTRINGCHARS = %d\n", 100);
		(void) printf("\tMAX_CAPS = %d\n", 10);
		(void) printf("\tMAX_HITS = %d\n", 10);
		(void) printf("\tMAX_SCREEN_SIZE = %d\n", 0);
		(void) printf("\tMINCONTEXT = %d\n", 2);
		(void) printf("\tMINIMENU\n");
		(void) printf("\tMINWORD = %d\n", 1);
		(void) printf("\tMSDOS_BINARY_OPEN = 0x%x\n", (unsigned int) 0);
		(void) printf("\tMSGLANG = %s\n", "english");
		(void) printf("\t!NO_CAPITALIZATION_SUPPORT\n");
		(void) printf("\t!NO_STDLIB_H (STDLIB_H)\n");
		(void) printf("\tNO8BIT\n");
		(void) printf("\tNRSPECIAL = \"%s\"\n", "().\\*");
		(void) printf("\tOLDPAFF = \"%s\"\n", "words");
		(void) printf("\tOLDPDICT = \"%s\"\n", ".ispell_");
		(void) printf("\tPDICTHOME = (undefined)\n");
		(void) printf("\tPDICTVAR = \"%s\"\n", "WORDLIST");
		(void) printf("\t!PIECEMEAL_HASH_WRITES\n");
		(void) printf("\t!REGEX_LOOKUP\n");
		(void) printf("\tREGLIB = \"%s\"\n", "");
		(void) printf("\tSIGNAL_TYPE = %s\n", "void");
		(void) printf("\tSORTPERSONAL = %d\n", 1000);
		(void) printf("\tSTATSUFFIX = \"%s\"\n", ".stat");
		(void) printf("\tTEMPNAME = \"%s\"\n", "/tmp/ispellXXXXXX");
		(void) printf("\tTERMLIB = \"%s\"\n", "");
		(void) printf("\tTEXINFODIR = \"%s\"\n", "/usr/local/info");
		(void) printf("\tTEXSPECIAL = \"%s\"\n", "()[]{}<>\\$*.%");
		(void) printf("\t!TRUNCATEBAK\n");
		(void) printf("\t!USESH\n");
		(void) printf("\tWORDS = \"%s\"\n", "/usr/dict/words");
		(void) printf("\tYACC = \"%s\"\n", "yacc");
	    }
	    exit(0);
	    break;
	case 'n':
	    if (arglen > 2)
		usage();
	    tflag = 0;
	    deftflag = 0;
	    if (preftype == ((void *) 0))
		preftype = "nroff";
	    break;
	case 't':
	    if (arglen > 2)
		usage();
	    tflag = 1;
	    deftflag = 1;
	    if (preftype == ((void *) 0))
		preftype = "tex";
	    break;
	case 'T':
	    p = (*argv) + 2;
	    if (*p == '\0') {
		argv++;
		argc--;
		if (argc == 0)
		    usage();
		p = *argv;
	    }
	    preftype = p;
	    break;
	case 'A':
	    if (arglen > 2)
		usage();
	    incfileflag = 1;
	    aflag = 1;
	    break;
	case 'a':
	    if (arglen > 2)
		usage();
	    aflag++;
	    break;
	case 'D':
	    if (arglen > 2)
		usage();
	    dumpflag++;
	    nodictflag++;
	    break;
	case 'e':
	    if (arglen > 3)
		usage();
	    eflag = 1;
	    if ((*argv)[2] == 'e')
		eflag = 2;
	    else if ((*argv)[2] >= '1' && (*argv)[2] <= '4')
		eflag = (*argv)[2] - '0';
	    else if ((*argv)[2] != '\0')
		usage();
	    nodictflag++;
	    break;
	case 'c':
	    if (arglen > 2)
		usage();
	    cflag++;
	    lflag++;
	    nodictflag++;
	    break;
	case 'b':
	    if (arglen > 2)
		usage();
	    xflag = 0;
	    break;
	case 'x':
	    if (arglen > 2)
		usage();
	    xflag = 1;
	    break;
	case 'f':
	    fflag++;
	    p = (*argv) + 2;
	    if (*p == '\0') {
		argv++;
		argc--;
		if (argc == 0)
		    usage();
		p = *argv;
	    }
	    askfilename = p;
	    if (*askfilename == '\0')
		askfilename = ((void *) 0);
	    break;
	case 'L':
	    p = (*argv) + 2;
	    if (*p == '\0') {
		argv++;
		argc--;
		if (argc == 0)
		    usage();
		p = *argv;
	    }
	    contextsize = atoi(p);
	    break;
	case 'l':
	    if (arglen > 2)
		usage();
	    lflag++;
	    break;
	case 's':
	    if (arglen > 2)
		usage();
	    sflag++;
	    break;
	case 'S':
	    if (arglen > 2)
		usage();
	    sortit = 0;
	    break;
	case 'B':
	    if (arglen > 2)
		usage();
	    compoundflag = 0;
	    break;
	case 'C':
	    if (arglen > 2)
		usage();
	    compoundflag = 1;
	    break;
	case 'P':
	    if (arglen > 2)
		usage();
	    tryhardflag = 0;
	    break;
	case 'm':
	    if (arglen > 2)
		usage();
	    tryhardflag = 1;
	    break;
	case 'N':
	    if (arglen > 2)
		usage();
	    minimenusize = 0;
	    break;
	case 'M':
	    if (arglen > 2)
		usage();
	    minimenusize = 2;
	    break;
	case 'p':
	    cpd = (*argv) + 2;
	    if (*cpd == '\0') {
		argv++;
		argc--;
		if (argc == 0)
		    usage();
		cpd = *argv;
		if (*cpd == '\0')
		    cpd = ((void *) 0);
	    }
	    LibDict = ((void *) 0);
	    break;
	case 'd':
	    p = (*argv) + 2;
	    if (*p == '\0') {
		argv++;
		argc--;
		if (argc == 0)
		    usage();
		p = *argv;
	    }
	    if (index(p, '/') != ((void *) 0))
		(void) strcpy(hashname, p);
	    else
		(void) sprintf(hashname, "%s/%s", ".", p);
	    if (cpd == ((void *) 0) && *p != '\0')
		LibDict = p;
	    p = rindex(p, '.');
	    if (p != ((void *) 0) && strcmp(p, ".hash") == 0)
		*p = '\0';
	    else
		(void) strcat(hashname, ".hash");
	    if (LibDict != ((void *) 0)) {
		p = rindex(LibDict, '/');
		if (p != ((void *) 0))
		    LibDict = p + 1;
	    }
	    break;
	case 'V':
	    if (arglen > 2)
		usage();
	    vflag = 1;
	    break;
	case 'w':
	    wchars = (*argv) + 2;
	    if (*wchars == '\0') {
		argv++;
		argc--;
		if (argc == 0)
		    usage();
		wchars = *argv;
	    }
	    break;
	case 'W':
	    if ((*argv)[2] == '\0') {
		argv++;
		argc--;
		if (argc == 0)
		    usage();
		minword = atoi(*argv);
	    } else
		minword = atoi(*argv + 2);
	    break;
	default:
	    usage();
	}
	argv++;
	argc--;
    }
    if (!argc && !lflag && !aflag && !eflag && !dumpflag)
	usage();
    for (argno = 0; argno < argc; argno++) {
	if (access(argv[argno], 4) >= 0)
	    break;
    }
    if (argno >= argc && !lflag && !aflag && !eflag && !dumpflag) {
	if (cbench_print)
	    fprintf(stderr, argc == 1 ? "ispell:  specified file does not exist\n" : "ispell:  specified files do not exist\n");
	exit(1);
    }
    if (linit() < 0)
	exit(1);
    if (preftype != ((void *) 0)) {
	prefstringchar = findfiletype(preftype, 1, deftflag < 0 ? &deftflag : (int *) ((void *) 0));
	if (prefstringchar < 0 && strcmp(preftype, "tex") != 0 && strcmp(preftype, "nroff") != 0) {
	    if (cbench_print)
		fprintf(stderr, "ispell:  unrecognized formatter type '%s'\n", preftype);
	    exit(1);
	}
    }
    if (prefstringchar < 0)
	defdupchar = 0;
    else
	defdupchar = prefstringchar;
    if (compoundflag < 0)
	compoundflag = hashheader.compoundflag;
    if (tryhardflag < 0)
	tryhardflag = hashheader.defhardflag;
    initckch(wchars);
    if (LibDict == ((void *) 0)) {
	(void) strcpy(libdictname, "english.hash");
	LibDict = libdictname;
	p = rindex(libdictname, '.');
	if (p != ((void *) 0) && strcmp(p, ".hash") == 0)
	    *p = '\0';
    }
    if (!nodictflag)
	treeinit(cpd, LibDict);
    if (aflag) {
	if ((loop_wrap = fopen("_finfo_dataset", "rt")) == ((void *) 0)) {
	    fprintf(stderr, "\nError: Can't find dataset!\n");
	    exit(1);
	}
	fscanf(loop_wrap, "%ld", &loop_wrap2);
	fclose(loop_wrap);
	for (loop_wrap1 = 0; loop_wrap1 < loop_wrap2; loop_wrap1++) {
	    cbench_print = (loop_wrap1 == (loop_wrap2 - 1));
	    if ((infile1 = fopen((*argv), "rt")) == ((void *) 0)) {
		fprintf(stderr, "\nError: Can't open input file!\n");
		exit(1);
	    }
	    if ((outfile1 = fopen("output.txt", "wt")) == ((void *) 0)) {
		fprintf(stderr, "\nError: Can't open input file!\n");
		exit(1);
	    }
	    askmode();
	    treeoutput();
	    fclose(infile1);
	    fclose(outfile1);
	} exit(0);
    } else if (eflag) {
	expandmode(eflag);
	exit(0);
    } else if (dumpflag) {
	dumpmode();
	exit(0);
    }
    setbuf(outfile1, outbuf);
    if (lflag) {
	infile = stdin;
	outfile = outfile1;
	checkfile();
	exit(0);
    }
    terminit();
    while (argc--)
	dofile(*argv++);
    done(0);
    return 0;
}

static void dofile(filename)
char *filename;
{
    struct stat statbuf;
    char *cp;
    currentfile = filename;
    tflag = deftflag;
    if (tflag < 0)
	tflag = (cp = rindex(filename, '.')) != ((void *) 0) && strcmp(cp, ".tex") == 0;
    if (prefstringchar < 0) {
	defdupchar = findfiletype(filename, 0, deftflag < 0 ? &tflag : (int *) ((void *) 0));
	if (defdupchar < 0)
	    defdupchar = 0;
    }
    if ((infile = fopen(filename, "r")) == ((void *) 0)) {
	if (cbench_print)
	    fprintf(stderr, "Can't open %s\r\n", filename);
	(void) sleep((unsigned) 2);
	return;
    }
    readonly = access(filename, 2) < 0;
    if (readonly) {
	if (cbench_print)
	    fprintf(stderr, "Warning:  Can't write to %s\r\n", filename);
	(void) sleep((unsigned) 2);
    }
    (void) fstat(fileno(infile), &statbuf);
    (void) strcpy(tempfile, "/tmp/ispellXXXXXX");
    if (mktemp(tempfile) == ((void *) 0) || tempfile[0] == '\0' || (outfile = fopen(tempfile, "w")) == ((void *) 0)) {
	if (cbench_print)
	    fprintf(stderr, "Can't create %s\r\n", (tempfile == ((void *) 0) || tempfile[0] == '\0') ? "temporary file" : tempfile);
	(void) sleep((unsigned) 2);
	return;
    }
    (void) chmod(tempfile, statbuf.st_mode);
    quit = 0;
    changes = 0;
    checkfile();
    (void) fclose(infile);
    (void) fclose(outfile);
    if (!cflag)
	treeoutput();
    if (changes && !readonly)
	update_file(filename, &statbuf);
    (void) unlink(tempfile);
} static void update_file(filename, statbuf)

char *filename;
struct stat *statbuf;
{
    char bakfile[4096];
    int c;
    char *pathtail;
    if ((infile = fopen(tempfile, "r")) == ((void *) 0)) {
	if (cbench_print)
	    fprintf(stderr, "temporary file disappeared (%s)\r\n", tempfile);
	(void) sleep((unsigned) 2);
	return;
    }
    (void) sprintf(bakfile, "%.*s%s", (int) (sizeof bakfile - sizeof ".bak"), filename, ".bak");
    pathtail = rindex(bakfile, '/');
    if (pathtail == ((void *) 0))
	pathtail = bakfile;
    else
	pathtail++;
    if (strncmp(filename, bakfile, pathtail - bakfile + 255) != 0)
	(void) unlink(bakfile);
    if (link(filename, bakfile) == 0)
	(void) unlink(filename);
    if ((outfile = fopen(filename, "w")) == ((void *) 0)) {
	if (cbench_print)
	    fprintf(stderr, "Can't create %s\r\n", filename);
	(void) sleep((unsigned) 2);
	return;
    }
    (void) chmod(filename, statbuf->st_mode);
    while ((c = _IO_getc(infile)) != (-1))
	(void) _IO_putc(c, outfile);
    (void) fclose(infile);
    (void) fclose(outfile);
    if (xflag && strncmp(filename, bakfile, pathtail - bakfile + 255) != 0)
	(void) unlink(bakfile);
} static void expandmode(option)

int option;
{
    char buf[8192];
    int explength;
    register char *flagp;
    ichar_t ibuf[8192];
    long mask[(32 / 32)];
    char origbuf[8192];
    char ratiobuf[20];
    int rootlength;
    register int temp;
    while (xgets(buf, sizeof buf, infile1) != ((void *) 0)) {
	rootlength = strlen(buf);
	if (buf[rootlength - 1] == '\n')
	    buf[--rootlength] = '\0';
	(void) strcpy(origbuf, buf);
	if ((flagp = index(buf, hashheader.flagmarker)) != ((void *) 0)) {
	    rootlength = flagp - buf;
	    *flagp++ = '\0';
	}
	if (option == 2 || option == 3 || option == 4)
	    (void) printf("%s ", origbuf);
	if (flagp != ((void *) 0)) {
	    if (flagp - buf > 100)
		buf[100] = '\0';
	} else {
	    if ((int) strlen(buf) > 100 - 1)
		buf[100] = '\0';
	} (void) fputs(buf, outfile1);
	if (flagp != ((void *) 0)) {
	    memset((char *) mask, 0, sizeof(mask));
	    while (*flagp != '\0' && *flagp != '\n') {
		temp = (((unsigned char) *flagp) - 'A');
		if (temp >= 0 && temp <= 26)
		    ((mask)[0] |= (long) 1 << (temp));
		else if (cbench_print)
		    fprintf(stderr, "\r\nIllegal affix flag character '%c'\r\n", (unsigned char) *flagp);
		flagp++;
		if (*flagp == hashheader.flagmarker)
		    flagp++;
	    }
	    if (strtoichar(ibuf, buf, sizeof ibuf, 1))
		if (cbench_print)
		    fprintf(stderr, "\r\nWord '%s' too long at line %d of %s, truncated\r\n", buf, 1040, "ispell.c");
	    explength = expand_pre(origbuf, ibuf, mask, option, "");
	    explength += expand_suf(origbuf, ibuf, mask, 0, option, "");
	    explength += rootlength;
	    if (option == 4) {
		(void) sprintf(ratiobuf, " %f", (double) explength / (double) rootlength);
		(void) fputs(ratiobuf, outfile1);
		(void) expand_pre(origbuf, ibuf, mask, 3, ratiobuf);
		(void) expand_suf(origbuf, ibuf, mask, 0, 3, ratiobuf);
	    }
	}
	(void) putchar('\n');
}}
