/*
 * SpanDSP - a series of DSP components for telephony
 *
 * g168models.h - line models for echo cancellation tests against the G.168
 *                spec.
 *
 * Written by Steve Underwood <steveu@coppice.org>
 *
 * Copyright (C) 2001 Steve Underwood
 *
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License version 2.1,
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

/*! \file */

#if !defined(_SPANDSP_G168MODELS_H_)
#define _SPANDSP_G168MODELS_H_

/*! \page g168_test_data_page The test data from the G.168 specification
*/

/*!
    The line model from section D.2 of G.168.

    These are the coefficients for the line simulation model defined in
    section D.2 of G.168. It may be used with the fir32_xxx
    routines to build a line simulator.
*/
const int32_t line_model_d2_coeffs[] =
{
      -436,   -829,  -2797,  -4208, -17968, -11215,  46150,  34480,
    -10427,   9049,  -1309,  -6320,    390,  -8191,  -1751,  -6051,
     -3796,  -4055,  -3948,  -2557,  -3372,  -1808,  -2259,  -1300,
     -1098,   -618,   -340,    -61,    323,    419,    745,    716,
       946,    880,   1014,    976,   1033,   1091,   1053,   1042,
       794,    831,    899,    716,    390,    313,    304,    304,
        73,   -119,   -109,   -176,   -359,   -407,   -512,   -580,
      -704,   -618,   -685,   -791,   -772,   -820,   -839,   -724
};
#define LINE_MODEL_D2_GAIN      1.39E-5f

/*!
    The line model from section D.3 of G.168.

    These are the coefficients for the line simulation model defined in
    section D.3 of G.168. It may be used with the fir32_xxx
    routines to build a line simulator.
*/
const int32_t line_model_d3_coeffs[] =
{
      -381,    658,   1730,    -51,  -3511,  -1418,   7660,   8861,
     -8106, -21370,  -5307,  23064,  24020,   1020, -12374, -16296,
    -19524,  -7480,  13509,  17115,  13952,  13952,     97,  -9326,
     -9046, -15208,  -9853,  -3858,  -1979,   6029,   5616,   7214,
      6820,   3935,   3919,    921,   1316,   -693,   -759,  -1517,
     -2176,  -2028,  -2654,  -1814,  -2077,  -1468,  -1221,   -842,
      -463,   -298,    -68,     64,    493,    723,    789,    954,
       756,    839,    872,   1020,    789,    822,    558,    658,
       476,    377,    377,    262,     97,    -68,   -183,   -232,
      -331,   -347,   -430,   -314,   -430,   -463,   -463,   -414,
      -381,   -479,   -479,   -512,   -479,   -397,   -430,   -397,
      -298,   -265,   -249,   -216,   -249,   -265,   -166,   -232
};
#define LINE_MODEL_D3_GAIN      1.44E-5f

/*!
    The line model from section D.4 of G.168.

    These are the coefficients for the line simulation model defined in
    section D.4 of G.168. It may be used with the fir32_xxx
    routines to build a line simulator.
*/
const int32_t line_model_d4_coeffs[] =
{
      -448,   -436,   2230,   2448,  -4178,  -7050,   5846,  18581,
      2322, -26261, -16249,  21637,  25649,  -2267, -10311,  -4693,
    -12690,  -7428,  14164,  13467,   4438,   8627,    456, -11879,
     -6352,  -5104,  -7496,   3271,   6566,   4277,  11131,   7562,
      1475,   3728,  -3525,  -7301,  -3101,  -9269,  -6146,  -2553,
     -6272,    811,    124,    788,   5147,   2172,   5387,   4598,
      3535,   4004,   2311,   2150,   1017,    330,   -139,   -573,
     -1100,  -1157,  -1180,  -1455,  -1123,  -1386,  -1123,  -1066,
     -1020,  -1100,  -1008,  -1077,  -1088,   -917,   -917,   -963,
      -814,   -871,   -734,   -642,   -562,   -356,   -379,   -345,
      -230,   -233,   -333,   -356,   -390,   -310,   -265,   -368,
      -310,   -310,   -390,   -482,   -459,   -482,   -551,   -573
};
#define LINE_MODEL_D4_GAIN      1.52E-5f

