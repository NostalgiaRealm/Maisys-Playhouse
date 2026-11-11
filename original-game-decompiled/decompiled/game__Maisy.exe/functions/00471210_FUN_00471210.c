
/* ==== FUN_00471210 @ 00471210 ==== 
 * signature: undefined4 __cdecl FUN_00471210(undefined4 param_1, int param_2, undefined1 * param_3)
 * body: 00471210-0047124a
 */

undefined4 __cdecl FUN_00471210(undefined4 param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  int local_8;
  
  iVar1 = FUN_00471110(param_2,&local_8);
  if (iVar1 == 0x10000) {
    return 0x10000;
  }
  *param_3 = *(undefined1 *)(local_8 + 0xad);
  return 0;
}


