
/* ==== FUN_10007110 @ 10007110 ==== 
 * signature: undefined4 * __cdecl FUN_10007110(undefined4 * param_1, int param_2, int param_3)
 * body: 10007110-100071c1
 */

undefined4 * __cdecl FUN_10007110(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *pMem;
  int iVar1;
  HGLOBAL pvVar2;
  int iVar3;
  SIZE_T dwBytes;
  UINT uFlags;
  
  pMem = FUN_10006650(param_1);
  iVar3 = 0x28;
  if ((*(ushort *)((int)pMem + 0xe) == 8) && (iVar3 = pMem[8] * 4 + 0x28, pMem[8] == 0)) {
    iVar3 = 0x428;
  }
  pMem[1] = param_2;
  pMem[2] = param_3;
  if (param_3 < 0) {
    param_3 = -param_3;
  }
  iVar1 = ((uint)(*(ushort *)((int)pMem + 0xe) >> 3) * param_2 + 3 & 0xfffffffc) * param_3;
  pMem[5] = iVar1;
  dwBytes = iVar3 + iVar1;
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  uFlags = 0x42;
  pvVar2 = GlobalHandle(pMem);
  pvVar2 = GlobalReAlloc(pvVar2,dwBytes,uFlags);
  GlobalLock(pvVar2);
  FUN_10007040((int)pMem,(int)param_1,0,0,param_1[1] + -1,param_1[2] + -1,0,0,pMem[1] + -1,
               pMem[2] + -1);
  return pMem;
}


