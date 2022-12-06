typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
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
int randomprime(unitptr p, short nbits);
void mp_gcd(unitptr result, unitptr a, unitptr n);
void mp_inv(unitptr x, unitptr a, unitptr n);
int rsa_keygen(unitptr n, unitptr e, unitptr d, unitptr p, unitptr q, unitptr u, short keybits, short ebits);
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
extern char signon_legalese[];
int rsa_public_encrypt(unitptr outbuf, byteptr inbuf, short bytes, unitptr E, unitptr N);
int rsa_private_encrypt(unitptr outbuf, byteptr inbuf, short bytes, unitptr E, unitptr D, unitptr P, unitptr Q, unitptr U, unitptr N);
int rsa_public_decrypt(byteptr outbuf, unitptr inbuf, unitptr E, unitptr N);
int rsa_private_decrypt(byteptr outbuf, unitptr inbuf, unitptr E, unitptr D, unitptr P, unitptr Q, unitptr U, unitptr N);
static void derive_rsakeys(unitptr n, unitptr e, unitptr d, unitptr p, unitptr q, unitptr u, short ebits);
static void derive_rsakeys(unitptr n, unitptr e, unitptr d, unitptr p, unitptr q, unitptr u, short ebits)
{
    unit F[((2048 + (2 * 16)) / 16)];
    unitptr ptemp, qtemp, phi, G;
    ptemp = d;
    qtemp = u;
    phi = n;
    G = F;
    if (mp_compare(p, q) >= 0) {
	unitptr t;
	t = p;
	p = q;
	q = t;
    };
    memcpy((void *) (ptemp), (void *) (p), ((global_precision) << 1));
    memcpy((void *) (qtemp), (void *) (q), ((global_precision) << 1));
    mp_dec(ptemp);
    mp_dec(qtemp);
    mp_mult(phi, ptemp, qtemp);
    mp_gcd(G, ptemp, qtemp);
    mp_udiv(ptemp, qtemp, phi, G);
    memcpy((void *) (F), (void *) (qtemp), ((global_precision) << 1));
    ebits = (((ebits) < (countbits(phi) - 1)) ? (ebits) : (countbits(phi) - 1));
    if (ebits == 0)
	ebits = 5;
    ebits = (((ebits) > (2)) ? (ebits) : (2));
    mp_init(e, 0);
    (*&((e)[(((((ebits - 1) + 1) + 15) >> 4) - 1)]) |= ((unit) 1 << ((ebits - 1) & (16 - 1))));
    (*(e)) |= 1;
    mp_dec(e);
    mp_dec(e);
    do {
	mp_inc(e);
	mp_inc(e);
	mp_gcd(ptemp, e, phi);
    } while ((((*(ptemp)) != (1)) || (significance(ptemp) > 1)));
    mp_inv(d, e, F);
    mp_inv(u, p, q);
    mp_mult(n, p, q);
    mp_init(F, 0);
}

int rsa_keygen(unitptr n, unitptr e, unitptr d, unitptr p, unitptr q, unitptr u, short keybits, short ebits)
{
    short pbits, qbits;
    boolean too_close_together;
    int status;
    int slop;
    slop = (((0) > (1)) ? (0) : (1));
    keybits = (((keybits) < (((2048 + (2 * 16)) - slop))) ? (keybits) : (((2048 + (2 * 16)) - slop)));
    keybits = (((keybits) > (16 * 2)) ? (keybits) : (16 * 2));
    keybits = (((keybits) > (32)) ? (keybits) : (32));
    (global_precision = ((((keybits + slop) + 15) >> 4)));
    trueRandAccum(keybits + 2 * 16);
    pbits = keybits / 2;
    qbits = keybits - pbits;
    trueRandConsume(pbits);
    status = randomprime(p, pbits);
    if (status < 0)
	return (status);
    qbits = keybits - countbits(p);
    trueRandConsume(qbits);
    do {
	status = randomprime(q, qbits);
	if (status < 0)
	    return (status);
	if (mp_compare(p, q) >= 0) {
	    memcpy((void *) (u), (void *) (p), ((global_precision) << 1));
	    memcpy((void *) (p), (void *) (q), ((global_precision) << 1));
	    memcpy((void *) (q), (void *) (u), ((global_precision) << 1));
	}
	memcpy((void *) (u), (void *) (q), ((global_precision) << 1));
	mp_subb(u, p, (boolean) 0);
	too_close_together = (countbits(u) < (countbits(q) - 7));
    } while (too_close_together);
    derive_rsakeys(n, e, d, p, q, u, ebits);
    trueRandFlush(); {
	unit C[((2048 + (2 * 16)) / 16)];
	int i;
	for (i = 0; i < 16; i++)
	    ((byte *) C)[i] = 3 * i + 7;
	status = rsa_private_encrypt(C, (byte *) C, 16, e, d, p, q, u, n);
	if (status < 0)
	    return status;
	status = rsa_public_decrypt((byte *) C, C, e, n);
	if (status < 0)
	    return status;
	if (status != 16)
	    return -15;
	for (i = 0; i < 16; i++)
	    if (((byte *) C)[i] != 3 * i + 7)
		return -15;
    }
    return 0;
}
