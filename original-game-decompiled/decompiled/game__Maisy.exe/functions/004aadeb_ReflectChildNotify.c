
/* ==== CWnd::ReflectChildNotify @ 004aadeb ==== 
 * signature: int __thiscall ReflectChildNotify(CWnd * this, uint param_1, uint param_2, long param_3, long * param_4)
 * body: 004aadeb-004aaeee
 * note: Library Function - Single Match  protected: int __thiscall CWnd::ReflectChildNotify(unsigned int,unsigned int,long,long *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: int __thiscall CWnd::ReflectChildNotify(unsigned int,unsigned int,long,long *)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CWnd::ReflectChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  long *local_c;
  int local_8;
  
  if (param_1 < 0x3a) {
    if ((param_1 == 0x39) || ((0x2a < param_1 && (param_1 < 0x30)))) {
LAB_004aae75:
      iVar1 = FUN_004a9aae();
      return iVar1;
    }
  }
  else {
    if (param_1 == 0x4e) {
      local_c = param_4;
      local_8 = param_3;
      iVar1 = FUN_004a79cb(this,0,*(uint *)(param_3 + 8) & 0xffff | 0xbc4e0000,&local_c,
                           (AFX_CMDHANDLERINFO *)0x0);
      return iVar1;
    }
    if (param_1 == 0x111) {
      iVar1 = FUN_004a79cb(this,0,param_2 >> 0x10 | 0xbd110000,(void *)0x0,(AFX_CMDHANDLERINFO *)0x0
                          );
      if (iVar1 == 0) {
        return 0;
      }
      if (param_4 != (long *)0x0) {
        *param_4 = 1;
      }
      return 1;
    }
    if ((0x113 < param_1) && ((param_1 < 0x116 || (param_1 == 0x210)))) goto LAB_004aae75;
  }
  if ((0x131 < param_1) && (param_1 < 0x139)) {
    local_8 = param_1 - 0x132;
    local_c = (long *)param_2;
    iVar1 = FUN_004a9aae();
    if (*param_4 != 0) {
      return iVar1;
    }
  }
  return 0;
}


