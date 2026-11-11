
/* ==== _clock @ 004917d0 ==== 
 * signature: clock_t __cdecl _clock(void)
 * body: 004917d0-0049180e
 * note: Library Function - Single Match  _clock  Library: Visual Studio 1998 Release
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _clock
   
   Library: Visual Studio 1998 Release */

clock_t __cdecl _clock(void)

{
  int local_c;
  uint local_8;
  
  __ftime(&local_c);
  return (local_8 & 0xffff) + ((local_c - _DAT_004de178) * 1000 - (uint)DAT_004de17c);
}


