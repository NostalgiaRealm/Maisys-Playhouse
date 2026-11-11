
/* ==== FUN_00407b3e @ 00407b3e ==== 
 * signature: undefined __cdecl FUN_00407b3e(LPBYTE param_1)
 * body: 00407b3e-00407b84
 */

void __cdecl FUN_00407b3e(LPBYTE param_1)

{
  int iVar1;
  HDDEDATA pData;
  DWORD cbOff;
  HSZ hszItem;
  UINT wFmt;
  UINT afCmd;
  
  if (DAT_00413890 != (HCONV)0x0) {
    afCmd = 0;
    wFmt = 0;
    hszItem = (HSZ)0x0;
    cbOff = 0;
    iVar1 = lstrlenA((LPCSTR)param_1);
    pData = DdeCreateDataHandle(DAT_0041383c,param_1,iVar1 + 1,cbOff,hszItem,wFmt,afCmd);
    DdeClientTransaction((LPBYTE)pData,0xffffffff,DAT_00413890,(HSZ)0x0,0,0x4050,1000,(LPDWORD)0x0);
  }
  return;
}


