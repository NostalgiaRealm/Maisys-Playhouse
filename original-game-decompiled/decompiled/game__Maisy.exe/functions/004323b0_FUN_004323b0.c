
/* ==== FUN_004323b0 @ 004323b0 ==== 
 * signature: undefined4 __cdecl FUN_004323b0(short param_1, short * param_2, short * param_3)
 * body: 004323b0-004323db
 */

undefined4 __cdecl FUN_004323b0(short param_1,short *param_2,short *param_3)

{
  undefined4 uVar1;
  
  if (param_1 != 1) {
    return 0x10000;
  }
  uVar1 = FUN_004320c0(param_2,(short *)0x0,&DAT_004dacd4,param_3,'\x01');
  return uVar1;
}


