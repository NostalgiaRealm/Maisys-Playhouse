
/* ==== FUN_11010220 @ 11010220 ==== 
 * signature: undefined __cdecl FUN_11010220(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11010220-110103ae
 */

void __cdecl FUN_11010220(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  short local_18;
  undefined4 local_16 [5];
  
  if (*(short *)(param_3 + 3) == 0) {
    cVar1 = FUN_11011800(param_1,*param_3,&local_30,0x30);
    if (cVar1 != '\0') {
      *(int *)(param_2 + 0xc) = local_30;
      *(undefined4 *)(param_2 + 0x10) = local_2c;
      *(undefined2 *)(param_2 + 0x1e) = local_1e;
      *(undefined4 *)(param_2 + 0x14) = local_28;
      *(undefined4 *)(param_2 + 0x18) = local_24;
      *(undefined2 *)(param_2 + 0x20) = local_1c;
      *(undefined2 *)(param_2 + 0x22) = local_1a;
      *(short *)(param_2 + 0x24) = local_18;
      *(undefined2 *)(param_2 + 0x1c) = local_20;
      puVar3 = local_16;
      puVar4 = (undefined4 *)(param_2 + 0x26);
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
      local_30 = (int)local_18;
      lVar5 = __ftol();
      *(short *)(param_2 + 0x3c) = (short)lVar5;
      *(undefined1 *)((int)param_3 + 0x12) = 1;
    }
  }
  else {
    cVar1 = FUN_11011800(param_1,*param_3,&local_30,0x1c);
    if (cVar1 != '\0') {
      *(int *)(param_2 + 0xc) = local_30;
      *(undefined4 *)(param_2 + 0x10) = local_2c;
      *(undefined2 *)(param_2 + 0x1e) = local_1e;
      *(undefined4 *)(param_2 + 0x14) = local_28;
      *(undefined4 *)(param_2 + 0x18) = local_24;
      *(undefined2 *)(param_2 + 0x20) = local_1c;
      *(undefined2 *)(param_2 + 0x22) = local_1a;
      *(short *)(param_2 + 0x24) = local_18;
      *(undefined2 *)(param_2 + 0x1c) = local_20;
      *(undefined2 *)(param_2 + 0x3c) = (undefined2)local_16[0];
      FUN_110105b0(param_2);
      *(undefined1 *)((int)param_3 + 0x12) = 1;
      return;
    }
  }
  return;
}


