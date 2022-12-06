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
typedef unsigned short MULTUNIT;
void mp_smul(MULTUNIT * prod, MULTUNIT * multiplicand, MULTUNIT multiplier);
void mp_dmul(unitptr prod, unitptr multiplicand, unitptr multiplier);
short global_precision = 0;
typedef unsigned long int ulint;
boolean mp_addc(register unitptr r1, register unitptr r2, register boolean carry)
{
    register unit x;
    short precision;
    precision = global_precision;;;
    while (precision--) {
	if (carry) {
	    x = *r1 + *r2 + 1;
	    carry = (*r2 >= (unit) (~*r1));
	} else {
	    x = *r1 + *r2;
	    carry = (x < *r1);
	}
	((r2)++);
	*((r1)++) = x;
    }
    return carry;
}

boolean mp_subb(register unitptr r1, register unitptr r2, register boolean borrow)
{
    register unit x;
    short precision;
    precision = global_precision;;;
    while (precision--) {
	if (borrow) {
	    x = *r1 - *r2 - 1;
	    borrow = (*r1 <= *r2);
	} else {
	    x = *r1 - *r2;
	    borrow = (*r1 < *r2);
	}
	((r2)++);
	*((r1)++) = x;
    }
    return borrow;
}

boolean mp_rotate_left(register unitptr r1, register boolean carry)
{
    register int precision;
    unsigned int mcarry = carry, nextcarry;
    precision = global_precision;;
    while (precision--) {
	nextcarry = (((signedunit) * r1) < 0);
	*r1 = (*r1 << 1) | mcarry;
	mcarry = nextcarry;
	(++(r1));
    }
    return nextcarry;
}

void mp_shift_right_bits(register unitptr r1, register short bits)
{
    register short precision;
    register unit carry, nextcarry, bitmask;
    register short unbits;
    if (bits == 0)
	return;
    carry = 0;
    bitmask = ((unit) 1 << (bits)) - 1;
    unbits = 16 - bits;
    precision = global_precision;
    (r1) = ((r1) + (precision) - 1);
    if (bits == 16) {
	while (precision--) {
	    nextcarry = *r1;
	    *r1 = carry;
	    carry = nextcarry;
	    (--(r1));
	}
    } else {
	while (precision--) {
	    nextcarry = *r1 & bitmask;
	    *r1 >>= bits;
	    *r1 |= carry << unbits;
	    carry = nextcarry;
	    (--(r1));
	}
    }
}

short mp_compare(register unitptr r1, register unitptr r2)
{
    register short precision;
    precision = global_precision;
    (r1) = ((r1) + (precision) - 1);
    (r2) = ((r2) + (precision) - 1);
    do {
	if (*r1 < *r2)
	    return -1;
	if (*((r1)--) > *((r2)--))
	    return 1;
    } while (--precision);
    return 0;
}

boolean mp_inc(register unitptr r)
{
    register short precision;
    precision = global_precision;;
    do {
	if (++(*r))
	    return 0;
	((r)++);
    } while (--precision);
    return 1;
}

boolean mp_dec(register unitptr r)
{
    register short precision;
    precision = global_precision;;
    do {
	if ((signedunit) (--(*r)) != (signedunit) - 1)
	    return 0;
	((r)++);
    } while (--precision);
    return 1;
}

void mp_neg(register unitptr r)
{
    register short precision;
    precision = global_precision;
    mp_dec(r);
    do {
	*r = ~(*r);
	r++;
    } while (--precision);
}

void mp_init(register unitptr r, word16 value)
{
    memset((void *) (r), 0, ((global_precision) << 1));;
    *((r)++) = value;
} short significance(register unitptr r)
{
    register short precision;
    precision = global_precision;
    (r) = ((r) + (precision) - 1);
    do {
	if (*((r)--))
	    return precision;
    } while (--precision);
    return precision;
}

