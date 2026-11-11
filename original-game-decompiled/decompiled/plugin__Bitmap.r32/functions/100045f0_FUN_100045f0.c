
/* ==== FUN_100045f0 @ 100045f0 ==== 
 * signature: bool __cdecl FUN_100045f0(int param_1, int param_2)
 * body: 100045f0-10004630
 */

bool __cdecl FUN_100045f0(int param_1,int param_2)

{
  DEVMODEA *lpdm;
  HDC pHVar1;
  
  lpdm = GlobalLock(*(HGLOBAL *)(param_1 + 8));
  (lpdm->field6_0x2c).field0.dmOrientation = 2 - (ushort)(param_2 != 0);
  pHVar1 = ResetDCA(*(HDC *)(param_1 + 0x10),lpdm);
  GlobalUnlock(*(HGLOBAL *)(param_1 + 8));
  return pHVar1 != (HDC)0x0;
}


