
/* ==== FUN_110181d0 @ 110181d0 ==== 
 * signature: undefined __cdecl FUN_110181d0(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 110181d0-11018222
 */

void __cdecl FUN_110181d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  cVar1 = FUN_11011800(param_1,*param_3,&local_14,0x14);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_2 + 0xc) = local_14;
    *(undefined4 *)(param_2 + 0x14) = local_c;
    *(undefined4 *)(param_2 + 0x10) = local_10;
    *(undefined4 *)(param_2 + 0x1c) = local_4;
    *(undefined4 *)(param_2 + 0x18) = local_8;
    *(undefined1 *)((int)param_3 + 0x12) = 1;
  }
  return;
}


