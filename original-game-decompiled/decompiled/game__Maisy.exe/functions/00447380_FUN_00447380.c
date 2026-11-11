
/* ==== FUN_00447380 @ 00447380 ==== 
 * signature: undefined4 __fastcall FUN_00447380(void * param_1)
 * body: 00447380-00447453
 */

uint __fastcall FUN_00447380(void *param_1)

{
  uint in_EAX;
  int *piVar1;
  int iVar2;
  SIZE_T SVar3;
  HGLOBAL pvVar4;
  LPVOID _Src;
  LPVOID _Dst;
  BOOL BVar5;
  
  if (*(short *)((int)param_1 + 0x152) != 1) {
    return in_EAX & 0xffffff00;
  }
  if (*(HGLOBAL *)((int)param_1 + 0x14a) != (HGLOBAL)0x0) {
    FUN_0043f7a0(*(HGLOBAL *)((int)param_1 + 0x14a));
    *(undefined4 *)((int)param_1 + 0x14a) = 0;
  }
  piVar1 = FUN_0046da90(param_1,'\x01','\x01');
  iVar2 = FUN_00449950(piVar1);
  BVar5 = 0;
  if (iVar2 != 0) {
    piVar1 = FUN_0046da90(param_1,'\x01','\x01');
    SVar3 = FUN_00449950(piVar1);
    *(SIZE_T *)((int)param_1 + 0x15a) = SVar3;
    pvVar4 = FUN_0043f770(SVar3);
    *(HGLOBAL *)((int)param_1 + 0x14a) = pvVar4;
    piVar1 = FUN_0046da90(param_1,'\x01','\x01');
    pvVar4 = (HGLOBAL)FUN_00449900(piVar1);
    _Src = GlobalLock(pvVar4);
    _Dst = GlobalLock(*(HGLOBAL *)((int)param_1 + 0x14a));
    FID_conflict__memcpy(_Dst,_Src,*(size_t *)((int)param_1 + 0x15a));
    piVar1 = FUN_0046da90(param_1,'\x01','\x01');
    pvVar4 = (HGLOBAL)FUN_00449900(piVar1);
    GlobalUnlock(pvVar4);
    BVar5 = GlobalUnlock(*(HGLOBAL *)((int)param_1 + 0x14a));
  }
  return CONCAT31((int3)((uint)BVar5 >> 8),1);
}


