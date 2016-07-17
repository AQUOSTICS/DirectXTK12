#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Input
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Output
cs_5_0
dcl_globalFlags refactoringAllowed
dcl_uav_typed_texture2d (uint,uint,uint,uint) u0
dcl_input vThreadID.xy
dcl_temps 4
dcl_thread_group 8, 8, 1
ld_uav_typed_indexable [precise(x)](texture2d)(uint,uint,uint,uint) r0.x, vThreadID.xyyy, u0.xyzw
and [precise(y)] r0.y, r0.x, l(255)
utof [precise(y)] r0.y, r0.y
div [precise(x)] r1.x, r0.y, l(255.000000)
ubfe [precise(yz)] r0.yz, l(0, 8, 8, 0), l(0, 8, 16, 0), r0.xxxx
ushr [precise(x)] r0.x, r0.x, l(24)
utof [precise(x)] r0.x, r0.x
div [precise(w)] r2.w, r0.x, l(255.000000)
utof [precise(xy)] r0.xy, r0.yzyy
div [precise(yz)] r1.yz, r0.xxyx, l(0.000000, 255.000000, 255.000000, 0.000000)
add [precise(xyz)] r0.xyz, r1.xyzx, l(0.055000, 0.055000, 0.055000, 0.000000)
log [precise(xyz)] r0.xyz, r0.xyzx
mul [precise(xyz)] r0.xyz, r0.xyzx, l(2.400000, 2.400000, 2.400000, 0.000000)
exp [precise(xyz)] r0.xyz, r0.xyzx
lt [precise(xyz)] r3.xyz, r1.xyzx, l(0.040450, 0.040450, 0.040450, 0.000000)
div [precise(xyz)] r1.xyz, r1.xyzx, l(12.920000, 12.920000, 12.920000, 0.000000)
movc [precise(xyz)] r2.xyz, r3.xyzx, r1.xyzx, r0.xyzx
min [precise] r0.xyzw, r2.xyzw, l(1.000000, 1.000000, 1.000000, 1.000000)
mad r0.xyzw, r0.xyzw, l(255.000000, 255.000000, 255.000000, 255.000000), l(0.500000, 0.500000, 0.500000, 0.500000)
round_ni r0.xyzw, r0.xyzw
ftou r0.xyzw, r0.xyzw
imad r0.x, r0.y, l(256), r0.x
imad r0.x, r0.z, l(0x00010000), r0.x
imad r0.x, r0.w, l(0x01000000), r0.x
store_uav_typed u0.xyzw, vThreadID.xyyy, r0.xxxx
ret 
// Approximately 0 instruction slots used
#endif

