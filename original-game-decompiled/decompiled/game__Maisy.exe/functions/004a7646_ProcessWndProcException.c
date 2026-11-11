
/* ==== CWinThread::ProcessWndProcException @ 004a7646 ==== 
 * signature: long __thiscall ProcessWndProcException(CWinThread * this, CException * param_1, tagMSG * param_2)
 * body: 004a7646-004a766c
 * note: Library Function - Single Match  public: virtual long __thiscall CWinThread::ProcessWndProcException(class CException *,struct tagMSG const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual long __thiscall CWinThread::ProcessWndProcException(class CException *,struct
   tagMSG const *)
   
   Library: Visual Studio 1998 Release */

long __thiscall
CWinThread::ProcessWndProcException(CWinThread *this,CException *param_1,tagMSG *param_2)

{
  long lVar1;
  
  if (param_2->message == 1) {
    lVar1 = -1;
  }
  else {
    if (param_2->message == 0xf) {
      ValidateRect(param_2->hwnd,(RECT *)0x0);
    }
    lVar1 = 0;
  }
  return lVar1;
}


