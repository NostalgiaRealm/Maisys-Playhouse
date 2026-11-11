
/* ==== FUN_11008c70 @ 11008c70 ==== 
 * signature: undefined __cdecl FUN_11008c70(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11008c70-11008cc9
 */

void __cdecl FUN_11008c70(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  cVar1 = FUN_11011800(param_1,*param_3,&local_18,0x18);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_2 + 0x14) = local_18;
    *(undefined4 *)(param_2 + 0xc) = local_14;
    *(undefined4 *)(param_2 + 0x10) = local_10;
    *(undefined4 *)(param_2 + 0x18) = local_c;
    *(undefined4 *)(param_2 + 0x1c) = local_8;
    *(undefined4 *)(param_2 + 0x20) = local_4;
    *(undefined1 *)((int)param_3 + 0x12) = 1;
  }
  return;
}