int mp_udiv(register unitptr remainder, register unitptr quotient, register unitptr dividend, register unitptr divisor)
{
    int bits;
    short dprec;
    register unit bitmask;
    if ((((*(divisor)) == (0)) && (significance(divisor) <= 1)))
	return -1;
    mp_init(remainder, 0);
    mp_init(quotient, 0); {
	dprec = significance(dividend);
	if (!dprec)
	    return (0);
	bits = ((dprec) << 4);
	(dividend) = ((dividend) + (dprec) - 1);
	bitmask = ((unit) 0x8000);
	while (!(*(dividend) & bitmask)) {
	    bitmask >>= 1;
	    bits--;
	}
    };;
    (quotient) = ((quotient) + (dprec) - 1);
    while (bits--) {
	mp_rotate_left(remainder, (boolean) ((*(dividend) & bitmask) != 0));
	if (mp_compare(remainder, divisor) >= 0) {
	    mp_subb(remainder, divisor, (boolean) 0);
	    *(quotient) |= bitmask;
	}
	{
	    if (!(bitmask >>= 1)) {
		bitmask = ((unit) 0x8000);
		((dividend)--);
		((quotient)--);
	    }
	};
    }
    return 0;
}

int mp_recip(register unitptr quotient, register unitptr divisor)
{
    int bits;
    short qprec;
    register unit bitmask;
    unit remainder[((2048 + (2 * 16)) / 16)];
    if ((((*(divisor)) == (0)) && (significance(divisor) <= 1)))
	return -1;
    mp_init(remainder, 0);
    mp_init(quotient, 0);
    bits = countbits(divisor) + 0;
    bitmask = ((unit) 1 << ((bits) & (16 - 1)));
    qprec = (((bits + 1) + 15) >> 4);
    (*&((remainder)[((((((bits - 0) - 1) + 1) + 15) >> 4) - 1)]) |= ((unit) 1 << (((bits - 0) - 1) & (16 - 1))));;
    (quotient) = ((quotient) + (qprec) - 1);
    while (bits--) {
	mp_rotate_left(remainder, (boolean) 0);
	if (mp_compare(remainder, divisor) >= 0) {
	    mp_subb(remainder, divisor, (boolean) 0);
	    *(quotient) |= bitmask;
	}
	{
	    if (!(bitmask >>= 1)) {
		bitmask = ((unit) 0x8000);
		((quotient)--);
	    }
	};
    }
    mp_init(remainder, 0);
    return 0;
}

int mp_div(register unitptr remainder, register unitptr quotient, register unitptr dividend, register unitptr divisor)
{
    boolean dvdsign, dsign;
    int status;
    dvdsign = (boolean) (((signedunit) (*((dividend) + (global_precision) - 1)) < 0) != 0);
    dsign = (boolean) (((signedunit) (*((divisor) + (global_precision) - 1)) < 0) != 0);
    if (dvdsign)
	mp_neg(dividend);
    if (dsign)
	mp_neg(divisor);
    status = mp_udiv(remainder, quotient, dividend, divisor);
    if (dvdsign)
	mp_neg(dividend);
    if (dsign)
	mp_neg(divisor);
    if (status < 0)
	return status;
    if (dvdsign)
	mp_neg(remainder);
    if (dvdsign ^ dsign)
	mp_neg(quotient);
    return status;
}

word16 mp_shortdiv(register unitptr quotient, register unitptr dividend, register word16 divisor)
{
    int bits;
    short dprec;
    register unit bitmask;
    register word16 remainder;
    if (!divisor)
	return -1;
    remainder = 0;
    mp_init(quotient, 0); {
	dprec = significance(dividend);
	if (!dprec)
	    return (0);
	bits = ((dprec) << 4);
	(dividend) = ((dividend) + (dprec) - 1);
	bitmask = ((unit) 0x8000);
	while (!(*(dividend) & bitmask)) {
	    bitmask >>= 1;
	    bits--;
	}
    };;
    (quotient) = ((quotient) + (dprec) - 1);
    while (bits--) {
	remainder <<= 1;
	if ((*(dividend) & bitmask))
	    remainder++;
	if (remainder >= divisor) {
	    remainder -= divisor;
	    *(quotient) |= bitmask;
	}
	{
	    if (!(bitmask >>= 1)) {
		bitmask = ((unit) 0x8000);
		((dividend)--);
		((quotient)--);
	    }
	};
    }
    return remainder;
}

