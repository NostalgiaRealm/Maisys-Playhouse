
/* ==== FUN_0046e4b0 @ 0046e4b0 ==== 
 * signature: int __thiscall FUN_0046e4b0(void * this, char * param_1)
 * body: 0046e4b0-0046e50d
 */

int __thiscall FUN_0046e4b0(void *this,char *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x26);
  iVar4 = 0;
  puVar2 = (undefined4 *)FUN_00430190((int)this);
  if (0 < iVar1) {
    do {
      uVar3 = FUN_0043d430(param_1,(char *)*puVar2);
      if (uVar3 == 0) {
        FUN_004301f0((int)this);
        return iVar4 + 1;
      }
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  FUN_004301f0((int)this);
  return 0;
}


