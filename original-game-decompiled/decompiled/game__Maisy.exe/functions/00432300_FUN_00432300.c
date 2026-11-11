
/* ==== FUN_00432300 @ 00432300 ==== 
 * signature: undefined4 __cdecl FUN_00432300(short param_1, short * param_2, short * param_3)
 * body: 00432300-0043232a
 */

undefined4 __cdecl FUN_00432300(short param_1,short *param_2,short *param_3)

{
  undefined4 uVar1;
  
  if (param_1 != 2) {
    return 0x10000;
  }
  uVar1 = FUN_004320c0(param_2,param_2 + 0x16,(char *)0x0,param_3,'\0');
  return uVar1;
}


