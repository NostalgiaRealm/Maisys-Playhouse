
/* ==== FUN_0043ef00 @ 0043ef00 ==== 
 * signature: BOOL __cdecl FUN_0043ef00(int param_1, char * param_2)
 * body: 0043ef00-0043efae
 */

BOOL __cdecl FUN_0043ef00(int param_1,char *param_2)

{
  int iVar1;
  HANDLE hDevice;
  BOOL BVar2;
  CHAR local_18 [12];
  DWORD local_c;
  undefined1 local_5;
  
  BVar2 = 0;
  iVar1 = _tolower((int)*param_2);
  if (param_2[1] == ':') {
    wsprintfA(local_18,s______c__004db570,(int)(char)iVar1);
    hDevice = CreateFileA(local_18,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (hDevice != (HANDLE)0xffffffff) {
      local_5 = (char)param_1;
      BVar2 = DeviceIoControl(hDevice,0x24804,&local_5,1,(LPVOID)0x0,0,&local_c,(LPOVERLAPPED)0x0);
      if (param_1 == 0) {
        local_5 = (char)param_1;
        DeviceIoControl(hDevice,0x24804,&local_5,1,(LPVOID)0x0,0,&local_c,(LPOVERLAPPED)0x0);
      }
      CloseHandle(hDevice);
    }
  }
  return BVar2;
}


