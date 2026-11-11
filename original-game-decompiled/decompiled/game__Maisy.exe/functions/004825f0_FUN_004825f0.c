
/* ==== FUN_004825f0 @ 004825f0 ==== 
 * signature: undefined4 __thiscall FUN_004825f0(void * this, int param_1, undefined4 param_2, int * param_3)
 * body: 004825f0-00482656
 */

uint __thiscall FUN_004825f0(void *this,int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 0x26);
  puVar2 = (undefined4 *)FUN_00430190((int)this);
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      uVar3 = FUN_00482070(param_1,(char *)*puVar2);
      if ((char)uVar3 != '\0') {
        uVar4 = FUN_004301f0((int)this);
        *param_3 = iVar5;
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
      puVar2 = (undefined4 *)((int)puVar2 + 0x46);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  uVar3 = FUN_004301f0((int)this);
  return uVar3 & 0xffffff00;
}