int mp_mod(register unitptr remainder, register unitptr dividend, register unitptr divisor)
{
    int bits;
    short dprec;
    register unit bitmask;
    if ((((*(divisor)) == (0)) && (significance(divisor) <= 1)))
	return -1;
    mp_init(remainder, 0); {
	dprec = significance(dividend);
	if (!dprec)
	    return (0);
	bits = ((dprec) << 4);
	(dividend) = ((dividend) + (dprec) - 1);
	bitmask = ((unit) 0x8000);
	while (!(*(dividend) & bitmask)) {
	    bitmask >>= 1;
	    bits--;
	}
    };
    while (bits--) {
	mp_rotate_left(remainder, (boolean) ((*(dividend) & bitmask) != 0));
	if (mp_compare(remainder, divisor) >= 0)
	    mp_subb(remainder, divisor, (boolean) 0); {
	    if (!(bitmask >>= 1)) {
		bitmask = ((unit) 0x8000);
		((dividend)--);
	    }
	    };
    }
    return 0;
}

word16 mp_shortmod(register unitptr dividend, register word16 divisor)
{
    int bits;
    short dprec;
    register unit bitmask;
    register word16 remainder;
    if (!divisor)
	return -1;
    remainder = 0; {
	dprec = significance(dividend);
	if (!dprec)
	    return (0);
	bits = ((dprec) << 4);
	(dividend) = ((dividend) + (dprec) - 1);
	bitmask = ((unit) 0x8000);
	while (!(*(dividend) & bitmask)) {
	    bitmask >>= 1;
	    bits--;
	}
    };
    while (bits--) {
	remainder <<= 1;
	if ((*(dividend) & bitmask))
	    remainder++;
	if (remainder >= divisor)
	    remainder -= divisor; {
	    if (!(bitmask >>= 1)) {
		bitmask = ((unit) 0x8000);
		((dividend)--);
	    }
	    };
    }
    return remainder;
}

int mp_mult(register unitptr prod, register unitptr multiplicand, register unitptr multiplier)
{
    int bits;
    register unit bitmask;
    short mprec;
    mp_init(prod, 0);
    if ((((*(multiplicand)) == (0)) && (significance(multiplicand) <= 1)))
	return 0; {
	mprec = significance(multiplier);
	if (!mprec)
	    return (0);
	bits = ((mprec) << 4);
	(multiplier) = ((multiplier) + (mprec) - 1);
	bitmask = ((unit) 0x8000);
	while (!(*(multiplier) & bitmask)) {
	    bitmask >>= 1;
	    bits--;
	}
	};
	while (bits--) {
	    mp_rotate_left(prod, (boolean) 0);
	    if ((*(multiplier) & bitmask))
		mp_addc(prod, multiplicand, (boolean) 0); {
		if (!(bitmask >>= 1)) {
		    bitmask = ((unit) 0x8000);
		    ((multiplier)--);
		}
		};
	}
	return 0;
}

short munit_prec;
void mp_smul(MULTUNIT * prod, MULTUNIT * multiplicand, MULTUNIT multiplier)
{
    short i;
    unsigned long p, carry;
    carry = 0;
    for (i = 0; i < munit_prec; ++i) {
	p = (unsigned long) multiplier **((multiplicand)++);
	p += *prod + carry;
	*((prod)++) = (MULTUNIT) p;
	carry = p >> 16;
    } *prod += (MULTUNIT) carry;
} void mp_dmul(unitptr prod, unitptr multiplicand, unitptr multiplier)
{
    register int i;
    register MULTUNIT *p_multiplicand, *p_multiplier;
    register MULTUNIT *prodp;
    memset((void *) (prod), 0, ((global_precision * 2) << 1));
    munit_prec = global_precision * 16 / 16;
    p_multiplicand = (MULTUNIT *) multiplicand;
    p_multiplier = (MULTUNIT *) multiplier;
    prodp = (MULTUNIT *) prod;;;;
    for (i = 0; i < munit_prec; ++i)
	mp_smul(((prodp)++), p_multiplicand, *((p_multiplier)++));
}

