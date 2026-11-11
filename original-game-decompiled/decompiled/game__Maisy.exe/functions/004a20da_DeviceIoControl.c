
/* ==== KERNEL32.DLL::DeviceIoControl @ 004a20da ==== 
 * signature: BOOL __stdcall DeviceIoControl(HANDLE hDevice, DWORD dwIoControlCode, LPVOID lpInBuffer, DWORD nInBufferSize, LPVOID lpOutBuffer, DWORD nOutBufferSize, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverlapped)
 * body: 004a20da-004a20df
 * thunk to: KERNEL32.DLL::DeviceIoControl
 */

BOOL DeviceIoControl(HANDLE hDevice,DWORD dwIoControlCode,LPVOID lpInBuffer,DWORD nInBufferSize,
                    LPVOID lpOutBuffer,DWORD nOutBufferSize,LPDWORD lpBytesReturned,
                    LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a20da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeviceIoControl(hDevice,dwIoControlCode,lpInBuffer,nInBufferSize,lpOutBuffer,
                          nOutBufferSize,lpBytesReturned,lpOverlapped);
  return BVar1;
}


