
/* ==== KERNEL32.DLL::GetDiskFreeSpaceA @ 004a21c4 ==== 
 * signature: BOOL __stdcall GetDiskFreeSpaceA(LPCSTR lpRootPathName, LPDWORD lpSectorsPerCluster, LPDWORD lpBytesPerSector, LPDWORD lpNumberOfFreeClusters, LPDWORD lpTotalNumberOfClusters)
 * body: 004a21c4-004a21c9
 * thunk to: KERNEL32.DLL::GetDiskFreeSpaceA
 */

BOOL GetDiskFreeSpaceA(LPCSTR lpRootPathName,LPDWORD lpSectorsPerCluster,LPDWORD lpBytesPerSector,
                      LPDWORD lpNumberOfFreeClusters,LPDWORD lpTotalNumberOfClusters)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a21c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetDiskFreeSpaceA(lpRootPathName,lpSectorsPerCluster,lpBytesPerSector,
                            lpNumberOfFreeClusters,lpTotalNumberOfClusters);
  return BVar1;
}


