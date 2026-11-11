
/* ==== FUN_00478bf0 @ 00478bf0 ==== 
 * signature: undefined __thiscall FUN_00478bf0(void * this, undefined4 param_1, char param_2)
 * body: 00478bf0-00478c57
 */

void __thiscall FUN_00478bf0(void *this,undefined4 param_1,char param_2)

{
  int iVar1;
  short sVar2;
  undefined1 local_24 [16];
  undefined4 local_14;
  short local_6;
  
  FUN_0045d8c0(this,param_1,param_2);
  if ((*(byte *)((int)this + 0x4e) & 2) == 0) {
    sVar2 = 1;
    local_6 = *(short *)(*(int *)((int)this + 0x54) + 0x26);
    if (0 < local_6) {
      do {
        iVar1 = (int)sVar2;
        sVar2 = sVar2 + 1;
        FUN_00430370(*(void **)((int)this + 0x54),iVar1,local_24);
        local_14 = 0;
        FUN_0042ff10(*(void **)((int)this + 0x54),iVar1,local_24);
      } while (sVar2 <= local_6);
    }
  }
  return;
}


