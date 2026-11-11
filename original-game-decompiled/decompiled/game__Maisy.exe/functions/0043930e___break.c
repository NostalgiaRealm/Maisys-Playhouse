
/* ==== __break @ 0043930e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043930e-0043930e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


