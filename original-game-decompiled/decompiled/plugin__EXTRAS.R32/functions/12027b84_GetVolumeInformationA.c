
/* ==== KERNEL32.DLL::GetVolumeInformationA @ 12027b84 ==== 
 * signature: BOOL __stdcall GetVolumeInformationA(LPCSTR lpRootPathName, LPSTR lpVolumeNameBuffer, DWORD nVolumeNameSize, LPDWORD lpVolumeSerialNumber, LPDWORD lpMaximumComponentLength, LPDWORD lpFileSystemFlags, LPSTR lpFileSystemNameBuffer, DWORD nFileSystemNameSize)
 * body: 12027b84-12027b89
 * thunk to: KERNEL32.DLL::GetVolumeInformationA
 */

BOOL GetVolumeInformationA
               (LPCSTR lpRootPathName,LPSTR lpVolumeNameBuffer,DWORD nVolumeNameSize,
               LPDWORD lpVolumeSerialNumber,LPDWORD lpMaximumComponentLength,
               LPDWORD lpFileSystemFlags,LPSTR lpFileSystemNameBuffer,DWORD nFileSystemNameSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetVolumeInformationA
                    (lpRootPathName,lpVolumeNameBuffer,nVolumeNameSize,lpVolumeSerialNumber,
                     lpMaximumComponentLength,lpFileSystemFlags,lpFileSystemNameBuffer,
                     nFileSystemNameSize);
  return BVar1;
}


