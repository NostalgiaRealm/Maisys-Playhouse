
/* ==== FUN_004474a0 @ 004474a0 ==== 
 * signature: undefined4 __thiscall FUN_004474a0(void * this, short param_1, short param_2, char * param_3)
 * body: 004474a0-00447592
 */

undefined4 __thiscall FUN_004474a0(void *this,short param_1,short param_2,char *param_3)

{
  SIZE_T dwBytes;
  char cVar1;
  BOOL in_EAX;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  
  if (*(int *)((int)this + 0x14a) != 0) {
    iVar2 = (int)param_2;
    iVar5 = (int)param_1;
    uVar6 = 0xffffffff;
    pcVar7 = param_3;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    dwBytes = (~uVar6 - iVar2) + *(int *)((int)this + 0x15a) + -2 + iVar5;
    if (*(int *)((int)this + 0x15a) < (int)dwBytes) {
      pvVar3 = GlobalReAlloc(*(HGLOBAL *)((int)this + 0x14a),dwBytes,2);
      *(HGLOBAL *)((int)this + 0x14a) = pvVar3;
    }
    pvVar4 = GlobalLock(*(HGLOBAL *)((int)this + 0x14a));
    uVar6 = 0xffffffff;
    pcVar7 = param_3;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (iVar2 < *(int *)((int)this + 0x15a) + -1) {
      FID_conflict__memcpy
                ((void *)((int)pvVar4 + ~uVar6 + iVar5 + -1),(void *)((int)pvVar4 + iVar2 + 1),
                 (*(int *)((int)this + 0x15a) - iVar2) - 1);
    }
    uVar6 = 0xffffffff;
    pcVar7 = param_3;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FID_conflict__memcpy((void *)((int)pvVar4 + iVar5),param_3,~uVar6 - 1);
    *(SIZE_T *)((int)this + 0x15a) = dwBytes;
    in_EAX = GlobalUnlock(*(HGLOBAL *)((int)this + 0x14a));
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


