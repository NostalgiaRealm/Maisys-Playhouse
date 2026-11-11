
/* ==== FUN_11027b30 @ 11027b30 ==== 
 * signature: undefined __cdecl FUN_11027b30(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11027b30-11027c17
 */

void __cdecl FUN_11027b30(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_10c;
  undefined1 local_108 [4];
  undefined2 local_104;
  byte local_102;
  undefined4 local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  
  if (*(short *)(param_3 + 3) == 0) {
    cVar1 = FUN_11011800(param_1,*param_3,&local_10c,0xc);
    if (cVar1 != '\0') {
      if (local_102 != 0) {
        FUN_11011800(param_1,*param_3,&local_100,(uint)local_102);
        *(undefined1 *)((int)&local_100 + (uint)local_102) = 0;
        FUN_110046e0(param_1,&local_100,&local_10c,local_108);
      }
      *(undefined2 *)(param_2 + 0x14) = local_104;
      *(undefined4 *)(param_2 + 0xc) = local_10c;
      *(undefined1 *)((int)param_3 + 0x12) = 1;
    }
  }
  else {
    cVar1 = FUN_11011800(param_1,*param_3,&local_100,10);
    if (cVar1 != '\0') {
      *(undefined2 *)(param_2 + 0x14) = local_f8;
      *(undefined4 *)(param_2 + 0xc) = local_100;
      *(undefined4 *)(param_2 + 0x10) = local_fc;
      *(undefined1 *)((int)param_3 + 0x12) = 1;
      return;
    }
  }
  return;
}


