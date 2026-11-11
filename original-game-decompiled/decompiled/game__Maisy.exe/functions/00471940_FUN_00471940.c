
/* ==== FUN_00471940 @ 00471940 ==== 
 * signature: undefined4 __cdecl FUN_00471940(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, char param_5)
 * body: 00471940-0047199d
 */

undefined4 __cdecl
FUN_00471940(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  void *this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0048b560(0,param_1);
  this = (void *)*puVar1;
  if ((this != (void *)0x0) && ((*(byte *)((int)this + 0x1e) & 4) != 0)) {
    if (param_5 != '\0') {
      DAT_004dc9b0 = FUN_00463c30();
      return 0;
    }
    FUN_00463750(this,param_2);
    return 0;
  }
  return 0x10000;
}


