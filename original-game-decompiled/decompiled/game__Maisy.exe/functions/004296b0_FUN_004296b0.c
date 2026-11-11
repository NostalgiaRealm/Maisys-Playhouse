
/* ==== FUN_004296b0 @ 004296b0 ==== 
 * signature: undefined __cdecl FUN_004296b0(void * param_1)
 * body: 004296b0-0042970d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004296b0(void *param_1)

{
  if (DAT_004e01e0 != (void *)0x0) {
    FUN_00414520(0x4e01e0);
    DAT_004e01e0 = (void *)0x0;
    _DAT_004e01e4 = 0;
    _DAT_004e01e8 = 0;
    _DAT_004e01ec = 0;
  }
  if (param_1 != (void *)0x0) {
    DAT_004e01e0 = param_1;
    _DAT_004e01e4 = 0;
    _DAT_004e01e8 = 0;
    _DAT_004e01ec = 0;
    FUN_00414500(param_1,0x4e01e0);
  }
  return;
}


