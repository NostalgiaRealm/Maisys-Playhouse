
/* ==== FUN_1100db70 @ 1100db70 ==== 
 * signature: undefined __cdecl FUN_1100db70(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 1100db70-1100dbdf
 */

void __cdecl FUN_1100db70(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined4 local_16 [5];
  
  cVar1 = FUN_11011800(param_1,*param_3,&local_2c,0x2c);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_2 + 0xc) = local_2c;
    *(undefined4 *)(param_2 + 0x10) = local_28;
    *(undefined4 *)(param_2 + 0x14) = local_24;
    *(undefined4 *)(param_2 + 0x18) = local_20;
    *(undefined4 *)(param_2 + 0x1c) = local_1c;
    *(undefined2 *)(param_2 + 0x20) = local_18;
    puVar3 = local_16;
    puVar4 = (undefined4 *)(param_2 + 0x22);
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
    *(undefined1 *)((int)param_3 + 0x12) = 1;
  }
  return;
}