/*!
    The line model from section D.5 of G.168.

    These are the coefficients for the line simulation model defined in
    section D.5 of G.168. It may be used with the fir32_xxx
    routines to build a line simulator.
*/
const int32_t line_model_d5_coeffs[] =
{
       160,    312,   -241,   -415,    897,    908,  -1326,  -1499,
      2405,   3347,  -3624,  -7733,   4041,  14484,  -1477, -21739,
     -4470,  25356,  11458, -19696, -11800,   5766,    789,   6633,
     14624,  -6975, -17156,   -187,    149,   1515,  14907,   4345,
     -7128,  -2757, -10185,  -7083,   6850,   3944,   6969,   8694,
     -4068,  -3852,  -5793,  -9371,    453,   1060,   3965,   9463,
      2393,   2784,   -892,  -7366,  -3376,  -5847,  -2399,   3011,
      1537,   6623,   4205,   1602,   1592,  -4752,  -3646,  -5207,
     -5577,   -501,  -1174,   4041,   5647,   4628,   7252,   2123,
      2654,   -881,  -4113,  -3244,  -7289,  -3830,  -4600,  -2508,
       431,   -144,   4184,   2372,   4617,   3576,   2382,   2839,
      -404,    539,  -1803,  -1401,  -1705,  -2269,   -783,  -1608,
      -220,   -306,    257,    615,    225,    561,      8,    344,
       127,    -57,    182,     41,    203,   -111,     95,    -79,
        30,     84,    -13,    -68,   -241,    -68,    -24,     19,
       -57,    -24,     30,    -68,     84,   -155,    -68,     19
};
#define LINE_MODEL_D5_GAIN      1.77E-5f

/*!
    The line model from section D.6 of G.168.

    These are the coefficients for the line simulation model defined in
    section D.6 of G.168. It may be used with the fir32_xxx
    routines to build a line simulator.
*/
const int32_t line_model_d6_coeffs[] =
{
       293,    268,    475,    460,    517,    704,    581,    879,
       573,    896,    604,    787,    561,    538,    440,     97,
       265,   -385,     20,   -938,   -523,  -1438,  -1134,  -1887,
     -1727,  -1698,  -4266, -22548, -43424,   2743,  25897,   7380,
     21499,  11983,  10400,  11667,   3889,   7241,    925,   2018,
      -821,  -2068,  -2236,  -4283,  -3406,  -5022,  -4039,  -4842,
     -4104,  -4089,  -3582,  -2978,  -2734,  -1805,  -1608,   -645,
      -495,    279,    471,    947,   1186,   1438,   1669,   1640,
      1901,   1687,   1803,   1543,   1566,   1342,   1163,    963,
       733,    665,    323,    221,    -14,   -107,   -279,   -379,
      -468,   -513,   -473,   -588,   -612,   -652,   -616,   -566,
      -515,   -485,   -404,   -344,   -290,   -202,   -180,   -123
};
#define LINE_MODEL_D6_GAIN      9.33E-6f

/*!
    The line model from section D.7 of G.168.

    These are the coefficients for the line simulation model defined in
    section D.8 of G.168. It may be used with the fir32_xxx
    routines to build a line simulator.
*/
const int32_t line_model_d7_coeffs[] =
{
        29,    109,    -83,    198,   -294,   -135,   -415,   -202,
      -444,   -337,   -313,   -450,   -105,   -503,    145,   -490,
       267,   -231,    340,     77,    343,    783,    158,   1341,
       195,   1798,    344,   1845,    629,   1604,   1182,    940,
      5163,  19522,   8421, -50953,  -9043,  18046, -13553,  13336,
     -3471,   -107,   1788,  -7409,   2469,  -7994,    490,  -3860,
      -837,    490,   -636,   3682,   1141,   5019,   2635,   5025,
      3946,   4414,   4026,   3005,   3380,   1616,   2007,    158,
       388,  -1198,  -1117,  -2134,  -2547,  -2589,  -3310,  -2778,
     -3427,  -2779,  -3116,  -2502,  -2399,  -1956,  -1539,  -1239,
      -570,   -377,    251,    331,    964,   1177,   1449,   1564,
      1724,   1871,   1767,   1802,   1630,   1632,   1379,   1271,
      1063,    856,    711,    482,    289,     54,   -137,   -321,
      -490,   -638,   -764,   -836,   -800,   -859,   -838,   -837,
      -834,   -740,   -673,   -581,   -493,   -436,   -327,   -201
};
#define LINE_MODEL_D7_GAIN      1.51E-5f

