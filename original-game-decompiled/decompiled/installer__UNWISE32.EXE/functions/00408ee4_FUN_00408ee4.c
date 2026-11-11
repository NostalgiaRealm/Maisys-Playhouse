
/* ==== FUN_00408ee4 @ 00408ee4 ==== 
 * signature: undefined __cdecl FUN_00408ee4(LPCSTR param_1)
 * body: 00408ee4-00408f38
 */

void __cdecl FUN_00408ee4(LPCSTR param_1)

{
  SC_HANDLE hSCManager;
  SC_HANDLE hService;
  _SERVICE_STATUS local_20;
  
  hSCManager = OpenSCManagerA((LPCSTR)0x0,(LPCSTR)0x0,1);
  if (hSCManager != (SC_HANDLE)0x0) {
    hService = OpenServiceA(hSCManager,param_1,0x10020);
    if (hService != (SC_HANDLE)0x0) {
      ControlService(hService,1,&local_20);
      DeleteService(hService);
      CloseServiceHandle(hService);
    }
    CloseServiceHandle(hSCManager);
  }
  return;
}


