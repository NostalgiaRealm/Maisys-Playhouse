
/* ==== IsAdmin @ 10001832 ==== 
 * signature: undefined4 __stdcall IsAdmin(void)
 * body: 10001832-10001850
 */

undefined4 IsAdmin(void)

{
  SC_HANDLE hSCObject;
  
                    /* 0x1832  3  IsAdmin */
  hSCObject = OpenSCManagerA((LPCSTR)0x0,(LPCSTR)0x0,0xe0000000);
  if (hSCObject == (SC_HANDLE)0x0) {
    return 0;
  }
  CloseServiceHandle(hSCObject);
  return 1;
}