/*!
    The line model from section D.8 of G.168.

    These are the coefficients for the line simulation model defined in
    section D.8 of G.168. It may be used with the fir32_xxx
    routines to build a line simulator.
*/
const int32_t line_model_d8_coeffs[] =
{
       258,   -111,    337,   -319,    347,   -434,    192,   -450,
      -108,   -343,   -596,   -177,  -1187,    -52,  -1781,   -147,
     -1959,   -326,  -1601,  -1389, -13620,   -720,  33818, -10683,
     -6742,  12489,  -9862,   8950,  -1574,    758,   3526,  -3118,
      2421,  -8966,  -4901,  11385,  18072, -14410,  -7473,  19836,
    -16854,  -3115,   9483, -17799,   7399,  -4342,  -7415,   7929,
    -10726,   6239,  -2526,  -1317,   5345,  -4565,   6868,  -2195,
      3425,   1969,   -109,   3963,  -1275,   3087,   -892,   1239,
         2,   -427,    596,  -1184,    551,  -1244,    141,   -743,
      -415,   -372,   -769,   -183,   -785,   -270,   -659,   -377,
      -523,   -325,   -245,   -255,    -60,     35,    218,    149,
       340,    233,    365,    303,    251,    230,    209,    179
};
#define LINE_MODEL_D8_GAIN      2.33E-5f

/*!
    The line model from section D.9 of G.168.

    These are the coefficients for the line simulation model defined in
    section D.9 of G.168. It may be used with the fir32_xxx
    routines to build a line simulator.
*/
const int32_t line_model_d9_coeffs[] =
{
        80,     31,      4,     42,     42,    -61,    -81,    -64,
      -121,   -102,    -26,   1002,  -9250, -22562,  39321,  35681,
    -35289,  25312,  -1457,   -229,  15659,  -6786,  16791,   3860,
      2239, -28730, -11885,  33871,   -176, -16421,  18173,  -9669,
    -10163,   9941, -19365,   3592,  -5907, -10257,   5336, -12933,
      4348,  -4802,  -1791,   3035,  -4433,   5553,  -2596,   3992,
      1255,   1450,   4079,    324,   4340,   1059,   3083,   1917,
      1756,   2478,   1027,   1871,    845,   1284,    813,    806,
       869,    471,    646,    438,    449,    432,    473,    394,
       452,    538,    717,    723,    850,    756,    753,    899,
       555,    669,    619,    500,    650,    615,    516,    492,
       427,    291,    356,    147,    107,    -50,    -88,    -59,
      -238,   -165,   -183
};
#define LINE_MODEL_D9_GAIN      1.33E-5f

/*!
    The filter coefficients for the bandpass filter specified for level measurements
    in section 6.4.1.2.1 of G.168.
*/
const float level_measurement_bp_coeffs[] =
{
    0.0000,    0.0006,    0.0005,    0.0004,    0.0011,
    0.0000,    0.0015,   -0.0003,    0.0012,   -0.0002,
    0.0000,    0.0002,   -0.0020,    0.0005,   -0.0040,
    0.0000,   -0.0047,   -0.0019,   -0.0033,   -0.0047,
    0.0000,   -0.0068,    0.0036,   -0.0057,    0.0054,
    0.0000,    0.0044,    0.0095,    0.0017,    0.0188,
    0.0000,    0.0225,    0.0024,    0.0163,    0.0092,
    0.0000,    0.0164,   -0.0210,    0.0161,   -0.0375,
    0.0000,   -0.0406,   -0.0357,   -0.0267,   -0.0871,
    0.0000,   -0.1420,    0.0289,   -0.1843,    0.0475,
    0.8006,    0.0475,   -0.1843,    0.0289,   -0.1420,
    0.0000,   -0.0871,   -0.0267,   -0.0357,   -0.0406,
    0.0000,   -0.0375,    0.0161,   -0.0210,    0.0164,
    0.0000,    0.0092,    0.0163,    0.0024,    0.0225,
    0.0000,    0.0188,    0.0017,    0.0095,    0.0044,
    0.0000,    0.0054,   -0.0057,    0.0036,   -0.0068,
    0.0000,   -0.0047,   -0.0033,   -0.0019,   -0.0047,
    0.0000,   -0.0040,    0.0005,   -0.0020,    0.0002,
    0.0000,   -0.0002,    0.0012,   -0.0003,    0.0015,
    0.0000,    0.0011,    0.0004,    0.0005,    0.0006,
    0.0000
};

