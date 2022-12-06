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
extern void __assert_fail(__const char *__assertion, __const char *__file, unsigned int __line, __const char *__function) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void __assert_perror_fail(int __errnum, __const char *__file, unsigned int __line, __const char *__function) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void __assert(const char *__assertion, const char *__file, int __line) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
typedef short word;
typedef long longword;
typedef unsigned short uword;
typedef unsigned long ulongword;
struct gsm_state {
    word dp0[280];
    word z1;
    longword L_z2;
    int mp;
    word u[8];
    word LARpp[2][8];
    word j;
    word nrp;
    word v[9];
    word msr;
    char verbose;
    char fast;
};
extern word gsm_mult(word a, word b);
extern longword gsm_L_mult(word a, word b);
extern word gsm_mult_r(word a, word b);
extern word gsm_div(word num, word denum);
extern word gsm_add(word a, word b);
extern longword gsm_L_add(longword a, longword b);
extern word gsm_sub(word a, word b);
extern longword gsm_L_sub(longword a, longword b);
extern word gsm_abs(word a);
extern word gsm_norm(longword a);
extern longword gsm_L_asl(longword a, int n);
extern word gsm_asl(word a, int n);
extern longword gsm_L_asr(longword a, int n);
extern word gsm_asr(word a, int n);
extern void Gsm_Coder(struct gsm_state *S, word * s, word * LARc, word * Nc, word * bc, word * Mc, word * xmaxc, word * xMc);
extern void Gsm_Long_Term_Predictor(struct gsm_state *S, word * d, word * dp, word * e, word * dpp, word * Nc, word * bc);
extern void Gsm_LPC_Analysis(struct gsm_state *S, word * s, word * LARc);
extern void Gsm_Preprocess(struct gsm_state *S, word * s, word * so);
extern void Gsm_Encoding(struct gsm_state *S, word * e, word * ep, word * xmaxc, word * Mc, word * xMc);
extern void Gsm_Short_Term_Analysis_Filter(struct gsm_state *S, word * LARc, word * d);
extern void Gsm_Decoder(struct gsm_state *S, word * LARcr, word * Ncr, word * bcr, word * Mcr, word * xmaxcr, word * xMcr, word * s);
extern void Gsm_Decoding(struct gsm_state *S, word xmaxcr, word Mcr, word * xMcr, word * erp);
extern void Gsm_Long_Term_Synthesis_Filtering(struct gsm_state *S, word Ncr, word bcr, word * erp, word * drp);
void Gsm_RPE_Decoding(struct gsm_state *S, word xmaxcr, word Mcr, word * xMcr, word * erp);
void Gsm_RPE_Encoding(struct gsm_state *S, word * e, word * xmaxc, word * Mc, word * xMc);
extern void Gsm_Short_Term_Synthesis_Filter(struct gsm_state *S, word * LARcr, word * drp, word * s);
extern void Gsm_Update_of_reconstructed_short_time_residual_signal(word * dpp, word * ep, word * dp);
extern word gsm_A[8], gsm_B[8], gsm_MIC[8], gsm_MAC[8];
extern word gsm_INVA[8];
extern word gsm_DLB[4], gsm_QLB[4];
extern word gsm_H[11];
extern word gsm_NRFAC[8];
extern word gsm_FAC[8];
extern void gsm_debug_words(char *name, int, int, word *);
extern void gsm_debug_longwords(char *name, int, int, longword *);
extern void gsm_debug_longword(char *name, longword);
extern void gsm_debug_word(char *name, word);
typedef struct gsm_state *gsm;
typedef short gsm_signal;
typedef unsigned char gsm_byte;
typedef gsm_byte gsm_frame[33];
extern gsm gsm_create(void);
extern void gsm_destroy(gsm);
extern int gsm_print(FILE *, gsm, gsm_byte *);
extern int gsm_option(gsm, int, int *);
extern void gsm_encode(gsm, gsm_signal *, gsm_byte *);
extern int gsm_decode(gsm, gsm_byte *, gsm_signal *);
extern int gsm_explode(gsm, gsm_byte *, gsm_signal *);
extern void gsm_implode(gsm, gsm_signal *, gsm_byte *);
static void Calculation_of_the_LTP_parameters(register word * d, register word * dp, word * bc_out, word * Nc_out)
{
    register int k, lambda;
    word Nc, bc;
    word wt[40];
    longword L_max, L_power;
    word R, S, dmax, scal;
    register word temp;
    dmax = 0;
    for (k = 0; k <= 39; k++) {
	temp = d[k];
	temp = ((temp) < 0 ? ((temp) == ((-32767) - 1) ? (32767) : -(temp)) : (temp));
	if (temp > dmax)
	    dmax = temp;
    }
    temp = 0;
    if (dmax == 0)
	scal = 0;
    else {
	((dmax > 0) ? (void) (0) : __assert_fail("dmax > 0", "long_term.c", 101, __PRETTY_FUNCTION__));
	temp = gsm_norm((longword) dmax << 16);
    } if (temp > 6)
	scal = 0;
    else
	scal = 6 - temp;
    ((scal >= 0) ? (void) (0) : __assert_fail("scal >= 0", "long_term.c", 108, __PRETTY_FUNCTION__));
    for (k = 0; k <= 39; k++)
	wt[k] = ((d[k]) >> (scal));
    L_max = 0;
    Nc = 40;
    for (lambda = 40; lambda <= 120; lambda++) {
	register longword L_result;
	L_result = (wt[0] * dp[0 - lambda]);
	L_result += (wt[1] * dp[1 - lambda]);
	L_result += (wt[2] * dp[2 - lambda]);
	L_result += (wt[3] * dp[3 - lambda]);
	L_result += (wt[4] * dp[4 - lambda]);
	L_result += (wt[5] * dp[5 - lambda]);
	L_result += (wt[6] * dp[6 - lambda]);
	L_result += (wt[7] * dp[7 - lambda]);
	L_result += (wt[8] * dp[8 - lambda]);
	L_result += (wt[9] * dp[9 - lambda]);
	L_result += (wt[10] * dp[10 - lambda]);
	L_result += (wt[11] * dp[11 - lambda]);
	L_result += (wt[12] * dp[12 - lambda]);
	L_result += (wt[13] * dp[13 - lambda]);
	L_result += (wt[14] * dp[14 - lambda]);
	L_result += (wt[15] * dp[15 - lambda]);
	L_result += (wt[16] * dp[16 - lambda]);
	L_result += (wt[17] * dp[17 - lambda]);
	L_result += (wt[18] * dp[18 - lambda]);
	L_result += (wt[19] * dp[19 - lambda]);
	L_result += (wt[20] * dp[20 - lambda]);
	L_result += (wt[21] * dp[21 - lambda]);
	L_result += (wt[22] * dp[22 - lambda]);
	L_result += (wt[23] * dp[23 - lambda]);
	L_result += (wt[24] * dp[24 - lambda]);
	L_result += (wt[25] * dp[25 - lambda]);
	L_result += (wt[26] * dp[26 - lambda]);
	L_result += (wt[27] * dp[27 - lambda]);
	L_result += (wt[28] * dp[28 - lambda]);
	L_result += (wt[29] * dp[29 - lambda]);
	L_result += (wt[30] * dp[30 - lambda]);
	L_result += (wt[31] * dp[31 - lambda]);
	L_result += (wt[32] * dp[32 - lambda]);
	L_result += (wt[33] * dp[33 - lambda]);
	L_result += (wt[34] * dp[34 - lambda]);
	L_result += (wt[35] * dp[35 - lambda]);
	L_result += (wt[36] * dp[36 - lambda]);
	L_result += (wt[37] * dp[37 - lambda]);
	L_result += (wt[38] * dp[38 - lambda]);
	L_result += (wt[39] * dp[39 - lambda]);
	if (L_result > L_max) {
	    Nc = lambda;
	    L_max = L_result;
	}
    }
    *Nc_out = Nc;
    L_max <<= 1;
    ((scal <= 100 && scal >= -100) ? (void) (0) : __assert_fail("scal <= 100 && scal >= -100", "long_term.c", 165, __PRETTY_FUNCTION__));
    L_max = L_max >> (6 - scal);
    ((Nc <= 120 && Nc >= 40) ? (void) (0) : __assert_fail("Nc <= 120 && Nc >= 40", "long_term.c", 168, __PRETTY_FUNCTION__));
    L_power = 0;
    for (k = 0; k <= 39; k++) {
	register longword L_temp;
	L_temp = ((dp[k - Nc]) >> (3));
	L_power += L_temp * L_temp;
    } L_power <<= 1;
    if (L_max <= 0) {
	*bc_out = 0;
	return;
    }
    if (L_max >= L_power) {
	*bc_out = 3;
	return;
    }
    temp = gsm_norm(L_power);
    R = ((L_max << temp) >> (16));
    S = ((L_power << temp) >> (16));
    for (bc = 0; bc <= 2; bc++)
	if (R <= gsm_mult(S, gsm_DLB[bc]))
	    break;
    *bc_out = bc;
}

