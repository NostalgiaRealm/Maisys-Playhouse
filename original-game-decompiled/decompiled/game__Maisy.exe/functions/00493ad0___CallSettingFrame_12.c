
/* ==== __CallSettingFrame@12 @ 00493ad0 ==== 
 * signature: undefined __stdcall __CallSettingFrame@12(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 00493ad0-00493b17
 * note: Library Function - Single Match  __CallSettingFrame@12  Library: Visual Studio 1998 Release
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Library: Visual Studio 1998 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_0048e469(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  FUN_0048e469(param_3);
  return;
}