/*!
    The composite source signal "voiced" section from table C.1 of G.168.
*/
const int css_c1[] =
{
     -155,   276,   517,   578,   491,   302,    86,  -103,
     -207,  -198,    60,   190,   543,   948,  1362,  1741,
     2043,  2276,  2422,  2500,  2552,  2595,  2655,  2758,
     2896,  3060,  3224,  3370,  3500,  3569,  3603,  3603,
     3595,  3586,  3595,  3638,  3724,  3819,  3922,  4000,
     4043,  4034,  3974,  3862,  3724,  3577,  3439,  3336,
     3267,  3224,  3198,  3172,  3129,  3043,  2914,  2750,
     2560,  2353,  2155,  1991,  1853,  1750,  1672,  1603,
     1534,  1440,  1310,  1146,   965,   776,   603,   448,
      345,   276,   250,   250,   267,   267,   241,   190,
      103,    -9,  -138,  -267,  -388,  -491,  -569,  -638,
     -698,  -759,  -813,  -888,  -957, -1034, -1103, -1146,
    -1181, -1190, -1198, -1215, -1259, -1327, -1457, -1629,
    -1853, -2121, -2414, -2707, -3017, -3319, -3612, -3913,
    -4224, -4560, -4922, -5301, -5715, -6137, -6560, -6948,
    -7301, -7568, -7732, -7758, -7620, -7310, -6810, -6155,
    -5344, -4439, -3474, -2508, -1595,  -802
};

/*!
    The composite source signal "voiced" section from table C.3 of G.168.
*/
const int css_c3[] =
{
     -198,  -112,    -9,   103,   233,   388,   543,   724,
      896,  1060,  1233,  1388,  1517,  1638,  1747,  1810,
     1845,  1845,  1802,  1707,  1569,  1379,  1146,   871,
      560,   233,  -121,  -491,  -871, -1250, -1638, -2043,
    -2465, -2896, -3345, -3819, -4310, -4810, -5319, -5836,
    -6353, -6853, -7353, -7836, -8292, -8715, -9077, -9370,
    -9542, -9542, -9361, -8956, -8327, -7465, -6396, -5163,
    -3827, -2448, -1103,   155,  1293,  2241,  3034,  3655,
     4138,  4517,  4827,  5094,  5344,  5594,  5827,  6043,
     6215,  6344,  6413,  6422,  6379,  6310,  6215,  6120,
     6051,  6000,  5991,  5991,  6000,  6008,  5991,  5939,
     5853,  5715,  5560,  5387,  5215,  5043,  4879,  4732,
     4586,  4439,  4276,  4086,  3870,  3629,  3370,  3086,
     2801,  2534,  2267,  2034,  1819,  1612,  1422,  1224,
     1026,   819,   603,   388,   181,     9,  -181,  -328,
     -448,  -543,  -629,  -707,  -784,  -871,  -948, -1026,
    -1112, -1181, -1241, -1276, -1293, -1302, -1293, -1267,
    -1250, -1233, -1224, -1224, -1224, -1224, -1215, -1198,
    -1172, -1129, -1077, -1026,  -974,  -922,  -888,  -871,
     -845,  -828,  -810,  -793,  -767,  -741,  -698,  -672,
     -638,  -603,  -595,  -586,  -595,  -603,  -621,  -629,
     -938,  -638,  -638,  -638,  -638,  -638,  -647,  -664,
     -690,  -724,  -767,  -793,  -819,  -845,  -853,  -871,
     -879,  -888,  -896,  -922,  -948,  -974, -1009, -1026,
    -1052, -1069, -1077, -1069, -1060, -1060, -1052, -1043,
    -1043, -1052, -1060, -1060, -1060, -1052, -1034, -1017,
     -991,  -957,  -931,  -905,  -888,  -862,  -845,  -819,
     -793,  -767,  -724,  -672,  -621,  -560,  -509,  -457,
     -397,  -345,  -276,  -207,  -112
};

/*!
    From section 6.4.2.7 of G.168 - Test No. 6 Non-divergence on narrow-band signals.
    These tones and tone pairs are each applied for 5 seconds.
*/
const int tones_6_4_2_7[][2] =
{
    { 697,    0},
    { 941,    0},
    {1336,    0},
    {1633,    0},
    { 697, 1209},
    { 770, 1336},
    { 852, 1477},
    { 941, 1633},
    {   0,    0}
};

#endif
/*- End of file ------------------------------------------------------------*/