static void Long_term_analysis_filtering(word bc, word Nc, register word * dp, register word * d, register word * dpp, register word * e)
{
    register int k;
    register longword ltmp;
    switch (bc) {
    case 0:
	for (k = 0; k <= 39; k++) {
	    dpp[k] = (((((longword) (3277) * (longword) (dp[k - Nc]) + 16384)) >> (15)));
	    e[k] = ((ltmp = (longword) (d[k]) - (longword) (dpp[k])) >= (32767) ? (32767) : ltmp <= ((-32767) - 1) ? ((-32767) - 1) : ltmp);
	};
	break;
    case 1:
	for (k = 0; k <= 39; k++) {
	    dpp[k] = (((((longword) (11469) * (longword) (dp[k - Nc]) + 16384)) >> (15)));
	    e[k] = ((ltmp = (longword) (d[k]) - (longword) (dpp[k])) >= (32767) ? (32767) : ltmp <= ((-32767) - 1) ? ((-32767) - 1) : ltmp);
	};
	break;
    case 2:
	for (k = 0; k <= 39; k++) {
	    dpp[k] = (((((longword) (21299) * (longword) (dp[k - Nc]) + 16384)) >> (15)));
	    e[k] = ((ltmp = (longword) (d[k]) - (longword) (dpp[k])) >= (32767) ? (32767) : ltmp <= ((-32767) - 1) ? ((-32767) - 1) : ltmp);
	};
	break;
    case 3:
	for (k = 0; k <= 39; k++) {
	    dpp[k] = (((((longword) (32767) * (longword) (dp[k - Nc]) + 16384)) >> (15)));
	    e[k] = ((ltmp = (longword) (d[k]) - (longword) (dpp[k])) >= (32767) ? (32767) : ltmp <= ((-32767) - 1) ? ((-32767) - 1) : ltmp);
	};
	break;
    }
}

