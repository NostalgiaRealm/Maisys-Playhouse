
/* ==== FUN_120224f0 @ 120224f0 ==== 
 * signature: undefined4 __cdecl FUN_120224f0(undefined4 * param_1, undefined4 * param_2)
 * body: 120224f0-1202258f
 */

undefined4 __cdecl FUN_120224f0(undefined4 *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  sVar1 = *(short *)((int)param_1 + 0xe);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar2 = *(undefined2 *)(param_2 + 2);
  *(undefined2 *)((int)param_1 + 10) = 0x14;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)(param_1 + 2) = uVar2;
  iVar3 = param_1[4];
  uVar4 = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 10) = uVar4;
  uVar2 = *(undefined2 *)((int)param_2 + 0xe);
  *(undefined2 *)((int)param_1 + 0xe) = uVar2;
  if (iVar3 != 0) {
    if (*(short *)((int)param_2 + 0xe) == sVar1) {
      if (iVar3 != 0) {
        FUN_12023770((int)param_1,iVar3,CONCAT22((short)((uint)uVar4 >> 0x10),uVar2),0);
      }
    }
    else {
      FUN_120232f0(param_1,iVar3);
      param_1[4] = 0;
    }
  }
  if (param_2[4] != 0) {
    if (param_1[4] == 0) {
      FUN_12023290((int)param_1);
    }
    if (param_1[4] != 0) {
      FUN_120231d0((int)param_1,param_1[4],param_2[4]);
    }
  }
  param_1[5] = param_2[5];
  return 0;
}


