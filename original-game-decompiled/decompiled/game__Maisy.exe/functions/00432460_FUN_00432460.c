
/* ==== FUN_00432460 @ 00432460 ==== 
 * signature: undefined4 __cdecl FUN_00432460(short param_1, short * param_2, short * param_3)
 * body: 00432460-0043248b
 */

undefined4 __cdecl FUN_00432460(short param_1,short *param_2,short *param_3)

{
  undefined4 uVar1;
  
  if (param_1 != 1) {
    return 0x10000;
  }
  uVar1 = FUN_004320c0(param_2,(short *)0x0,&DAT_004dacdc,param_3,'\0');
  return uVar1;
}