void Gsm_Long_Term_Predictor(struct gsm_state *S, word * d, word * dp, word * e, word * dpp, word * Nc, word * bc)
{
    ((d) ? (void) (0) : __assert_fail("d", "long_term.c", 545, __PRETTY_FUNCTION__));
    ((dp) ? (void) (0) : __assert_fail("dp", "long_term.c", 545, __PRETTY_FUNCTION__));
    ((e) ? (void) (0) : __assert_fail("e", "long_term.c", 545, __PRETTY_FUNCTION__));
    ((dpp) ? (void) (0) : __assert_fail("dpp", "long_term.c", 546, __PRETTY_FUNCTION__));
    ((Nc) ? (void) (0) : __assert_fail("Nc", "long_term.c", 546, __PRETTY_FUNCTION__));
    ((bc) ? (void) (0) : __assert_fail("bc", "long_term.c", 546, __PRETTY_FUNCTION__));
    Calculation_of_the_LTP_parameters(d, dp, bc, Nc);
    Long_term_analysis_filtering(*bc, *Nc, dp, d, dpp, e);
} void Gsm_Long_Term_Synthesis_Filtering(struct gsm_state *S, word Ncr, word bcr, register word * erp, register word * drp)
{
    register longword ltmp;
    register int k;
    word brp, drpp, Nr;
    Nr = Ncr < 40 || Ncr > 120 ? S->nrp : Ncr;
    S->nrp = Nr;
    ((Nr >= 40 && Nr <= 120) ? (void) (0) : __assert_fail("Nr >= 40 && Nr <= 120", "long_term.c", 581, __PRETTY_FUNCTION__));
    brp = gsm_QLB[bcr];
    ((brp != ((-32767) - 1)) ? (void) (0) : __assert_fail("brp != ((-32767)-1)", "long_term.c", 590, __PRETTY_FUNCTION__));
    for (k = 0; k <= 39; k++) {
	drpp = (((((longword) (brp) * (longword) (drp[k - Nr]) + 16384)) >> (15)));
	drp[k] = ((ulongword) ((ltmp = (longword) (erp[k]) + (longword) (drpp)) - ((-32767) - 1)) > (32767) - ((-32767) - 1) ? (ltmp > 0 ? (32767) : ((-32767) - 1)) : ltmp);
    }
    for (k = 0; k <= 119; k++)
	drp[-120 + k] = drp[-80 + k];
}