const BYTE GenerateMips_DegammaInPlace[] =
{
     68,  88,  66,  67, 236, 235, 
     86,  10,  60, 218, 177,  48, 
    179, 214, 134,  49, 141, 112, 
     69,  78,   1,   0,   0,   0, 
    128,   4,   0,   0,   4,   0, 
      0,   0,  48,   0,   0,   0, 
     64,   0,   0,   0,  80,   0, 
      0,   0, 196,   3,   0,   0, 
     73,  83,  71,  78,   8,   0, 
      0,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,  79,  83, 
     71,  78,   8,   0,   0,   0, 
      0,   0,   0,   0,   8,   0, 
      0,   0,  83,  72,  69,  88, 
    108,   3,   0,   0,  80,   0, 
      5,   0, 219,   0,   0,   0, 
    106,   8,   0,   1, 156,  24, 
      0,   4,   0, 224,  17,   0, 
      0,   0,   0,   0,  68,  68, 
      0,   0,  95,   0,   0,   2, 
     50,   0,   2,   0, 104,   0, 
      0,   2,   4,   0,   0,   0, 
    155,   0,   0,   4,   8,   0, 
      0,   0,   8,   0,   0,   0, 
      1,   0,   0,   0, 163,   0, 
      8, 136, 194,   0,   0, 128, 
      3,  17,  17,   0,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   5,   2,   0,  70, 238, 
     17,   0,   0,   0,   0,   0, 
      1,   0,  16,   7,  34,   0, 
     16,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
    255,   0,   0,   0,  86,   0, 
     16,   5,  34,   0,  16,   0, 
      0,   0,   0,   0,  26,   0, 
     16,   0,   0,   0,   0,   0, 
     14,   0,   8,   7,  18,   0, 
     16,   0,   1,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0, 127,  67, 138,   0, 
     48,  15,  98,   0,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,   8,   0, 
      0,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
     16,   0,   0,   0,   0,   0, 
      0,   0,   6,   0,  16,   0, 
      0,   0,   0,   0,  85,   0, 
      8,   7,  18,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,  24,   0, 
      0,   0,  86,   0,   8,   5, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  14,   0, 
     64,   7, 130,   0,  16,   0, 
      2,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
    127,  67,  86,   0,  24,   5, 
     50,   0,  16,   0,   0,   0, 
      0,   0, 150,   5,  16,   0, 
      0,   0,   0,   0,  14,   0, 
     48,  10,  98,   0,  16,   0, 
      1,   0,   0,   0,   6,   1, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0, 127,  67, 
      0,   0, 127,  67,   0,   0, 
      0,   0,   0,   0,  56,  10, 
    114,   0,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0, 174,  71,  97,  61, 
    174,  71,  97,  61, 174,  71, 
     97,  61,   0,   0,   0,   0, 
     47,   0,  56,   5, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  56,   0,  56,  10, 
    114,   0,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0, 154, 153,  25,  64, 
    154, 153,  25,  64, 154, 153, 
     25,  64,   0,   0,   0,   0, 
     25,   0,  56,   5, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  49,   0,  56,  10, 
    114,   0,  16,   0,   3,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0, 230, 174,  37,  61, 
    230, 174,  37,  61, 230, 174, 
     37,  61,   0,   0,   0,   0, 
     14,   0,  56,  10, 114,   0, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,   2,  64,   0,   0, 
     82, 184,  78,  65,  82, 184, 
     78,  65,  82, 184,  78,  65, 
      0,   0,   0,   0,  55,   0, 
     56,   9, 114,   0,  16,   0, 
      2,   0,   0,   0,  70,   2, 
     16,   0,   3,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  51,   0, 
    120,  10, 242,   0,  16,   0, 
      0,   0,   0,   0,  70,  14, 
     16,   0,   2,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
    128,  63,   0,   0, 128,  63, 
      0,   0, 128,  63,   0,   0, 
    128,  63,  50,   0,   0,  15, 
    242,   0,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,   0,   0, 127,  67, 
      0,   0, 127,  67,   0,   0, 
    127,  67,   0,   0, 127,  67, 
      2,  64,   0,   0,   0,   0, 
      0,  63,   0,   0,   0,  63, 
      0,   0,   0,  63,   0,   0, 
      0,  63,  65,   0,   0,   5, 
    242,   0,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      0,   0,   0,   0,  28,   0, 
      0,   5, 242,   0,  16,   0, 
      0,   0,   0,   0,  70,  14, 
     16,   0,   0,   0,   0,   0, 
     35,   0,   0,   9,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   1,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     35,   0,   0,   9,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     42,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   1,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     35,   0,   0,   9,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   1,  10,   0, 
     16,   0,   0,   0,   0,   0, 
    164,   0,   0,   6, 242, 224, 
     17,   0,   0,   0,   0,   0, 
     70,   5,   2,   0,   6,   0, 
     16,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  82,  84, 
     83,  48, 180,   0,   0,   0, 
      1,   0,   0,   0,   3,   0, 
      0,   0,  24,   0,   0,   0, 
      1,   0,   0,   0, 128,   0, 
      0,   0,  62,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,  60,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  72,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 100,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,  80,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   1,   0, 
      0,   0, 108,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,  20,   0,   0,   0, 
      3,   0,   0,   0,   3,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  16,   0, 
      0,   0,   4,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0, 255, 255, 127, 127, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0
};