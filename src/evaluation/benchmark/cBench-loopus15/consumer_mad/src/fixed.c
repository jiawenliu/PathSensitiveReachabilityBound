typedef signed int mad_fixed_t;
typedef signed int mad_fixed64hi_t;
typedef unsigned int mad_fixed64lo_t;
typedef mad_fixed_t mad_sample_t;
mad_fixed_t mad_f_abs(mad_fixed_t);
mad_fixed_t mad_f_abs(mad_fixed_t x)
{
    return x < 0 ? -x : x;
}
