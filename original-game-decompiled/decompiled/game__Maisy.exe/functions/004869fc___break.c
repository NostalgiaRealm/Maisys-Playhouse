
/* ==== __break @ 004869fc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004869fc-004869fc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


