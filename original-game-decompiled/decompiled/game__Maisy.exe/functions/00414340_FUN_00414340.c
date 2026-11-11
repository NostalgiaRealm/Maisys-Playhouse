
/* ==== FUN_00414340 @ 00414340 ==== 
 * signature: int __thiscall FUN_00414340(void * this, short * param_1, short param_2)
 * body: 00414340-0041443d
 */

int __thiscall FUN_00414340(void *this,short *param_1,short param_2)

{
  short sVar1;
  void *pvVar2;
  undefined4 in_EAX;
  uint uVar3;
  int iVar4;
  short *psVar5;
  short local_34 [24];
  
  sVar1 = *param_1;
  uVar3 = CONCAT22((short)((uint)in_EAX >> 0x10),sVar1);
  if (param_2 == sVar1) {
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
  if (sVar1 == 0x1c) {
    pvVar2 = *(void **)(param_1 + 1);
    if ((pvVar2 != (void *)0x0) && ((*(byte *)((int)pvVar2 + 0x1e) & 0x80) != 0)) {
      uVar3 = FUN_00474bd0(pvVar2,this,local_34,param_2);
      if (((char)uVar3 != '\0') && ((param_2 == 0x17 || (param_2 == local_34[0])))) {
        psVar5 = local_34;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)param_1 = *(undefined4 *)psVar5;
          psVar5 = psVar5 + 2;
          param_1 = param_1 + 2;
        }
        *param_1 = *psVar5;
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
    }
  }
  else {
    if ((sVar1 != 0x19) && (sVar1 != 4)) {
      if ((sVar1 == 7) && (param_2 == 0x10)) {
        *param_1 = 0x10;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_1 + 2);
        return CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 2) >> 8),1);
      }
      iVar4 = FUN_00449c40(param_1,param_2);
      return iVar4;
    }
    pvVar2 = *(void **)(param_1 + 1);
    if ((pvVar2 != (void *)0x0) && ((*(byte *)((int)pvVar2 + 0x1e) & 0x80) != 0)) {
      uVar3 = FUN_00474bd0(pvVar2,this,local_34,param_2);
      if (((char)uVar3 != '\0') && ((param_2 == 0x17 || (local_34[0] == param_2)))) {
        psVar5 = local_34;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)param_1 = *(undefined4 *)psVar5;
          psVar5 = psVar5 + 2;
          param_1 = param_1 + 2;
        }
        *param_1 = *psVar5;
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
    }
  }
  return uVar3 & 0xffffff00;
}


