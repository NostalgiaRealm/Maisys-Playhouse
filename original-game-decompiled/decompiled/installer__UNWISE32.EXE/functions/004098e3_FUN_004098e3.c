
/* ==== FUN_004098e3 @ 004098e3 ==== 
 * signature: undefined4 * __cdecl FUN_004098e3(uint param_1)
 * body: 004098e3-00409964
 */

undefined4 * __cdecl FUN_004098e3(uint param_1)

{
  undefined4 *puVar1;
  
  if (DAT_004138d0 == (undefined4 *)0x0) {
    DAT_004138d0 = (undefined4 *)FUN_0040ad40(0xfc00);
    DAT_00413c00 = DAT_004138d0;
    *DAT_004138d0 = 0;
  }
  else {
    if (param_1 <= 0xfc00U - DAT_00413874) {
      puVar1 = (undefined4 *)((int)DAT_00413c00 + DAT_00413874);
      DAT_00413874 = DAT_00413874 + param_1;
      return puVar1;
    }
    puVar1 = (undefined4 *)FUN_0040ad40(0xfc00);
    *DAT_00413c00 = puVar1;
    DAT_00413c00 = puVar1;
    *puVar1 = 0;
  }
  DAT_00413874 = param_1 + 4;
  return DAT_00413c00 + 1;
}


