
/* ==== __fclose_lk @ 12031ee0 ==== 
 * signature: int __cdecl __fclose_lk(FILE * param_1)
 * body: 12031ee0-12031f3e
 * note: Library Function - Single Match  __fclose_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 1998 Release */

int __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if ((param_1->_flag & 0x83) != 0) {
    iVar2 = __flush(param_1);
    __freebuf(param_1);
    iVar1 = __close(param_1->_file);
    if (iVar1 < 0) {
      iVar2 = -1;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_1202c7c0(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return iVar2;
}