static unit modulus[((2048 + (2 * 16)) / 16)];
static short nbits;
static unit ds_data[((2048 + (2 * 16)) / 16) * 2 + 2];
static unit mod_quotient[4];
static unit mod_divisor[4];
static MULTUNIT *modmpl;
static int mshift;
static MULTUNIT reciph;
static MULTUNIT recipl;
static short modlenMULTUNITS;
static MULTUNIT mutemp;
MULTUNIT mp_quo_digit(MULTUNIT * dividend);
MULTUNIT mp_quo_digit(MULTUNIT * dividend)
{
    unsigned long q, q0, q1, q2;
    unsigned short lsb_factor;
    q1 = (dividend[(-2)] ^ ((MULTUNIT) ((1L << 16) - 1))) * (unsigned long) reciph + reciph;
    q2 = (dividend[(-1)] ^ ((MULTUNIT) ((1L << 16) - 1))) * (unsigned long) recipl + (1L << 16);
    q0 = (q1 >> 1) + (q2 >> 1) + 1;
    q1 = (dividend[(-1)] ^ ((MULTUNIT) ((1L << 16) - 1))) * (unsigned long) reciph;
    q2 = (dividend[0] ^ ((MULTUNIT) ((1L << 16) - 1))) * (unsigned long) recipl;
    q = (q0 >> 16) + (q1 >> 1) + (q2 >> 1) + 1;
    q = (q >> (16 - 2)) + (((dividend[0] ^ ((MULTUNIT) ((1L << 16) - 1))) * (unsigned long) reciph) << 1);
    q >>= mshift;
    mutemp = (MULTUNIT) (((q) < ((1L << 16) - 1)) ? (q) : ((1L << 16) - 1));
    q = q0 = q1 = q2 = 0;
    lsb_factor = 0;
    (void) lsb_factor;
    return mutemp;
}

int stage_smith_modulus(unitptr n_modulus)
{
    int original_precision;
    int sigmod;
    unitptr mp;
    MULTUNIT *mpm;
    int prec;
    memcpy((void *) (modulus), (void *) (n_modulus), ((global_precision) << 1));
    modmpl = (MULTUNIT *) modulus;
    modmpl = (modmpl);
    nbits = countbits(modulus);
    modlenMULTUNITS = (nbits + 16 - 1) / 16;
    original_precision = global_precision;
    mp = modulus;
    sigmod = significance(modulus);;
    prec = (3 + ((16 / 16) - 1)) / (16 / 16);
    (global_precision = (prec));
    mp = ((mp) + (sigmod) - 1) - (prec - 1);;
    memcpy((void *) (mod_divisor), (void *) (mp), ((global_precision) << 1));
    mshift = countbits(mod_divisor) - 2 * 16;
    mp_shift_right_bits(mod_divisor, mshift);
    mp_recip(mod_quotient, mod_divisor);
    mp_shift_right_bits(mod_quotient, 1);
    mshift = ((mshift + (16 - 1)) % 16) + 1;
    mp_inc(mod_quotient);
    if (countbits(mod_quotient) > 2 * 16) {
	mp_shift_right_bits(mod_quotient, 1);
	mshift--;
    }
    mpm = ((MULTUNIT *) mod_quotient);
    recipl = *((mpm)++);
    reciph = *mpm;;
    (global_precision = (original_precision));
    return 0;
}

int smith_modmult(unitptr prod, unitptr multiplicand, unitptr multiplier)
{
    unitptr d;
    MULTUNIT *dmph, *dmpl, *dmp;
    short orig_precision;
    short nqd;
    short dmi;
    d = ds_data + 1;
    orig_precision = global_precision;
    mp_dmul(d, multiplicand, multiplier);;
    (global_precision = (orig_precision * 2 + 1));
    *((d) + (global_precision) - 1) = 0;
    dmi = significance(d) * (16 / 16);
    if (dmi >= modlenMULTUNITS) {
	mp_inc(d);
	mp_neg(d);
	(global_precision = (orig_precision));
	munit_prec = global_precision * 16 / 16;
	dmph = ((MULTUNIT *) d) + (dmi);
	nqd = dmi + 1 - modlenMULTUNITS;
	dmpl = dmph - (modlenMULTUNITS);
	for (; nqd; nqd--) {
	    MULTUNIT q;
	    q = mp_quo_digit(dmph);
	    if (q > 0) {
		mp_smul(dmpl, modmpl, q);
		if (!(*dmph & ((MULTUNIT) 1 << (16 - 1)))) {
		    dmp = dmpl;;
		    if (mp_subb(dmp, (MULTUNIT *) modulus, 0))
			(*dmph)--;
		}
	    }
	    (--(dmph));
	    (--(dmpl));
	};
	(global_precision = (orig_precision));
	mp_neg(d);
	mp_dec(d);
    } else {;
	(global_precision = (orig_precision));
    }
    memcpy((void *) (prod), (void *) (d), ((global_precision) << 1));
    return (0);
}

