
/* ==== FUN_00420db0 @ 00420db0 ==== 
 * signature: int __fastcall FUN_00420db0(int param_1)
 * body: 00420db0-00420e64
 */

int __fastcall FUN_00420db0(int param_1)

{
  HGLOBAL pvVar1;
  int iVar2;
  SIZE_T SVar3;
  short sVar4;
  
  iVar2 = FUN_0041d370(param_1);
  if ((*(int *)(param_1 + 0x152) != 0) && (sVar4 = 0, 0 < *(short *)(param_1 + 0x176))) {
    do {
      pvVar1 = *(HGLOBAL *)(*(int *)(param_1 + 0x152) + 0x32 + sVar4 * 0x3a);
      if (pvVar1 != (HGLOBAL)0x0) {
        SVar3 = GlobalSize(pvVar1);
        iVar2 = iVar2 + SVar3;
      }
      sVar4 = sVar4 + 1;
    } while (sVar4 < *(short *)(param_1 + 0x176));
  }
  if ((*(int *)(param_1 + 0x15a) != 0) && (sVar4 = 0, 0 < *(short *)(param_1 + 0x176))) {
    do {
      pvVar1 = *(HGLOBAL *)(*(int *)(param_1 + 0x15a) + sVar4 * 4);
      if (pvVar1 != (HGLOBAL)0x0) {
        SVar3 = GlobalSize(pvVar1);
        iVar2 = iVar2 + SVar3;
      }
      sVar4 = sVar4 + 1;
    } while (sVar4 < *(short *)(param_1 + 0x176));
  }
  if (*(HGLOBAL *)(param_1 + 0x1ca) != (HGLOBAL)0x0) {
    SVar3 = GlobalSize(*(HGLOBAL *)(param_1 + 0x1ca));
    iVar2 = iVar2 + SVar3;
  }
  if (*(HGLOBAL *)(param_1 + 0x1ce) != (HGLOBAL)0x0) {
    SVar3 = GlobalSize(*(HGLOBAL *)(param_1 + 0x1ce));
    iVar2 = iVar2 + SVar3;
  }
  return iVar2;
}


