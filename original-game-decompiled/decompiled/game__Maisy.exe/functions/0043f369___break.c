
/* ==== __break @ 0043f369 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043f369-0043f369
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