void smith_burn(void)
{
    memset((void *) (modulus), 0, ((sizeof(modulus) / sizeof(modulus[0]) / sizeof(unit)) << 1));
    memset((void *) (ds_data), 0, ((sizeof(ds_data) / sizeof(ds_data[0]) / sizeof(unit)) << 1));
    memset((void *) (mod_quotient), 0, ((sizeof(mod_quotient) / sizeof(mod_quotient[0]) / sizeof(unit)) << 1));
    memset((void *) (mod_divisor), 0, ((sizeof(mod_divisor) / sizeof(mod_divisor[0]) / sizeof(unit)) << 1));
    modmpl = 0;
    mshift = nbits = 0;
    reciph = recipl = 0;
    modlenMULTUNITS = mutemp = 0;;
}

int countbits(unitptr r)
{
    int bits;
    short prec;
    register unit bitmask; {
	prec = significance(r);
	if (!prec)
	    return (0);
	bits = ((prec) << 4);
	(r) = ((r) + (prec) - 1);
	bitmask = ((unit) 0x8000);
	while (!(*(r) & bitmask)) {
	    bitmask >>= 1;
	    bits--;
	}
    };
    return bits;
}

char *copyright_notice(void)
{
    return ("(c)1986 Philip Zimmermann");
}

int mp_modexp(register unitptr expout, register unitptr expin, register unitptr exponent, register unitptr modulus)
{
    int bits;
    short oldprecision;
    register unit bitmask;
    unit product[((2048 + (2 * 16)) / 16)];
    short eprec;
    mp_init(expout, 1);
    if ((((*(exponent)) == (0)) && (significance(exponent) <= 1))) {
	if ((((*(expin)) == (0)) && (significance(expin) <= 1)))
	    return -1;
	return 0;
    }
    if ((((*(modulus)) == (0)) && (significance(modulus) <= 1)))
	return -2;
    if (mp_compare(expin, modulus) >= 0)
	return -3;
    if (mp_compare(exponent, modulus) >= 0)
	return -4;
    oldprecision = global_precision;
    (global_precision = ((((countbits(modulus) + 0) + 15) >> 4)));;;;;
    if (stage_smith_modulus(modulus)) {
	(global_precision = (oldprecision));
	return -5;
    }
    {
	eprec = significance(exponent);
	if (!eprec)
	    return (0);
	bits = ((eprec) << 4);
	(exponent) = ((exponent) + (eprec) - 1);
	bitmask = ((unit) 0x8000);
	while (!(*(exponent) & bitmask)) {
	    bitmask >>= 1;
	    bits--;
	}
    };
    bits--;
    memcpy((void *) (expout), (void *) (expin), ((global_precision) << 1)); {
	if (!(bitmask >>= 1)) {
	    bitmask = ((unit) 0x8000);
	    ((exponent)--);
	}
    };
    while (bits--) {;
	smith_modmult(product, expout, expout);
	if ((*(exponent) & bitmask)) {
	    smith_modmult(expout, product, expin);
	} else {
	    memcpy((void *) (expout), (void *) (product), ((global_precision) << 1));
	} {
	    if (!(bitmask >>= 1)) {
		bitmask = ((unit) 0x8000);
		((exponent)--);
	    }
	};
    }
    mp_init(product, 0);
    smith_burn();
    (global_precision = (oldprecision));
    copyright_notice();
    return 0;
}

int mp_modexp_crt(unitptr expout, unitptr expin, unitptr p, unitptr q, unitptr ep, unitptr eq, unitptr u)
{
    unit q2[((2048 + (2 * 16)) / 16)];
    unit temp[((2048 + (2 * 16)) / 16)];
    int status;
    mp_mod(temp, expin, p);
    status = mp_modexp(expout, temp, ep, p);
    if (status < 0) {
	mp_init(expout, 1);
	return status;
    }
    mp_mod(temp, expin, q);
    status = mp_modexp(q2, temp, eq, q);
    if (status < 0) {
	mp_init(expout, 1);
	return status;
    }
    if (mp_subb(q2, expout, (boolean) 0))
	mp_addc(q2, q, (boolean) 0);
    mp_mult(temp, q2, u);
    mp_mod(q2, temp, q);
    mp_mult(temp, p, q2);
    mp_addc(expout, temp, (boolean) 0);
    mp_init(q2, 0);
    mp_init(temp, 0);
    return 0;
}
