
/* ==== FUN_1101b740 @ 1101b740 ==== 
 * signature: ulonglong __fastcall FUN_1101b740(undefined4 param_1, undefined4 param_2, undefined4 * param_3, undefined2 * param_4, short * param_5, int param_6)
 * body: 1101b740-1101b7f5
 */

ulonglong __fastcall
FUN_1101b740(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined2 *param_4,
            short *param_5,int param_6)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  
  uVar6 = FUN_11019c00(param_1,param_2,param_3,param_5);
  if ((short)uVar6 == 0) {
    *param_4 = 1;
    if (param_6 != 3) {
      return CONCAT44((int)(uVar6 >> 0x20),CONCAT22((short)(uVar6 >> 0x10),0xffec));
    }
    if (DAT_11036540 != 0) {
      DAT_11036540 = 0;
      DVar1 = GetTickCount();
      FUN_11029090(DVar1);
    }
    uVar2 = _rand();
    iVar3 = _rand();
    iVar4 = _rand();
    uVar6 = (ulonglong)(uVar2 & 3 | iVar3 << 2 | iVar4 << 0x11) % 0x7fffffff;
    iVar3 = *(int *)(param_5 + 1);
    if (0 < iVar3) {
      uVar5 = (undefined4)((longlong)uVar6 % (longlong)iVar3);
      *(undefined4 *)(param_4 + 1) = uVar5;
      return (ulonglong)
             CONCAT42(uVar5,(short)((ulonglong)((longlong)uVar6 / (longlong)iVar3) >> 0x10)) << 0x10
      ;
    }
    if (iVar3 < 0) {
      iVar4 = -(int)((longlong)uVar6 % (longlong)iVar3);
      *(int *)(param_4 + 1) = iVar4;
      return (ulonglong)
             CONCAT42(iVar4,(short)((ulonglong)((longlong)uVar6 / (longlong)iVar3) >> 0x10)) << 0x10
      ;
    }
    *(undefined4 *)(param_4 + 1) = 0;
    uVar6 = (ulonglong)CONCAT42((int)uVar6,(short)(uVar6 >> 0x10)) << 0x10;
  }
  return uVar6;
}


