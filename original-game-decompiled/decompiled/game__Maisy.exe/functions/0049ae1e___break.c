
/* ==== __break @ 0049ae1e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ae1e-0049ae1e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


