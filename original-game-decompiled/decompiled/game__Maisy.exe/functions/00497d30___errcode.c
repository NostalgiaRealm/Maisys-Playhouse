
/* ==== __errcode @ 00497d30 ==== 
 * signature: int __cdecl __errcode(uint param_1)
 * body: 00497d30-00497d61
 * note: Library Function - Single Match  __errcode  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __errcode
   
   Library: Visual Studio 1998 Release */

int __cdecl __errcode(uint param_1)

{
  if ((param_1 & 0x20) != 0) {
    return 5;
  }
  if ((param_1 & 8) != 0) {
    return 1;
  }
  if ((param_1 & 4) != 0) {
    return 2;
  }
  if ((param_1 & 1) != 0) {
    return 3;
  }
  return (param_1 & 2) * 2;
}


