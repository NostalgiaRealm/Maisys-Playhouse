
/* ==== __break @ 0049515e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049515e-0049515e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


