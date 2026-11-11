
/* ==== FUN_11007430 @ 11007430 ==== 
 * signature: undefined __cdecl FUN_11007430(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11007430-110074cf
 */

void __cdecl FUN_11007430(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_4;
  
  if (*(short *)(param_3 + 3) == 0) {
    cVar1 = FUN_11011800(param_1,*param_3,&local_14,4);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_2 + 0x1c) = local_14;
      *(undefined4 *)(param_2 + 0x14) = 1;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0x65;
      *(undefined1 *)((int)param_3 + 0x12) = 1;
    }
  }
  else {
    cVar1 = FUN_11011800(param_1,*param_3,&local_14,0x14);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_2 + 0x1c) = local_4;
      *(undefined4 *)(param_2 + 0xc) = local_14;
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x10) = local_10;
      *(undefined4 *)(param_2 + 0x14) = 1;
      *(undefined1 *)((int)param_3 + 0x12) = 1;
      return;
    }
  }
  return;
}


