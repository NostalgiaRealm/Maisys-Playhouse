
/* ==== FUN_10016500 @ 10016500 ==== 
 * signature: undefined4 __cdecl FUN_10016500(int param_1)
 * body: 10016500-1001657f
 */

undefined4 __cdecl FUN_10016500(int param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  
  iVar1 = param_1;
  if ((0 < param_1) && (param_1 < 0x20)) {
    FUN_10016e20(0xc);
    iVar2 = param_1;
    param_1 = CONCAT31(0x3a,(char)iVar1 + '@');
    iVar1 = param_1;
    param_1._3_1_ = SUB41(iVar2,3);
    param_1._0_3_ = (uint3)(ushort)iVar1;
    BVar3 = SetCurrentDirectoryA((LPCSTR)&param_1);
    if (BVar3 != 0) {
      FUN_10016ea0(0xc);
      return 0;
    }
    DVar4 = GetLastError();
    FUN_100181a0(DVar4);
    FUN_10016ea0(0xc);
    return 0xffffffff;
  }
  pDVar5 = FUN_10018220();
  *pDVar5 = 0xd;
  pDVar5 = FUN_10018230();
  *pDVar5 = 0xf;
  return 0xffffffff;
}


