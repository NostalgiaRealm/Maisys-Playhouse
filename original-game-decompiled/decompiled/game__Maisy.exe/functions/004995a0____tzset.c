
/* ==== ___tzset @ 004995a0 ==== 
 * signature: void __cdecl ___tzset(void)
 * body: 004995a0-004995d1
 * note: Library Function - Single Match  ___tzset  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___tzset
   
   Library: Visual Studio 1998 Release */

void __cdecl ___tzset(void)

{
  if (DAT_004def2c == 0) {
    __lock(0xb);
    if (DAT_004def2c == 0) {
      FUN_00499600();
      DAT_004def2c = DAT_004def2c + 1;
    }
    FUN_00493e20(0xb);
  }
  return;
}


