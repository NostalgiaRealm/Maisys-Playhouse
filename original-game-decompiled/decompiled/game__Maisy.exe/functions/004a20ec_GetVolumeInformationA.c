
/* ==== KERNEL32.DLL::GetVolumeInformationA @ 004a20ec ==== 
 * signature: BOOL __stdcall GetVolumeInformationA(LPCSTR lpRootPathName, LPSTR lpVolumeNameBuffer, DWORD nVolumeNameSize, LPDWORD lpVolumeSerialNumber, LPDWORD lpMaximumComponentLength, LPDWORD lpFileSystemFlags, LPSTR lpFileSystemNameBuffer, DWORD nFileSystemNameSize)
 * body: 004a20ec-004a20f1
 * thunk to: KERNEL32.DLL::GetVolumeInformationA
 */

BOOL GetVolumeInformationA
               (LPCSTR lpRootPathName,LPSTR lpVolumeNameBuffer,DWORD nVolumeNameSize,
               LPDWORD lpVolumeSerialNumber,LPDWORD lpMaximumComponentLength,
               LPDWORD lpFileSystemFlags,LPSTR lpFileSystemNameBuffer,DWORD nFileSystemNameSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a20ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetVolumeInformationA
                    (lpRootPathName,lpVolumeNameBuffer,nVolumeNameSize,lpVolumeSerialNumber,
                     lpMaximumComponentLength,lpFileSystemFlags,lpFileSystemNameBuffer,
                     nFileSystemNameSize);
  return BVar1;
}


