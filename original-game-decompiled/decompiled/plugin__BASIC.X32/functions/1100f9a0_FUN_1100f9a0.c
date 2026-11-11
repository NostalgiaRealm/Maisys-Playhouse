
/* ==== FUN_1100f9a0 @ 1100f9a0 ==== 
 * signature: undefined __cdecl FUN_1100f9a0(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 1100f9a0-1100f9f8
 */

void __cdecl FUN_1100f9a0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_4;
  
  cVar1 = FUN_11011700(param_1,*param_3,local_24,param_3[2],0x22);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_2 + 0xc) = local_14;
    *(undefined4 *)(param_2 + 0x10) = local_10;
    *(undefined2 *)(param_2 + 0x1c) = local_4;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x14) = 1;
    *(undefined1 *)(param_3 + 3) = 1;
  }
  return;
}


