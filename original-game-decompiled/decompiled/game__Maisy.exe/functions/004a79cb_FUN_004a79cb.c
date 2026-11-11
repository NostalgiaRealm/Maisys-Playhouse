
/* ==== FUN_004a79cb @ 004a79cb ==== 
 * signature: int __thiscall FUN_004a79cb(void * this, uint param_1, uint param_2, void * param_3, AFX_CMDHANDLERINFO * param_4)
 * body: 004a79cb-004a7a5e
 */

int __thiscall
FUN_004a79cb(void *this,uint param_1,uint param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  AFX_MSGMAP_ENTRY *pAVar3;
  uint uVar4;
  
  if (param_2 == 0xfffffffe) {
    iVar1 = FUN_004bafe6();
    iVar1 = (**(code **)(**(int **)(iVar1 + 8) + 4))(this,param_1,param_3,param_4);
  }
  else {
    uVar4 = 0;
    if (param_2 != 0xffffffff) {
      uVar4 = param_2 >> 0x10;
      param_2 = param_2 & 0xffff;
    }
    if (uVar4 == 0) {
      uVar4 = 0x111;
    }
    for (puVar2 = (undefined4 *)(**(code **)(*(int *)this + 0x30))(); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      pAVar3 = AfxFindMessageEntry((AFX_MSGMAP_ENTRY *)puVar2[1],uVar4,param_2,param_1);
      if (pAVar3 != (AFX_MSGMAP_ENTRY *)0x0) {
        iVar1 = DispatchCmdMsg(this,param_1,param_2,*(_func_void **)(pAVar3 + 0x14),param_3,
                               *(uint *)(pAVar3 + 0x10),param_4);
        return iVar1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


